// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ACTIONTRAIL20200706_H_
#define ALIBABACLOUD_ACTIONTRAIL20200706_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Actiontrail20200706 {
class CreateDeliveryHistoryJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> trailName{};

  CreateDeliveryHistoryJobRequest() {}

  explicit CreateDeliveryHistoryJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (trailName) {
      res["TrailName"] = boost::any(*trailName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("TrailName") != m.end() && !m["TrailName"].empty()) {
      trailName = make_shared<string>(boost::any_cast<string>(m["TrailName"]));
    }
  }


  virtual ~CreateDeliveryHistoryJobRequest() = default;
};
class CreateDeliveryHistoryJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};
  shared_ptr<string> requestId{};

  CreateDeliveryHistoryJobResponseBody() {}

  explicit CreateDeliveryHistoryJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDeliveryHistoryJobResponseBody() = default;
};
class CreateDeliveryHistoryJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeliveryHistoryJobResponseBody> body{};

  CreateDeliveryHistoryJobResponse() {}

  explicit CreateDeliveryHistoryJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeliveryHistoryJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeliveryHistoryJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeliveryHistoryJobResponse() = default;
};
class CreateTrailRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventRW{};
  shared_ptr<bool> isOrganizationTrail{};
  shared_ptr<string> maxComputeProjectArn{};
  shared_ptr<string> maxComputeWriteRoleArn{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> ossWriteRoleArn{};
  shared_ptr<string> slsProjectArn{};
  shared_ptr<string> slsWriteRoleArn{};
  shared_ptr<string> trailRegion{};

  CreateTrailRequest() {}

  explicit CreateTrailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventRW) {
      res["EventRW"] = boost::any(*eventRW);
    }
    if (isOrganizationTrail) {
      res["IsOrganizationTrail"] = boost::any(*isOrganizationTrail);
    }
    if (maxComputeProjectArn) {
      res["MaxComputeProjectArn"] = boost::any(*maxComputeProjectArn);
    }
    if (maxComputeWriteRoleArn) {
      res["MaxComputeWriteRoleArn"] = boost::any(*maxComputeWriteRoleArn);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (ossWriteRoleArn) {
      res["OssWriteRoleArn"] = boost::any(*ossWriteRoleArn);
    }
    if (slsProjectArn) {
      res["SlsProjectArn"] = boost::any(*slsProjectArn);
    }
    if (slsWriteRoleArn) {
      res["SlsWriteRoleArn"] = boost::any(*slsWriteRoleArn);
    }
    if (trailRegion) {
      res["TrailRegion"] = boost::any(*trailRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventRW") != m.end() && !m["EventRW"].empty()) {
      eventRW = make_shared<string>(boost::any_cast<string>(m["EventRW"]));
    }
    if (m.find("IsOrganizationTrail") != m.end() && !m["IsOrganizationTrail"].empty()) {
      isOrganizationTrail = make_shared<bool>(boost::any_cast<bool>(m["IsOrganizationTrail"]));
    }
    if (m.find("MaxComputeProjectArn") != m.end() && !m["MaxComputeProjectArn"].empty()) {
      maxComputeProjectArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeProjectArn"]));
    }
    if (m.find("MaxComputeWriteRoleArn") != m.end() && !m["MaxComputeWriteRoleArn"].empty()) {
      maxComputeWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeWriteRoleArn"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("OssWriteRoleArn") != m.end() && !m["OssWriteRoleArn"].empty()) {
      ossWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["OssWriteRoleArn"]));
    }
    if (m.find("SlsProjectArn") != m.end() && !m["SlsProjectArn"].empty()) {
      slsProjectArn = make_shared<string>(boost::any_cast<string>(m["SlsProjectArn"]));
    }
    if (m.find("SlsWriteRoleArn") != m.end() && !m["SlsWriteRoleArn"].empty()) {
      slsWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["SlsWriteRoleArn"]));
    }
    if (m.find("TrailRegion") != m.end() && !m["TrailRegion"].empty()) {
      trailRegion = make_shared<string>(boost::any_cast<string>(m["TrailRegion"]));
    }
  }


  virtual ~CreateTrailRequest() = default;
};
class CreateTrailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventRW{};
  shared_ptr<string> homeRegion{};
  shared_ptr<string> maxComputeProjectArn{};
  shared_ptr<string> maxComputeWriteRoleArn{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> ossWriteRoleArn{};
  shared_ptr<string> requestId{};
  shared_ptr<string> slsProjectArn{};
  shared_ptr<string> slsWriteRoleArn{};
  shared_ptr<string> trailRegion{};

  CreateTrailResponseBody() {}

  explicit CreateTrailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventRW) {
      res["EventRW"] = boost::any(*eventRW);
    }
    if (homeRegion) {
      res["HomeRegion"] = boost::any(*homeRegion);
    }
    if (maxComputeProjectArn) {
      res["MaxComputeProjectArn"] = boost::any(*maxComputeProjectArn);
    }
    if (maxComputeWriteRoleArn) {
      res["MaxComputeWriteRoleArn"] = boost::any(*maxComputeWriteRoleArn);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (ossWriteRoleArn) {
      res["OssWriteRoleArn"] = boost::any(*ossWriteRoleArn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsProjectArn) {
      res["SlsProjectArn"] = boost::any(*slsProjectArn);
    }
    if (slsWriteRoleArn) {
      res["SlsWriteRoleArn"] = boost::any(*slsWriteRoleArn);
    }
    if (trailRegion) {
      res["TrailRegion"] = boost::any(*trailRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventRW") != m.end() && !m["EventRW"].empty()) {
      eventRW = make_shared<string>(boost::any_cast<string>(m["EventRW"]));
    }
    if (m.find("HomeRegion") != m.end() && !m["HomeRegion"].empty()) {
      homeRegion = make_shared<string>(boost::any_cast<string>(m["HomeRegion"]));
    }
    if (m.find("MaxComputeProjectArn") != m.end() && !m["MaxComputeProjectArn"].empty()) {
      maxComputeProjectArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeProjectArn"]));
    }
    if (m.find("MaxComputeWriteRoleArn") != m.end() && !m["MaxComputeWriteRoleArn"].empty()) {
      maxComputeWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeWriteRoleArn"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("OssWriteRoleArn") != m.end() && !m["OssWriteRoleArn"].empty()) {
      ossWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["OssWriteRoleArn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsProjectArn") != m.end() && !m["SlsProjectArn"].empty()) {
      slsProjectArn = make_shared<string>(boost::any_cast<string>(m["SlsProjectArn"]));
    }
    if (m.find("SlsWriteRoleArn") != m.end() && !m["SlsWriteRoleArn"].empty()) {
      slsWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["SlsWriteRoleArn"]));
    }
    if (m.find("TrailRegion") != m.end() && !m["TrailRegion"].empty()) {
      trailRegion = make_shared<string>(boost::any_cast<string>(m["TrailRegion"]));
    }
  }


  virtual ~CreateTrailResponseBody() = default;
};
class CreateTrailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrailResponseBody> body{};

  CreateTrailResponse() {}

  explicit CreateTrailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTrailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrailResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrailResponse() = default;
};
class DeleteDeliveryHistoryJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  DeleteDeliveryHistoryJobRequest() {}

  explicit DeleteDeliveryHistoryJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~DeleteDeliveryHistoryJobRequest() = default;
};
class DeleteDeliveryHistoryJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDeliveryHistoryJobResponseBody() {}

  explicit DeleteDeliveryHistoryJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDeliveryHistoryJobResponseBody() = default;
};
class DeleteDeliveryHistoryJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeliveryHistoryJobResponseBody> body{};

  DeleteDeliveryHistoryJobResponse() {}

  explicit DeleteDeliveryHistoryJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDeliveryHistoryJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeliveryHistoryJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeliveryHistoryJobResponse() = default;
};
class DeleteTrailRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeleteTrailRequest() {}

  explicit DeleteTrailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeleteTrailRequest() = default;
};
class DeleteTrailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTrailResponseBody() {}

  explicit DeleteTrailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTrailResponseBody() = default;
};
class DeleteTrailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTrailResponseBody> body{};

  DeleteTrailResponse() {}

  explicit DeleteTrailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTrailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTrailResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTrailResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
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
class DescribeTrailsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includeOrganizationTrail{};
  shared_ptr<bool> includeShadowTrails{};
  shared_ptr<string> nameList{};

  DescribeTrailsRequest() {}

  explicit DescribeTrailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeOrganizationTrail) {
      res["IncludeOrganizationTrail"] = boost::any(*includeOrganizationTrail);
    }
    if (includeShadowTrails) {
      res["IncludeShadowTrails"] = boost::any(*includeShadowTrails);
    }
    if (nameList) {
      res["NameList"] = boost::any(*nameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncludeOrganizationTrail") != m.end() && !m["IncludeOrganizationTrail"].empty()) {
      includeOrganizationTrail = make_shared<bool>(boost::any_cast<bool>(m["IncludeOrganizationTrail"]));
    }
    if (m.find("IncludeShadowTrails") != m.end() && !m["IncludeShadowTrails"].empty()) {
      includeShadowTrails = make_shared<bool>(boost::any_cast<bool>(m["IncludeShadowTrails"]));
    }
    if (m.find("NameList") != m.end() && !m["NameList"].empty()) {
      nameList = make_shared<string>(boost::any_cast<string>(m["NameList"]));
    }
  }


  virtual ~DescribeTrailsRequest() = default;
};
class DescribeTrailsResponseBodyTrailList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> eventRW{};
  shared_ptr<string> homeRegion{};
  shared_ptr<bool> isOrganizationTrail{};
  shared_ptr<string> maxComputeProjectArn{};
  shared_ptr<string> maxComputeWriteRoleArn{};
  shared_ptr<string> name{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> ossBucketLocation{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> ossWriteRoleArn{};
  shared_ptr<string> region{};
  shared_ptr<string> slsProjectArn{};
  shared_ptr<string> slsWriteRoleArn{};
  shared_ptr<string> startLoggingTime{};
  shared_ptr<string> status{};
  shared_ptr<string> stopLoggingTime{};
  shared_ptr<string> trailArn{};
  shared_ptr<string> trailRegion{};
  shared_ptr<string> updateTime{};

  DescribeTrailsResponseBodyTrailList() {}

  explicit DescribeTrailsResponseBodyTrailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (eventRW) {
      res["EventRW"] = boost::any(*eventRW);
    }
    if (homeRegion) {
      res["HomeRegion"] = boost::any(*homeRegion);
    }
    if (isOrganizationTrail) {
      res["IsOrganizationTrail"] = boost::any(*isOrganizationTrail);
    }
    if (maxComputeProjectArn) {
      res["MaxComputeProjectArn"] = boost::any(*maxComputeProjectArn);
    }
    if (maxComputeWriteRoleArn) {
      res["MaxComputeWriteRoleArn"] = boost::any(*maxComputeWriteRoleArn);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (ossBucketLocation) {
      res["OssBucketLocation"] = boost::any(*ossBucketLocation);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (ossWriteRoleArn) {
      res["OssWriteRoleArn"] = boost::any(*ossWriteRoleArn);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (slsProjectArn) {
      res["SlsProjectArn"] = boost::any(*slsProjectArn);
    }
    if (slsWriteRoleArn) {
      res["SlsWriteRoleArn"] = boost::any(*slsWriteRoleArn);
    }
    if (startLoggingTime) {
      res["StartLoggingTime"] = boost::any(*startLoggingTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stopLoggingTime) {
      res["StopLoggingTime"] = boost::any(*stopLoggingTime);
    }
    if (trailArn) {
      res["TrailArn"] = boost::any(*trailArn);
    }
    if (trailRegion) {
      res["TrailRegion"] = boost::any(*trailRegion);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EventRW") != m.end() && !m["EventRW"].empty()) {
      eventRW = make_shared<string>(boost::any_cast<string>(m["EventRW"]));
    }
    if (m.find("HomeRegion") != m.end() && !m["HomeRegion"].empty()) {
      homeRegion = make_shared<string>(boost::any_cast<string>(m["HomeRegion"]));
    }
    if (m.find("IsOrganizationTrail") != m.end() && !m["IsOrganizationTrail"].empty()) {
      isOrganizationTrail = make_shared<bool>(boost::any_cast<bool>(m["IsOrganizationTrail"]));
    }
    if (m.find("MaxComputeProjectArn") != m.end() && !m["MaxComputeProjectArn"].empty()) {
      maxComputeProjectArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeProjectArn"]));
    }
    if (m.find("MaxComputeWriteRoleArn") != m.end() && !m["MaxComputeWriteRoleArn"].empty()) {
      maxComputeWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeWriteRoleArn"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("OssBucketLocation") != m.end() && !m["OssBucketLocation"].empty()) {
      ossBucketLocation = make_shared<string>(boost::any_cast<string>(m["OssBucketLocation"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("OssWriteRoleArn") != m.end() && !m["OssWriteRoleArn"].empty()) {
      ossWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["OssWriteRoleArn"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SlsProjectArn") != m.end() && !m["SlsProjectArn"].empty()) {
      slsProjectArn = make_shared<string>(boost::any_cast<string>(m["SlsProjectArn"]));
    }
    if (m.find("SlsWriteRoleArn") != m.end() && !m["SlsWriteRoleArn"].empty()) {
      slsWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["SlsWriteRoleArn"]));
    }
    if (m.find("StartLoggingTime") != m.end() && !m["StartLoggingTime"].empty()) {
      startLoggingTime = make_shared<string>(boost::any_cast<string>(m["StartLoggingTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StopLoggingTime") != m.end() && !m["StopLoggingTime"].empty()) {
      stopLoggingTime = make_shared<string>(boost::any_cast<string>(m["StopLoggingTime"]));
    }
    if (m.find("TrailArn") != m.end() && !m["TrailArn"].empty()) {
      trailArn = make_shared<string>(boost::any_cast<string>(m["TrailArn"]));
    }
    if (m.find("TrailRegion") != m.end() && !m["TrailRegion"].empty()) {
      trailRegion = make_shared<string>(boost::any_cast<string>(m["TrailRegion"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeTrailsResponseBodyTrailList() = default;
};
class DescribeTrailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTrailsResponseBodyTrailList>> trailList{};

  DescribeTrailsResponseBody() {}

  explicit DescribeTrailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trailList) {
      vector<boost::any> temp1;
      for(auto item1:*trailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrailList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrailList") != m.end() && !m["TrailList"].empty()) {
      if (typeid(vector<boost::any>) == m["TrailList"].type()) {
        vector<DescribeTrailsResponseBodyTrailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrailsResponseBodyTrailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trailList = make_shared<vector<DescribeTrailsResponseBodyTrailList>>(expect1);
      }
    }
  }


  virtual ~DescribeTrailsResponseBody() = default;
};
class DescribeTrailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrailsResponseBody> body{};

  DescribeTrailsResponse() {}

  explicit DescribeTrailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTrailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrailsResponse() = default;
};
class EnableInsightRequest : public Darabonba::Model {
public:
  shared_ptr<string> insightType{};

  EnableInsightRequest() {}

  explicit EnableInsightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (insightType) {
      res["InsightType"] = boost::any(*insightType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InsightType") != m.end() && !m["InsightType"].empty()) {
      insightType = make_shared<string>(boost::any_cast<string>(m["InsightType"]));
    }
  }


  virtual ~EnableInsightRequest() = default;
};
class EnableInsightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableInsightResponseBody() {}

  explicit EnableInsightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableInsightResponseBody() = default;
};
class EnableInsightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableInsightResponseBody> body{};

  EnableInsightResponse() {}

  explicit EnableInsightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableInsightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableInsightResponseBody>(model1);
      }
    }
  }


  virtual ~EnableInsightResponse() = default;
};
class GetAccessKeyLastUsedEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> serviceName{};

  GetAccessKeyLastUsedEventsRequest() {}

  explicit GetAccessKeyLastUsedEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetAccessKeyLastUsedEventsRequest() = default;
};
class GetAccessKeyLastUsedEventsResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> eventName{};
  shared_ptr<string> source{};
  shared_ptr<long> usedTimestamp{};

  GetAccessKeyLastUsedEventsResponseBodyEvents() {}

  explicit GetAccessKeyLastUsedEventsResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (usedTimestamp) {
      res["UsedTimestamp"] = boost::any(*usedTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UsedTimestamp") != m.end() && !m["UsedTimestamp"].empty()) {
      usedTimestamp = make_shared<long>(boost::any_cast<long>(m["UsedTimestamp"]));
    }
  }


  virtual ~GetAccessKeyLastUsedEventsResponseBodyEvents() = default;
};
class GetAccessKeyLastUsedEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAccessKeyLastUsedEventsResponseBodyEvents>> events{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  GetAccessKeyLastUsedEventsResponseBody() {}

  explicit GetAccessKeyLastUsedEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
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
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<GetAccessKeyLastUsedEventsResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccessKeyLastUsedEventsResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<GetAccessKeyLastUsedEventsResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessKeyLastUsedEventsResponseBody() = default;
};
class GetAccessKeyLastUsedEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessKeyLastUsedEventsResponseBody> body{};

  GetAccessKeyLastUsedEventsResponse() {}

  explicit GetAccessKeyLastUsedEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessKeyLastUsedEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedEventsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedEventsResponse() = default;
};
class GetAccessKeyLastUsedInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};

  GetAccessKeyLastUsedInfoRequest() {}

  explicit GetAccessKeyLastUsedInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
  }


  virtual ~GetAccessKeyLastUsedInfoRequest() = default;
};
class GetAccessKeyLastUsedInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> accountType{};
  shared_ptr<string> detail{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceNameCn{};
  shared_ptr<string> serviceNameEn{};
  shared_ptr<string> source{};
  shared_ptr<long> usedTimestamp{};
  shared_ptr<string> userName{};

  GetAccessKeyLastUsedInfoResponseBody() {}

  explicit GetAccessKeyLastUsedInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceNameCn) {
      res["ServiceNameCn"] = boost::any(*serviceNameCn);
    }
    if (serviceNameEn) {
      res["ServiceNameEn"] = boost::any(*serviceNameEn);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (usedTimestamp) {
      res["UsedTimestamp"] = boost::any(*usedTimestamp);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceNameCn") != m.end() && !m["ServiceNameCn"].empty()) {
      serviceNameCn = make_shared<string>(boost::any_cast<string>(m["ServiceNameCn"]));
    }
    if (m.find("ServiceNameEn") != m.end() && !m["ServiceNameEn"].empty()) {
      serviceNameEn = make_shared<string>(boost::any_cast<string>(m["ServiceNameEn"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UsedTimestamp") != m.end() && !m["UsedTimestamp"].empty()) {
      usedTimestamp = make_shared<long>(boost::any_cast<long>(m["UsedTimestamp"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetAccessKeyLastUsedInfoResponseBody() = default;
};
class GetAccessKeyLastUsedInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessKeyLastUsedInfoResponseBody> body{};

  GetAccessKeyLastUsedInfoResponse() {}

  explicit GetAccessKeyLastUsedInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessKeyLastUsedInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedInfoResponse() = default;
};
class GetAccessKeyLastUsedIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> serviceName{};

  GetAccessKeyLastUsedIpsRequest() {}

  explicit GetAccessKeyLastUsedIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetAccessKeyLastUsedIpsRequest() = default;
};
class GetAccessKeyLastUsedIpsResponseBodyIps : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> ip{};
  shared_ptr<string> source{};
  shared_ptr<long> usedTimestamp{};

  GetAccessKeyLastUsedIpsResponseBodyIps() {}

  explicit GetAccessKeyLastUsedIpsResponseBodyIps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (usedTimestamp) {
      res["UsedTimestamp"] = boost::any(*usedTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UsedTimestamp") != m.end() && !m["UsedTimestamp"].empty()) {
      usedTimestamp = make_shared<long>(boost::any_cast<long>(m["UsedTimestamp"]));
    }
  }


  virtual ~GetAccessKeyLastUsedIpsResponseBodyIps() = default;
};
class GetAccessKeyLastUsedIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAccessKeyLastUsedIpsResponseBodyIps>> ips{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  GetAccessKeyLastUsedIpsResponseBody() {}

  explicit GetAccessKeyLastUsedIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ips) {
      vector<boost::any> temp1;
      for(auto item1:*ips){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ips"] = boost::any(temp1);
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
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<GetAccessKeyLastUsedIpsResponseBodyIps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ips"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccessKeyLastUsedIpsResponseBodyIps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ips = make_shared<vector<GetAccessKeyLastUsedIpsResponseBodyIps>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessKeyLastUsedIpsResponseBody() = default;
};
class GetAccessKeyLastUsedIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessKeyLastUsedIpsResponseBody> body{};

  GetAccessKeyLastUsedIpsResponse() {}

  explicit GetAccessKeyLastUsedIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessKeyLastUsedIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedIpsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedIpsResponse() = default;
};
class GetAccessKeyLastUsedProductsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};

  GetAccessKeyLastUsedProductsRequest() {}

  explicit GetAccessKeyLastUsedProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
  }


  virtual ~GetAccessKeyLastUsedProductsRequest() = default;
};
class GetAccessKeyLastUsedProductsResponseBodyProducts : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceNameCn{};
  shared_ptr<string> serviceNameEn{};
  shared_ptr<string> source{};
  shared_ptr<long> usedTimestamp{};

  GetAccessKeyLastUsedProductsResponseBodyProducts() {}

  explicit GetAccessKeyLastUsedProductsResponseBodyProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceNameCn) {
      res["ServiceNameCn"] = boost::any(*serviceNameCn);
    }
    if (serviceNameEn) {
      res["ServiceNameEn"] = boost::any(*serviceNameEn);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (usedTimestamp) {
      res["UsedTimestamp"] = boost::any(*usedTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceNameCn") != m.end() && !m["ServiceNameCn"].empty()) {
      serviceNameCn = make_shared<string>(boost::any_cast<string>(m["ServiceNameCn"]));
    }
    if (m.find("ServiceNameEn") != m.end() && !m["ServiceNameEn"].empty()) {
      serviceNameEn = make_shared<string>(boost::any_cast<string>(m["ServiceNameEn"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UsedTimestamp") != m.end() && !m["UsedTimestamp"].empty()) {
      usedTimestamp = make_shared<long>(boost::any_cast<long>(m["UsedTimestamp"]));
    }
  }


  virtual ~GetAccessKeyLastUsedProductsResponseBodyProducts() = default;
};
class GetAccessKeyLastUsedProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAccessKeyLastUsedProductsResponseBodyProducts>> products{};
  shared_ptr<string> requestId{};

  GetAccessKeyLastUsedProductsResponseBody() {}

  explicit GetAccessKeyLastUsedProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Products"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Products") != m.end() && !m["Products"].empty()) {
      if (typeid(vector<boost::any>) == m["Products"].type()) {
        vector<GetAccessKeyLastUsedProductsResponseBodyProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccessKeyLastUsedProductsResponseBodyProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<GetAccessKeyLastUsedProductsResponseBodyProducts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessKeyLastUsedProductsResponseBody() = default;
};
class GetAccessKeyLastUsedProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessKeyLastUsedProductsResponseBody> body{};

  GetAccessKeyLastUsedProductsResponse() {}

  explicit GetAccessKeyLastUsedProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessKeyLastUsedProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedProductsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedProductsResponse() = default;
};
class GetAccessKeyLastUsedResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> serviceName{};

  GetAccessKeyLastUsedResourcesRequest() {}

  explicit GetAccessKeyLastUsedResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetAccessKeyLastUsedResourcesRequest() = default;
};
class GetAccessKeyLastUsedResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> source{};
  shared_ptr<long> usedTimestamp{};

  GetAccessKeyLastUsedResourcesResponseBodyResources() {}

  explicit GetAccessKeyLastUsedResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (usedTimestamp) {
      res["UsedTimestamp"] = boost::any(*usedTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UsedTimestamp") != m.end() && !m["UsedTimestamp"].empty()) {
      usedTimestamp = make_shared<long>(boost::any_cast<long>(m["UsedTimestamp"]));
    }
  }


  virtual ~GetAccessKeyLastUsedResourcesResponseBodyResources() = default;
};
class GetAccessKeyLastUsedResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetAccessKeyLastUsedResourcesResponseBodyResources>> resources{};

  GetAccessKeyLastUsedResourcesResponseBody() {}

  explicit GetAccessKeyLastUsedResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<GetAccessKeyLastUsedResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccessKeyLastUsedResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<GetAccessKeyLastUsedResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedResourcesResponseBody() = default;
};
class GetAccessKeyLastUsedResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessKeyLastUsedResourcesResponseBody> body{};

  GetAccessKeyLastUsedResourcesResponse() {}

  explicit GetAccessKeyLastUsedResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessKeyLastUsedResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedResourcesResponse() = default;
};
class GetDeliveryHistoryJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  GetDeliveryHistoryJobRequest() {}

  explicit GetDeliveryHistoryJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~GetDeliveryHistoryJobRequest() = default;
};
class GetDeliveryHistoryJobResponseBodyStatus : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> status{};

  GetDeliveryHistoryJobResponseBodyStatus() {}

  explicit GetDeliveryHistoryJobResponseBodyStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetDeliveryHistoryJobResponseBodyStatus() = default;
};
class GetDeliveryHistoryJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> homeRegion{};
  shared_ptr<long> jobId{};
  shared_ptr<long> jobStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<GetDeliveryHistoryJobResponseBodyStatus>> status{};
  shared_ptr<string> trailName{};
  shared_ptr<string> updatedTime{};

  GetDeliveryHistoryJobResponseBody() {}

  explicit GetDeliveryHistoryJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (homeRegion) {
      res["HomeRegion"] = boost::any(*homeRegion);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      vector<boost::any> temp1;
      for(auto item1:*status){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Status"] = boost::any(temp1);
    }
    if (trailName) {
      res["TrailName"] = boost::any(*trailName);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HomeRegion") != m.end() && !m["HomeRegion"].empty()) {
      homeRegion = make_shared<string>(boost::any_cast<string>(m["HomeRegion"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<GetDeliveryHistoryJobResponseBodyStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Status"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeliveryHistoryJobResponseBodyStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        status = make_shared<vector<GetDeliveryHistoryJobResponseBodyStatus>>(expect1);
      }
    }
    if (m.find("TrailName") != m.end() && !m["TrailName"].empty()) {
      trailName = make_shared<string>(boost::any_cast<string>(m["TrailName"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~GetDeliveryHistoryJobResponseBody() = default;
};
class GetDeliveryHistoryJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeliveryHistoryJobResponseBody> body{};

  GetDeliveryHistoryJobResponse() {}

  explicit GetDeliveryHistoryJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeliveryHistoryJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeliveryHistoryJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeliveryHistoryJobResponse() = default;
};
class GetGlobalEventsStorageRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> storageRegion{};

  GetGlobalEventsStorageRegionResponseBody() {}

  explicit GetGlobalEventsStorageRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storageRegion) {
      res["StorageRegion"] = boost::any(*storageRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageRegion") != m.end() && !m["StorageRegion"].empty()) {
      storageRegion = make_shared<string>(boost::any_cast<string>(m["StorageRegion"]));
    }
  }


  virtual ~GetGlobalEventsStorageRegionResponseBody() = default;
};
class GetGlobalEventsStorageRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGlobalEventsStorageRegionResponseBody> body{};

  GetGlobalEventsStorageRegionResponse() {}

  explicit GetGlobalEventsStorageRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGlobalEventsStorageRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGlobalEventsStorageRegionResponseBody>(model1);
      }
    }
  }


  virtual ~GetGlobalEventsStorageRegionResponse() = default;
};
class GetTrailStatusRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isOrganizationTrail{};
  shared_ptr<string> name{};

  GetTrailStatusRequest() {}

  explicit GetTrailStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isOrganizationTrail) {
      res["IsOrganizationTrail"] = boost::any(*isOrganizationTrail);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsOrganizationTrail") != m.end() && !m["IsOrganizationTrail"].empty()) {
      isOrganizationTrail = make_shared<bool>(boost::any_cast<bool>(m["IsOrganizationTrail"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetTrailStatusRequest() = default;
};
class GetTrailStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isLogging{};
  shared_ptr<string> latestDeliveryError{};
  shared_ptr<string> latestDeliveryLogServiceError{};
  shared_ptr<string> latestDeliveryLogServiceTime{};
  shared_ptr<string> latestDeliveryTime{};
  shared_ptr<bool> ossBucketStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> slsLogStoreStatus{};
  shared_ptr<string> startLoggingTime{};
  shared_ptr<string> stopLoggingTime{};

  GetTrailStatusResponseBody() {}

  explicit GetTrailStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isLogging) {
      res["IsLogging"] = boost::any(*isLogging);
    }
    if (latestDeliveryError) {
      res["LatestDeliveryError"] = boost::any(*latestDeliveryError);
    }
    if (latestDeliveryLogServiceError) {
      res["LatestDeliveryLogServiceError"] = boost::any(*latestDeliveryLogServiceError);
    }
    if (latestDeliveryLogServiceTime) {
      res["LatestDeliveryLogServiceTime"] = boost::any(*latestDeliveryLogServiceTime);
    }
    if (latestDeliveryTime) {
      res["LatestDeliveryTime"] = boost::any(*latestDeliveryTime);
    }
    if (ossBucketStatus) {
      res["OssBucketStatus"] = boost::any(*ossBucketStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsLogStoreStatus) {
      res["SlsLogStoreStatus"] = boost::any(*slsLogStoreStatus);
    }
    if (startLoggingTime) {
      res["StartLoggingTime"] = boost::any(*startLoggingTime);
    }
    if (stopLoggingTime) {
      res["StopLoggingTime"] = boost::any(*stopLoggingTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsLogging") != m.end() && !m["IsLogging"].empty()) {
      isLogging = make_shared<bool>(boost::any_cast<bool>(m["IsLogging"]));
    }
    if (m.find("LatestDeliveryError") != m.end() && !m["LatestDeliveryError"].empty()) {
      latestDeliveryError = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryError"]));
    }
    if (m.find("LatestDeliveryLogServiceError") != m.end() && !m["LatestDeliveryLogServiceError"].empty()) {
      latestDeliveryLogServiceError = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryLogServiceError"]));
    }
    if (m.find("LatestDeliveryLogServiceTime") != m.end() && !m["LatestDeliveryLogServiceTime"].empty()) {
      latestDeliveryLogServiceTime = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryLogServiceTime"]));
    }
    if (m.find("LatestDeliveryTime") != m.end() && !m["LatestDeliveryTime"].empty()) {
      latestDeliveryTime = make_shared<string>(boost::any_cast<string>(m["LatestDeliveryTime"]));
    }
    if (m.find("OssBucketStatus") != m.end() && !m["OssBucketStatus"].empty()) {
      ossBucketStatus = make_shared<bool>(boost::any_cast<bool>(m["OssBucketStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsLogStoreStatus") != m.end() && !m["SlsLogStoreStatus"].empty()) {
      slsLogStoreStatus = make_shared<bool>(boost::any_cast<bool>(m["SlsLogStoreStatus"]));
    }
    if (m.find("StartLoggingTime") != m.end() && !m["StartLoggingTime"].empty()) {
      startLoggingTime = make_shared<string>(boost::any_cast<string>(m["StartLoggingTime"]));
    }
    if (m.find("StopLoggingTime") != m.end() && !m["StopLoggingTime"].empty()) {
      stopLoggingTime = make_shared<string>(boost::any_cast<string>(m["StopLoggingTime"]));
    }
  }


  virtual ~GetTrailStatusResponseBody() = default;
};
class GetTrailStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrailStatusResponseBody> body{};

  GetTrailStatusResponse() {}

  explicit GetTrailStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrailStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrailStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrailStatusResponse() = default;
};
class ListDeliveryHistoryJobsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDeliveryHistoryJobsRequest() {}

  explicit ListDeliveryHistoryJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDeliveryHistoryJobsRequest() = default;
};
class ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> homeRegion{};
  shared_ptr<long> jobId{};
  shared_ptr<long> jobStatus{};
  shared_ptr<string> startTime{};
  shared_ptr<string> trailName{};
  shared_ptr<string> updatedTime{};

  ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs() {}

  explicit ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (homeRegion) {
      res["HomeRegion"] = boost::any(*homeRegion);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (trailName) {
      res["TrailName"] = boost::any(*trailName);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HomeRegion") != m.end() && !m["HomeRegion"].empty()) {
      homeRegion = make_shared<string>(boost::any_cast<string>(m["HomeRegion"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TrailName") != m.end() && !m["TrailName"].empty()) {
      trailName = make_shared<string>(boost::any_cast<string>(m["TrailName"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["UpdatedTime"]));
    }
  }


  virtual ~ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs() = default;
};
class ListDeliveryHistoryJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs>> deliveryHistoryJobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDeliveryHistoryJobsResponseBody() {}

  explicit ListDeliveryHistoryJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryHistoryJobs) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryHistoryJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeliveryHistoryJobs"] = boost::any(temp1);
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
    if (m.find("DeliveryHistoryJobs") != m.end() && !m["DeliveryHistoryJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["DeliveryHistoryJobs"].type()) {
        vector<ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeliveryHistoryJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryHistoryJobs = make_shared<vector<ListDeliveryHistoryJobsResponseBodyDeliveryHistoryJobs>>(expect1);
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


  virtual ~ListDeliveryHistoryJobsResponseBody() = default;
};
class ListDeliveryHistoryJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeliveryHistoryJobsResponseBody> body{};

  ListDeliveryHistoryJobsResponse() {}

  explicit ListDeliveryHistoryJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeliveryHistoryJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeliveryHistoryJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeliveryHistoryJobsResponse() = default;
};
class LookupEventsRequestLookupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LookupEventsRequestLookupAttribute() {}

  explicit LookupEventsRequestLookupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LookupEventsRequestLookupAttribute() = default;
};
class LookupEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<LookupEventsRequestLookupAttribute>> lookupAttribute{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> startTime{};

  LookupEventsRequest() {}

  explicit LookupEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lookupAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*lookupAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LookupAttribute"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("LookupAttribute") != m.end() && !m["LookupAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["LookupAttribute"].type()) {
        vector<LookupEventsRequestLookupAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LookupAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LookupEventsRequestLookupAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lookupAttribute = make_shared<vector<LookupEventsRequestLookupAttribute>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~LookupEventsRequest() = default;
};
class LookupEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<vector<map<string, boost::any>>> events{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  LookupEventsResponseBody() {}

  explicit LookupEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Events"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      events = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~LookupEventsResponseBody() = default;
};
class LookupEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LookupEventsResponseBody> body{};

  LookupEventsResponse() {}

  explicit LookupEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LookupEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LookupEventsResponseBody>(model1);
      }
    }
  }


  virtual ~LookupEventsResponse() = default;
};
class StartLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  StartLoggingRequest() {}

  explicit StartLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~StartLoggingRequest() = default;
};
class StartLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartLoggingResponseBody() {}

  explicit StartLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartLoggingResponseBody() = default;
};
class StartLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartLoggingResponseBody> body{};

  StartLoggingResponse() {}

  explicit StartLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~StartLoggingResponse() = default;
};
class StopLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  StopLoggingRequest() {}

  explicit StopLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~StopLoggingRequest() = default;
};
class StopLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopLoggingResponseBody() {}

  explicit StopLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopLoggingResponseBody() = default;
};
class StopLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopLoggingResponseBody> body{};

  StopLoggingResponse() {}

  explicit StopLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~StopLoggingResponse() = default;
};
class UpdateGlobalEventsStorageRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> storageRegion{};

  UpdateGlobalEventsStorageRegionRequest() {}

  explicit UpdateGlobalEventsStorageRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageRegion) {
      res["StorageRegion"] = boost::any(*storageRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageRegion") != m.end() && !m["StorageRegion"].empty()) {
      storageRegion = make_shared<string>(boost::any_cast<string>(m["StorageRegion"]));
    }
  }


  virtual ~UpdateGlobalEventsStorageRegionRequest() = default;
};
class UpdateGlobalEventsStorageRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateGlobalEventsStorageRegionResponseBody() {}

  explicit UpdateGlobalEventsStorageRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateGlobalEventsStorageRegionResponseBody() = default;
};
class UpdateGlobalEventsStorageRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGlobalEventsStorageRegionResponseBody> body{};

  UpdateGlobalEventsStorageRegionResponse() {}

  explicit UpdateGlobalEventsStorageRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGlobalEventsStorageRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGlobalEventsStorageRegionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGlobalEventsStorageRegionResponse() = default;
};
class UpdateTrailRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventRW{};
  shared_ptr<string> maxComputeProjectArn{};
  shared_ptr<string> maxComputeWriteRoleArn{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> ossWriteRoleArn{};
  shared_ptr<string> slsProjectArn{};
  shared_ptr<string> slsWriteRoleArn{};
  shared_ptr<string> trailRegion{};

  UpdateTrailRequest() {}

  explicit UpdateTrailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventRW) {
      res["EventRW"] = boost::any(*eventRW);
    }
    if (maxComputeProjectArn) {
      res["MaxComputeProjectArn"] = boost::any(*maxComputeProjectArn);
    }
    if (maxComputeWriteRoleArn) {
      res["MaxComputeWriteRoleArn"] = boost::any(*maxComputeWriteRoleArn);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (ossWriteRoleArn) {
      res["OssWriteRoleArn"] = boost::any(*ossWriteRoleArn);
    }
    if (slsProjectArn) {
      res["SlsProjectArn"] = boost::any(*slsProjectArn);
    }
    if (slsWriteRoleArn) {
      res["SlsWriteRoleArn"] = boost::any(*slsWriteRoleArn);
    }
    if (trailRegion) {
      res["TrailRegion"] = boost::any(*trailRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventRW") != m.end() && !m["EventRW"].empty()) {
      eventRW = make_shared<string>(boost::any_cast<string>(m["EventRW"]));
    }
    if (m.find("MaxComputeProjectArn") != m.end() && !m["MaxComputeProjectArn"].empty()) {
      maxComputeProjectArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeProjectArn"]));
    }
    if (m.find("MaxComputeWriteRoleArn") != m.end() && !m["MaxComputeWriteRoleArn"].empty()) {
      maxComputeWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeWriteRoleArn"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("OssWriteRoleArn") != m.end() && !m["OssWriteRoleArn"].empty()) {
      ossWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["OssWriteRoleArn"]));
    }
    if (m.find("SlsProjectArn") != m.end() && !m["SlsProjectArn"].empty()) {
      slsProjectArn = make_shared<string>(boost::any_cast<string>(m["SlsProjectArn"]));
    }
    if (m.find("SlsWriteRoleArn") != m.end() && !m["SlsWriteRoleArn"].empty()) {
      slsWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["SlsWriteRoleArn"]));
    }
    if (m.find("TrailRegion") != m.end() && !m["TrailRegion"].empty()) {
      trailRegion = make_shared<string>(boost::any_cast<string>(m["TrailRegion"]));
    }
  }


  virtual ~UpdateTrailRequest() = default;
};
class UpdateTrailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventRW{};
  shared_ptr<string> homeRegion{};
  shared_ptr<string> maxComputeProjectArn{};
  shared_ptr<string> maxComputeWriteRoleArn{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossKeyPrefix{};
  shared_ptr<string> ossWriteRoleArn{};
  shared_ptr<string> requestId{};
  shared_ptr<string> slsProjectArn{};
  shared_ptr<string> slsWriteRoleArn{};
  shared_ptr<string> trailRegion{};

  UpdateTrailResponseBody() {}

  explicit UpdateTrailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventRW) {
      res["EventRW"] = boost::any(*eventRW);
    }
    if (homeRegion) {
      res["HomeRegion"] = boost::any(*homeRegion);
    }
    if (maxComputeProjectArn) {
      res["MaxComputeProjectArn"] = boost::any(*maxComputeProjectArn);
    }
    if (maxComputeWriteRoleArn) {
      res["MaxComputeWriteRoleArn"] = boost::any(*maxComputeWriteRoleArn);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossKeyPrefix) {
      res["OssKeyPrefix"] = boost::any(*ossKeyPrefix);
    }
    if (ossWriteRoleArn) {
      res["OssWriteRoleArn"] = boost::any(*ossWriteRoleArn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsProjectArn) {
      res["SlsProjectArn"] = boost::any(*slsProjectArn);
    }
    if (slsWriteRoleArn) {
      res["SlsWriteRoleArn"] = boost::any(*slsWriteRoleArn);
    }
    if (trailRegion) {
      res["TrailRegion"] = boost::any(*trailRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventRW") != m.end() && !m["EventRW"].empty()) {
      eventRW = make_shared<string>(boost::any_cast<string>(m["EventRW"]));
    }
    if (m.find("HomeRegion") != m.end() && !m["HomeRegion"].empty()) {
      homeRegion = make_shared<string>(boost::any_cast<string>(m["HomeRegion"]));
    }
    if (m.find("MaxComputeProjectArn") != m.end() && !m["MaxComputeProjectArn"].empty()) {
      maxComputeProjectArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeProjectArn"]));
    }
    if (m.find("MaxComputeWriteRoleArn") != m.end() && !m["MaxComputeWriteRoleArn"].empty()) {
      maxComputeWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["MaxComputeWriteRoleArn"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssKeyPrefix") != m.end() && !m["OssKeyPrefix"].empty()) {
      ossKeyPrefix = make_shared<string>(boost::any_cast<string>(m["OssKeyPrefix"]));
    }
    if (m.find("OssWriteRoleArn") != m.end() && !m["OssWriteRoleArn"].empty()) {
      ossWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["OssWriteRoleArn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsProjectArn") != m.end() && !m["SlsProjectArn"].empty()) {
      slsProjectArn = make_shared<string>(boost::any_cast<string>(m["SlsProjectArn"]));
    }
    if (m.find("SlsWriteRoleArn") != m.end() && !m["SlsWriteRoleArn"].empty()) {
      slsWriteRoleArn = make_shared<string>(boost::any_cast<string>(m["SlsWriteRoleArn"]));
    }
    if (m.find("TrailRegion") != m.end() && !m["TrailRegion"].empty()) {
      trailRegion = make_shared<string>(boost::any_cast<string>(m["TrailRegion"]));
    }
  }


  virtual ~UpdateTrailResponseBody() = default;
};
class UpdateTrailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTrailResponseBody> body{};

  UpdateTrailResponse() {}

  explicit UpdateTrailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTrailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTrailResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTrailResponse() = default;
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
  CreateDeliveryHistoryJobResponse createDeliveryHistoryJobWithOptions(shared_ptr<CreateDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeliveryHistoryJobResponse createDeliveryHistoryJob(shared_ptr<CreateDeliveryHistoryJobRequest> request);
  CreateTrailResponse createTrailWithOptions(shared_ptr<CreateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrailResponse createTrail(shared_ptr<CreateTrailRequest> request);
  DeleteDeliveryHistoryJobResponse deleteDeliveryHistoryJobWithOptions(shared_ptr<DeleteDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeliveryHistoryJobResponse deleteDeliveryHistoryJob(shared_ptr<DeleteDeliveryHistoryJobRequest> request);
  DeleteTrailResponse deleteTrailWithOptions(shared_ptr<DeleteTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTrailResponse deleteTrail(shared_ptr<DeleteTrailRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeTrailsResponse describeTrailsWithOptions(shared_ptr<DescribeTrailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrailsResponse describeTrails(shared_ptr<DescribeTrailsRequest> request);
  EnableInsightResponse enableInsightWithOptions(shared_ptr<EnableInsightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableInsightResponse enableInsight(shared_ptr<EnableInsightRequest> request);
  GetAccessKeyLastUsedEventsResponse getAccessKeyLastUsedEventsWithOptions(shared_ptr<GetAccessKeyLastUsedEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedEventsResponse getAccessKeyLastUsedEvents(shared_ptr<GetAccessKeyLastUsedEventsRequest> request);
  GetAccessKeyLastUsedInfoResponse getAccessKeyLastUsedInfoWithOptions(shared_ptr<GetAccessKeyLastUsedInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedInfoResponse getAccessKeyLastUsedInfo(shared_ptr<GetAccessKeyLastUsedInfoRequest> request);
  GetAccessKeyLastUsedIpsResponse getAccessKeyLastUsedIpsWithOptions(shared_ptr<GetAccessKeyLastUsedIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedIpsResponse getAccessKeyLastUsedIps(shared_ptr<GetAccessKeyLastUsedIpsRequest> request);
  GetAccessKeyLastUsedProductsResponse getAccessKeyLastUsedProductsWithOptions(shared_ptr<GetAccessKeyLastUsedProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedProductsResponse getAccessKeyLastUsedProducts(shared_ptr<GetAccessKeyLastUsedProductsRequest> request);
  GetAccessKeyLastUsedResourcesResponse getAccessKeyLastUsedResourcesWithOptions(shared_ptr<GetAccessKeyLastUsedResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedResourcesResponse getAccessKeyLastUsedResources(shared_ptr<GetAccessKeyLastUsedResourcesRequest> request);
  GetDeliveryHistoryJobResponse getDeliveryHistoryJobWithOptions(shared_ptr<GetDeliveryHistoryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeliveryHistoryJobResponse getDeliveryHistoryJob(shared_ptr<GetDeliveryHistoryJobRequest> request);
  GetGlobalEventsStorageRegionResponse getGlobalEventsStorageRegionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGlobalEventsStorageRegionResponse getGlobalEventsStorageRegion();
  GetTrailStatusResponse getTrailStatusWithOptions(shared_ptr<GetTrailStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrailStatusResponse getTrailStatus(shared_ptr<GetTrailStatusRequest> request);
  ListDeliveryHistoryJobsResponse listDeliveryHistoryJobsWithOptions(shared_ptr<ListDeliveryHistoryJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeliveryHistoryJobsResponse listDeliveryHistoryJobs(shared_ptr<ListDeliveryHistoryJobsRequest> request);
  LookupEventsResponse lookupEventsWithOptions(shared_ptr<LookupEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LookupEventsResponse lookupEvents(shared_ptr<LookupEventsRequest> request);
  StartLoggingResponse startLoggingWithOptions(shared_ptr<StartLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartLoggingResponse startLogging(shared_ptr<StartLoggingRequest> request);
  StopLoggingResponse stopLoggingWithOptions(shared_ptr<StopLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLoggingResponse stopLogging(shared_ptr<StopLoggingRequest> request);
  UpdateGlobalEventsStorageRegionResponse updateGlobalEventsStorageRegionWithOptions(shared_ptr<UpdateGlobalEventsStorageRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGlobalEventsStorageRegionResponse updateGlobalEventsStorageRegion(shared_ptr<UpdateGlobalEventsStorageRegionRequest> request);
  UpdateTrailResponse updateTrailWithOptions(shared_ptr<UpdateTrailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTrailResponse updateTrail(shared_ptr<UpdateTrailRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Actiontrail20200706

#endif
