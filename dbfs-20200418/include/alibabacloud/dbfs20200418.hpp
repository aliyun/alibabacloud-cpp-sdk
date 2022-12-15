// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DBFS20200418_H_
#define ALIBABACLOUD_DBFS20200418_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_DBFS20200418 {
class AddTagsBatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dbfsList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tags{};

  AddTagsBatchRequest() {}

  explicit AddTagsBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dbfsList) {
      res["DbfsList"] = boost::any(*dbfsList);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DbfsList") != m.end() && !m["DbfsList"].empty()) {
      dbfsList = make_shared<string>(boost::any_cast<string>(m["DbfsList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AddTagsBatchRequest() = default;
};
class AddTagsBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddTagsBatchResponseBody() {}

  explicit AddTagsBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddTagsBatchResponseBody() = default;
};
class AddTagsBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTagsBatchResponseBody> body{};

  AddTagsBatchResponse() {}

  explicit AddTagsBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddTagsBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTagsBatchResponseBody>(model1);
      }
    }
  }


  virtual ~AddTagsBatchResponse() = default;
};
class AttachDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> attachMode{};
  shared_ptr<string> attachPoint{};
  shared_ptr<string> ECSInstanceId{};
  shared_ptr<string> fsId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverUrl{};

  AttachDbfsRequest() {}

  explicit AttachDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachMode) {
      res["AttachMode"] = boost::any(*attachMode);
    }
    if (attachPoint) {
      res["AttachPoint"] = boost::any(*attachPoint);
    }
    if (ECSInstanceId) {
      res["ECSInstanceId"] = boost::any(*ECSInstanceId);
    }
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverUrl) {
      res["ServerUrl"] = boost::any(*serverUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachMode") != m.end() && !m["AttachMode"].empty()) {
      attachMode = make_shared<string>(boost::any_cast<string>(m["AttachMode"]));
    }
    if (m.find("AttachPoint") != m.end() && !m["AttachPoint"].empty()) {
      attachPoint = make_shared<string>(boost::any_cast<string>(m["AttachPoint"]));
    }
    if (m.find("ECSInstanceId") != m.end() && !m["ECSInstanceId"].empty()) {
      ECSInstanceId = make_shared<string>(boost::any_cast<string>(m["ECSInstanceId"]));
    }
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerUrl") != m.end() && !m["ServerUrl"].empty()) {
      serverUrl = make_shared<string>(boost::any_cast<string>(m["ServerUrl"]));
    }
  }


  virtual ~AttachDbfsRequest() = default;
};
class AttachDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachDbfsResponseBody() {}

  explicit AttachDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachDbfsResponseBody() = default;
};
class AttachDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachDbfsResponseBody> body{};

  AttachDbfsResponse() {}

  explicit AttachDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~AttachDbfsResponse() = default;
};
class CancelAutoSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dbfsIds{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};

  CancelAutoSnapshotPolicyRequest() {}

  explicit CancelAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbfsIds) {
      res["DbfsIds"] = boost::any(*dbfsIds);
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
    if (m.find("DbfsIds") != m.end() && !m["DbfsIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbfsIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbfsIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbfsIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CancelAutoSnapshotPolicyRequest() = default;
};
class CancelAutoSnapshotPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbfsIdsShrink{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};

  CancelAutoSnapshotPolicyShrinkRequest() {}

  explicit CancelAutoSnapshotPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbfsIdsShrink) {
      res["DbfsIds"] = boost::any(*dbfsIdsShrink);
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
    if (m.find("DbfsIds") != m.end() && !m["DbfsIds"].empty()) {
      dbfsIdsShrink = make_shared<string>(boost::any_cast<string>(m["DbfsIds"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CancelAutoSnapshotPolicyShrinkRequest() = default;
};
class CancelAutoSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelAutoSnapshotPolicyResponseBody() {}

  explicit CancelAutoSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelAutoSnapshotPolicyResponseBody() = default;
};
class CancelAutoSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelAutoSnapshotPolicyResponseBody> body{};

  CancelAutoSnapshotPolicyResponse() {}

  explicit CancelAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelAutoSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelAutoSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CancelAutoSnapshotPolicyResponse() = default;
};
class CreateAutoSnapshotPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> repeatWeekdays{};
  shared_ptr<long> retentionDays{};
  shared_ptr<vector<string>> timePoints{};

  CreateAutoSnapshotPolicyRequest() {}

  explicit CreateAutoSnapshotPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repeatWeekdays) {
      res["RepeatWeekdays"] = boost::any(*repeatWeekdays);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (timePoints) {
      res["TimePoints"] = boost::any(*timePoints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepeatWeekdays") != m.end() && !m["RepeatWeekdays"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatWeekdays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatWeekdays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatWeekdays = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("TimePoints") != m.end() && !m["TimePoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TimePoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TimePoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      timePoints = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAutoSnapshotPolicyRequest() = default;
};
class CreateAutoSnapshotPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repeatWeekdaysShrink{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> timePointsShrink{};

  CreateAutoSnapshotPolicyShrinkRequest() {}

  explicit CreateAutoSnapshotPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repeatWeekdaysShrink) {
      res["RepeatWeekdays"] = boost::any(*repeatWeekdaysShrink);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (timePointsShrink) {
      res["TimePoints"] = boost::any(*timePointsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepeatWeekdays") != m.end() && !m["RepeatWeekdays"].empty()) {
      repeatWeekdaysShrink = make_shared<string>(boost::any_cast<string>(m["RepeatWeekdays"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("TimePoints") != m.end() && !m["TimePoints"].empty()) {
      timePointsShrink = make_shared<string>(boost::any_cast<string>(m["TimePoints"]));
    }
  }


  virtual ~CreateAutoSnapshotPolicyShrinkRequest() = default;
};
class CreateAutoSnapshotPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> requestId{};

  CreateAutoSnapshotPolicyResponseBody() {}

  explicit CreateAutoSnapshotPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAutoSnapshotPolicyResponseBody() = default;
};
class CreateAutoSnapshotPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAutoSnapshotPolicyResponseBody> body{};

  CreateAutoSnapshotPolicyResponse() {}

  explicit CreateAutoSnapshotPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAutoSnapshotPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAutoSnapshotPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAutoSnapshotPolicyResponse() = default;
};
class CreateDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> advancedFeatures{};
  shared_ptr<string> category{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> deleteSnapshot{};
  shared_ptr<bool> enableRaid{};
  shared_ptr<bool> encryption{};
  shared_ptr<string> fsName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> raidStripeUnitNumber{};
  shared_ptr<string> regionId{};
  shared_ptr<long> sizeG{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> usedScene{};
  shared_ptr<string> zoneId{};

  CreateDbfsRequest() {}

  explicit CreateDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedFeatures) {
      res["AdvancedFeatures"] = boost::any(*advancedFeatures);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deleteSnapshot) {
      res["DeleteSnapshot"] = boost::any(*deleteSnapshot);
    }
    if (enableRaid) {
      res["EnableRaid"] = boost::any(*enableRaid);
    }
    if (encryption) {
      res["Encryption"] = boost::any(*encryption);
    }
    if (fsName) {
      res["FsName"] = boost::any(*fsName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (raidStripeUnitNumber) {
      res["RaidStripeUnitNumber"] = boost::any(*raidStripeUnitNumber);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sizeG) {
      res["SizeG"] = boost::any(*sizeG);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (usedScene) {
      res["UsedScene"] = boost::any(*usedScene);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedFeatures") != m.end() && !m["AdvancedFeatures"].empty()) {
      advancedFeatures = make_shared<string>(boost::any_cast<string>(m["AdvancedFeatures"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeleteSnapshot") != m.end() && !m["DeleteSnapshot"].empty()) {
      deleteSnapshot = make_shared<bool>(boost::any_cast<bool>(m["DeleteSnapshot"]));
    }
    if (m.find("EnableRaid") != m.end() && !m["EnableRaid"].empty()) {
      enableRaid = make_shared<bool>(boost::any_cast<bool>(m["EnableRaid"]));
    }
    if (m.find("Encryption") != m.end() && !m["Encryption"].empty()) {
      encryption = make_shared<bool>(boost::any_cast<bool>(m["Encryption"]));
    }
    if (m.find("FsName") != m.end() && !m["FsName"].empty()) {
      fsName = make_shared<string>(boost::any_cast<string>(m["FsName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("RaidStripeUnitNumber") != m.end() && !m["RaidStripeUnitNumber"].empty()) {
      raidStripeUnitNumber = make_shared<long>(boost::any_cast<long>(m["RaidStripeUnitNumber"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SizeG") != m.end() && !m["SizeG"].empty()) {
      sizeG = make_shared<long>(boost::any_cast<long>(m["SizeG"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("UsedScene") != m.end() && !m["UsedScene"].empty()) {
      usedScene = make_shared<string>(boost::any_cast<string>(m["UsedScene"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDbfsRequest() = default;
};
class CreateDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fsId{};
  shared_ptr<string> requestId{};

  CreateDbfsResponseBody() {}

  explicit CreateDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDbfsResponseBody() = default;
};
class CreateDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDbfsResponseBody> body{};

  CreateDbfsResponse() {}

  explicit CreateDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDbfsResponse() = default;
};
class CreateServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};

  CreateServiceLinkedRoleRequest() {}

  explicit CreateServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateServiceLinkedRoleRequest() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceLinkedRoleResponseBody() {}

  explicit CreateServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceLinkedRoleResponseBody() = default;
};
class CreateServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
};
class CreateSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> fsId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> snapshotName{};

  CreateSnapshotRequest() {}

  explicit CreateSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
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
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
  }


  virtual ~CreateSnapshotRequest() = default;
};
class CreateSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};

  CreateSnapshotResponseBody() {}

  explicit CreateSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~CreateSnapshotResponseBody() = default;
};
class CreateSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSnapshotResponseBody> body{};

  CreateSnapshotResponse() {}

  explicit CreateSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSnapshotResponse() = default;
};
class DeleteDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fsId{};
  shared_ptr<string> regionId{};

  DeleteDbfsRequest() {}

  explicit DeleteDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDbfsRequest() = default;
};
class DeleteDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDbfsResponseBody() {}

  explicit DeleteDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDbfsResponseBody() = default;
};
class DeleteDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDbfsResponseBody> body{};

  DeleteDbfsResponse() {}

  explicit DeleteDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDbfsResponse() = default;
};
class DeleteSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<bool> force{};
  shared_ptr<string> regionId{};
  shared_ptr<string> snapshotId{};

  DeleteSnapshotRequest() {}

  explicit DeleteSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~DeleteSnapshotRequest() = default;
};
class DeleteSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSnapshotResponseBody() {}

  explicit DeleteSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSnapshotResponseBody() = default;
};
class DeleteSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSnapshotResponseBody> body{};

  DeleteSnapshotResponse() {}

  explicit DeleteSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSnapshotResponse() = default;
};
class DeleteTagsBatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbfsList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tags{};

  DeleteTagsBatchRequest() {}

  explicit DeleteTagsBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbfsList) {
      res["DbfsList"] = boost::any(*dbfsList);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbfsList") != m.end() && !m["DbfsList"].empty()) {
      dbfsList = make_shared<string>(boost::any_cast<string>(m["DbfsList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~DeleteTagsBatchRequest() = default;
};
class DeleteTagsBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTagsBatchResponseBody() {}

  explicit DeleteTagsBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTagsBatchResponseBody() = default;
};
class DeleteTagsBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTagsBatchResponseBody> body{};

  DeleteTagsBatchResponse() {}

  explicit DeleteTagsBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTagsBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTagsBatchResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTagsBatchResponse() = default;
};
class DescribeDbfsSpecificationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> ecsInstanceType{};
  shared_ptr<string> regionId{};

  DescribeDbfsSpecificationsRequest() {}

  explicit DescribeDbfsSpecificationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (ecsInstanceType) {
      res["EcsInstanceType"] = boost::any(*ecsInstanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("EcsInstanceType") != m.end() && !m["EcsInstanceType"].empty()) {
      ecsInstanceType = make_shared<string>(boost::any_cast<string>(m["EcsInstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDbfsSpecificationsRequest() = default;
};
class DescribeDbfsSpecificationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> maxDbfsNumberPerEcs{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> supportedEcsInstanceTypeFamily{};

  DescribeDbfsSpecificationsResponseBody() {}

  explicit DescribeDbfsSpecificationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxDbfsNumberPerEcs) {
      res["MaxDbfsNumberPerEcs"] = boost::any(*maxDbfsNumberPerEcs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supportedEcsInstanceTypeFamily) {
      res["SupportedEcsInstanceTypeFamily"] = boost::any(*supportedEcsInstanceTypeFamily);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxDbfsNumberPerEcs") != m.end() && !m["MaxDbfsNumberPerEcs"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["MaxDbfsNumberPerEcs"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      maxDbfsNumberPerEcs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupportedEcsInstanceTypeFamily") != m.end() && !m["SupportedEcsInstanceTypeFamily"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedEcsInstanceTypeFamily"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedEcsInstanceTypeFamily"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedEcsInstanceTypeFamily = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDbfsSpecificationsResponseBody() = default;
};
class DescribeDbfsSpecificationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDbfsSpecificationsResponseBody> body{};

  DescribeDbfsSpecificationsResponse() {}

  explicit DescribeDbfsSpecificationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDbfsSpecificationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDbfsSpecificationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDbfsSpecificationsResponse() = default;
};
class DescribeInstanceTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeInstanceTypesRequest() {}

  explicit DescribeInstanceTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceTypesRequest() = default;
};
class DescribeInstanceTypesResponseBodyInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<double> cpuCoreCount{};
  shared_ptr<string> instanceTypeDescription{};
  shared_ptr<string> instanceTypeId{};
  shared_ptr<double> memorySize{};

  DescribeInstanceTypesResponseBodyInstanceTypes() {}

  explicit DescribeInstanceTypesResponseBodyInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreCount) {
      res["CpuCoreCount"] = boost::any(*cpuCoreCount);
    }
    if (instanceTypeDescription) {
      res["InstanceTypeDescription"] = boost::any(*instanceTypeDescription);
    }
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCoreCount") != m.end() && !m["CpuCoreCount"].empty()) {
      cpuCoreCount = make_shared<double>(boost::any_cast<double>(m["CpuCoreCount"]));
    }
    if (m.find("InstanceTypeDescription") != m.end() && !m["InstanceTypeDescription"].empty()) {
      instanceTypeDescription = make_shared<string>(boost::any_cast<string>(m["InstanceTypeDescription"]));
    }
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      instanceTypeId = make_shared<string>(boost::any_cast<string>(m["InstanceTypeId"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<double>(boost::any_cast<double>(m["MemorySize"]));
    }
  }


  virtual ~DescribeInstanceTypesResponseBodyInstanceTypes() = default;
};
class DescribeInstanceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceTypesResponseBodyInstanceTypes>> instanceTypes{};
  shared_ptr<string> requestId{};

  DescribeInstanceTypesResponseBody() {}

  explicit DescribeInstanceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<DescribeInstanceTypesResponseBodyInstanceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceTypesResponseBodyInstanceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypes = make_shared<vector<DescribeInstanceTypesResponseBodyInstanceTypes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceTypesResponseBody() = default;
};
class DescribeInstanceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceTypesResponseBody> body{};

  DescribeInstanceTypesResponse() {}

  explicit DescribeInstanceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceTypesResponse() = default;
};
class DetachDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ECSInstanceId{};
  shared_ptr<string> fsId{};
  shared_ptr<string> regionId{};

  DetachDbfsRequest() {}

  explicit DetachDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ECSInstanceId) {
      res["ECSInstanceId"] = boost::any(*ECSInstanceId);
    }
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ECSInstanceId") != m.end() && !m["ECSInstanceId"].empty()) {
      ECSInstanceId = make_shared<string>(boost::any_cast<string>(m["ECSInstanceId"]));
    }
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DetachDbfsRequest() = default;
};
class DetachDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachDbfsResponseBody() {}

  explicit DetachDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachDbfsResponseBody() = default;
};
class DetachDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachDbfsResponseBody> body{};

  DetachDbfsResponse() {}

  explicit DetachDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~DetachDbfsResponse() = default;
};
class GetDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fsId{};
  shared_ptr<string> regionId{};

  GetDbfsRequest() {}

  explicit GetDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetDbfsRequest() = default;
};
class GetDbfsResponseBodyDBFSInfoEbsList : public Darabonba::Model {
public:
  shared_ptr<string> ebsId{};
  shared_ptr<long> sizeG{};

  GetDbfsResponseBodyDBFSInfoEbsList() {}

  explicit GetDbfsResponseBodyDBFSInfoEbsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ebsId) {
      res["EbsId"] = boost::any(*ebsId);
    }
    if (sizeG) {
      res["SizeG"] = boost::any(*sizeG);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EbsId") != m.end() && !m["EbsId"].empty()) {
      ebsId = make_shared<string>(boost::any_cast<string>(m["EbsId"]));
    }
    if (m.find("SizeG") != m.end() && !m["SizeG"].empty()) {
      sizeG = make_shared<long>(boost::any_cast<long>(m["SizeG"]));
    }
  }


  virtual ~GetDbfsResponseBodyDBFSInfoEbsList() = default;
};
class GetDbfsResponseBodyDBFSInfoEcsList : public Darabonba::Model {
public:
  shared_ptr<string> ecsId{};

  GetDbfsResponseBodyDBFSInfoEcsList() {}

  explicit GetDbfsResponseBodyDBFSInfoEcsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
  }


  virtual ~GetDbfsResponseBodyDBFSInfoEcsList() = default;
};
class GetDbfsResponseBodyDBFSInfoTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetDbfsResponseBodyDBFSInfoTags() {}

  explicit GetDbfsResponseBodyDBFSInfoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetDbfsResponseBodyDBFSInfoTags() = default;
};
class GetDbfsResponseBodyDBFSInfo : public Darabonba::Model {
public:
  shared_ptr<long> attachNodeNumber{};
  shared_ptr<string> category{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> DBFSClusterId{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetDbfsResponseBodyDBFSInfoEbsList>> ebsList{};
  shared_ptr<vector<GetDbfsResponseBodyDBFSInfoEcsList>> ecsList{};
  shared_ptr<bool> enableRaid{};
  shared_ptr<bool> encryption{};
  shared_ptr<string> fsId{};
  shared_ptr<string> fsName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<string> lastFailed{};
  shared_ptr<string> lastMountTime{};
  shared_ptr<string> lastUmountTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> raidStrip{};
  shared_ptr<string> regionId{};
  shared_ptr<long> sizeG{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetDbfsResponseBodyDBFSInfoTags>> tags{};
  shared_ptr<string> usedScene{};
  shared_ptr<string> zoneId{};

  GetDbfsResponseBodyDBFSInfo() {}

  explicit GetDbfsResponseBodyDBFSInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachNodeNumber) {
      res["AttachNodeNumber"] = boost::any(*attachNodeNumber);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (DBFSClusterId) {
      res["DBFSClusterId"] = boost::any(*DBFSClusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ebsList) {
      vector<boost::any> temp1;
      for(auto item1:*ebsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EbsList"] = boost::any(temp1);
    }
    if (ecsList) {
      vector<boost::any> temp1;
      for(auto item1:*ecsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsList"] = boost::any(temp1);
    }
    if (enableRaid) {
      res["EnableRaid"] = boost::any(*enableRaid);
    }
    if (encryption) {
      res["Encryption"] = boost::any(*encryption);
    }
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (fsName) {
      res["FsName"] = boost::any(*fsName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (lastFailed) {
      res["LastFailed"] = boost::any(*lastFailed);
    }
    if (lastMountTime) {
      res["LastMountTime"] = boost::any(*lastMountTime);
    }
    if (lastUmountTime) {
      res["LastUmountTime"] = boost::any(*lastUmountTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (raidStrip) {
      res["RaidStrip"] = boost::any(*raidStrip);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sizeG) {
      res["SizeG"] = boost::any(*sizeG);
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
    if (usedScene) {
      res["UsedScene"] = boost::any(*usedScene);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachNodeNumber") != m.end() && !m["AttachNodeNumber"].empty()) {
      attachNodeNumber = make_shared<long>(boost::any_cast<long>(m["AttachNodeNumber"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DBFSClusterId") != m.end() && !m["DBFSClusterId"].empty()) {
      DBFSClusterId = make_shared<string>(boost::any_cast<string>(m["DBFSClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EbsList") != m.end() && !m["EbsList"].empty()) {
      if (typeid(vector<boost::any>) == m["EbsList"].type()) {
        vector<GetDbfsResponseBodyDBFSInfoEbsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EbsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDbfsResponseBodyDBFSInfoEbsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ebsList = make_shared<vector<GetDbfsResponseBodyDBFSInfoEbsList>>(expect1);
      }
    }
    if (m.find("EcsList") != m.end() && !m["EcsList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsList"].type()) {
        vector<GetDbfsResponseBodyDBFSInfoEcsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDbfsResponseBodyDBFSInfoEcsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsList = make_shared<vector<GetDbfsResponseBodyDBFSInfoEcsList>>(expect1);
      }
    }
    if (m.find("EnableRaid") != m.end() && !m["EnableRaid"].empty()) {
      enableRaid = make_shared<bool>(boost::any_cast<bool>(m["EnableRaid"]));
    }
    if (m.find("Encryption") != m.end() && !m["Encryption"].empty()) {
      encryption = make_shared<bool>(boost::any_cast<bool>(m["Encryption"]));
    }
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("FsName") != m.end() && !m["FsName"].empty()) {
      fsName = make_shared<string>(boost::any_cast<string>(m["FsName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("LastFailed") != m.end() && !m["LastFailed"].empty()) {
      lastFailed = make_shared<string>(boost::any_cast<string>(m["LastFailed"]));
    }
    if (m.find("LastMountTime") != m.end() && !m["LastMountTime"].empty()) {
      lastMountTime = make_shared<string>(boost::any_cast<string>(m["LastMountTime"]));
    }
    if (m.find("LastUmountTime") != m.end() && !m["LastUmountTime"].empty()) {
      lastUmountTime = make_shared<string>(boost::any_cast<string>(m["LastUmountTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("RaidStrip") != m.end() && !m["RaidStrip"].empty()) {
      raidStrip = make_shared<long>(boost::any_cast<long>(m["RaidStrip"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SizeG") != m.end() && !m["SizeG"].empty()) {
      sizeG = make_shared<long>(boost::any_cast<long>(m["SizeG"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetDbfsResponseBodyDBFSInfoTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDbfsResponseBodyDBFSInfoTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetDbfsResponseBodyDBFSInfoTags>>(expect1);
      }
    }
    if (m.find("UsedScene") != m.end() && !m["UsedScene"].empty()) {
      usedScene = make_shared<string>(boost::any_cast<string>(m["UsedScene"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetDbfsResponseBodyDBFSInfo() = default;
};
class GetDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDbfsResponseBodyDBFSInfo> DBFSInfo{};
  shared_ptr<string> requestId{};

  GetDbfsResponseBody() {}

  explicit GetDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBFSInfo) {
      res["DBFSInfo"] = DBFSInfo ? boost::any(DBFSInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBFSInfo") != m.end() && !m["DBFSInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBFSInfo"].type()) {
        GetDbfsResponseBodyDBFSInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBFSInfo"]));
        DBFSInfo = make_shared<GetDbfsResponseBodyDBFSInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDbfsResponseBody() = default;
};
class GetDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDbfsResponseBody> body{};

  GetDbfsResponse() {}

  explicit GetDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDbfsResponse() = default;
};
class GetServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetServiceLinkedRoleRequest() {}

  explicit GetServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceLinkedRoleRequest() = default;
};
class GetServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<bool> dbfsLinkedRole{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};

  GetServiceLinkedRoleResponseBody() {}

  explicit GetServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (dbfsLinkedRole) {
      res["DbfsLinkedRole"] = boost::any(*dbfsLinkedRole);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DbfsLinkedRole") != m.end() && !m["DbfsLinkedRole"].empty()) {
      dbfsLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["DbfsLinkedRole"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetServiceLinkedRoleResponseBody() = default;
};
class GetServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceLinkedRoleResponseBody> body{};

  GetServiceLinkedRoleResponse() {}

  explicit GetServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleResponse() = default;
};
class ListDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterKey{};
  shared_ptr<string> filterValue{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortKey{};
  shared_ptr<string> sortType{};
  shared_ptr<string> tags{};

  ListDbfsRequest() {}

  explicit ListDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterKey) {
      res["FilterKey"] = boost::any(*filterKey);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
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
    if (sortKey) {
      res["SortKey"] = boost::any(*sortKey);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterKey") != m.end() && !m["FilterKey"].empty()) {
      filterKey = make_shared<string>(boost::any_cast<string>(m["FilterKey"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
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
    if (m.find("SortKey") != m.end() && !m["SortKey"].empty()) {
      sortKey = make_shared<string>(boost::any_cast<string>(m["SortKey"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListDbfsRequest() = default;
};
class ListDbfsResponseBodyDBFSInfoEbsList : public Darabonba::Model {
public:
  shared_ptr<string> ebsId{};
  shared_ptr<long> sizeG{};

  ListDbfsResponseBodyDBFSInfoEbsList() {}

  explicit ListDbfsResponseBodyDBFSInfoEbsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ebsId) {
      res["EbsId"] = boost::any(*ebsId);
    }
    if (sizeG) {
      res["SizeG"] = boost::any(*sizeG);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EbsId") != m.end() && !m["EbsId"].empty()) {
      ebsId = make_shared<string>(boost::any_cast<string>(m["EbsId"]));
    }
    if (m.find("SizeG") != m.end() && !m["SizeG"].empty()) {
      sizeG = make_shared<long>(boost::any_cast<long>(m["SizeG"]));
    }
  }


  virtual ~ListDbfsResponseBodyDBFSInfoEbsList() = default;
};
class ListDbfsResponseBodyDBFSInfoEcsList : public Darabonba::Model {
public:
  shared_ptr<string> ecsId{};

  ListDbfsResponseBodyDBFSInfoEcsList() {}

  explicit ListDbfsResponseBodyDBFSInfoEcsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
  }


  virtual ~ListDbfsResponseBodyDBFSInfoEcsList() = default;
};
class ListDbfsResponseBodyDBFSInfoTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListDbfsResponseBodyDBFSInfoTags() {}

  explicit ListDbfsResponseBodyDBFSInfoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListDbfsResponseBodyDBFSInfoTags() = default;
};
class ListDbfsResponseBodyDBFSInfo : public Darabonba::Model {
public:
  shared_ptr<long> attachNodeNumber{};
  shared_ptr<string> category{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> DBFSClusterId{};
  shared_ptr<vector<ListDbfsResponseBodyDBFSInfoEbsList>> ebsList{};
  shared_ptr<vector<ListDbfsResponseBodyDBFSInfoEcsList>> ecsList{};
  shared_ptr<bool> enableRaid{};
  shared_ptr<bool> encryption{};
  shared_ptr<string> fsId{};
  shared_ptr<string> fsName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<string> lastFailed{};
  shared_ptr<string> lastMountTime{};
  shared_ptr<string> lastUmountTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> raidStrip{};
  shared_ptr<string> regionId{};
  shared_ptr<long> sizeG{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListDbfsResponseBodyDBFSInfoTags>> tags{};
  shared_ptr<string> usedScene{};
  shared_ptr<string> zoneId{};

  ListDbfsResponseBodyDBFSInfo() {}

  explicit ListDbfsResponseBodyDBFSInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachNodeNumber) {
      res["AttachNodeNumber"] = boost::any(*attachNodeNumber);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (DBFSClusterId) {
      res["DBFSClusterId"] = boost::any(*DBFSClusterId);
    }
    if (ebsList) {
      vector<boost::any> temp1;
      for(auto item1:*ebsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EbsList"] = boost::any(temp1);
    }
    if (ecsList) {
      vector<boost::any> temp1;
      for(auto item1:*ecsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsList"] = boost::any(temp1);
    }
    if (enableRaid) {
      res["EnableRaid"] = boost::any(*enableRaid);
    }
    if (encryption) {
      res["Encryption"] = boost::any(*encryption);
    }
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (fsName) {
      res["FsName"] = boost::any(*fsName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (lastFailed) {
      res["LastFailed"] = boost::any(*lastFailed);
    }
    if (lastMountTime) {
      res["LastMountTime"] = boost::any(*lastMountTime);
    }
    if (lastUmountTime) {
      res["LastUmountTime"] = boost::any(*lastUmountTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (raidStrip) {
      res["RaidStrip"] = boost::any(*raidStrip);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sizeG) {
      res["SizeG"] = boost::any(*sizeG);
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
    if (usedScene) {
      res["UsedScene"] = boost::any(*usedScene);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachNodeNumber") != m.end() && !m["AttachNodeNumber"].empty()) {
      attachNodeNumber = make_shared<long>(boost::any_cast<long>(m["AttachNodeNumber"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DBFSClusterId") != m.end() && !m["DBFSClusterId"].empty()) {
      DBFSClusterId = make_shared<string>(boost::any_cast<string>(m["DBFSClusterId"]));
    }
    if (m.find("EbsList") != m.end() && !m["EbsList"].empty()) {
      if (typeid(vector<boost::any>) == m["EbsList"].type()) {
        vector<ListDbfsResponseBodyDBFSInfoEbsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EbsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDbfsResponseBodyDBFSInfoEbsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ebsList = make_shared<vector<ListDbfsResponseBodyDBFSInfoEbsList>>(expect1);
      }
    }
    if (m.find("EcsList") != m.end() && !m["EcsList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsList"].type()) {
        vector<ListDbfsResponseBodyDBFSInfoEcsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDbfsResponseBodyDBFSInfoEcsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsList = make_shared<vector<ListDbfsResponseBodyDBFSInfoEcsList>>(expect1);
      }
    }
    if (m.find("EnableRaid") != m.end() && !m["EnableRaid"].empty()) {
      enableRaid = make_shared<bool>(boost::any_cast<bool>(m["EnableRaid"]));
    }
    if (m.find("Encryption") != m.end() && !m["Encryption"].empty()) {
      encryption = make_shared<bool>(boost::any_cast<bool>(m["Encryption"]));
    }
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("FsName") != m.end() && !m["FsName"].empty()) {
      fsName = make_shared<string>(boost::any_cast<string>(m["FsName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("LastFailed") != m.end() && !m["LastFailed"].empty()) {
      lastFailed = make_shared<string>(boost::any_cast<string>(m["LastFailed"]));
    }
    if (m.find("LastMountTime") != m.end() && !m["LastMountTime"].empty()) {
      lastMountTime = make_shared<string>(boost::any_cast<string>(m["LastMountTime"]));
    }
    if (m.find("LastUmountTime") != m.end() && !m["LastUmountTime"].empty()) {
      lastUmountTime = make_shared<string>(boost::any_cast<string>(m["LastUmountTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("RaidStrip") != m.end() && !m["RaidStrip"].empty()) {
      raidStrip = make_shared<long>(boost::any_cast<long>(m["RaidStrip"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SizeG") != m.end() && !m["SizeG"].empty()) {
      sizeG = make_shared<long>(boost::any_cast<long>(m["SizeG"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListDbfsResponseBodyDBFSInfoTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDbfsResponseBodyDBFSInfoTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListDbfsResponseBodyDBFSInfoTags>>(expect1);
      }
    }
    if (m.find("UsedScene") != m.end() && !m["UsedScene"].empty()) {
      usedScene = make_shared<string>(boost::any_cast<string>(m["UsedScene"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListDbfsResponseBodyDBFSInfo() = default;
};
class ListDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDbfsResponseBodyDBFSInfo>> DBFSInfo{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDbfsResponseBody() {}

  explicit ListDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBFSInfo) {
      vector<boost::any> temp1;
      for(auto item1:*DBFSInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBFSInfo"] = boost::any(temp1);
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
    if (m.find("DBFSInfo") != m.end() && !m["DBFSInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DBFSInfo"].type()) {
        vector<ListDbfsResponseBodyDBFSInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBFSInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDbfsResponseBodyDBFSInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBFSInfo = make_shared<vector<ListDbfsResponseBodyDBFSInfo>>(expect1);
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


  virtual ~ListDbfsResponseBody() = default;
};
class ListDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDbfsResponseBody> body{};

  ListDbfsResponse() {}

  explicit ListDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDbfsResponse() = default;
};
class ListDbfsAttachableEcsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterKey{};
  shared_ptr<string> filterValue{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListDbfsAttachableEcsInstancesRequest() {}

  explicit ListDbfsAttachableEcsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterKey) {
      res["FilterKey"] = boost::any(*filterKey);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
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
    if (m.find("FilterKey") != m.end() && !m["FilterKey"].empty()) {
      filterKey = make_shared<string>(boost::any_cast<string>(m["FilterKey"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
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


  virtual ~ListDbfsAttachableEcsInstancesRequest() = default;
};
class ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceTypeFamily{};
  shared_ptr<string> OSName{};
  shared_ptr<string> status{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> label{};
  shared_ptr<string> value{};

  ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo() {}

  explicit ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeFamily) {
      res["InstanceTypeFamily"] = boost::any(*instanceTypeFamily);
    }
    if (OSName) {
      res["OSName"] = boost::any(*OSName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeFamily") != m.end() && !m["InstanceTypeFamily"].empty()) {
      instanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["InstanceTypeFamily"]));
    }
    if (m.find("OSName") != m.end() && !m["OSName"].empty()) {
      OSName = make_shared<string>(boost::any_cast<string>(m["OSName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo() = default;
};
class ListDbfsAttachableEcsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo>> ecsLabelInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDbfsAttachableEcsInstancesResponseBody() {}

  explicit ListDbfsAttachableEcsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsLabelInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ecsLabelInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsLabelInfo"] = boost::any(temp1);
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
    if (m.find("EcsLabelInfo") != m.end() && !m["EcsLabelInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsLabelInfo"].type()) {
        vector<ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsLabelInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsLabelInfo = make_shared<vector<ListDbfsAttachableEcsInstancesResponseBodyEcsLabelInfo>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDbfsAttachableEcsInstancesResponseBody() = default;
};
class ListDbfsAttachableEcsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDbfsAttachableEcsInstancesResponseBody> body{};

  ListDbfsAttachableEcsInstancesResponse() {}

  explicit ListDbfsAttachableEcsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDbfsAttachableEcsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDbfsAttachableEcsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDbfsAttachableEcsInstancesResponse() = default;
};
class ListDbfsAttachedEcsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fsId{};
  shared_ptr<string> regionId{};

  ListDbfsAttachedEcsInstancesRequest() {}

  explicit ListDbfsAttachedEcsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListDbfsAttachedEcsInstancesRequest() = default;
};
class ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceTypeFamily{};
  shared_ptr<string> mountPoint{};
  shared_ptr<string> mountedTime{};
  shared_ptr<string> OSName{};
  shared_ptr<string> label{};
  shared_ptr<string> value{};

  ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo() {}

  explicit ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeFamily) {
      res["InstanceTypeFamily"] = boost::any(*instanceTypeFamily);
    }
    if (mountPoint) {
      res["MountPoint"] = boost::any(*mountPoint);
    }
    if (mountedTime) {
      res["MountedTime"] = boost::any(*mountedTime);
    }
    if (OSName) {
      res["OSName"] = boost::any(*OSName);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeFamily") != m.end() && !m["InstanceTypeFamily"].empty()) {
      instanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["InstanceTypeFamily"]));
    }
    if (m.find("MountPoint") != m.end() && !m["MountPoint"].empty()) {
      mountPoint = make_shared<string>(boost::any_cast<string>(m["MountPoint"]));
    }
    if (m.find("MountedTime") != m.end() && !m["MountedTime"].empty()) {
      mountedTime = make_shared<string>(boost::any_cast<string>(m["MountedTime"]));
    }
    if (m.find("OSName") != m.end() && !m["OSName"].empty()) {
      OSName = make_shared<string>(boost::any_cast<string>(m["OSName"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo() = default;
};
class ListDbfsAttachedEcsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo>> ecsLabelInfo{};
  shared_ptr<string> requestId{};

  ListDbfsAttachedEcsInstancesResponseBody() {}

  explicit ListDbfsAttachedEcsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsLabelInfo) {
      vector<boost::any> temp1;
      for(auto item1:*ecsLabelInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsLabelInfo"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsLabelInfo") != m.end() && !m["EcsLabelInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsLabelInfo"].type()) {
        vector<ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsLabelInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsLabelInfo = make_shared<vector<ListDbfsAttachedEcsInstancesResponseBodyEcsLabelInfo>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDbfsAttachedEcsInstancesResponseBody() = default;
};
class ListDbfsAttachedEcsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDbfsAttachedEcsInstancesResponseBody> body{};

  ListDbfsAttachedEcsInstancesResponse() {}

  explicit ListDbfsAttachedEcsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDbfsAttachedEcsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDbfsAttachedEcsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDbfsAttachedEcsInstancesResponse() = default;
};
class ListSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterKey{};
  shared_ptr<string> filterValue{};
  shared_ptr<string> fsId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> snapshotIds{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> snapshotType{};
  shared_ptr<string> sortKey{};
  shared_ptr<string> sortType{};
  shared_ptr<string> status{};

  ListSnapshotRequest() {}

  explicit ListSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterKey) {
      res["FilterKey"] = boost::any(*filterKey);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
    }
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
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
    if (snapshotIds) {
      res["SnapshotIds"] = boost::any(*snapshotIds);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (snapshotType) {
      res["SnapshotType"] = boost::any(*snapshotType);
    }
    if (sortKey) {
      res["SortKey"] = boost::any(*sortKey);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterKey") != m.end() && !m["FilterKey"].empty()) {
      filterKey = make_shared<string>(boost::any_cast<string>(m["FilterKey"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
    }
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
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
    if (m.find("SnapshotIds") != m.end() && !m["SnapshotIds"].empty()) {
      snapshotIds = make_shared<string>(boost::any_cast<string>(m["SnapshotIds"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("SnapshotType") != m.end() && !m["SnapshotType"].empty()) {
      snapshotType = make_shared<string>(boost::any_cast<string>(m["SnapshotType"]));
    }
    if (m.find("SortKey") != m.end() && !m["SortKey"].empty()) {
      sortKey = make_shared<string>(boost::any_cast<string>(m["SortKey"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListSnapshotRequest() = default;
};
class ListSnapshotResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> progress{};
  shared_ptr<long> remainTime{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> snapshotType{};
  shared_ptr<string> sourceFsId{};
  shared_ptr<long> sourceFsSize{};
  shared_ptr<long> sourceFsStripeWidth{};
  shared_ptr<string> status{};

  ListSnapshotResponseBodySnapshots() {}

  explicit ListSnapshotResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (remainTime) {
      res["RemainTime"] = boost::any(*remainTime);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (snapshotType) {
      res["SnapshotType"] = boost::any(*snapshotType);
    }
    if (sourceFsId) {
      res["SourceFsId"] = boost::any(*sourceFsId);
    }
    if (sourceFsSize) {
      res["SourceFsSize"] = boost::any(*sourceFsSize);
    }
    if (sourceFsStripeWidth) {
      res["SourceFsStripeWidth"] = boost::any(*sourceFsStripeWidth);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RemainTime") != m.end() && !m["RemainTime"].empty()) {
      remainTime = make_shared<long>(boost::any_cast<long>(m["RemainTime"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("SnapshotType") != m.end() && !m["SnapshotType"].empty()) {
      snapshotType = make_shared<string>(boost::any_cast<string>(m["SnapshotType"]));
    }
    if (m.find("SourceFsId") != m.end() && !m["SourceFsId"].empty()) {
      sourceFsId = make_shared<string>(boost::any_cast<string>(m["SourceFsId"]));
    }
    if (m.find("SourceFsSize") != m.end() && !m["SourceFsSize"].empty()) {
      sourceFsSize = make_shared<long>(boost::any_cast<long>(m["SourceFsSize"]));
    }
    if (m.find("SourceFsStripeWidth") != m.end() && !m["SourceFsStripeWidth"].empty()) {
      sourceFsStripeWidth = make_shared<long>(boost::any_cast<long>(m["SourceFsStripeWidth"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListSnapshotResponseBodySnapshots() = default;
};
class ListSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSnapshotResponseBodySnapshots>> snapshots{};
  shared_ptr<long> totalCount{};

  ListSnapshotResponseBody() {}

  explicit ListSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshots) {
      vector<boost::any> temp1;
      for(auto item1:*snapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshots"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<ListSnapshotResponseBodySnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSnapshotResponseBodySnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<ListSnapshotResponseBodySnapshots>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSnapshotResponseBody() = default;
};
class ListSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSnapshotResponseBody> body{};

  ListSnapshotResponse() {}

  explicit ListSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~ListSnapshotResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tagKeys{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
};
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> tagKey{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tagValues{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagValuesResponseBody() = default;
};
class ListTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class RenameDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fsId{};
  shared_ptr<string> fsName{};
  shared_ptr<string> regionId{};

  RenameDbfsRequest() {}

  explicit RenameDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (fsName) {
      res["FsName"] = boost::any(*fsName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("FsName") != m.end() && !m["FsName"].empty()) {
      fsName = make_shared<string>(boost::any_cast<string>(m["FsName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RenameDbfsRequest() = default;
};
class RenameDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RenameDbfsResponseBody() {}

  explicit RenameDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RenameDbfsResponseBody() = default;
};
class RenameDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameDbfsResponseBody> body{};

  RenameDbfsResponse() {}

  explicit RenameDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~RenameDbfsResponse() = default;
};
class ResizeDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fsId{};
  shared_ptr<long> newSizeG{};
  shared_ptr<string> regionId{};

  ResizeDbfsRequest() {}

  explicit ResizeDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (newSizeG) {
      res["NewSizeG"] = boost::any(*newSizeG);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("NewSizeG") != m.end() && !m["NewSizeG"].empty()) {
      newSizeG = make_shared<long>(boost::any_cast<long>(m["NewSizeG"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ResizeDbfsRequest() = default;
};
class ResizeDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResizeDbfsResponseBody() {}

  explicit ResizeDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeDbfsResponseBody() = default;
};
class ResizeDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResizeDbfsResponseBody> body{};

  ResizeDbfsResponse() {}

  explicit ResizeDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResizeDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeDbfsResponse() = default;
};
class TagDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbfsId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tags{};

  TagDbfsRequest() {}

  explicit TagDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbfsId) {
      res["DbfsId"] = boost::any(*dbfsId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbfsId") != m.end() && !m["DbfsId"].empty()) {
      dbfsId = make_shared<string>(boost::any_cast<string>(m["DbfsId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~TagDbfsRequest() = default;
};
class TagDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagDbfsResponseBody() {}

  explicit TagDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagDbfsResponseBody() = default;
};
class TagDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagDbfsResponseBody> body{};

  TagDbfsResponse() {}

  explicit TagDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~TagDbfsResponse() = default;
};
class UpdateDbfsRequest : public Darabonba::Model {
public:
  shared_ptr<string> advancedFeatures{};
  shared_ptr<string> fsId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> usedScene{};

  UpdateDbfsRequest() {}

  explicit UpdateDbfsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedFeatures) {
      res["AdvancedFeatures"] = boost::any(*advancedFeatures);
    }
    if (fsId) {
      res["FsId"] = boost::any(*fsId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (usedScene) {
      res["UsedScene"] = boost::any(*usedScene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedFeatures") != m.end() && !m["AdvancedFeatures"].empty()) {
      advancedFeatures = make_shared<string>(boost::any_cast<string>(m["AdvancedFeatures"]));
    }
    if (m.find("FsId") != m.end() && !m["FsId"].empty()) {
      fsId = make_shared<string>(boost::any_cast<string>(m["FsId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UsedScene") != m.end() && !m["UsedScene"].empty()) {
      usedScene = make_shared<string>(boost::any_cast<string>(m["UsedScene"]));
    }
  }


  virtual ~UpdateDbfsRequest() = default;
};
class UpdateDbfsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDbfsResponseBody() {}

  explicit UpdateDbfsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDbfsResponseBody() = default;
};
class UpdateDbfsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDbfsResponseBody> body{};

  UpdateDbfsResponse() {}

  explicit UpdateDbfsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDbfsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDbfsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDbfsResponse() = default;
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
  AddTagsBatchResponse addTagsBatchWithOptions(shared_ptr<AddTagsBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTagsBatchResponse addTagsBatch(shared_ptr<AddTagsBatchRequest> request);
  AttachDbfsResponse attachDbfsWithOptions(shared_ptr<AttachDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachDbfsResponse attachDbfs(shared_ptr<AttachDbfsRequest> request);
  CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(shared_ptr<CancelAutoSnapshotPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(shared_ptr<CancelAutoSnapshotPolicyRequest> request);
  CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(shared_ptr<CreateAutoSnapshotPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(shared_ptr<CreateAutoSnapshotPolicyRequest> request);
  CreateDbfsResponse createDbfsWithOptions(shared_ptr<CreateDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDbfsResponse createDbfs(shared_ptr<CreateDbfsRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  CreateSnapshotResponse createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSnapshotResponse createSnapshot(shared_ptr<CreateSnapshotRequest> request);
  DeleteDbfsResponse deleteDbfsWithOptions(shared_ptr<DeleteDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDbfsResponse deleteDbfs(shared_ptr<DeleteDbfsRequest> request);
  DeleteSnapshotResponse deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSnapshotResponse deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request);
  DeleteTagsBatchResponse deleteTagsBatchWithOptions(shared_ptr<DeleteTagsBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTagsBatchResponse deleteTagsBatch(shared_ptr<DeleteTagsBatchRequest> request);
  DescribeDbfsSpecificationsResponse describeDbfsSpecificationsWithOptions(shared_ptr<DescribeDbfsSpecificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDbfsSpecificationsResponse describeDbfsSpecifications(shared_ptr<DescribeDbfsSpecificationsRequest> request);
  DescribeInstanceTypesResponse describeInstanceTypesWithOptions(shared_ptr<DescribeInstanceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceTypesResponse describeInstanceTypes(shared_ptr<DescribeInstanceTypesRequest> request);
  DetachDbfsResponse detachDbfsWithOptions(shared_ptr<DetachDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachDbfsResponse detachDbfs(shared_ptr<DetachDbfsRequest> request);
  GetDbfsResponse getDbfsWithOptions(shared_ptr<GetDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDbfsResponse getDbfs(shared_ptr<GetDbfsRequest> request);
  GetServiceLinkedRoleResponse getServiceLinkedRoleWithOptions(shared_ptr<GetServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceLinkedRoleResponse getServiceLinkedRole(shared_ptr<GetServiceLinkedRoleRequest> request);
  ListDbfsResponse listDbfsWithOptions(shared_ptr<ListDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDbfsResponse listDbfs(shared_ptr<ListDbfsRequest> request);
  ListDbfsAttachableEcsInstancesResponse listDbfsAttachableEcsInstancesWithOptions(shared_ptr<ListDbfsAttachableEcsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDbfsAttachableEcsInstancesResponse listDbfsAttachableEcsInstances(shared_ptr<ListDbfsAttachableEcsInstancesRequest> request);
  ListDbfsAttachedEcsInstancesResponse listDbfsAttachedEcsInstancesWithOptions(shared_ptr<ListDbfsAttachedEcsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDbfsAttachedEcsInstancesResponse listDbfsAttachedEcsInstances(shared_ptr<ListDbfsAttachedEcsInstancesRequest> request);
  ListSnapshotResponse listSnapshotWithOptions(shared_ptr<ListSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSnapshotResponse listSnapshot(shared_ptr<ListSnapshotRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  RenameDbfsResponse renameDbfsWithOptions(shared_ptr<RenameDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameDbfsResponse renameDbfs(shared_ptr<RenameDbfsRequest> request);
  ResizeDbfsResponse resizeDbfsWithOptions(shared_ptr<ResizeDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeDbfsResponse resizeDbfs(shared_ptr<ResizeDbfsRequest> request);
  TagDbfsResponse tagDbfsWithOptions(shared_ptr<TagDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagDbfsResponse tagDbfs(shared_ptr<TagDbfsRequest> request);
  UpdateDbfsResponse updateDbfsWithOptions(shared_ptr<UpdateDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDbfsResponse updateDbfs(shared_ptr<UpdateDbfsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_DBFS20200418

#endif
