// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EBS20210730_H_
#define ALIBABACLOUD_EBS20210730_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ebs20210730 {
class AddDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};
  shared_ptr<string> replicaPairId{};

  AddDiskReplicaPairRequest() {}

  explicit AddDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~AddDiskReplicaPairRequest() = default;
};
class AddDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddDiskReplicaPairResponseBody() {}

  explicit AddDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddDiskReplicaPairResponseBody() = default;
};
class AddDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDiskReplicaPairResponseBody> body{};

  AddDiskReplicaPairResponse() {}

  explicit AddDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~AddDiskReplicaPairResponse() = default;
};
class CreateDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<string> destinationZoneId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> RPO{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceZoneId{};

  CreateDiskReplicaGroupRequest() {}

  explicit CreateDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationZoneId) {
      res["DestinationZoneId"] = boost::any(*destinationZoneId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (RPO) {
      res["RPO"] = boost::any(*RPO);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceZoneId) {
      res["SourceZoneId"] = boost::any(*sourceZoneId);
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
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationZoneId") != m.end() && !m["DestinationZoneId"].empty()) {
      destinationZoneId = make_shared<string>(boost::any_cast<string>(m["DestinationZoneId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RPO") != m.end() && !m["RPO"].empty()) {
      RPO = make_shared<long>(boost::any_cast<long>(m["RPO"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceZoneId") != m.end() && !m["SourceZoneId"].empty()) {
      sourceZoneId = make_shared<string>(boost::any_cast<string>(m["SourceZoneId"]));
    }
  }


  virtual ~CreateDiskReplicaGroupRequest() = default;
};
class CreateDiskReplicaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> replicaGroupId{};
  shared_ptr<string> requestId{};

  CreateDiskReplicaGroupResponseBody() {}

  explicit CreateDiskReplicaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDiskReplicaGroupResponseBody() = default;
};
class CreateDiskReplicaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDiskReplicaGroupResponseBody> body{};

  CreateDiskReplicaGroupResponse() {}

  explicit CreateDiskReplicaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDiskReplicaGroupResponse() = default;
};
class CreateDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationDiskId{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<string> destinationZoneId{};
  shared_ptr<string> diskId{};
  shared_ptr<string> pairName{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> RPO{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceZoneId{};

  CreateDiskReplicaPairRequest() {}

  explicit CreateDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationDiskId) {
      res["DestinationDiskId"] = boost::any(*destinationDiskId);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationZoneId) {
      res["DestinationZoneId"] = boost::any(*destinationZoneId);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (pairName) {
      res["PairName"] = boost::any(*pairName);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (RPO) {
      res["RPO"] = boost::any(*RPO);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceZoneId) {
      res["SourceZoneId"] = boost::any(*sourceZoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationDiskId") != m.end() && !m["DestinationDiskId"].empty()) {
      destinationDiskId = make_shared<string>(boost::any_cast<string>(m["DestinationDiskId"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationZoneId") != m.end() && !m["DestinationZoneId"].empty()) {
      destinationZoneId = make_shared<string>(boost::any_cast<string>(m["DestinationZoneId"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("PairName") != m.end() && !m["PairName"].empty()) {
      pairName = make_shared<string>(boost::any_cast<string>(m["PairName"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RPO") != m.end() && !m["RPO"].empty()) {
      RPO = make_shared<long>(boost::any_cast<long>(m["RPO"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceZoneId") != m.end() && !m["SourceZoneId"].empty()) {
      sourceZoneId = make_shared<string>(boost::any_cast<string>(m["SourceZoneId"]));
    }
  }


  virtual ~CreateDiskReplicaPairRequest() = default;
};
class CreateDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> replicaPairId{};
  shared_ptr<string> requestId{};

  CreateDiskReplicaPairResponseBody() {}

  explicit CreateDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
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
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDiskReplicaPairResponseBody() = default;
};
class CreateDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDiskReplicaPairResponseBody> body{};

  CreateDiskReplicaPairResponse() {}

  explicit CreateDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDiskReplicaPairResponse() = default;
};
class DeleteDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};

  DeleteDiskReplicaGroupRequest() {}

  explicit DeleteDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
  }


  virtual ~DeleteDiskReplicaGroupRequest() = default;
};
class DeleteDiskReplicaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDiskReplicaGroupResponseBody() {}

  explicit DeleteDiskReplicaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDiskReplicaGroupResponseBody() = default;
};
class DeleteDiskReplicaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDiskReplicaGroupResponseBody> body{};

  DeleteDiskReplicaGroupResponse() {}

  explicit DeleteDiskReplicaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDiskReplicaGroupResponse() = default;
};
class DeleteDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  DeleteDiskReplicaPairRequest() {}

  explicit DeleteDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~DeleteDiskReplicaPairRequest() = default;
};
class DeleteDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDiskReplicaPairResponseBody() {}

  explicit DeleteDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDiskReplicaPairResponseBody() = default;
};
class DeleteDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDiskReplicaPairResponseBody> body{};

  DeleteDiskReplicaPairResponse() {}

  explicit DeleteDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDiskReplicaPairResponse() = default;
};
class DescribeDiskReplicaGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> site{};

  DescribeDiskReplicaGroupsRequest() {}

  explicit DescribeDiskReplicaGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
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
    if (site) {
      res["Site"] = boost::any(*site);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIds = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
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
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
  }


  virtual ~DescribeDiskReplicaGroupsRequest() = default;
};
class DescribeDiskReplicaGroupsResponseBodyReplicaGroups : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<string> destinationZoneId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> lastRecoverPoint{};
  shared_ptr<vector<vector<uint8_t>>> pairIds{};
  shared_ptr<long> pairNumber{};
  shared_ptr<string> primaryRegion{};
  shared_ptr<string> primaryZone{};
  shared_ptr<long> RPO{};
  shared_ptr<string> replicaGroupId{};
  shared_ptr<string> site{};
  shared_ptr<string> sourceRegionId{};
  shared_ptr<string> sourceZoneId{};
  shared_ptr<string> standbyRegion{};
  shared_ptr<string> standbyZone{};
  shared_ptr<string> status{};

  DescribeDiskReplicaGroupsResponseBodyReplicaGroups() {}

  explicit DescribeDiskReplicaGroupsResponseBodyReplicaGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationZoneId) {
      res["DestinationZoneId"] = boost::any(*destinationZoneId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (lastRecoverPoint) {
      res["LastRecoverPoint"] = boost::any(*lastRecoverPoint);
    }
    if (pairIds) {
      res["PairIds"] = boost::any(*pairIds);
    }
    if (pairNumber) {
      res["PairNumber"] = boost::any(*pairNumber);
    }
    if (primaryRegion) {
      res["PrimaryRegion"] = boost::any(*primaryRegion);
    }
    if (primaryZone) {
      res["PrimaryZone"] = boost::any(*primaryZone);
    }
    if (RPO) {
      res["RPO"] = boost::any(*RPO);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (sourceRegionId) {
      res["SourceRegionId"] = boost::any(*sourceRegionId);
    }
    if (sourceZoneId) {
      res["SourceZoneId"] = boost::any(*sourceZoneId);
    }
    if (standbyRegion) {
      res["StandbyRegion"] = boost::any(*standbyRegion);
    }
    if (standbyZone) {
      res["StandbyZone"] = boost::any(*standbyZone);
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
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationZoneId") != m.end() && !m["DestinationZoneId"].empty()) {
      destinationZoneId = make_shared<string>(boost::any_cast<string>(m["DestinationZoneId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("LastRecoverPoint") != m.end() && !m["LastRecoverPoint"].empty()) {
      lastRecoverPoint = make_shared<long>(boost::any_cast<long>(m["LastRecoverPoint"]));
    }
    if (m.find("PairIds") != m.end() && !m["PairIds"].empty()) {
      vector<vector<uint8_t>> toVec1;
      if (typeid(vector<boost::any>) == m["PairIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PairIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<vector<uint8_t>>(item));
        }
      }
      pairIds = make_shared<vector<vector<uint8_t>>>(toVec1);
    }
    if (m.find("PairNumber") != m.end() && !m["PairNumber"].empty()) {
      pairNumber = make_shared<long>(boost::any_cast<long>(m["PairNumber"]));
    }
    if (m.find("PrimaryRegion") != m.end() && !m["PrimaryRegion"].empty()) {
      primaryRegion = make_shared<string>(boost::any_cast<string>(m["PrimaryRegion"]));
    }
    if (m.find("PrimaryZone") != m.end() && !m["PrimaryZone"].empty()) {
      primaryZone = make_shared<string>(boost::any_cast<string>(m["PrimaryZone"]));
    }
    if (m.find("RPO") != m.end() && !m["RPO"].empty()) {
      RPO = make_shared<long>(boost::any_cast<long>(m["RPO"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("SourceRegionId") != m.end() && !m["SourceRegionId"].empty()) {
      sourceRegionId = make_shared<string>(boost::any_cast<string>(m["SourceRegionId"]));
    }
    if (m.find("SourceZoneId") != m.end() && !m["SourceZoneId"].empty()) {
      sourceZoneId = make_shared<string>(boost::any_cast<string>(m["SourceZoneId"]));
    }
    if (m.find("StandbyRegion") != m.end() && !m["StandbyRegion"].empty()) {
      standbyRegion = make_shared<string>(boost::any_cast<string>(m["StandbyRegion"]));
    }
    if (m.find("StandbyZone") != m.end() && !m["StandbyZone"].empty()) {
      standbyZone = make_shared<string>(boost::any_cast<string>(m["StandbyZone"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDiskReplicaGroupsResponseBodyReplicaGroups() = default;
};
class DescribeDiskReplicaGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups>> replicaGroups{};
  shared_ptr<string> requestId{};

  DescribeDiskReplicaGroupsResponseBody() {}

  explicit DescribeDiskReplicaGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (replicaGroups) {
      vector<boost::any> temp1;
      for(auto item1:*replicaGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReplicaGroups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ReplicaGroups") != m.end() && !m["ReplicaGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ReplicaGroups"].type()) {
        vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReplicaGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskReplicaGroupsResponseBodyReplicaGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replicaGroups = make_shared<vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDiskReplicaGroupsResponseBody() = default;
};
class DescribeDiskReplicaGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiskReplicaGroupsResponseBody> body{};

  DescribeDiskReplicaGroupsResponse() {}

  explicit DescribeDiskReplicaGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiskReplicaGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskReplicaGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskReplicaGroupsResponse() = default;
};
class DescribeDiskReplicaPairsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pairIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};
  shared_ptr<string> site{};

  DescribeDiskReplicaPairsRequest() {}

  explicit DescribeDiskReplicaPairsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pairIds) {
      res["PairIds"] = boost::any(*pairIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PairIds") != m.end() && !m["PairIds"].empty()) {
      pairIds = make_shared<string>(boost::any_cast<string>(m["PairIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
  }


  virtual ~DescribeDiskReplicaPairsRequest() = default;
};
class DescribeDiskReplicaPairsResponseBodyReplicaPairs : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationDiskId{};
  shared_ptr<string> destinationRegion{};
  shared_ptr<string> destinationZoneId{};
  shared_ptr<long> expiredTime{};
  shared_ptr<long> lastRecoverPoint{};
  shared_ptr<string> pairName{};
  shared_ptr<string> primaryRegion{};
  shared_ptr<string> primaryZone{};
  shared_ptr<long> RPO{};
  shared_ptr<string> replicaGroupId{};
  shared_ptr<string> replicaGroupName{};
  shared_ptr<string> replicaPairId{};
  shared_ptr<string> site{};
  shared_ptr<string> sourceDiskId{};
  shared_ptr<string> sourceRegion{};
  shared_ptr<string> sourceZoneId{};
  shared_ptr<string> standbyRegion{};
  shared_ptr<string> standbyZone{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  DescribeDiskReplicaPairsResponseBodyReplicaPairs() {}

  explicit DescribeDiskReplicaPairsResponseBodyReplicaPairs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationDiskId) {
      res["DestinationDiskId"] = boost::any(*destinationDiskId);
    }
    if (destinationRegion) {
      res["DestinationRegion"] = boost::any(*destinationRegion);
    }
    if (destinationZoneId) {
      res["DestinationZoneId"] = boost::any(*destinationZoneId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (lastRecoverPoint) {
      res["LastRecoverPoint"] = boost::any(*lastRecoverPoint);
    }
    if (pairName) {
      res["PairName"] = boost::any(*pairName);
    }
    if (primaryRegion) {
      res["PrimaryRegion"] = boost::any(*primaryRegion);
    }
    if (primaryZone) {
      res["PrimaryZone"] = boost::any(*primaryZone);
    }
    if (RPO) {
      res["RPO"] = boost::any(*RPO);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    if (replicaGroupName) {
      res["ReplicaGroupName"] = boost::any(*replicaGroupName);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (sourceDiskId) {
      res["SourceDiskId"] = boost::any(*sourceDiskId);
    }
    if (sourceRegion) {
      res["SourceRegion"] = boost::any(*sourceRegion);
    }
    if (sourceZoneId) {
      res["SourceZoneId"] = boost::any(*sourceZoneId);
    }
    if (standbyRegion) {
      res["StandbyRegion"] = boost::any(*standbyRegion);
    }
    if (standbyZone) {
      res["StandbyZone"] = boost::any(*standbyZone);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationDiskId") != m.end() && !m["DestinationDiskId"].empty()) {
      destinationDiskId = make_shared<string>(boost::any_cast<string>(m["DestinationDiskId"]));
    }
    if (m.find("DestinationRegion") != m.end() && !m["DestinationRegion"].empty()) {
      destinationRegion = make_shared<string>(boost::any_cast<string>(m["DestinationRegion"]));
    }
    if (m.find("DestinationZoneId") != m.end() && !m["DestinationZoneId"].empty()) {
      destinationZoneId = make_shared<string>(boost::any_cast<string>(m["DestinationZoneId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("LastRecoverPoint") != m.end() && !m["LastRecoverPoint"].empty()) {
      lastRecoverPoint = make_shared<long>(boost::any_cast<long>(m["LastRecoverPoint"]));
    }
    if (m.find("PairName") != m.end() && !m["PairName"].empty()) {
      pairName = make_shared<string>(boost::any_cast<string>(m["PairName"]));
    }
    if (m.find("PrimaryRegion") != m.end() && !m["PrimaryRegion"].empty()) {
      primaryRegion = make_shared<string>(boost::any_cast<string>(m["PrimaryRegion"]));
    }
    if (m.find("PrimaryZone") != m.end() && !m["PrimaryZone"].empty()) {
      primaryZone = make_shared<string>(boost::any_cast<string>(m["PrimaryZone"]));
    }
    if (m.find("RPO") != m.end() && !m["RPO"].empty()) {
      RPO = make_shared<long>(boost::any_cast<long>(m["RPO"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
    if (m.find("ReplicaGroupName") != m.end() && !m["ReplicaGroupName"].empty()) {
      replicaGroupName = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupName"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("SourceDiskId") != m.end() && !m["SourceDiskId"].empty()) {
      sourceDiskId = make_shared<string>(boost::any_cast<string>(m["SourceDiskId"]));
    }
    if (m.find("SourceRegion") != m.end() && !m["SourceRegion"].empty()) {
      sourceRegion = make_shared<string>(boost::any_cast<string>(m["SourceRegion"]));
    }
    if (m.find("SourceZoneId") != m.end() && !m["SourceZoneId"].empty()) {
      sourceZoneId = make_shared<string>(boost::any_cast<string>(m["SourceZoneId"]));
    }
    if (m.find("StandbyRegion") != m.end() && !m["StandbyRegion"].empty()) {
      standbyRegion = make_shared<string>(boost::any_cast<string>(m["StandbyRegion"]));
    }
    if (m.find("StandbyZone") != m.end() && !m["StandbyZone"].empty()) {
      standbyZone = make_shared<string>(boost::any_cast<string>(m["StandbyZone"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~DescribeDiskReplicaPairsResponseBodyReplicaPairs() = default;
};
class DescribeDiskReplicaPairsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeDiskReplicaPairsResponseBodyReplicaPairs>> replicaPairs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDiskReplicaPairsResponseBody() {}

  explicit DescribeDiskReplicaPairsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (replicaPairs) {
      vector<boost::any> temp1;
      for(auto item1:*replicaPairs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReplicaPairs"] = boost::any(temp1);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReplicaPairs") != m.end() && !m["ReplicaPairs"].empty()) {
      if (typeid(vector<boost::any>) == m["ReplicaPairs"].type()) {
        vector<DescribeDiskReplicaPairsResponseBodyReplicaPairs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReplicaPairs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskReplicaPairsResponseBodyReplicaPairs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replicaPairs = make_shared<vector<DescribeDiskReplicaPairsResponseBodyReplicaPairs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDiskReplicaPairsResponseBody() = default;
};
class DescribeDiskReplicaPairsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiskReplicaPairsResponseBody> body{};

  DescribeDiskReplicaPairsResponse() {}

  explicit DescribeDiskReplicaPairsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiskReplicaPairsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskReplicaPairsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskReplicaPairsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsZones : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionsZones() {}

  explicit DescribeRegionsResponseBodyRegionsZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsResponseBodyRegionsZones() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
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
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
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
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
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
class FailoverDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};

  FailoverDiskReplicaGroupRequest() {}

  explicit FailoverDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
  }


  virtual ~FailoverDiskReplicaGroupRequest() = default;
};
class FailoverDiskReplicaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FailoverDiskReplicaGroupResponseBody() {}

  explicit FailoverDiskReplicaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FailoverDiskReplicaGroupResponseBody() = default;
};
class FailoverDiskReplicaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FailoverDiskReplicaGroupResponseBody> body{};

  FailoverDiskReplicaGroupResponse() {}

  explicit FailoverDiskReplicaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FailoverDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FailoverDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~FailoverDiskReplicaGroupResponse() = default;
};
class FailoverDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  FailoverDiskReplicaPairRequest() {}

  explicit FailoverDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~FailoverDiskReplicaPairRequest() = default;
};
class FailoverDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FailoverDiskReplicaPairResponseBody() {}

  explicit FailoverDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FailoverDiskReplicaPairResponseBody() = default;
};
class FailoverDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FailoverDiskReplicaPairResponseBody> body{};

  FailoverDiskReplicaPairResponse() {}

  explicit FailoverDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FailoverDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FailoverDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~FailoverDiskReplicaPairResponse() = default;
};
class ModifyDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<long> RPO{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};

  ModifyDiskReplicaGroupRequest() {}

  explicit ModifyDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (RPO) {
      res["RPO"] = boost::any(*RPO);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
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
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RPO") != m.end() && !m["RPO"].empty()) {
      RPO = make_shared<long>(boost::any_cast<long>(m["RPO"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
  }


  virtual ~ModifyDiskReplicaGroupRequest() = default;
};
class ModifyDiskReplicaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDiskReplicaGroupResponseBody() {}

  explicit ModifyDiskReplicaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDiskReplicaGroupResponseBody() = default;
};
class ModifyDiskReplicaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDiskReplicaGroupResponseBody> body{};

  ModifyDiskReplicaGroupResponse() {}

  explicit ModifyDiskReplicaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskReplicaGroupResponse() = default;
};
class ModifyDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> pairName{};
  shared_ptr<long> RPO{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  ModifyDiskReplicaPairRequest() {}

  explicit ModifyDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (pairName) {
      res["PairName"] = boost::any(*pairName);
    }
    if (RPO) {
      res["RPO"] = boost::any(*RPO);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PairName") != m.end() && !m["PairName"].empty()) {
      pairName = make_shared<string>(boost::any_cast<string>(m["PairName"]));
    }
    if (m.find("RPO") != m.end() && !m["RPO"].empty()) {
      RPO = make_shared<long>(boost::any_cast<long>(m["RPO"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~ModifyDiskReplicaPairRequest() = default;
};
class ModifyDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDiskReplicaPairResponseBody() {}

  explicit ModifyDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDiskReplicaPairResponseBody() = default;
};
class ModifyDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDiskReplicaPairResponseBody> body{};

  ModifyDiskReplicaPairResponse() {}

  explicit ModifyDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskReplicaPairResponse() = default;
};
class RemoveDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};
  shared_ptr<string> replicaPairId{};

  RemoveDiskReplicaPairRequest() {}

  explicit RemoveDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~RemoveDiskReplicaPairRequest() = default;
};
class RemoveDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveDiskReplicaPairResponseBody() {}

  explicit RemoveDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveDiskReplicaPairResponseBody() = default;
};
class RemoveDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveDiskReplicaPairResponseBody> body{};

  RemoveDiskReplicaPairResponse() {}

  explicit RemoveDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveDiskReplicaPairResponse() = default;
};
class ReprotectDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};

  ReprotectDiskReplicaGroupRequest() {}

  explicit ReprotectDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
  }


  virtual ~ReprotectDiskReplicaGroupRequest() = default;
};
class ReprotectDiskReplicaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReprotectDiskReplicaGroupResponseBody() {}

  explicit ReprotectDiskReplicaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReprotectDiskReplicaGroupResponseBody() = default;
};
class ReprotectDiskReplicaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReprotectDiskReplicaGroupResponseBody> body{};

  ReprotectDiskReplicaGroupResponse() {}

  explicit ReprotectDiskReplicaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReprotectDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReprotectDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ReprotectDiskReplicaGroupResponse() = default;
};
class ReprotectDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  ReprotectDiskReplicaPairRequest() {}

  explicit ReprotectDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~ReprotectDiskReplicaPairRequest() = default;
};
class ReprotectDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReprotectDiskReplicaPairResponseBody() {}

  explicit ReprotectDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReprotectDiskReplicaPairResponseBody() = default;
};
class ReprotectDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReprotectDiskReplicaPairResponseBody> body{};

  ReprotectDiskReplicaPairResponse() {}

  explicit ReprotectDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReprotectDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReprotectDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~ReprotectDiskReplicaPairResponse() = default;
};
class StartDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> oneShot{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};

  StartDiskReplicaGroupRequest() {}

  explicit StartDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (oneShot) {
      res["OneShot"] = boost::any(*oneShot);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OneShot") != m.end() && !m["OneShot"].empty()) {
      oneShot = make_shared<bool>(boost::any_cast<bool>(m["OneShot"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
  }


  virtual ~StartDiskReplicaGroupRequest() = default;
};
class StartDiskReplicaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartDiskReplicaGroupResponseBody() {}

  explicit StartDiskReplicaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartDiskReplicaGroupResponseBody() = default;
};
class StartDiskReplicaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartDiskReplicaGroupResponseBody> body{};

  StartDiskReplicaGroupResponse() {}

  explicit StartDiskReplicaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~StartDiskReplicaGroupResponse() = default;
};
class StartDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> oneShot{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  StartDiskReplicaPairRequest() {}

  explicit StartDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (oneShot) {
      res["OneShot"] = boost::any(*oneShot);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OneShot") != m.end() && !m["OneShot"].empty()) {
      oneShot = make_shared<bool>(boost::any_cast<bool>(m["OneShot"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~StartDiskReplicaPairRequest() = default;
};
class StartDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartDiskReplicaPairResponseBody() {}

  explicit StartDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartDiskReplicaPairResponseBody() = default;
};
class StartDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartDiskReplicaPairResponseBody> body{};

  StartDiskReplicaPairResponse() {}

  explicit StartDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~StartDiskReplicaPairResponse() = default;
};
class StopDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};

  StopDiskReplicaGroupRequest() {}

  explicit StopDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaGroupId) {
      res["ReplicaGroupId"] = boost::any(*replicaGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaGroupId") != m.end() && !m["ReplicaGroupId"].empty()) {
      replicaGroupId = make_shared<string>(boost::any_cast<string>(m["ReplicaGroupId"]));
    }
  }


  virtual ~StopDiskReplicaGroupRequest() = default;
};
class StopDiskReplicaGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopDiskReplicaGroupResponseBody() {}

  explicit StopDiskReplicaGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopDiskReplicaGroupResponseBody() = default;
};
class StopDiskReplicaGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDiskReplicaGroupResponseBody> body{};

  StopDiskReplicaGroupResponse() {}

  explicit StopDiskReplicaGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~StopDiskReplicaGroupResponse() = default;
};
class StopDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  StopDiskReplicaPairRequest() {}

  explicit StopDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~StopDiskReplicaPairRequest() = default;
};
class StopDiskReplicaPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopDiskReplicaPairResponseBody() {}

  explicit StopDiskReplicaPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopDiskReplicaPairResponseBody() = default;
};
class StopDiskReplicaPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDiskReplicaPairResponseBody> body{};

  StopDiskReplicaPairResponse() {}

  explicit StopDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~StopDiskReplicaPairResponse() = default;
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
  AddDiskReplicaPairResponse addDiskReplicaPairWithOptions(shared_ptr<AddDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDiskReplicaPairResponse addDiskReplicaPair(shared_ptr<AddDiskReplicaPairRequest> request);
  CreateDiskReplicaGroupResponse createDiskReplicaGroupWithOptions(shared_ptr<CreateDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDiskReplicaGroupResponse createDiskReplicaGroup(shared_ptr<CreateDiskReplicaGroupRequest> request);
  CreateDiskReplicaPairResponse createDiskReplicaPairWithOptions(shared_ptr<CreateDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDiskReplicaPairResponse createDiskReplicaPair(shared_ptr<CreateDiskReplicaPairRequest> request);
  DeleteDiskReplicaGroupResponse deleteDiskReplicaGroupWithOptions(shared_ptr<DeleteDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDiskReplicaGroupResponse deleteDiskReplicaGroup(shared_ptr<DeleteDiskReplicaGroupRequest> request);
  DeleteDiskReplicaPairResponse deleteDiskReplicaPairWithOptions(shared_ptr<DeleteDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDiskReplicaPairResponse deleteDiskReplicaPair(shared_ptr<DeleteDiskReplicaPairRequest> request);
  DescribeDiskReplicaGroupsResponse describeDiskReplicaGroupsWithOptions(shared_ptr<DescribeDiskReplicaGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskReplicaGroupsResponse describeDiskReplicaGroups(shared_ptr<DescribeDiskReplicaGroupsRequest> request);
  DescribeDiskReplicaPairsResponse describeDiskReplicaPairsWithOptions(shared_ptr<DescribeDiskReplicaPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskReplicaPairsResponse describeDiskReplicaPairs(shared_ptr<DescribeDiskReplicaPairsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  FailoverDiskReplicaGroupResponse failoverDiskReplicaGroupWithOptions(shared_ptr<FailoverDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FailoverDiskReplicaGroupResponse failoverDiskReplicaGroup(shared_ptr<FailoverDiskReplicaGroupRequest> request);
  FailoverDiskReplicaPairResponse failoverDiskReplicaPairWithOptions(shared_ptr<FailoverDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FailoverDiskReplicaPairResponse failoverDiskReplicaPair(shared_ptr<FailoverDiskReplicaPairRequest> request);
  ModifyDiskReplicaGroupResponse modifyDiskReplicaGroupWithOptions(shared_ptr<ModifyDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskReplicaGroupResponse modifyDiskReplicaGroup(shared_ptr<ModifyDiskReplicaGroupRequest> request);
  ModifyDiskReplicaPairResponse modifyDiskReplicaPairWithOptions(shared_ptr<ModifyDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskReplicaPairResponse modifyDiskReplicaPair(shared_ptr<ModifyDiskReplicaPairRequest> request);
  RemoveDiskReplicaPairResponse removeDiskReplicaPairWithOptions(shared_ptr<RemoveDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDiskReplicaPairResponse removeDiskReplicaPair(shared_ptr<RemoveDiskReplicaPairRequest> request);
  ReprotectDiskReplicaGroupResponse reprotectDiskReplicaGroupWithOptions(shared_ptr<ReprotectDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReprotectDiskReplicaGroupResponse reprotectDiskReplicaGroup(shared_ptr<ReprotectDiskReplicaGroupRequest> request);
  ReprotectDiskReplicaPairResponse reprotectDiskReplicaPairWithOptions(shared_ptr<ReprotectDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReprotectDiskReplicaPairResponse reprotectDiskReplicaPair(shared_ptr<ReprotectDiskReplicaPairRequest> request);
  StartDiskReplicaGroupResponse startDiskReplicaGroupWithOptions(shared_ptr<StartDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDiskReplicaGroupResponse startDiskReplicaGroup(shared_ptr<StartDiskReplicaGroupRequest> request);
  StartDiskReplicaPairResponse startDiskReplicaPairWithOptions(shared_ptr<StartDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDiskReplicaPairResponse startDiskReplicaPair(shared_ptr<StartDiskReplicaPairRequest> request);
  StopDiskReplicaGroupResponse stopDiskReplicaGroupWithOptions(shared_ptr<StopDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDiskReplicaGroupResponse stopDiskReplicaGroup(shared_ptr<StopDiskReplicaGroupRequest> request);
  StopDiskReplicaPairResponse stopDiskReplicaPairWithOptions(shared_ptr<StopDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDiskReplicaPairResponse stopDiskReplicaPair(shared_ptr<StopDiskReplicaPairRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ebs20210730

#endif
