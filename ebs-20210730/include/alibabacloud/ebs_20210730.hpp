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
  shared_ptr<string> sourceRegionId{};
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
    if (sourceRegionId) {
      res["SourceRegionId"] = boost::any(*sourceRegionId);
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
    if (m.find("SourceRegionId") != m.end() && !m["SourceRegionId"].empty()) {
      sourceRegionId = make_shared<string>(boost::any_cast<string>(m["SourceRegionId"]));
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
  shared_ptr<CreateDiskReplicaPairResponseBody> body{};

  CreateDiskReplicaPairResponse() {}

  explicit CreateDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDiskReplicaPairResponse() = default;
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
  shared_ptr<DeleteDiskReplicaPairResponseBody> body{};

  DeleteDiskReplicaPairResponse() {}

  explicit DeleteDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDiskReplicaPairResponse() = default;
};
class DescribeDiskReplicaPairsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pairIds{};
  shared_ptr<string> regionId{};

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
    if (pairIds) {
      res["PairIds"] = boost::any(*pairIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("PairIds") != m.end() && !m["PairIds"].empty()) {
      pairIds = make_shared<string>(boost::any_cast<string>(m["PairIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDiskReplicaPairsRequest() = default;
};
class DescribeDiskReplicaPairsResponseBodyReplicaPairs : public Darabonba::Model {
public:
  shared_ptr<long> asyncCycle{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationDiskId{};
  shared_ptr<string> destinationRegion{};
  shared_ptr<long> lastRPO{};
  shared_ptr<string> pairName{};
  shared_ptr<string> replicaPairId{};
  shared_ptr<string> sourceDiskId{};
  shared_ptr<string> sourceRegion{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  DescribeDiskReplicaPairsResponseBodyReplicaPairs() {}

  explicit DescribeDiskReplicaPairsResponseBodyReplicaPairs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncCycle) {
      res["AsyncCycle"] = boost::any(*asyncCycle);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
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
    if (lastRPO) {
      res["LastRPO"] = boost::any(*lastRPO);
    }
    if (pairName) {
      res["PairName"] = boost::any(*pairName);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    if (sourceDiskId) {
      res["SourceDiskId"] = boost::any(*sourceDiskId);
    }
    if (sourceRegion) {
      res["SourceRegion"] = boost::any(*sourceRegion);
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
    if (m.find("AsyncCycle") != m.end() && !m["AsyncCycle"].empty()) {
      asyncCycle = make_shared<long>(boost::any_cast<long>(m["AsyncCycle"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
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
    if (m.find("LastRPO") != m.end() && !m["LastRPO"].empty()) {
      lastRPO = make_shared<long>(boost::any_cast<long>(m["LastRPO"]));
    }
    if (m.find("PairName") != m.end() && !m["PairName"].empty()) {
      pairName = make_shared<string>(boost::any_cast<string>(m["PairName"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
    if (m.find("SourceDiskId") != m.end() && !m["SourceDiskId"].empty()) {
      sourceDiskId = make_shared<string>(boost::any_cast<string>(m["SourceDiskId"]));
    }
    if (m.find("SourceRegion") != m.end() && !m["SourceRegion"].empty()) {
      sourceRegion = make_shared<string>(boost::any_cast<string>(m["SourceRegion"]));
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
  shared_ptr<vector<DescribeDiskReplicaPairsResponseBodyReplicaPairs>> replicaPairs{};
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  }


  virtual ~DescribeDiskReplicaPairsResponseBody() = default;
};
class DescribeDiskReplicaPairsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDiskReplicaPairsResponseBody> body{};

  DescribeDiskReplicaPairsResponse() {}

  explicit DescribeDiskReplicaPairsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
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
  shared_ptr<FailoverDiskReplicaPairResponseBody> body{};

  FailoverDiskReplicaPairResponse() {}

  explicit FailoverDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FailoverDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FailoverDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~FailoverDiskReplicaPairResponse() = default;
};
class ModifyDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> pairName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  ModifyDiskReplicaPairRequest() {}

  explicit ModifyDiskReplicaPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pairName) {
      res["PairName"] = boost::any(*pairName);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PairName") != m.end() && !m["PairName"].empty()) {
      pairName = make_shared<string>(boost::any_cast<string>(m["PairName"]));
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
  shared_ptr<ModifyDiskReplicaPairResponseBody> body{};

  ModifyDiskReplicaPairResponse() {}

  explicit ModifyDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskReplicaPairResponse() = default;
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
  shared_ptr<ReprotectDiskReplicaPairResponseBody> body{};

  ReprotectDiskReplicaPairResponse() {}

  explicit ReprotectDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReprotectDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReprotectDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~ReprotectDiskReplicaPairResponse() = default;
};
class StartDiskReplicaPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
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
  shared_ptr<StartDiskReplicaPairResponseBody> body{};

  StartDiskReplicaPairResponse() {}

  explicit StartDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~StartDiskReplicaPairResponse() = default;
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
  shared_ptr<StopDiskReplicaPairResponseBody> body{};

  StopDiskReplicaPairResponse() {}

  explicit StopDiskReplicaPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  CreateDiskReplicaPairResponse createDiskReplicaPairWithOptions(shared_ptr<CreateDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDiskReplicaPairResponse createDiskReplicaPair(shared_ptr<CreateDiskReplicaPairRequest> request);
  DeleteDiskReplicaPairResponse deleteDiskReplicaPairWithOptions(shared_ptr<DeleteDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDiskReplicaPairResponse deleteDiskReplicaPair(shared_ptr<DeleteDiskReplicaPairRequest> request);
  DescribeDiskReplicaPairsResponse describeDiskReplicaPairsWithOptions(shared_ptr<DescribeDiskReplicaPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskReplicaPairsResponse describeDiskReplicaPairs(shared_ptr<DescribeDiskReplicaPairsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  FailoverDiskReplicaPairResponse failoverDiskReplicaPairWithOptions(shared_ptr<FailoverDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FailoverDiskReplicaPairResponse failoverDiskReplicaPair(shared_ptr<FailoverDiskReplicaPairRequest> request);
  ModifyDiskReplicaPairResponse modifyDiskReplicaPairWithOptions(shared_ptr<ModifyDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskReplicaPairResponse modifyDiskReplicaPair(shared_ptr<ModifyDiskReplicaPairRequest> request);
  ReprotectDiskReplicaPairResponse reprotectDiskReplicaPairWithOptions(shared_ptr<ReprotectDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReprotectDiskReplicaPairResponse reprotectDiskReplicaPair(shared_ptr<ReprotectDiskReplicaPairRequest> request);
  StartDiskReplicaPairResponse startDiskReplicaPairWithOptions(shared_ptr<StartDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDiskReplicaPairResponse startDiskReplicaPair(shared_ptr<StartDiskReplicaPairRequest> request);
  StopDiskReplicaPairResponse stopDiskReplicaPairWithOptions(shared_ptr<StopDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDiskReplicaPairResponse stopDiskReplicaPair(shared_ptr<StopDiskReplicaPairRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ebs20210730

#endif
