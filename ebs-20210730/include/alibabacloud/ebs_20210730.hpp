// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EBS20210730_H_
#define ALIBABACLOUD_EBS20210730_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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
        AddDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~AddDiskReplicaPairResponse() = default;
};
class ApplyLensServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ApplyLensServiceResponseBody() {}

  explicit ApplyLensServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApplyLensServiceResponseBody() = default;
};
class ApplyLensServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyLensServiceResponseBody> body{};

  ApplyLensServiceResponse() {}

  explicit ApplyLensServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyLensServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyLensServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyLensServiceResponse() = default;
};
class BindEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> diskTargets{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};

  BindEnterpriseSnapshotPolicyRequest() {}

  explicit BindEnterpriseSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (diskTargets) {
      res["DiskTargets"] = boost::any(*diskTargets);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
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
    if (m.find("DiskTargets") != m.end() && !m["DiskTargets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskTargets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskTargets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskTargets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~BindEnterpriseSnapshotPolicyRequest() = default;
};
class BindEnterpriseSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindEnterpriseSnapshotPolicyResponseBody() {}

  explicit BindEnterpriseSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindEnterpriseSnapshotPolicyResponseBody() = default;
};
class BindEnterpriseSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindEnterpriseSnapshotPolicyResponseBody> body{};

  BindEnterpriseSnapshotPolicyResponse() {}

  explicit BindEnterpriseSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindEnterpriseSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindEnterpriseSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~BindEnterpriseSnapshotPolicyResponse() = default;
};
class CancelLensServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelLensServiceResponseBody() {}

  explicit CancelLensServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelLensServiceResponseBody() = default;
};
class CancelLensServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelLensServiceResponseBody> body{};

  CancelLensServiceResponse() {}

  explicit CancelLensServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelLensServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelLensServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CancelLensServiceResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class ClearPairDrillRequest : public Darabonba::Model {
public:
  shared_ptr<string> drillId{};
  shared_ptr<string> pairId{};
  shared_ptr<string> regionId{};

  ClearPairDrillRequest() {}

  explicit ClearPairDrillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
    if (pairId) {
      res["PairId"] = boost::any(*pairId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
    if (m.find("PairId") != m.end() && !m["PairId"].empty()) {
      pairId = make_shared<string>(boost::any_cast<string>(m["PairId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ClearPairDrillRequest() = default;
};
class ClearPairDrillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ClearPairDrillResponseBody() {}

  explicit ClearPairDrillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearPairDrillResponseBody() = default;
};
class ClearPairDrillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClearPairDrillResponseBody> body{};

  ClearPairDrillResponse() {}

  explicit ClearPairDrillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClearPairDrillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearPairDrillResponseBody>(model1);
      }
    }
  }


  virtual ~ClearPairDrillResponse() = default;
};
class ClearReplicaGroupDrillRequest : public Darabonba::Model {
public:
  shared_ptr<string> drillId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> regionId{};

  ClearReplicaGroupDrillRequest() {}

  explicit ClearReplicaGroupDrillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ClearReplicaGroupDrillRequest() = default;
};
class ClearReplicaGroupDrillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ClearReplicaGroupDrillResponseBody() {}

  explicit ClearReplicaGroupDrillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearReplicaGroupDrillResponseBody() = default;
};
class ClearReplicaGroupDrillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClearReplicaGroupDrillResponseBody> body{};

  ClearReplicaGroupDrillResponse() {}

  explicit ClearReplicaGroupDrillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClearReplicaGroupDrillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearReplicaGroupDrillResponseBody>(model1);
      }
    }
  }


  virtual ~ClearReplicaGroupDrillResponse() = default;
};
class CreateDedicatedBlockStorageClusterRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDedicatedBlockStorageClusterRequestTag() {}

  explicit CreateDedicatedBlockStorageClusterRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDedicatedBlockStorageClusterRequestTag() = default;
};
class CreateDedicatedBlockStorageClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> azone{};
  shared_ptr<long> capacity{};
  shared_ptr<string> dbscId{};
  shared_ptr<string> dbscName{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateDedicatedBlockStorageClusterRequestTag>> tag{};
  shared_ptr<string> type{};

  CreateDedicatedBlockStorageClusterRequest() {}

  explicit CreateDedicatedBlockStorageClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azone) {
      res["Azone"] = boost::any(*azone);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (dbscId) {
      res["DbscId"] = boost::any(*dbscId);
    }
    if (dbscName) {
      res["DbscName"] = boost::any(*dbscName);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
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
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Azone") != m.end() && !m["Azone"].empty()) {
      azone = make_shared<string>(boost::any_cast<string>(m["Azone"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("DbscId") != m.end() && !m["DbscId"].empty()) {
      dbscId = make_shared<string>(boost::any_cast<string>(m["DbscId"]));
    }
    if (m.find("DbscName") != m.end() && !m["DbscName"].empty()) {
      dbscName = make_shared<string>(boost::any_cast<string>(m["DbscName"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDedicatedBlockStorageClusterRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDedicatedBlockStorageClusterRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDedicatedBlockStorageClusterRequestTag>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDedicatedBlockStorageClusterRequest() = default;
};
class CreateDedicatedBlockStorageClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dbscId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateDedicatedBlockStorageClusterResponseBody() {}

  explicit CreateDedicatedBlockStorageClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbscId) {
      res["DbscId"] = boost::any(*dbscId);
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
    if (m.find("DbscId") != m.end() && !m["DbscId"].empty()) {
      dbscId = make_shared<string>(boost::any_cast<string>(m["DbscId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDedicatedBlockStorageClusterResponseBody() = default;
};
class CreateDedicatedBlockStorageClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDedicatedBlockStorageClusterResponseBody> body{};

  CreateDedicatedBlockStorageClusterResponse() {}

  explicit CreateDedicatedBlockStorageClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDedicatedBlockStorageClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDedicatedBlockStorageClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDedicatedBlockStorageClusterResponse() = default;
};
class CreateDiskReplicaGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDiskReplicaGroupRequestTag() {}

  explicit CreateDiskReplicaGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDiskReplicaGroupRequestTag() = default;
};
class CreateDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<string> destinationZoneId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> RPO{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceZoneId{};
  shared_ptr<vector<CreateDiskReplicaGroupRequestTag>> tag{};

  CreateDiskReplicaGroupRequest() {}

  explicit CreateDiskReplicaGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceZoneId) {
      res["SourceZoneId"] = boost::any(*sourceZoneId);
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
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceZoneId") != m.end() && !m["SourceZoneId"].empty()) {
      sourceZoneId = make_shared<string>(boost::any_cast<string>(m["SourceZoneId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDiskReplicaGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDiskReplicaGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDiskReplicaGroupRequestTag>>(expect1);
      }
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
        CreateDiskReplicaGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDiskReplicaGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDiskReplicaGroupResponse() = default;
};
class CreateDiskReplicaPairRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDiskReplicaPairRequestTag() {}

  explicit CreateDiskReplicaPairRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDiskReplicaPairRequestTag() = default;
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
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceZoneId{};
  shared_ptr<vector<CreateDiskReplicaPairRequestTag>> tag{};

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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceZoneId) {
      res["SourceZoneId"] = boost::any(*sourceZoneId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceZoneId") != m.end() && !m["SourceZoneId"].empty()) {
      sourceZoneId = make_shared<string>(boost::any_cast<string>(m["SourceZoneId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDiskReplicaPairRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDiskReplicaPairRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDiskReplicaPairRequestTag>>(expect1);
      }
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
        CreateDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDiskReplicaPairResponse() = default;
};
class CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> retainDays{};

  CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() {}

  explicit CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainDays) {
      res["RetainDays"] = boost::any(*retainDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainDays") != m.end() && !m["RetainDays"].empty()) {
      retainDays = make_shared<long>(boost::any_cast<long>(m["RetainDays"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() = default;
};
class CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<vector<CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>> regions{};

  CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() {}

  explicit CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>>(expect1);
      }
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() = default;
};
class CreateEnterpriseSnapshotPolicyRequestRetainRule : public Darabonba::Model {
public:
  shared_ptr<long> number{};
  shared_ptr<long> timeInterval{};
  shared_ptr<string> timeUnit{};

  CreateEnterpriseSnapshotPolicyRequestRetainRule() {}

  explicit CreateEnterpriseSnapshotPolicyRequestRetainRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequestRetainRule() = default;
};
class CreateEnterpriseSnapshotPolicyRequestSchedule : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};

  CreateEnterpriseSnapshotPolicyRequestSchedule() {}

  explicit CreateEnterpriseSnapshotPolicyRequestSchedule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequestSchedule() = default;
};
class CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules : public Darabonba::Model {
public:
  shared_ptr<string> specialPeriodUnit{};
  shared_ptr<long> timeInterval{};
  shared_ptr<string> timeUnit{};

  CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules() {}

  explicit CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialPeriodUnit) {
      res["SpecialPeriodUnit"] = boost::any(*specialPeriodUnit);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialPeriodUnit") != m.end() && !m["SpecialPeriodUnit"].empty()) {
      specialPeriodUnit = make_shared<string>(boost::any_cast<string>(m["SpecialPeriodUnit"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules() = default;
};
class CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<vector<CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules>> rules{};

  CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules() {}

  explicit CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<CreateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules>>(expect1);
      }
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules() = default;
};
class CreateEnterpriseSnapshotPolicyRequestStorageRule : public Darabonba::Model {
public:
  shared_ptr<bool> enableImmediateAccess{};

  CreateEnterpriseSnapshotPolicyRequestStorageRule() {}

  explicit CreateEnterpriseSnapshotPolicyRequestStorageRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableImmediateAccess) {
      res["EnableImmediateAccess"] = boost::any(*enableImmediateAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableImmediateAccess") != m.end() && !m["EnableImmediateAccess"].empty()) {
      enableImmediateAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableImmediateAccess"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequestStorageRule() = default;
};
class CreateEnterpriseSnapshotPolicyRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateEnterpriseSnapshotPolicyRequestTag() {}

  explicit CreateEnterpriseSnapshotPolicyRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateEnterpriseSnapshotPolicyRequestTag() = default;
};
class CreateEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo> crossRegionCopyInfo{};
  shared_ptr<string> desc{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<CreateEnterpriseSnapshotPolicyRequestRetainRule> retainRule{};
  shared_ptr<CreateEnterpriseSnapshotPolicyRequestSchedule> schedule{};
  shared_ptr<CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules> specialRetainRules{};
  shared_ptr<string> state{};
  shared_ptr<CreateEnterpriseSnapshotPolicyRequestStorageRule> storageRule{};
  shared_ptr<vector<CreateEnterpriseSnapshotPolicyRequestTag>> tag{};
  shared_ptr<string> targetType{};

  CreateEnterpriseSnapshotPolicyRequest() {}

  explicit CreateEnterpriseSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossRegionCopyInfo) {
      res["CrossRegionCopyInfo"] = crossRegionCopyInfo ? boost::any(crossRegionCopyInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (retainRule) {
      res["RetainRule"] = retainRule ? boost::any(retainRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schedule) {
      res["Schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specialRetainRules) {
      res["SpecialRetainRules"] = specialRetainRules ? boost::any(specialRetainRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (storageRule) {
      res["StorageRule"] = storageRule ? boost::any(storageRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossRegionCopyInfo") != m.end() && !m["CrossRegionCopyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CrossRegionCopyInfo"].type()) {
        CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CrossRegionCopyInfo"]));
        crossRegionCopyInfo = make_shared<CreateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo>(model1);
      }
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RetainRule") != m.end() && !m["RetainRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetainRule"].type()) {
        CreateEnterpriseSnapshotPolicyRequestRetainRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetainRule"]));
        retainRule = make_shared<CreateEnterpriseSnapshotPolicyRequestRetainRule>(model1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["Schedule"].type()) {
        CreateEnterpriseSnapshotPolicyRequestSchedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Schedule"]));
        schedule = make_shared<CreateEnterpriseSnapshotPolicyRequestSchedule>(model1);
      }
    }
    if (m.find("SpecialRetainRules") != m.end() && !m["SpecialRetainRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpecialRetainRules"].type()) {
        CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpecialRetainRules"]));
        specialRetainRules = make_shared<CreateEnterpriseSnapshotPolicyRequestSpecialRetainRules>(model1);
      }
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StorageRule") != m.end() && !m["StorageRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageRule"].type()) {
        CreateEnterpriseSnapshotPolicyRequestStorageRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageRule"]));
        storageRule = make_shared<CreateEnterpriseSnapshotPolicyRequestStorageRule>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateEnterpriseSnapshotPolicyRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEnterpriseSnapshotPolicyRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateEnterpriseSnapshotPolicyRequestTag>>(expect1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyRequest() = default;
};
class CreateEnterpriseSnapshotPolicyShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateEnterpriseSnapshotPolicyShrinkRequestTag() {}

  explicit CreateEnterpriseSnapshotPolicyShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateEnterpriseSnapshotPolicyShrinkRequestTag() = default;
};
class CreateEnterpriseSnapshotPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> crossRegionCopyInfoShrink{};
  shared_ptr<string> desc{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> retainRuleShrink{};
  shared_ptr<string> scheduleShrink{};
  shared_ptr<string> specialRetainRulesShrink{};
  shared_ptr<string> state{};
  shared_ptr<string> storageRuleShrink{};
  shared_ptr<vector<CreateEnterpriseSnapshotPolicyShrinkRequestTag>> tag{};
  shared_ptr<string> targetType{};

  CreateEnterpriseSnapshotPolicyShrinkRequest() {}

  explicit CreateEnterpriseSnapshotPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossRegionCopyInfoShrink) {
      res["CrossRegionCopyInfo"] = boost::any(*crossRegionCopyInfoShrink);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (retainRuleShrink) {
      res["RetainRule"] = boost::any(*retainRuleShrink);
    }
    if (scheduleShrink) {
      res["Schedule"] = boost::any(*scheduleShrink);
    }
    if (specialRetainRulesShrink) {
      res["SpecialRetainRules"] = boost::any(*specialRetainRulesShrink);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (storageRuleShrink) {
      res["StorageRule"] = boost::any(*storageRuleShrink);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossRegionCopyInfo") != m.end() && !m["CrossRegionCopyInfo"].empty()) {
      crossRegionCopyInfoShrink = make_shared<string>(boost::any_cast<string>(m["CrossRegionCopyInfo"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RetainRule") != m.end() && !m["RetainRule"].empty()) {
      retainRuleShrink = make_shared<string>(boost::any_cast<string>(m["RetainRule"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      scheduleShrink = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("SpecialRetainRules") != m.end() && !m["SpecialRetainRules"].empty()) {
      specialRetainRulesShrink = make_shared<string>(boost::any_cast<string>(m["SpecialRetainRules"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StorageRule") != m.end() && !m["StorageRule"].empty()) {
      storageRuleShrink = make_shared<string>(boost::any_cast<string>(m["StorageRule"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateEnterpriseSnapshotPolicyShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEnterpriseSnapshotPolicyShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateEnterpriseSnapshotPolicyShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyShrinkRequest() = default;
};
class CreateEnterpriseSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> requestId{};

  CreateEnterpriseSnapshotPolicyResponseBody() {}

  explicit CreateEnterpriseSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyResponseBody() = default;
};
class CreateEnterpriseSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEnterpriseSnapshotPolicyResponseBody> body{};

  CreateEnterpriseSnapshotPolicyResponse() {}

  explicit CreateEnterpriseSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEnterpriseSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEnterpriseSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEnterpriseSnapshotPolicyResponse() = default;
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
        DeleteDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDiskReplicaPairResponse() = default;
};
class DeleteEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};

  DeleteEnterpriseSnapshotPolicyRequest() {}

  explicit DeleteEnterpriseSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
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
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteEnterpriseSnapshotPolicyRequest() = default;
};
class DeleteEnterpriseSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEnterpriseSnapshotPolicyResponseBody() {}

  explicit DeleteEnterpriseSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEnterpriseSnapshotPolicyResponseBody() = default;
};
class DeleteEnterpriseSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnterpriseSnapshotPolicyResponseBody> body{};

  DeleteEnterpriseSnapshotPolicyResponse() {}

  explicit DeleteEnterpriseSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEnterpriseSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnterpriseSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnterpriseSnapshotPolicyResponse() = default;
};
class DescribeDedicatedBlockStorageClusterDisksRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbscId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  DescribeDedicatedBlockStorageClusterDisksRequest() {}

  explicit DescribeDedicatedBlockStorageClusterDisksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbscId) {
      res["DbscId"] = boost::any(*dbscId);
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
    if (m.find("DbscId") != m.end() && !m["DbscId"].empty()) {
      dbscId = make_shared<string>(boost::any_cast<string>(m["DbscId"]));
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


  virtual ~DescribeDedicatedBlockStorageClusterDisksRequest() = default;
};
class DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags() {}

  explicit DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags() = default;
};
class DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk : public Darabonba::Model {
public:
  shared_ptr<string> attachedTime{};
  shared_ptr<string> bdfId{};
  shared_ptr<bool> burstingEnabled{};
  shared_ptr<string> category{};
  shared_ptr<bool> deleteAutoSnapshot{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> description{};
  shared_ptr<string> detachedTime{};
  shared_ptr<string> device{};
  shared_ptr<string> diskChargeType{};
  shared_ptr<string> diskId{};
  shared_ptr<string> diskName{};
  shared_ptr<bool> enableAutoSnapshot{};
  shared_ptr<bool> encrypted{};
  shared_ptr<long> IOPS{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<long> mountInstanceNum{};
  shared_ptr<string> multiAttach{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<bool> portable{};
  shared_ptr<long> provisionedIops{};
  shared_ptr<string> regionId{};
  shared_ptr<long> size{};
  shared_ptr<string> sourceSnapshotId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageClusterId{};
  shared_ptr<string> storageSetId{};
  shared_ptr<long> storageSetPartitionNumber{};
  shared_ptr<vector<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags>> tags{};
  shared_ptr<long> throughput{};
  shared_ptr<string> type{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk() {}

  explicit DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachedTime) {
      res["AttachedTime"] = boost::any(*attachedTime);
    }
    if (bdfId) {
      res["BdfId"] = boost::any(*bdfId);
    }
    if (burstingEnabled) {
      res["BurstingEnabled"] = boost::any(*burstingEnabled);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (deleteAutoSnapshot) {
      res["DeleteAutoSnapshot"] = boost::any(*deleteAutoSnapshot);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (detachedTime) {
      res["DetachedTime"] = boost::any(*detachedTime);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskChargeType) {
      res["DiskChargeType"] = boost::any(*diskChargeType);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (enableAutoSnapshot) {
      res["EnableAutoSnapshot"] = boost::any(*enableAutoSnapshot);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    if (IOPS) {
      res["IOPS"] = boost::any(*IOPS);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (mountInstanceNum) {
      res["MountInstanceNum"] = boost::any(*mountInstanceNum);
    }
    if (multiAttach) {
      res["MultiAttach"] = boost::any(*multiAttach);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (portable) {
      res["Portable"] = boost::any(*portable);
    }
    if (provisionedIops) {
      res["ProvisionedIops"] = boost::any(*provisionedIops);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sourceSnapshotId) {
      res["SourceSnapshotId"] = boost::any(*sourceSnapshotId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageClusterId) {
      res["StorageClusterId"] = boost::any(*storageClusterId);
    }
    if (storageSetId) {
      res["StorageSetId"] = boost::any(*storageSetId);
    }
    if (storageSetPartitionNumber) {
      res["StorageSetPartitionNumber"] = boost::any(*storageSetPartitionNumber);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (throughput) {
      res["Throughput"] = boost::any(*throughput);
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
    if (m.find("AttachedTime") != m.end() && !m["AttachedTime"].empty()) {
      attachedTime = make_shared<string>(boost::any_cast<string>(m["AttachedTime"]));
    }
    if (m.find("BdfId") != m.end() && !m["BdfId"].empty()) {
      bdfId = make_shared<string>(boost::any_cast<string>(m["BdfId"]));
    }
    if (m.find("BurstingEnabled") != m.end() && !m["BurstingEnabled"].empty()) {
      burstingEnabled = make_shared<bool>(boost::any_cast<bool>(m["BurstingEnabled"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DeleteAutoSnapshot") != m.end() && !m["DeleteAutoSnapshot"].empty()) {
      deleteAutoSnapshot = make_shared<bool>(boost::any_cast<bool>(m["DeleteAutoSnapshot"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DetachedTime") != m.end() && !m["DetachedTime"].empty()) {
      detachedTime = make_shared<string>(boost::any_cast<string>(m["DetachedTime"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskChargeType") != m.end() && !m["DiskChargeType"].empty()) {
      diskChargeType = make_shared<string>(boost::any_cast<string>(m["DiskChargeType"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("EnableAutoSnapshot") != m.end() && !m["EnableAutoSnapshot"].empty()) {
      enableAutoSnapshot = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoSnapshot"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<bool>(boost::any_cast<bool>(m["Encrypted"]));
    }
    if (m.find("IOPS") != m.end() && !m["IOPS"].empty()) {
      IOPS = make_shared<long>(boost::any_cast<long>(m["IOPS"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("MountInstanceNum") != m.end() && !m["MountInstanceNum"].empty()) {
      mountInstanceNum = make_shared<long>(boost::any_cast<long>(m["MountInstanceNum"]));
    }
    if (m.find("MultiAttach") != m.end() && !m["MultiAttach"].empty()) {
      multiAttach = make_shared<string>(boost::any_cast<string>(m["MultiAttach"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Portable") != m.end() && !m["Portable"].empty()) {
      portable = make_shared<bool>(boost::any_cast<bool>(m["Portable"]));
    }
    if (m.find("ProvisionedIops") != m.end() && !m["ProvisionedIops"].empty()) {
      provisionedIops = make_shared<long>(boost::any_cast<long>(m["ProvisionedIops"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SourceSnapshotId") != m.end() && !m["SourceSnapshotId"].empty()) {
      sourceSnapshotId = make_shared<string>(boost::any_cast<string>(m["SourceSnapshotId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageClusterId") != m.end() && !m["StorageClusterId"].empty()) {
      storageClusterId = make_shared<string>(boost::any_cast<string>(m["StorageClusterId"]));
    }
    if (m.find("StorageSetId") != m.end() && !m["StorageSetId"].empty()) {
      storageSetId = make_shared<string>(boost::any_cast<string>(m["StorageSetId"]));
    }
    if (m.find("StorageSetPartitionNumber") != m.end() && !m["StorageSetPartitionNumber"].empty()) {
      storageSetPartitionNumber = make_shared<long>(boost::any_cast<long>(m["StorageSetPartitionNumber"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDiskTags>>(expect1);
      }
    }
    if (m.find("Throughput") != m.end() && !m["Throughput"].empty()) {
      throughput = make_shared<long>(boost::any_cast<long>(m["Throughput"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk() = default;
};
class DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk>> disk{};

  DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks() {}

  explicit DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disk) {
      vector<boost::any> temp1;
      for(auto item1:*disk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disk"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      if (typeid(vector<boost::any>) == m["Disk"].type()) {
        vector<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disk = make_shared<vector<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisksDisk>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks() = default;
};
class DescribeDedicatedBlockStorageClusterDisksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks> disks{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeDedicatedBlockStorageClusterDisksResponseBody() {}

  explicit DescribeDedicatedBlockStorageClusterDisksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disks) {
      res["Disks"] = disks ? boost::any(disks->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Disks"].type()) {
        DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Disks"]));
        disks = make_shared<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks>(model1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBody() = default;
};
class DescribeDedicatedBlockStorageClusterDisksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDedicatedBlockStorageClusterDisksResponseBody> body{};

  DescribeDedicatedBlockStorageClusterDisksResponse() {}

  explicit DescribeDedicatedBlockStorageClusterDisksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDedicatedBlockStorageClusterDisksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedBlockStorageClusterDisksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedBlockStorageClusterDisksResponse() = default;
};
class DescribeDedicatedBlockStorageClustersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDedicatedBlockStorageClustersRequestTag() {}

  explicit DescribeDedicatedBlockStorageClustersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDedicatedBlockStorageClustersRequestTag() = default;
};
class DescribeDedicatedBlockStorageClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> azoneId{};
  shared_ptr<string> category{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> dedicatedBlockStorageClusterId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> status{};
  shared_ptr<vector<DescribeDedicatedBlockStorageClustersRequestTag>> tag{};

  DescribeDedicatedBlockStorageClustersRequest() {}

  explicit DescribeDedicatedBlockStorageClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azoneId) {
      res["AzoneId"] = boost::any(*azoneId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedicatedBlockStorageClusterId) {
      res["DedicatedBlockStorageClusterId"] = boost::any(*dedicatedBlockStorageClusterId);
    }
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
    if (m.find("AzoneId") != m.end() && !m["AzoneId"].empty()) {
      azoneId = make_shared<string>(boost::any_cast<string>(m["AzoneId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedicatedBlockStorageClusterId") != m.end() && !m["DedicatedBlockStorageClusterId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DedicatedBlockStorageClusterId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DedicatedBlockStorageClusterId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dedicatedBlockStorageClusterId = make_shared<vector<string>>(toVec1);
    }
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDedicatedBlockStorageClustersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedBlockStorageClustersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDedicatedBlockStorageClustersRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedBlockStorageClustersRequest() = default;
};
class DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity : public Darabonba::Model {
public:
  shared_ptr<long> availableCapacity{};
  shared_ptr<long> availableDeviceCapacity{};
  shared_ptr<double> availableSpaceCapacity{};
  shared_ptr<long> clusterAvailableCapacity{};
  shared_ptr<long> clusterDeliveryCapacity{};
  shared_ptr<long> deliveryCapacity{};
  shared_ptr<long> totalCapacity{};
  shared_ptr<long> totalDeviceCapacity{};
  shared_ptr<long> totalSpaceCapacity{};
  shared_ptr<long> usedCapacity{};
  shared_ptr<long> usedDeviceCapacity{};
  shared_ptr<double> usedSpaceCapacity{};

  DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity() {}

  explicit DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableCapacity) {
      res["AvailableCapacity"] = boost::any(*availableCapacity);
    }
    if (availableDeviceCapacity) {
      res["AvailableDeviceCapacity"] = boost::any(*availableDeviceCapacity);
    }
    if (availableSpaceCapacity) {
      res["AvailableSpaceCapacity"] = boost::any(*availableSpaceCapacity);
    }
    if (clusterAvailableCapacity) {
      res["ClusterAvailableCapacity"] = boost::any(*clusterAvailableCapacity);
    }
    if (clusterDeliveryCapacity) {
      res["ClusterDeliveryCapacity"] = boost::any(*clusterDeliveryCapacity);
    }
    if (deliveryCapacity) {
      res["DeliveryCapacity"] = boost::any(*deliveryCapacity);
    }
    if (totalCapacity) {
      res["TotalCapacity"] = boost::any(*totalCapacity);
    }
    if (totalDeviceCapacity) {
      res["TotalDeviceCapacity"] = boost::any(*totalDeviceCapacity);
    }
    if (totalSpaceCapacity) {
      res["TotalSpaceCapacity"] = boost::any(*totalSpaceCapacity);
    }
    if (usedCapacity) {
      res["UsedCapacity"] = boost::any(*usedCapacity);
    }
    if (usedDeviceCapacity) {
      res["UsedDeviceCapacity"] = boost::any(*usedDeviceCapacity);
    }
    if (usedSpaceCapacity) {
      res["UsedSpaceCapacity"] = boost::any(*usedSpaceCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableCapacity") != m.end() && !m["AvailableCapacity"].empty()) {
      availableCapacity = make_shared<long>(boost::any_cast<long>(m["AvailableCapacity"]));
    }
    if (m.find("AvailableDeviceCapacity") != m.end() && !m["AvailableDeviceCapacity"].empty()) {
      availableDeviceCapacity = make_shared<long>(boost::any_cast<long>(m["AvailableDeviceCapacity"]));
    }
    if (m.find("AvailableSpaceCapacity") != m.end() && !m["AvailableSpaceCapacity"].empty()) {
      availableSpaceCapacity = make_shared<double>(boost::any_cast<double>(m["AvailableSpaceCapacity"]));
    }
    if (m.find("ClusterAvailableCapacity") != m.end() && !m["ClusterAvailableCapacity"].empty()) {
      clusterAvailableCapacity = make_shared<long>(boost::any_cast<long>(m["ClusterAvailableCapacity"]));
    }
    if (m.find("ClusterDeliveryCapacity") != m.end() && !m["ClusterDeliveryCapacity"].empty()) {
      clusterDeliveryCapacity = make_shared<long>(boost::any_cast<long>(m["ClusterDeliveryCapacity"]));
    }
    if (m.find("DeliveryCapacity") != m.end() && !m["DeliveryCapacity"].empty()) {
      deliveryCapacity = make_shared<long>(boost::any_cast<long>(m["DeliveryCapacity"]));
    }
    if (m.find("TotalCapacity") != m.end() && !m["TotalCapacity"].empty()) {
      totalCapacity = make_shared<long>(boost::any_cast<long>(m["TotalCapacity"]));
    }
    if (m.find("TotalDeviceCapacity") != m.end() && !m["TotalDeviceCapacity"].empty()) {
      totalDeviceCapacity = make_shared<long>(boost::any_cast<long>(m["TotalDeviceCapacity"]));
    }
    if (m.find("TotalSpaceCapacity") != m.end() && !m["TotalSpaceCapacity"].empty()) {
      totalSpaceCapacity = make_shared<long>(boost::any_cast<long>(m["TotalSpaceCapacity"]));
    }
    if (m.find("UsedCapacity") != m.end() && !m["UsedCapacity"].empty()) {
      usedCapacity = make_shared<long>(boost::any_cast<long>(m["UsedCapacity"]));
    }
    if (m.find("UsedDeviceCapacity") != m.end() && !m["UsedDeviceCapacity"].empty()) {
      usedDeviceCapacity = make_shared<long>(boost::any_cast<long>(m["UsedDeviceCapacity"]));
    }
    if (m.find("UsedSpaceCapacity") != m.end() && !m["UsedSpaceCapacity"].empty()) {
      usedSpaceCapacity = make_shared<double>(boost::any_cast<double>(m["UsedSpaceCapacity"]));
    }
  }


  virtual ~DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity() = default;
};
class DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags() {}

  explicit DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags() = default;
};
class DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> category{};
  shared_ptr<string> createTime{};
  shared_ptr<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity> dedicatedBlockStorageClusterCapacity{};
  shared_ptr<string> dedicatedBlockStorageClusterId{};
  shared_ptr<string> dedicatedBlockStorageClusterName{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableThinProvision{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<double> sizeOverSoldRatio{};
  shared_ptr<string> status{};
  shared_ptr<string> storageDomain{};
  shared_ptr<string> supportedCategory{};
  shared_ptr<vector<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters() {}

  explicit DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dedicatedBlockStorageClusterCapacity) {
      res["DedicatedBlockStorageClusterCapacity"] = dedicatedBlockStorageClusterCapacity ? boost::any(dedicatedBlockStorageClusterCapacity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dedicatedBlockStorageClusterId) {
      res["DedicatedBlockStorageClusterId"] = boost::any(*dedicatedBlockStorageClusterId);
    }
    if (dedicatedBlockStorageClusterName) {
      res["DedicatedBlockStorageClusterName"] = boost::any(*dedicatedBlockStorageClusterName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enableThinProvision) {
      res["EnableThinProvision"] = boost::any(*enableThinProvision);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sizeOverSoldRatio) {
      res["SizeOverSoldRatio"] = boost::any(*sizeOverSoldRatio);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageDomain) {
      res["StorageDomain"] = boost::any(*storageDomain);
    }
    if (supportedCategory) {
      res["SupportedCategory"] = boost::any(*supportedCategory);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DedicatedBlockStorageClusterCapacity") != m.end() && !m["DedicatedBlockStorageClusterCapacity"].empty()) {
      if (typeid(map<string, boost::any>) == m["DedicatedBlockStorageClusterCapacity"].type()) {
        DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DedicatedBlockStorageClusterCapacity"]));
        dedicatedBlockStorageClusterCapacity = make_shared<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersDedicatedBlockStorageClusterCapacity>(model1);
      }
    }
    if (m.find("DedicatedBlockStorageClusterId") != m.end() && !m["DedicatedBlockStorageClusterId"].empty()) {
      dedicatedBlockStorageClusterId = make_shared<string>(boost::any_cast<string>(m["DedicatedBlockStorageClusterId"]));
    }
    if (m.find("DedicatedBlockStorageClusterName") != m.end() && !m["DedicatedBlockStorageClusterName"].empty()) {
      dedicatedBlockStorageClusterName = make_shared<string>(boost::any_cast<string>(m["DedicatedBlockStorageClusterName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnableThinProvision") != m.end() && !m["EnableThinProvision"].empty()) {
      enableThinProvision = make_shared<bool>(boost::any_cast<bool>(m["EnableThinProvision"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SizeOverSoldRatio") != m.end() && !m["SizeOverSoldRatio"].empty()) {
      sizeOverSoldRatio = make_shared<double>(boost::any_cast<double>(m["SizeOverSoldRatio"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageDomain") != m.end() && !m["StorageDomain"].empty()) {
      storageDomain = make_shared<string>(boost::any_cast<string>(m["StorageDomain"]));
    }
    if (m.find("SupportedCategory") != m.end() && !m["SupportedCategory"].empty()) {
      supportedCategory = make_shared<string>(boost::any_cast<string>(m["SupportedCategory"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClustersTags>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters() = default;
};
class DescribeDedicatedBlockStorageClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters>> dedicatedBlockStorageClusters{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDedicatedBlockStorageClustersResponseBody() {}

  explicit DescribeDedicatedBlockStorageClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedBlockStorageClusters) {
      vector<boost::any> temp1;
      for(auto item1:*dedicatedBlockStorageClusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DedicatedBlockStorageClusters"] = boost::any(temp1);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedBlockStorageClusters") != m.end() && !m["DedicatedBlockStorageClusters"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicatedBlockStorageClusters"].type()) {
        vector<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicatedBlockStorageClusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicatedBlockStorageClusters = make_shared<vector<DescribeDedicatedBlockStorageClustersResponseBodyDedicatedBlockStorageClusters>>(expect1);
      }
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDedicatedBlockStorageClustersResponseBody() = default;
};
class DescribeDedicatedBlockStorageClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDedicatedBlockStorageClustersResponseBody> body{};

  DescribeDedicatedBlockStorageClustersResponse() {}

  explicit DescribeDedicatedBlockStorageClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDedicatedBlockStorageClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedBlockStorageClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedBlockStorageClustersResponse() = default;
};
class DescribeDiskEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> diskCategory{};
  shared_ptr<string> diskId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};

  DescribeDiskEventsRequest() {}

  explicit DescribeDiskEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDiskEventsRequest() = default;
};
class DescribeDiskEventsResponseBodyDiskEvents : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> diskId{};
  shared_ptr<string> recommendAction{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> timestamp{};
  shared_ptr<string> type{};

  DescribeDiskEventsResponseBodyDiskEvents() {}

  explicit DescribeDiskEventsResponseBodyDiskEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (recommendAction) {
      res["RecommendAction"] = boost::any(*recommendAction);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("RecommendAction") != m.end() && !m["RecommendAction"].empty()) {
      recommendAction = make_shared<string>(boost::any_cast<string>(m["RecommendAction"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDiskEventsResponseBodyDiskEvents() = default;
};
class DescribeDiskEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDiskEventsResponseBodyDiskEvents>> diskEvents{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDiskEventsResponseBody() {}

  explicit DescribeDiskEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskEvents) {
      vector<boost::any> temp1;
      for(auto item1:*diskEvents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiskEvents"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("DiskEvents") != m.end() && !m["DiskEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["DiskEvents"].type()) {
        vector<DescribeDiskEventsResponseBodyDiskEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiskEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskEventsResponseBodyDiskEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        diskEvents = make_shared<vector<DescribeDiskEventsResponseBodyDiskEvents>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDiskEventsResponseBody() = default;
};
class DescribeDiskEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiskEventsResponseBody> body{};

  DescribeDiskEventsResponse() {}

  explicit DescribeDiskEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiskEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskEventsResponse() = default;
};
class DescribeDiskMonitorDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> diskId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};

  DescribeDiskMonitorDataRequest() {}

  explicit DescribeDiskMonitorDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDiskMonitorDataRequest() = default;
};
class DescribeDiskMonitorDataResponseBodyMonitorData : public Darabonba::Model {
public:
  shared_ptr<long> BPSPercent{};
  shared_ptr<long> burstIOCount{};
  shared_ptr<string> diskId{};
  shared_ptr<long> IOPSPercent{};
  shared_ptr<long> readBPS{};
  shared_ptr<long> readBlockSize{};
  shared_ptr<long> readIOPS{};
  shared_ptr<long> readLatency{};
  shared_ptr<string> timestamp{};
  shared_ptr<long> writeBPS{};
  shared_ptr<long> writeBlockSize{};
  shared_ptr<long> writeIOPS{};
  shared_ptr<long> writeLatency{};

  DescribeDiskMonitorDataResponseBodyMonitorData() {}

  explicit DescribeDiskMonitorDataResponseBodyMonitorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (BPSPercent) {
      res["BPSPercent"] = boost::any(*BPSPercent);
    }
    if (burstIOCount) {
      res["BurstIOCount"] = boost::any(*burstIOCount);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (IOPSPercent) {
      res["IOPSPercent"] = boost::any(*IOPSPercent);
    }
    if (readBPS) {
      res["ReadBPS"] = boost::any(*readBPS);
    }
    if (readBlockSize) {
      res["ReadBlockSize"] = boost::any(*readBlockSize);
    }
    if (readIOPS) {
      res["ReadIOPS"] = boost::any(*readIOPS);
    }
    if (readLatency) {
      res["ReadLatency"] = boost::any(*readLatency);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (writeBPS) {
      res["WriteBPS"] = boost::any(*writeBPS);
    }
    if (writeBlockSize) {
      res["WriteBlockSize"] = boost::any(*writeBlockSize);
    }
    if (writeIOPS) {
      res["WriteIOPS"] = boost::any(*writeIOPS);
    }
    if (writeLatency) {
      res["WriteLatency"] = boost::any(*writeLatency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BPSPercent") != m.end() && !m["BPSPercent"].empty()) {
      BPSPercent = make_shared<long>(boost::any_cast<long>(m["BPSPercent"]));
    }
    if (m.find("BurstIOCount") != m.end() && !m["BurstIOCount"].empty()) {
      burstIOCount = make_shared<long>(boost::any_cast<long>(m["BurstIOCount"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("IOPSPercent") != m.end() && !m["IOPSPercent"].empty()) {
      IOPSPercent = make_shared<long>(boost::any_cast<long>(m["IOPSPercent"]));
    }
    if (m.find("ReadBPS") != m.end() && !m["ReadBPS"].empty()) {
      readBPS = make_shared<long>(boost::any_cast<long>(m["ReadBPS"]));
    }
    if (m.find("ReadBlockSize") != m.end() && !m["ReadBlockSize"].empty()) {
      readBlockSize = make_shared<long>(boost::any_cast<long>(m["ReadBlockSize"]));
    }
    if (m.find("ReadIOPS") != m.end() && !m["ReadIOPS"].empty()) {
      readIOPS = make_shared<long>(boost::any_cast<long>(m["ReadIOPS"]));
    }
    if (m.find("ReadLatency") != m.end() && !m["ReadLatency"].empty()) {
      readLatency = make_shared<long>(boost::any_cast<long>(m["ReadLatency"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("WriteBPS") != m.end() && !m["WriteBPS"].empty()) {
      writeBPS = make_shared<long>(boost::any_cast<long>(m["WriteBPS"]));
    }
    if (m.find("WriteBlockSize") != m.end() && !m["WriteBlockSize"].empty()) {
      writeBlockSize = make_shared<long>(boost::any_cast<long>(m["WriteBlockSize"]));
    }
    if (m.find("WriteIOPS") != m.end() && !m["WriteIOPS"].empty()) {
      writeIOPS = make_shared<long>(boost::any_cast<long>(m["WriteIOPS"]));
    }
    if (m.find("WriteLatency") != m.end() && !m["WriteLatency"].empty()) {
      writeLatency = make_shared<long>(boost::any_cast<long>(m["WriteLatency"]));
    }
  }


  virtual ~DescribeDiskMonitorDataResponseBodyMonitorData() = default;
};
class DescribeDiskMonitorDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDiskMonitorDataResponseBodyMonitorData>> monitorData{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDiskMonitorDataResponseBody() {}

  explicit DescribeDiskMonitorDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorData) {
      vector<boost::any> temp1;
      for(auto item1:*monitorData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MonitorData"] = boost::any(temp1);
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
    if (m.find("MonitorData") != m.end() && !m["MonitorData"].empty()) {
      if (typeid(vector<boost::any>) == m["MonitorData"].type()) {
        vector<DescribeDiskMonitorDataResponseBodyMonitorData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MonitorData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskMonitorDataResponseBodyMonitorData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        monitorData = make_shared<vector<DescribeDiskMonitorDataResponseBodyMonitorData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDiskMonitorDataResponseBody() = default;
};
class DescribeDiskMonitorDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiskMonitorDataResponseBody> body{};

  DescribeDiskMonitorDataResponse() {}

  explicit DescribeDiskMonitorDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiskMonitorDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskMonitorDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskMonitorDataResponse() = default;
};
class DescribeDiskMonitorDataListRequest : public Darabonba::Model {
public:
  shared_ptr<string> diskIds{};
  shared_ptr<string> endTime{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};

  DescribeDiskMonitorDataListRequest() {}

  explicit DescribeDiskMonitorDataListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskIds) {
      res["DiskIds"] = boost::any(*diskIds);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskIds") != m.end() && !m["DiskIds"].empty()) {
      diskIds = make_shared<string>(boost::any_cast<string>(m["DiskIds"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDiskMonitorDataListRequest() = default;
};
class DescribeDiskMonitorDataListResponseBodyMonitorData : public Darabonba::Model {
public:
  shared_ptr<long> burstIOCount{};
  shared_ptr<string> diskId{};
  shared_ptr<string> timestamp{};

  DescribeDiskMonitorDataListResponseBodyMonitorData() {}

  explicit DescribeDiskMonitorDataListResponseBodyMonitorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (burstIOCount) {
      res["BurstIOCount"] = boost::any(*burstIOCount);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BurstIOCount") != m.end() && !m["BurstIOCount"].empty()) {
      burstIOCount = make_shared<long>(boost::any_cast<long>(m["BurstIOCount"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~DescribeDiskMonitorDataListResponseBodyMonitorData() = default;
};
class DescribeDiskMonitorDataListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDiskMonitorDataListResponseBodyMonitorData>> monitorData{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDiskMonitorDataListResponseBody() {}

  explicit DescribeDiskMonitorDataListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorData) {
      vector<boost::any> temp1;
      for(auto item1:*monitorData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MonitorData"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("MonitorData") != m.end() && !m["MonitorData"].empty()) {
      if (typeid(vector<boost::any>) == m["MonitorData"].type()) {
        vector<DescribeDiskMonitorDataListResponseBodyMonitorData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MonitorData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskMonitorDataListResponseBodyMonitorData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        monitorData = make_shared<vector<DescribeDiskMonitorDataListResponseBodyMonitorData>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDiskMonitorDataListResponseBody() = default;
};
class DescribeDiskMonitorDataListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiskMonitorDataListResponseBody> body{};

  DescribeDiskMonitorDataListResponse() {}

  explicit DescribeDiskMonitorDataListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiskMonitorDataListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskMonitorDataListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskMonitorDataListResponse() = default;
};
class DescribeDiskReplicaGroupsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDiskReplicaGroupsRequestTag() {}

  explicit DescribeDiskReplicaGroupsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDiskReplicaGroupsRequestTag() = default;
};
class DescribeDiskReplicaGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> site{};
  shared_ptr<vector<DescribeDiskReplicaGroupsRequestTag>> tag{};

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
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
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
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIds = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDiskReplicaGroupsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskReplicaGroupsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDiskReplicaGroupsRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDiskReplicaGroupsRequest() = default;
};
class DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags() {}

  explicit DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags() = default;
};
class DescribeDiskReplicaGroupsResponseBodyReplicaGroups : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
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
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> site{};
  shared_ptr<string> sourceRegionId{};
  shared_ptr<string> sourceZoneId{};
  shared_ptr<string> standbyRegion{};
  shared_ptr<string> standbyZone{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags>> tags{};

  DescribeDiskReplicaGroupsResponseBodyReplicaGroups() {}

  explicit DescribeDiskReplicaGroupsResponseBodyReplicaGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags>>(expect1);
      }
    }
  }


  virtual ~DescribeDiskReplicaGroupsResponseBodyReplicaGroups() = default;
};
class DescribeDiskReplicaGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups>> replicaGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
        DescribeDiskReplicaGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskReplicaGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskReplicaGroupsResponse() = default;
};
class DescribeDiskReplicaPairProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaPairId{};

  DescribeDiskReplicaPairProgressRequest() {}

  explicit DescribeDiskReplicaPairProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaPairId) {
      res["ReplicaPairId"] = boost::any(*replicaPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaPairId") != m.end() && !m["ReplicaPairId"].empty()) {
      replicaPairId = make_shared<string>(boost::any_cast<string>(m["ReplicaPairId"]));
    }
  }


  virtual ~DescribeDiskReplicaPairProgressRequest() = default;
};
class DescribeDiskReplicaPairProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> progress{};
  shared_ptr<long> recoverPoint{};
  shared_ptr<string> requestId{};

  DescribeDiskReplicaPairProgressResponseBody() {}

  explicit DescribeDiskReplicaPairProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (recoverPoint) {
      res["RecoverPoint"] = boost::any(*recoverPoint);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RecoverPoint") != m.end() && !m["RecoverPoint"].empty()) {
      recoverPoint = make_shared<long>(boost::any_cast<long>(m["RecoverPoint"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDiskReplicaPairProgressResponseBody() = default;
};
class DescribeDiskReplicaPairProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiskReplicaPairProgressResponseBody> body{};

  DescribeDiskReplicaPairProgressResponse() {}

  explicit DescribeDiskReplicaPairProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiskReplicaPairProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskReplicaPairProgressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskReplicaPairProgressResponse() = default;
};
class DescribeDiskReplicaPairsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDiskReplicaPairsRequestTag() {}

  explicit DescribeDiskReplicaPairsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDiskReplicaPairsRequestTag() = default;
};
class DescribeDiskReplicaPairsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pairIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaGroupId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> site{};
  shared_ptr<vector<DescribeDiskReplicaPairsRequestTag>> tag{};

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
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDiskReplicaPairsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskReplicaPairsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDiskReplicaPairsRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDiskReplicaPairsRequest() = default;
};
class DescribeDiskReplicaPairsResponseBodyReplicaPairsTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeDiskReplicaPairsResponseBodyReplicaPairsTags() {}

  explicit DescribeDiskReplicaPairsResponseBodyReplicaPairsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDiskReplicaPairsResponseBodyReplicaPairsTags() = default;
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
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> site{};
  shared_ptr<string> sourceDiskId{};
  shared_ptr<string> sourceRegion{};
  shared_ptr<string> sourceZoneId{};
  shared_ptr<string> standbyRegion{};
  shared_ptr<string> standbyZone{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<vector<DescribeDiskReplicaPairsResponseBodyReplicaPairsTags>> tags{};

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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDiskReplicaPairsResponseBodyReplicaPairsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiskReplicaPairsResponseBodyReplicaPairsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDiskReplicaPairsResponseBodyReplicaPairsTags>>(expect1);
      }
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
        DescribeDiskReplicaPairsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiskReplicaPairsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiskReplicaPairsResponse() = default;
};
class DescribeEnterpriseSnapshotPolicyRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeEnterpriseSnapshotPolicyRequestTag() {}

  explicit DescribeEnterpriseSnapshotPolicyRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeEnterpriseSnapshotPolicyRequestTag() = default;
};
class DescribeEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> diskIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> policyIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeEnterpriseSnapshotPolicyRequestTag>> tag{};

  DescribeEnterpriseSnapshotPolicyRequest() {}

  explicit DescribeEnterpriseSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (diskIds) {
      res["DiskIds"] = boost::any(*diskIds);
    }
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
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DiskIds") != m.end() && !m["DiskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskIds = make_shared<vector<string>>(toVec1);
    }
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
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeEnterpriseSnapshotPolicyRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnterpriseSnapshotPolicyRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeEnterpriseSnapshotPolicyRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyRequest() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> retainDays{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainDays) {
      res["RetainDays"] = boost::any(*retainDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainDays") != m.end() && !m["RetainDays"].empty()) {
      retainDays = make_shared<long>(boost::any_cast<long>(m["RetainDays"]));
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions>> regions{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfoRegions>>(expect1);
      }
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule : public Darabonba::Model {
public:
  shared_ptr<long> number{};
  shared_ptr<long> timeInterval{};
  shared_ptr<string> timeUnit{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules : public Darabonba::Model {
public:
  shared_ptr<string> specialPeriodUnit{};
  shared_ptr<long> timeInterval{};
  shared_ptr<string> timeUnit{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialPeriodUnit) {
      res["SpecialPeriodUnit"] = boost::any(*specialPeriodUnit);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialPeriodUnit") != m.end() && !m["SpecialPeriodUnit"].empty()) {
      specialPeriodUnit = make_shared<string>(boost::any_cast<string>(m["SpecialPeriodUnit"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules>> rules{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules>>(expect1);
      }
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule : public Darabonba::Model {
public:
  shared_ptr<bool> enableImmediateAccess{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableImmediateAccess) {
      res["EnableImmediateAccess"] = boost::any(*enableImmediateAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableImmediateAccess") != m.end() && !m["EnableImmediateAccess"].empty()) {
      enableImmediateAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableImmediateAccess"]));
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo> crossRegionCopyInfo{};
  shared_ptr<string> desc{};
  shared_ptr<vector<string>> diskIds{};
  shared_ptr<bool> managedForEcs{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule> retainRule{};
  shared_ptr<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule> schedule{};
  shared_ptr<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules> specialRetainRules{};
  shared_ptr<string> state{};
  shared_ptr<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule> storageRule{};
  shared_ptr<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags>> tags{};
  shared_ptr<long> targetCount{};
  shared_ptr<string> targetType{};

  DescribeEnterpriseSnapshotPolicyResponseBodyPolicies() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossRegionCopyInfo) {
      res["CrossRegionCopyInfo"] = crossRegionCopyInfo ? boost::any(crossRegionCopyInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (diskIds) {
      res["DiskIds"] = boost::any(*diskIds);
    }
    if (managedForEcs) {
      res["ManagedForEcs"] = boost::any(*managedForEcs);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (retainRule) {
      res["RetainRule"] = retainRule ? boost::any(retainRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schedule) {
      res["Schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specialRetainRules) {
      res["SpecialRetainRules"] = specialRetainRules ? boost::any(specialRetainRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (storageRule) {
      res["StorageRule"] = storageRule ? boost::any(storageRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (targetCount) {
      res["TargetCount"] = boost::any(*targetCount);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CrossRegionCopyInfo") != m.end() && !m["CrossRegionCopyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CrossRegionCopyInfo"].type()) {
        DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CrossRegionCopyInfo"]));
        crossRegionCopyInfo = make_shared<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesCrossRegionCopyInfo>(model1);
      }
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("DiskIds") != m.end() && !m["DiskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ManagedForEcs") != m.end() && !m["ManagedForEcs"].empty()) {
      managedForEcs = make_shared<bool>(boost::any_cast<bool>(m["ManagedForEcs"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RetainRule") != m.end() && !m["RetainRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetainRule"].type()) {
        DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetainRule"]));
        retainRule = make_shared<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule>(model1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["Schedule"].type()) {
        DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Schedule"]));
        schedule = make_shared<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule>(model1);
      }
    }
    if (m.find("SpecialRetainRules") != m.end() && !m["SpecialRetainRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpecialRetainRules"].type()) {
        DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpecialRetainRules"]));
        specialRetainRules = make_shared<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules>(model1);
      }
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StorageRule") != m.end() && !m["StorageRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageRule"].type()) {
        DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageRule"]));
        storageRule = make_shared<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesStorageRule>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesTags>>(expect1);
      }
    }
    if (m.find("TargetCount") != m.end() && !m["TargetCount"].empty()) {
      targetCount = make_shared<long>(boost::any_cast<long>(m["TargetCount"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPolicies() = default;
};
class DescribeEnterpriseSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPolicies>> policies{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeEnterpriseSnapshotPolicyResponseBody() {}

  explicit DescribeEnterpriseSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
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
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<DescribeEnterpriseSnapshotPolicyResponseBodyPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnterpriseSnapshotPolicyResponseBodyPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<DescribeEnterpriseSnapshotPolicyResponseBodyPolicies>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponseBody() = default;
};
class DescribeEnterpriseSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEnterpriseSnapshotPolicyResponseBody> body{};

  DescribeEnterpriseSnapshotPolicyResponse() {}

  explicit DescribeEnterpriseSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEnterpriseSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEnterpriseSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEnterpriseSnapshotPolicyResponse() = default;
};
class DescribeEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> eventName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeEventsRequest() {}

  explicit DescribeEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeEventsRequest() = default;
};
class DescribeEventsResponseBodyResourceEvents : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<string> eventLevel{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<string> recommendAction{};
  shared_ptr<string> recommendParams{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeEventsResponseBodyResourceEvents() {}

  explicit DescribeEventsResponseBodyResourceEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (recommendAction) {
      res["RecommendAction"] = boost::any(*recommendAction);
    }
    if (recommendParams) {
      res["RecommendParams"] = boost::any(*recommendParams);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<string>(boost::any_cast<string>(m["EventLevel"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("RecommendAction") != m.end() && !m["RecommendAction"].empty()) {
      recommendAction = make_shared<string>(boost::any_cast<string>(m["RecommendAction"]));
    }
    if (m.find("RecommendParams") != m.end() && !m["RecommendParams"].empty()) {
      recommendParams = make_shared<string>(boost::any_cast<string>(m["RecommendParams"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeEventsResponseBodyResourceEvents() = default;
};
class DescribeEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeEventsResponseBodyResourceEvents>> resourceEvents{};
  shared_ptr<long> totalCount{};

  DescribeEventsResponseBody() {}

  explicit DescribeEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceEvents) {
      vector<boost::any> temp1;
      for(auto item1:*resourceEvents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceEvents"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceEvents") != m.end() && !m["ResourceEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceEvents"].type()) {
        vector<DescribeEventsResponseBodyResourceEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventsResponseBodyResourceEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceEvents = make_shared<vector<DescribeEventsResponseBodyResourceEvents>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeEventsResponseBody() = default;
};
class DescribeEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventsResponseBody> body{};

  DescribeEventsResponse() {}

  explicit DescribeEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponse() = default;
};
class DescribeLensMonitorDisksRequest : public Darabonba::Model {
public:
  shared_ptr<string> diskCategory{};
  shared_ptr<vector<string>> diskIds{};
  shared_ptr<vector<string>> lensTags{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  DescribeLensMonitorDisksRequest() {}

  explicit DescribeLensMonitorDisksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (diskIds) {
      res["DiskIds"] = boost::any(*diskIds);
    }
    if (lensTags) {
      res["LensTags"] = boost::any(*lensTags);
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
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("DiskIds") != m.end() && !m["DiskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LensTags") != m.end() && !m["LensTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LensTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LensTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lensTags = make_shared<vector<string>>(toVec1);
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


  virtual ~DescribeLensMonitorDisksRequest() = default;
};
class DescribeLensMonitorDisksResponseBodyDiskInfosTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeLensMonitorDisksResponseBodyDiskInfosTags() {}

  explicit DescribeLensMonitorDisksResponseBodyDiskInfosTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeLensMonitorDisksResponseBodyDiskInfosTags() = default;
};
class DescribeLensMonitorDisksResponseBodyDiskInfos : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<bool> burstingEnabled{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> diskId{};
  shared_ptr<string> diskName{};
  shared_ptr<string> diskStatus{};
  shared_ptr<string> diskType{};
  shared_ptr<long> iops{};
  shared_ptr<vector<string>> lensTags{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> provisionedIops{};
  shared_ptr<string> regionId{};
  shared_ptr<long> size{};
  shared_ptr<vector<DescribeLensMonitorDisksResponseBodyDiskInfosTags>> tags{};
  shared_ptr<string> zoneId{};

  DescribeLensMonitorDisksResponseBodyDiskInfos() {}

  explicit DescribeLensMonitorDisksResponseBodyDiskInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (burstingEnabled) {
      res["BurstingEnabled"] = boost::any(*burstingEnabled);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (diskStatus) {
      res["DiskStatus"] = boost::any(*diskStatus);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (iops) {
      res["Iops"] = boost::any(*iops);
    }
    if (lensTags) {
      res["LensTags"] = boost::any(*lensTags);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (provisionedIops) {
      res["ProvisionedIops"] = boost::any(*provisionedIops);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("BurstingEnabled") != m.end() && !m["BurstingEnabled"].empty()) {
      burstingEnabled = make_shared<bool>(boost::any_cast<bool>(m["BurstingEnabled"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("DiskStatus") != m.end() && !m["DiskStatus"].empty()) {
      diskStatus = make_shared<string>(boost::any_cast<string>(m["DiskStatus"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Iops") != m.end() && !m["Iops"].empty()) {
      iops = make_shared<long>(boost::any_cast<long>(m["Iops"]));
    }
    if (m.find("LensTags") != m.end() && !m["LensTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LensTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LensTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lensTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("ProvisionedIops") != m.end() && !m["ProvisionedIops"].empty()) {
      provisionedIops = make_shared<long>(boost::any_cast<long>(m["ProvisionedIops"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeLensMonitorDisksResponseBodyDiskInfosTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLensMonitorDisksResponseBodyDiskInfosTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeLensMonitorDisksResponseBodyDiskInfosTags>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeLensMonitorDisksResponseBodyDiskInfos() = default;
};
class DescribeLensMonitorDisksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLensMonitorDisksResponseBodyDiskInfos>> diskInfos{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeLensMonitorDisksResponseBody() {}

  explicit DescribeLensMonitorDisksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskInfos) {
      vector<boost::any> temp1;
      for(auto item1:*diskInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiskInfos"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("DiskInfos") != m.end() && !m["DiskInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DiskInfos"].type()) {
        vector<DescribeLensMonitorDisksResponseBodyDiskInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiskInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLensMonitorDisksResponseBodyDiskInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        diskInfos = make_shared<vector<DescribeLensMonitorDisksResponseBodyDiskInfos>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeLensMonitorDisksResponseBody() = default;
};
class DescribeLensMonitorDisksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLensMonitorDisksResponseBody> body{};

  DescribeLensMonitorDisksResponse() {}

  explicit DescribeLensMonitorDisksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLensMonitorDisksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLensMonitorDisksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLensMonitorDisksResponse() = default;
};
class DescribeLensServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeLensServiceStatusResponseBody() {}

  explicit DescribeLensServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeLensServiceStatusResponseBody() = default;
};
class DescribeLensServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLensServiceStatusResponseBody> body{};

  DescribeLensServiceStatusResponse() {}

  explicit DescribeLensServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLensServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLensServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLensServiceStatusResponse() = default;
};
class DescribeMetricDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggreOps{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> endTime{};
  shared_ptr<string> metricName{};
  shared_ptr<long> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeMetricDataRequest() {}

  explicit DescribeMetricDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggreOps) {
      res["AggreOps"] = boost::any(*aggreOps);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggreOps") != m.end() && !m["AggreOps"].empty()) {
      aggreOps = make_shared<string>(boost::any_cast<string>(m["AggreOps"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeMetricDataRequest() = default;
};
class DescribeMetricDataResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<boost::any> datapoints{};
  shared_ptr<boost::any> labels{};

  DescribeMetricDataResponseBodyDataList() {}

  explicit DescribeMetricDataResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datapoints) {
      res["Datapoints"] = boost::any(*datapoints);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Datapoints") != m.end() && !m["Datapoints"].empty()) {
      datapoints = make_shared<boost::any>(boost::any_cast<boost::any>(m["Datapoints"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<boost::any>(boost::any_cast<boost::any>(m["Labels"]));
    }
  }


  virtual ~DescribeMetricDataResponseBodyDataList() = default;
};
class DescribeMetricDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMetricDataResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeMetricDataResponseBody() {}

  explicit DescribeMetricDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
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
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeMetricDataResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMetricDataResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeMetricDataResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeMetricDataResponseBody() = default;
};
class DescribeMetricDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMetricDataResponseBody> body{};

  DescribeMetricDataResponse() {}

  explicit DescribeMetricDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMetricDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMetricDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMetricDataResponse() = default;
};
class DescribePairDrillsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drillId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pairId{};
  shared_ptr<string> regionId{};

  DescribePairDrillsRequest() {}

  explicit DescribePairDrillsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
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
    if (pairId) {
      res["PairId"] = boost::any(*pairId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
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
    if (m.find("PairId") != m.end() && !m["PairId"].empty()) {
      pairId = make_shared<string>(boost::any_cast<string>(m["PairId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribePairDrillsRequest() = default;
};
class DescribePairDrillsResponseBodyDrills : public Darabonba::Model {
public:
  shared_ptr<string> drillDiskId{};
  shared_ptr<string> drillDiskStatus{};
  shared_ptr<string> drillId{};
  shared_ptr<long> recoverPoint{};
  shared_ptr<long> startAt{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  DescribePairDrillsResponseBodyDrills() {}

  explicit DescribePairDrillsResponseBodyDrills(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillDiskId) {
      res["DrillDiskId"] = boost::any(*drillDiskId);
    }
    if (drillDiskStatus) {
      res["DrillDiskStatus"] = boost::any(*drillDiskStatus);
    }
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
    if (recoverPoint) {
      res["RecoverPoint"] = boost::any(*recoverPoint);
    }
    if (startAt) {
      res["StartAt"] = boost::any(*startAt);
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
    if (m.find("DrillDiskId") != m.end() && !m["DrillDiskId"].empty()) {
      drillDiskId = make_shared<string>(boost::any_cast<string>(m["DrillDiskId"]));
    }
    if (m.find("DrillDiskStatus") != m.end() && !m["DrillDiskStatus"].empty()) {
      drillDiskStatus = make_shared<string>(boost::any_cast<string>(m["DrillDiskStatus"]));
    }
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
    if (m.find("RecoverPoint") != m.end() && !m["RecoverPoint"].empty()) {
      recoverPoint = make_shared<long>(boost::any_cast<long>(m["RecoverPoint"]));
    }
    if (m.find("StartAt") != m.end() && !m["StartAt"].empty()) {
      startAt = make_shared<long>(boost::any_cast<long>(m["StartAt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~DescribePairDrillsResponseBodyDrills() = default;
};
class DescribePairDrillsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePairDrillsResponseBodyDrills>> drills{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribePairDrillsResponseBody() {}

  explicit DescribePairDrillsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drills) {
      vector<boost::any> temp1;
      for(auto item1:*drills){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Drills"] = boost::any(temp1);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Drills") != m.end() && !m["Drills"].empty()) {
      if (typeid(vector<boost::any>) == m["Drills"].type()) {
        vector<DescribePairDrillsResponseBodyDrills> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Drills"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePairDrillsResponseBodyDrills model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        drills = make_shared<vector<DescribePairDrillsResponseBodyDrills>>(expect1);
      }
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePairDrillsResponseBody() = default;
};
class DescribePairDrillsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePairDrillsResponseBody> body{};

  DescribePairDrillsResponse() {}

  explicit DescribePairDrillsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePairDrillsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePairDrillsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePairDrillsResponse() = default;
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
  shared_ptr<vector<string>> resourceTypes{};
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
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
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
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
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
class DescribeReplicaGroupDrillsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drillId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeReplicaGroupDrillsRequest() {}

  explicit DescribeReplicaGroupDrillsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeReplicaGroupDrillsRequest() = default;
};
class DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo : public Darabonba::Model {
public:
  shared_ptr<string> drillDiskId{};
  shared_ptr<string> drillDiskStatus{};
  shared_ptr<string> pairId{};

  DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo() {}

  explicit DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillDiskId) {
      res["DrillDiskId"] = boost::any(*drillDiskId);
    }
    if (drillDiskStatus) {
      res["DrillDiskStatus"] = boost::any(*drillDiskStatus);
    }
    if (pairId) {
      res["PairId"] = boost::any(*pairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrillDiskId") != m.end() && !m["DrillDiskId"].empty()) {
      drillDiskId = make_shared<string>(boost::any_cast<string>(m["DrillDiskId"]));
    }
    if (m.find("DrillDiskStatus") != m.end() && !m["DrillDiskStatus"].empty()) {
      drillDiskStatus = make_shared<string>(boost::any_cast<string>(m["DrillDiskStatus"]));
    }
    if (m.find("PairId") != m.end() && !m["PairId"].empty()) {
      pairId = make_shared<string>(boost::any_cast<string>(m["PairId"]));
    }
  }


  virtual ~DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo() = default;
};
class DescribeReplicaGroupDrillsResponseBodyDrills : public Darabonba::Model {
public:
  shared_ptr<string> drillId{};
  shared_ptr<string> groupId{};
  shared_ptr<vector<DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo>> pairsInfo{};
  shared_ptr<long> recoverPoint{};
  shared_ptr<long> startAt{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};

  DescribeReplicaGroupDrillsResponseBodyDrills() {}

  explicit DescribeReplicaGroupDrillsResponseBodyDrills(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pairsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*pairsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PairsInfo"] = boost::any(temp1);
    }
    if (recoverPoint) {
      res["RecoverPoint"] = boost::any(*recoverPoint);
    }
    if (startAt) {
      res["StartAt"] = boost::any(*startAt);
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
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PairsInfo") != m.end() && !m["PairsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PairsInfo"].type()) {
        vector<DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PairsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pairsInfo = make_shared<vector<DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo>>(expect1);
      }
    }
    if (m.find("RecoverPoint") != m.end() && !m["RecoverPoint"].empty()) {
      recoverPoint = make_shared<long>(boost::any_cast<long>(m["RecoverPoint"]));
    }
    if (m.find("StartAt") != m.end() && !m["StartAt"].empty()) {
      startAt = make_shared<long>(boost::any_cast<long>(m["StartAt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~DescribeReplicaGroupDrillsResponseBodyDrills() = default;
};
class DescribeReplicaGroupDrillsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicaGroupDrillsResponseBodyDrills>> drills{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeReplicaGroupDrillsResponseBody() {}

  explicit DescribeReplicaGroupDrillsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drills) {
      vector<boost::any> temp1;
      for(auto item1:*drills){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Drills"] = boost::any(temp1);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Drills") != m.end() && !m["Drills"].empty()) {
      if (typeid(vector<boost::any>) == m["Drills"].type()) {
        vector<DescribeReplicaGroupDrillsResponseBodyDrills> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Drills"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicaGroupDrillsResponseBodyDrills model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        drills = make_shared<vector<DescribeReplicaGroupDrillsResponseBodyDrills>>(expect1);
      }
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeReplicaGroupDrillsResponseBody() = default;
};
class DescribeReplicaGroupDrillsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeReplicaGroupDrillsResponseBody> body{};

  DescribeReplicaGroupDrillsResponse() {}

  explicit DescribeReplicaGroupDrillsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeReplicaGroupDrillsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeReplicaGroupDrillsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeReplicaGroupDrillsResponse() = default;
};
class DescribeSolutionInstanceConfigurationRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  DescribeSolutionInstanceConfigurationRequestParameters() {}

  explicit DescribeSolutionInstanceConfigurationRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeSolutionInstanceConfigurationRequestParameters() = default;
};
class DescribeSolutionInstanceConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<DescribeSolutionInstanceConfigurationRequestParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> solutionId{};

  DescribeSolutionInstanceConfigurationRequest() {}

  explicit DescribeSolutionInstanceConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<DescribeSolutionInstanceConfigurationRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSolutionInstanceConfigurationRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<DescribeSolutionInstanceConfigurationRequestParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["SolutionId"]));
    }
  }


  virtual ~DescribeSolutionInstanceConfigurationRequest() = default;
};
class DescribeSolutionInstanceConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> requestId{};

  DescribeSolutionInstanceConfigurationResponseBody() {}

  explicit DescribeSolutionInstanceConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSolutionInstanceConfigurationResponseBody() = default;
};
class DescribeSolutionInstanceConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSolutionInstanceConfigurationResponseBody> body{};

  DescribeSolutionInstanceConfigurationResponse() {}

  explicit DescribeSolutionInstanceConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSolutionInstanceConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSolutionInstanceConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSolutionInstanceConfigurationResponse() = default;
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
        FailoverDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FailoverDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~FailoverDiskReplicaPairResponse() = default;
};
class GetReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> reportId{};
  shared_ptr<string> reportType{};

  GetReportRequest() {}

  explicit GetReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
  }


  virtual ~GetReportRequest() = default;
};
class GetReportResponseBodyDatasData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> dataPoints{};
  shared_ptr<map<string, boost::any>> labels{};

  GetReportResponseBodyDatasData() {}

  explicit GetReportResponseBodyDatasData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPoints) {
      res["DataPoints"] = boost::any(*dataPoints);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPoints") != m.end() && !m["DataPoints"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DataPoints"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dataPoints = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetReportResponseBodyDatasData() = default;
};
class GetReportResponseBodyDatas : public Darabonba::Model {
public:
  shared_ptr<vector<GetReportResponseBodyDatasData>> data{};
  shared_ptr<string> title{};

  GetReportResponseBodyDatas() {}

  explicit GetReportResponseBodyDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetReportResponseBodyDatasData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReportResponseBodyDatasData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetReportResponseBodyDatasData>>(expect1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetReportResponseBodyDatas() = default;
};
class GetReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetReportResponseBodyDatas>> datas{};
  shared_ptr<string> requestId{};

  GetReportResponseBody() {}

  explicit GetReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datas) {
      vector<boost::any> temp1;
      for(auto item1:*datas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<GetReportResponseBodyDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReportResponseBodyDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datas = make_shared<vector<GetReportResponseBodyDatas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetReportResponseBody() = default;
};
class GetReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReportResponseBody> body{};

  GetReportResponse() {}

  explicit GetReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetReportResponse() = default;
};
class ListReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListReportsRequest() {}

  explicit ListReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListReportsRequest() = default;
};
class ListReportsResponseBodyHistoryReports : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> reportId{};
  shared_ptr<string> reportName{};
  shared_ptr<string> reportTime{};
  shared_ptr<string> subscribePeriod{};

  ListReportsResponseBodyHistoryReports() {}

  explicit ListReportsResponseBodyHistoryReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (reportName) {
      res["ReportName"] = boost::any(*reportName);
    }
    if (reportTime) {
      res["ReportTime"] = boost::any(*reportTime);
    }
    if (subscribePeriod) {
      res["SubscribePeriod"] = boost::any(*subscribePeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ReportName") != m.end() && !m["ReportName"].empty()) {
      reportName = make_shared<string>(boost::any_cast<string>(m["ReportName"]));
    }
    if (m.find("ReportTime") != m.end() && !m["ReportTime"].empty()) {
      reportTime = make_shared<string>(boost::any_cast<string>(m["ReportTime"]));
    }
    if (m.find("SubscribePeriod") != m.end() && !m["SubscribePeriod"].empty()) {
      subscribePeriod = make_shared<string>(boost::any_cast<string>(m["SubscribePeriod"]));
    }
  }


  virtual ~ListReportsResponseBodyHistoryReports() = default;
};
class ListReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListReportsResponseBodyHistoryReports>> historyReports{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListReportsResponseBody() {}

  explicit ListReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyReports) {
      vector<boost::any> temp1;
      for(auto item1:*historyReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryReports"] = boost::any(temp1);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoryReports") != m.end() && !m["HistoryReports"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryReports"].type()) {
        vector<ListReportsResponseBodyHistoryReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListReportsResponseBodyHistoryReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyReports = make_shared<vector<ListReportsResponseBodyHistoryReports>>(expect1);
      }
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListReportsResponseBody() = default;
};
class ListReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListReportsResponseBody> body{};

  ListReportsResponse() {}

  explicit ListReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListReportsResponse() = default;
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
  shared_ptr<string> clientToken{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

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
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
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
class ModifyDedicatedBlockStorageClusterAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dbscId{};
  shared_ptr<string> dbscName{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};

  ModifyDedicatedBlockStorageClusterAttributeRequest() {}

  explicit ModifyDedicatedBlockStorageClusterAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dbscId) {
      res["DbscId"] = boost::any(*dbscId);
    }
    if (dbscName) {
      res["DbscName"] = boost::any(*dbscName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (m.find("DbscId") != m.end() && !m["DbscId"].empty()) {
      dbscId = make_shared<string>(boost::any_cast<string>(m["DbscId"]));
    }
    if (m.find("DbscName") != m.end() && !m["DbscName"].empty()) {
      dbscName = make_shared<string>(boost::any_cast<string>(m["DbscName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDedicatedBlockStorageClusterAttributeRequest() = default;
};
class ModifyDedicatedBlockStorageClusterAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDedicatedBlockStorageClusterAttributeResponseBody() {}

  explicit ModifyDedicatedBlockStorageClusterAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDedicatedBlockStorageClusterAttributeResponseBody() = default;
};
class ModifyDedicatedBlockStorageClusterAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDedicatedBlockStorageClusterAttributeResponseBody> body{};

  ModifyDedicatedBlockStorageClusterAttributeResponse() {}

  explicit ModifyDedicatedBlockStorageClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDedicatedBlockStorageClusterAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDedicatedBlockStorageClusterAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDedicatedBlockStorageClusterAttributeResponse() = default;
};
class ModifyDiskReplicaGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
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
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
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
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
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
        ModifyDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskReplicaPairResponse() = default;
};
class QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> qosRequestId{};
  shared_ptr<string> regionId{};

  QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest() {}

  explicit QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (qosRequestId) {
      res["QosRequestId"] = boost::any(*qosRequestId);
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
    if (m.find("QosRequestId") != m.end() && !m["QosRequestId"].empty()) {
      qosRequestId = make_shared<string>(boost::any_cast<string>(m["QosRequestId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest() = default;
};
class QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody() {}

  explicit QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody() = default;
};
class QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody> body{};

  QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse() {}

  explicit QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDedicatedBlockStorageClusterDiskThroughputStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse() = default;
};
class QueryDedicatedBlockStorageClusterInventoryDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dbscId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> period{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  QueryDedicatedBlockStorageClusterInventoryDataRequest() {}

  explicit QueryDedicatedBlockStorageClusterInventoryDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dbscId) {
      res["DbscId"] = boost::any(*dbscId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DbscId") != m.end() && !m["DbscId"].empty()) {
      dbscId = make_shared<string>(boost::any_cast<string>(m["DbscId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryDedicatedBlockStorageClusterInventoryDataRequest() = default;
};
class QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems : public Darabonba::Model {
public:
  shared_ptr<long> availableSize{};
  shared_ptr<long> totalSize{};

  QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems() {}

  explicit QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableSize) {
      res["AvailableSize"] = boost::any(*availableSize);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableSize") != m.end() && !m["AvailableSize"].empty()) {
      availableSize = make_shared<long>(boost::any_cast<long>(m["AvailableSize"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems() = default;
};
class QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems> monitorItems{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> timestamp{};

  QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData() {}

  explicit QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorItems) {
      res["MonitorItems"] = monitorItems ? boost::any(monitorItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MonitorItems") != m.end() && !m["MonitorItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorItems"].type()) {
        QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorItems"]));
        monitorItems = make_shared<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData() = default;
};
class QueryDedicatedBlockStorageClusterInventoryDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData>> data{};
  shared_ptr<string> dbscId{};
  shared_ptr<string> dbscName{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryDedicatedBlockStorageClusterInventoryDataResponseBody() {}

  explicit QueryDedicatedBlockStorageClusterInventoryDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbscId) {
      res["DbscId"] = boost::any(*dbscId);
    }
    if (dbscName) {
      res["DbscName"] = boost::any(*dbscName);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
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
        vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData>>(expect1);
      }
    }
    if (m.find("DbscId") != m.end() && !m["DbscId"].empty()) {
      dbscId = make_shared<string>(boost::any_cast<string>(m["DbscId"]));
    }
    if (m.find("DbscName") != m.end() && !m["DbscName"].empty()) {
      dbscName = make_shared<string>(boost::any_cast<string>(m["DbscName"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryDedicatedBlockStorageClusterInventoryDataResponseBody() = default;
};
class QueryDedicatedBlockStorageClusterInventoryDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDedicatedBlockStorageClusterInventoryDataResponseBody> body{};

  QueryDedicatedBlockStorageClusterInventoryDataResponse() {}

  explicit QueryDedicatedBlockStorageClusterInventoryDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDedicatedBlockStorageClusterInventoryDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDedicatedBlockStorageClusterInventoryDataResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDedicatedBlockStorageClusterInventoryDataResponse() = default;
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
  shared_ptr<bool> reverseReplicate{};

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
    if (reverseReplicate) {
      res["ReverseReplicate"] = boost::any(*reverseReplicate);
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
    if (m.find("ReverseReplicate") != m.end() && !m["ReverseReplicate"].empty()) {
      reverseReplicate = make_shared<bool>(boost::any_cast<bool>(m["ReverseReplicate"]));
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
  shared_ptr<bool> reverseReplicate{};

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
    if (reverseReplicate) {
      res["ReverseReplicate"] = boost::any(*reverseReplicate);
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
    if (m.find("ReverseReplicate") != m.end() && !m["ReverseReplicate"].empty()) {
      reverseReplicate = make_shared<bool>(boost::any_cast<bool>(m["ReverseReplicate"]));
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
        ReprotectDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReprotectDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~ReprotectDiskReplicaPairResponse() = default;
};
class SetDedicatedBlockStorageClusterDiskThroughputRequest : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> diskId{};
  shared_ptr<string> regionId{};

  SetDedicatedBlockStorageClusterDiskThroughputRequest() {}

  explicit SetDedicatedBlockStorageClusterDiskThroughputRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SetDedicatedBlockStorageClusterDiskThroughputRequest() = default;
};
class SetDedicatedBlockStorageClusterDiskThroughputResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDedicatedBlockStorageClusterDiskThroughputResponseBody() {}

  explicit SetDedicatedBlockStorageClusterDiskThroughputResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDedicatedBlockStorageClusterDiskThroughputResponseBody() = default;
};
class SetDedicatedBlockStorageClusterDiskThroughputResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDedicatedBlockStorageClusterDiskThroughputResponseBody> body{};

  SetDedicatedBlockStorageClusterDiskThroughputResponse() {}

  explicit SetDedicatedBlockStorageClusterDiskThroughputResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDedicatedBlockStorageClusterDiskThroughputResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDedicatedBlockStorageClusterDiskThroughputResponseBody>(model1);
      }
    }
  }


  virtual ~SetDedicatedBlockStorageClusterDiskThroughputResponse() = default;
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
        StartDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~StartDiskReplicaPairResponse() = default;
};
class StartPairDrillRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> pairId{};
  shared_ptr<string> regionId{};

  StartPairDrillRequest() {}

  explicit StartPairDrillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (pairId) {
      res["PairId"] = boost::any(*pairId);
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
    if (m.find("PairId") != m.end() && !m["PairId"].empty()) {
      pairId = make_shared<string>(boost::any_cast<string>(m["PairId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartPairDrillRequest() = default;
};
class StartPairDrillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> drillId{};
  shared_ptr<string> requestId{};

  StartPairDrillResponseBody() {}

  explicit StartPairDrillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartPairDrillResponseBody() = default;
};
class StartPairDrillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartPairDrillResponseBody> body{};

  StartPairDrillResponse() {}

  explicit StartPairDrillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartPairDrillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartPairDrillResponseBody>(model1);
      }
    }
  }


  virtual ~StartPairDrillResponse() = default;
};
class StartReplicaGroupDrillRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> groupId{};
  shared_ptr<string> regionId{};

  StartReplicaGroupDrillRequest() {}

  explicit StartReplicaGroupDrillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartReplicaGroupDrillRequest() = default;
};
class StartReplicaGroupDrillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> drillId{};
  shared_ptr<string> requestId{};

  StartReplicaGroupDrillResponseBody() {}

  explicit StartReplicaGroupDrillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drillId) {
      res["DrillId"] = boost::any(*drillId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrillId") != m.end() && !m["DrillId"].empty()) {
      drillId = make_shared<string>(boost::any_cast<string>(m["DrillId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartReplicaGroupDrillResponseBody() = default;
};
class StartReplicaGroupDrillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartReplicaGroupDrillResponseBody> body{};

  StartReplicaGroupDrillResponse() {}

  explicit StartReplicaGroupDrillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartReplicaGroupDrillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartReplicaGroupDrillResponseBody>(model1);
      }
    }
  }


  virtual ~StartReplicaGroupDrillResponse() = default;
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
        StopDiskReplicaPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDiskReplicaPairResponseBody>(model1);
      }
    }
  }


  virtual ~StopDiskReplicaPairResponse() = default;
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
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
class UnbindEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> diskTargets{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};

  UnbindEnterpriseSnapshotPolicyRequest() {}

  explicit UnbindEnterpriseSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (diskTargets) {
      res["DiskTargets"] = boost::any(*diskTargets);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
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
    if (m.find("DiskTargets") != m.end() && !m["DiskTargets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskTargets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskTargets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskTargets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UnbindEnterpriseSnapshotPolicyRequest() = default;
};
class UnbindEnterpriseSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindEnterpriseSnapshotPolicyResponseBody() {}

  explicit UnbindEnterpriseSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindEnterpriseSnapshotPolicyResponseBody() = default;
};
class UnbindEnterpriseSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindEnterpriseSnapshotPolicyResponseBody> body{};

  UnbindEnterpriseSnapshotPolicyResponse() {}

  explicit UnbindEnterpriseSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindEnterpriseSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindEnterpriseSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindEnterpriseSnapshotPolicyResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
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
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
class UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> retainDays{};

  UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() {}

  explicit UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainDays) {
      res["RetainDays"] = boost::any(*retainDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainDays") != m.end() && !m["RetainDays"].empty()) {
      retainDays = make_shared<long>(boost::any_cast<long>(m["RetainDays"]));
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions() = default;
};
class UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<vector<UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>> regions{};

  UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() {}

  explicit UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfoRegions>>(expect1);
      }
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo() = default;
};
class UpdateEnterpriseSnapshotPolicyRequestRetainRule : public Darabonba::Model {
public:
  shared_ptr<long> number{};
  shared_ptr<long> timeInterval{};
  shared_ptr<string> timeUnit{};

  UpdateEnterpriseSnapshotPolicyRequestRetainRule() {}

  explicit UpdateEnterpriseSnapshotPolicyRequestRetainRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequestRetainRule() = default;
};
class UpdateEnterpriseSnapshotPolicyRequestSchedule : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};

  UpdateEnterpriseSnapshotPolicyRequestSchedule() {}

  explicit UpdateEnterpriseSnapshotPolicyRequestSchedule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequestSchedule() = default;
};
class UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules : public Darabonba::Model {
public:
  shared_ptr<string> specialPeriodUnit{};
  shared_ptr<long> timeInterval{};
  shared_ptr<string> timeUnit{};

  UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules() {}

  explicit UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialPeriodUnit) {
      res["SpecialPeriodUnit"] = boost::any(*specialPeriodUnit);
    }
    if (timeInterval) {
      res["TimeInterval"] = boost::any(*timeInterval);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialPeriodUnit") != m.end() && !m["SpecialPeriodUnit"].empty()) {
      specialPeriodUnit = make_shared<string>(boost::any_cast<string>(m["SpecialPeriodUnit"]));
    }
    if (m.find("TimeInterval") != m.end() && !m["TimeInterval"].empty()) {
      timeInterval = make_shared<long>(boost::any_cast<long>(m["TimeInterval"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules() = default;
};
class UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<vector<UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules>> rules{};

  UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules() {}

  explicit UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRulesRules>>(expect1);
      }
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules() = default;
};
class UpdateEnterpriseSnapshotPolicyRequestStorageRule : public Darabonba::Model {
public:
  shared_ptr<bool> enableImmediateAccess{};

  UpdateEnterpriseSnapshotPolicyRequestStorageRule() {}

  explicit UpdateEnterpriseSnapshotPolicyRequestStorageRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableImmediateAccess) {
      res["EnableImmediateAccess"] = boost::any(*enableImmediateAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableImmediateAccess") != m.end() && !m["EnableImmediateAccess"].empty()) {
      enableImmediateAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableImmediateAccess"]));
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequestStorageRule() = default;
};
class UpdateEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo> crossRegionCopyInfo{};
  shared_ptr<string> desc{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};
  shared_ptr<UpdateEnterpriseSnapshotPolicyRequestRetainRule> retainRule{};
  shared_ptr<UpdateEnterpriseSnapshotPolicyRequestSchedule> schedule{};
  shared_ptr<UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules> specialRetainRules{};
  shared_ptr<string> state{};
  shared_ptr<UpdateEnterpriseSnapshotPolicyRequestStorageRule> storageRule{};

  UpdateEnterpriseSnapshotPolicyRequest() {}

  explicit UpdateEnterpriseSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossRegionCopyInfo) {
      res["CrossRegionCopyInfo"] = crossRegionCopyInfo ? boost::any(crossRegionCopyInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainRule) {
      res["RetainRule"] = retainRule ? boost::any(retainRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schedule) {
      res["Schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specialRetainRules) {
      res["SpecialRetainRules"] = specialRetainRules ? boost::any(specialRetainRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (storageRule) {
      res["StorageRule"] = storageRule ? boost::any(storageRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossRegionCopyInfo") != m.end() && !m["CrossRegionCopyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CrossRegionCopyInfo"].type()) {
        UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CrossRegionCopyInfo"]));
        crossRegionCopyInfo = make_shared<UpdateEnterpriseSnapshotPolicyRequestCrossRegionCopyInfo>(model1);
      }
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainRule") != m.end() && !m["RetainRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetainRule"].type()) {
        UpdateEnterpriseSnapshotPolicyRequestRetainRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetainRule"]));
        retainRule = make_shared<UpdateEnterpriseSnapshotPolicyRequestRetainRule>(model1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["Schedule"].type()) {
        UpdateEnterpriseSnapshotPolicyRequestSchedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Schedule"]));
        schedule = make_shared<UpdateEnterpriseSnapshotPolicyRequestSchedule>(model1);
      }
    }
    if (m.find("SpecialRetainRules") != m.end() && !m["SpecialRetainRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpecialRetainRules"].type()) {
        UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpecialRetainRules"]));
        specialRetainRules = make_shared<UpdateEnterpriseSnapshotPolicyRequestSpecialRetainRules>(model1);
      }
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StorageRule") != m.end() && !m["StorageRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageRule"].type()) {
        UpdateEnterpriseSnapshotPolicyRequestStorageRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageRule"]));
        storageRule = make_shared<UpdateEnterpriseSnapshotPolicyRequestStorageRule>(model1);
      }
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyRequest() = default;
};
class UpdateEnterpriseSnapshotPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> crossRegionCopyInfoShrink{};
  shared_ptr<string> desc{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> retainRuleShrink{};
  shared_ptr<string> scheduleShrink{};
  shared_ptr<string> specialRetainRulesShrink{};
  shared_ptr<string> state{};
  shared_ptr<string> storageRuleShrink{};

  UpdateEnterpriseSnapshotPolicyShrinkRequest() {}

  explicit UpdateEnterpriseSnapshotPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossRegionCopyInfoShrink) {
      res["CrossRegionCopyInfo"] = boost::any(*crossRegionCopyInfoShrink);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainRuleShrink) {
      res["RetainRule"] = boost::any(*retainRuleShrink);
    }
    if (scheduleShrink) {
      res["Schedule"] = boost::any(*scheduleShrink);
    }
    if (specialRetainRulesShrink) {
      res["SpecialRetainRules"] = boost::any(*specialRetainRulesShrink);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (storageRuleShrink) {
      res["StorageRule"] = boost::any(*storageRuleShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossRegionCopyInfo") != m.end() && !m["CrossRegionCopyInfo"].empty()) {
      crossRegionCopyInfoShrink = make_shared<string>(boost::any_cast<string>(m["CrossRegionCopyInfo"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainRule") != m.end() && !m["RetainRule"].empty()) {
      retainRuleShrink = make_shared<string>(boost::any_cast<string>(m["RetainRule"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      scheduleShrink = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("SpecialRetainRules") != m.end() && !m["SpecialRetainRules"].empty()) {
      specialRetainRulesShrink = make_shared<string>(boost::any_cast<string>(m["SpecialRetainRules"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StorageRule") != m.end() && !m["StorageRule"].empty()) {
      storageRuleShrink = make_shared<string>(boost::any_cast<string>(m["StorageRule"]));
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyShrinkRequest() = default;
};
class UpdateEnterpriseSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateEnterpriseSnapshotPolicyResponseBody() {}

  explicit UpdateEnterpriseSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEnterpriseSnapshotPolicyResponseBody() = default;
};
class UpdateEnterpriseSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnterpriseSnapshotPolicyResponseBody> body{};

  UpdateEnterpriseSnapshotPolicyResponse() {}

  explicit UpdateEnterpriseSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnterpriseSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnterpriseSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnterpriseSnapshotPolicyResponse() = default;
};
class UpdateSolutionInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> solutionInstanceId{};

  UpdateSolutionInstanceAttributeRequest() {}

  explicit UpdateSolutionInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (solutionInstanceId) {
      res["SolutionInstanceId"] = boost::any(*solutionInstanceId);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SolutionInstanceId") != m.end() && !m["SolutionInstanceId"].empty()) {
      solutionInstanceId = make_shared<string>(boost::any_cast<string>(m["SolutionInstanceId"]));
    }
  }


  virtual ~UpdateSolutionInstanceAttributeRequest() = default;
};
class UpdateSolutionInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSolutionInstanceAttributeResponseBody() {}

  explicit UpdateSolutionInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSolutionInstanceAttributeResponseBody() = default;
};
class UpdateSolutionInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSolutionInstanceAttributeResponseBody> body{};

  UpdateSolutionInstanceAttributeResponse() {}

  explicit UpdateSolutionInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSolutionInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSolutionInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSolutionInstanceAttributeResponse() = default;
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
  ApplyLensServiceResponse applyLensServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyLensServiceResponse applyLensService();
  BindEnterpriseSnapshotPolicyResponse bindEnterpriseSnapshotPolicyWithOptions(shared_ptr<BindEnterpriseSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindEnterpriseSnapshotPolicyResponse bindEnterpriseSnapshotPolicy(shared_ptr<BindEnterpriseSnapshotPolicyRequest> request);
  CancelLensServiceResponse cancelLensServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelLensServiceResponse cancelLensService();
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  ClearPairDrillResponse clearPairDrillWithOptions(shared_ptr<ClearPairDrillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearPairDrillResponse clearPairDrill(shared_ptr<ClearPairDrillRequest> request);
  ClearReplicaGroupDrillResponse clearReplicaGroupDrillWithOptions(shared_ptr<ClearReplicaGroupDrillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearReplicaGroupDrillResponse clearReplicaGroupDrill(shared_ptr<ClearReplicaGroupDrillRequest> request);
  CreateDedicatedBlockStorageClusterResponse createDedicatedBlockStorageClusterWithOptions(shared_ptr<CreateDedicatedBlockStorageClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDedicatedBlockStorageClusterResponse createDedicatedBlockStorageCluster(shared_ptr<CreateDedicatedBlockStorageClusterRequest> request);
  CreateDiskReplicaGroupResponse createDiskReplicaGroupWithOptions(shared_ptr<CreateDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDiskReplicaGroupResponse createDiskReplicaGroup(shared_ptr<CreateDiskReplicaGroupRequest> request);
  CreateDiskReplicaPairResponse createDiskReplicaPairWithOptions(shared_ptr<CreateDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDiskReplicaPairResponse createDiskReplicaPair(shared_ptr<CreateDiskReplicaPairRequest> request);
  CreateEnterpriseSnapshotPolicyResponse createEnterpriseSnapshotPolicyWithOptions(shared_ptr<CreateEnterpriseSnapshotPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEnterpriseSnapshotPolicyResponse createEnterpriseSnapshotPolicy(shared_ptr<CreateEnterpriseSnapshotPolicyRequest> request);
  DeleteDiskReplicaGroupResponse deleteDiskReplicaGroupWithOptions(shared_ptr<DeleteDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDiskReplicaGroupResponse deleteDiskReplicaGroup(shared_ptr<DeleteDiskReplicaGroupRequest> request);
  DeleteDiskReplicaPairResponse deleteDiskReplicaPairWithOptions(shared_ptr<DeleteDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDiskReplicaPairResponse deleteDiskReplicaPair(shared_ptr<DeleteDiskReplicaPairRequest> request);
  DeleteEnterpriseSnapshotPolicyResponse deleteEnterpriseSnapshotPolicyWithOptions(shared_ptr<DeleteEnterpriseSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnterpriseSnapshotPolicyResponse deleteEnterpriseSnapshotPolicy(shared_ptr<DeleteEnterpriseSnapshotPolicyRequest> request);
  DescribeDedicatedBlockStorageClusterDisksResponse describeDedicatedBlockStorageClusterDisksWithOptions(shared_ptr<DescribeDedicatedBlockStorageClusterDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedBlockStorageClusterDisksResponse describeDedicatedBlockStorageClusterDisks(shared_ptr<DescribeDedicatedBlockStorageClusterDisksRequest> request);
  DescribeDedicatedBlockStorageClustersResponse describeDedicatedBlockStorageClustersWithOptions(shared_ptr<DescribeDedicatedBlockStorageClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedBlockStorageClustersResponse describeDedicatedBlockStorageClusters(shared_ptr<DescribeDedicatedBlockStorageClustersRequest> request);
  DescribeDiskEventsResponse describeDiskEventsWithOptions(shared_ptr<DescribeDiskEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskEventsResponse describeDiskEvents(shared_ptr<DescribeDiskEventsRequest> request);
  DescribeDiskMonitorDataResponse describeDiskMonitorDataWithOptions(shared_ptr<DescribeDiskMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskMonitorDataResponse describeDiskMonitorData(shared_ptr<DescribeDiskMonitorDataRequest> request);
  DescribeDiskMonitorDataListResponse describeDiskMonitorDataListWithOptions(shared_ptr<DescribeDiskMonitorDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskMonitorDataListResponse describeDiskMonitorDataList(shared_ptr<DescribeDiskMonitorDataListRequest> request);
  DescribeDiskReplicaGroupsResponse describeDiskReplicaGroupsWithOptions(shared_ptr<DescribeDiskReplicaGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskReplicaGroupsResponse describeDiskReplicaGroups(shared_ptr<DescribeDiskReplicaGroupsRequest> request);
  DescribeDiskReplicaPairProgressResponse describeDiskReplicaPairProgressWithOptions(shared_ptr<DescribeDiskReplicaPairProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskReplicaPairProgressResponse describeDiskReplicaPairProgress(shared_ptr<DescribeDiskReplicaPairProgressRequest> request);
  DescribeDiskReplicaPairsResponse describeDiskReplicaPairsWithOptions(shared_ptr<DescribeDiskReplicaPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiskReplicaPairsResponse describeDiskReplicaPairs(shared_ptr<DescribeDiskReplicaPairsRequest> request);
  DescribeEnterpriseSnapshotPolicyResponse describeEnterpriseSnapshotPolicyWithOptions(shared_ptr<DescribeEnterpriseSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEnterpriseSnapshotPolicyResponse describeEnterpriseSnapshotPolicy(shared_ptr<DescribeEnterpriseSnapshotPolicyRequest> request);
  DescribeEventsResponse describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventsResponse describeEvents(shared_ptr<DescribeEventsRequest> request);
  DescribeLensMonitorDisksResponse describeLensMonitorDisksWithOptions(shared_ptr<DescribeLensMonitorDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLensMonitorDisksResponse describeLensMonitorDisks(shared_ptr<DescribeLensMonitorDisksRequest> request);
  DescribeLensServiceStatusResponse describeLensServiceStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLensServiceStatusResponse describeLensServiceStatus();
  DescribeMetricDataResponse describeMetricDataWithOptions(shared_ptr<DescribeMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMetricDataResponse describeMetricData(shared_ptr<DescribeMetricDataRequest> request);
  DescribePairDrillsResponse describePairDrillsWithOptions(shared_ptr<DescribePairDrillsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePairDrillsResponse describePairDrills(shared_ptr<DescribePairDrillsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeReplicaGroupDrillsResponse describeReplicaGroupDrillsWithOptions(shared_ptr<DescribeReplicaGroupDrillsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeReplicaGroupDrillsResponse describeReplicaGroupDrills(shared_ptr<DescribeReplicaGroupDrillsRequest> request);
  DescribeSolutionInstanceConfigurationResponse describeSolutionInstanceConfigurationWithOptions(shared_ptr<DescribeSolutionInstanceConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSolutionInstanceConfigurationResponse describeSolutionInstanceConfiguration(shared_ptr<DescribeSolutionInstanceConfigurationRequest> request);
  FailoverDiskReplicaGroupResponse failoverDiskReplicaGroupWithOptions(shared_ptr<FailoverDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FailoverDiskReplicaGroupResponse failoverDiskReplicaGroup(shared_ptr<FailoverDiskReplicaGroupRequest> request);
  FailoverDiskReplicaPairResponse failoverDiskReplicaPairWithOptions(shared_ptr<FailoverDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FailoverDiskReplicaPairResponse failoverDiskReplicaPair(shared_ptr<FailoverDiskReplicaPairRequest> request);
  GetReportResponse getReportWithOptions(shared_ptr<GetReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReportResponse getReport(shared_ptr<GetReportRequest> request);
  ListReportsResponse listReportsWithOptions(shared_ptr<ListReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListReportsResponse listReports(shared_ptr<ListReportsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyDedicatedBlockStorageClusterAttributeResponse modifyDedicatedBlockStorageClusterAttributeWithOptions(shared_ptr<ModifyDedicatedBlockStorageClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedBlockStorageClusterAttributeResponse modifyDedicatedBlockStorageClusterAttribute(shared_ptr<ModifyDedicatedBlockStorageClusterAttributeRequest> request);
  ModifyDiskReplicaGroupResponse modifyDiskReplicaGroupWithOptions(shared_ptr<ModifyDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskReplicaGroupResponse modifyDiskReplicaGroup(shared_ptr<ModifyDiskReplicaGroupRequest> request);
  ModifyDiskReplicaPairResponse modifyDiskReplicaPairWithOptions(shared_ptr<ModifyDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskReplicaPairResponse modifyDiskReplicaPair(shared_ptr<ModifyDiskReplicaPairRequest> request);
  QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse queryDedicatedBlockStorageClusterDiskThroughputStatusWithOptions(shared_ptr<QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDedicatedBlockStorageClusterDiskThroughputStatusResponse queryDedicatedBlockStorageClusterDiskThroughputStatus(shared_ptr<QueryDedicatedBlockStorageClusterDiskThroughputStatusRequest> request);
  QueryDedicatedBlockStorageClusterInventoryDataResponse queryDedicatedBlockStorageClusterInventoryDataWithOptions(shared_ptr<QueryDedicatedBlockStorageClusterInventoryDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDedicatedBlockStorageClusterInventoryDataResponse queryDedicatedBlockStorageClusterInventoryData(shared_ptr<QueryDedicatedBlockStorageClusterInventoryDataRequest> request);
  RemoveDiskReplicaPairResponse removeDiskReplicaPairWithOptions(shared_ptr<RemoveDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDiskReplicaPairResponse removeDiskReplicaPair(shared_ptr<RemoveDiskReplicaPairRequest> request);
  ReprotectDiskReplicaGroupResponse reprotectDiskReplicaGroupWithOptions(shared_ptr<ReprotectDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReprotectDiskReplicaGroupResponse reprotectDiskReplicaGroup(shared_ptr<ReprotectDiskReplicaGroupRequest> request);
  ReprotectDiskReplicaPairResponse reprotectDiskReplicaPairWithOptions(shared_ptr<ReprotectDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReprotectDiskReplicaPairResponse reprotectDiskReplicaPair(shared_ptr<ReprotectDiskReplicaPairRequest> request);
  SetDedicatedBlockStorageClusterDiskThroughputResponse setDedicatedBlockStorageClusterDiskThroughputWithOptions(shared_ptr<SetDedicatedBlockStorageClusterDiskThroughputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDedicatedBlockStorageClusterDiskThroughputResponse setDedicatedBlockStorageClusterDiskThroughput(shared_ptr<SetDedicatedBlockStorageClusterDiskThroughputRequest> request);
  StartDiskReplicaGroupResponse startDiskReplicaGroupWithOptions(shared_ptr<StartDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDiskReplicaGroupResponse startDiskReplicaGroup(shared_ptr<StartDiskReplicaGroupRequest> request);
  StartDiskReplicaPairResponse startDiskReplicaPairWithOptions(shared_ptr<StartDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDiskReplicaPairResponse startDiskReplicaPair(shared_ptr<StartDiskReplicaPairRequest> request);
  StartPairDrillResponse startPairDrillWithOptions(shared_ptr<StartPairDrillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartPairDrillResponse startPairDrill(shared_ptr<StartPairDrillRequest> request);
  StartReplicaGroupDrillResponse startReplicaGroupDrillWithOptions(shared_ptr<StartReplicaGroupDrillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartReplicaGroupDrillResponse startReplicaGroupDrill(shared_ptr<StartReplicaGroupDrillRequest> request);
  StopDiskReplicaGroupResponse stopDiskReplicaGroupWithOptions(shared_ptr<StopDiskReplicaGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDiskReplicaGroupResponse stopDiskReplicaGroup(shared_ptr<StopDiskReplicaGroupRequest> request);
  StopDiskReplicaPairResponse stopDiskReplicaPairWithOptions(shared_ptr<StopDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDiskReplicaPairResponse stopDiskReplicaPair(shared_ptr<StopDiskReplicaPairRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnbindEnterpriseSnapshotPolicyResponse unbindEnterpriseSnapshotPolicyWithOptions(shared_ptr<UnbindEnterpriseSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindEnterpriseSnapshotPolicyResponse unbindEnterpriseSnapshotPolicy(shared_ptr<UnbindEnterpriseSnapshotPolicyRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateEnterpriseSnapshotPolicyResponse updateEnterpriseSnapshotPolicyWithOptions(shared_ptr<UpdateEnterpriseSnapshotPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnterpriseSnapshotPolicyResponse updateEnterpriseSnapshotPolicy(shared_ptr<UpdateEnterpriseSnapshotPolicyRequest> request);
  UpdateSolutionInstanceAttributeResponse updateSolutionInstanceAttributeWithOptions(shared_ptr<UpdateSolutionInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSolutionInstanceAttributeResponse updateSolutionInstanceAttribute(shared_ptr<UpdateSolutionInstanceAttributeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ebs20210730

#endif
