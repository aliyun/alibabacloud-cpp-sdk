// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TAG20180828_H_
#define ALIBABACLOUD_TAG20180828_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Tag20180828 {
class AttachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  AttachPolicyRequest() {}

  explicit AttachPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
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
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~AttachPolicyRequest() = default;
};
class AttachPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachPolicyResponseBody() {}

  explicit AttachPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachPolicyResponseBody() = default;
};
class AttachPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachPolicyResponseBody> body{};

  AttachPolicyResponse() {}

  explicit AttachPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AttachPolicyResponse() = default;
};
class CheckCreatedByEnabledRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceOwnerId{};

  CheckCreatedByEnabledRequest() {}

  explicit CheckCreatedByEnabledRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CheckCreatedByEnabledRequest() = default;
};
class CheckCreatedByEnabledResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> openStatus{};
  shared_ptr<string> requestId{};

  CheckCreatedByEnabledResponseBody() {}

  explicit CheckCreatedByEnabledResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openStatus) {
      res["OpenStatus"] = boost::any(*openStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenStatus") != m.end() && !m["OpenStatus"].empty()) {
      openStatus = make_shared<bool>(boost::any_cast<bool>(m["OpenStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckCreatedByEnabledResponseBody() = default;
};
class CheckCreatedByEnabledResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCreatedByEnabledResponseBody> body{};

  CheckCreatedByEnabledResponse() {}

  explicit CheckCreatedByEnabledResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckCreatedByEnabledResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCreatedByEnabledResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCreatedByEnabledResponse() = default;
};
class CloseCreatedByRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceOwnerId{};

  CloseCreatedByRequest() {}

  explicit CloseCreatedByRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CloseCreatedByRequest() = default;
};
class CloseCreatedByResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CloseCreatedByResponseBody() {}

  explicit CloseCreatedByResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseCreatedByResponseBody() = default;
};
class CloseCreatedByResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseCreatedByResponseBody> body{};

  CloseCreatedByResponse() {}

  explicit CloseCreatedByResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloseCreatedByResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseCreatedByResponseBody>(model1);
      }
    }
  }


  virtual ~CloseCreatedByResponse() = default;
};
class CreatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyContent{};
  shared_ptr<string> policyDesc{};
  shared_ptr<string> policyName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> userType{};

  CreatePolicyRequest() {}

  explicit CreatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (policyContent) {
      res["PolicyContent"] = boost::any(*policyContent);
    }
    if (policyDesc) {
      res["PolicyDesc"] = boost::any(*policyDesc);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PolicyContent") != m.end() && !m["PolicyContent"].empty()) {
      policyContent = make_shared<string>(boost::any_cast<string>(m["PolicyContent"]));
    }
    if (m.find("PolicyDesc") != m.end() && !m["PolicyDesc"].empty()) {
      policyDesc = make_shared<string>(boost::any_cast<string>(m["PolicyDesc"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~CreatePolicyRequest() = default;
};
class CreatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> requestId{};

  CreatePolicyResponseBody() {}

  explicit CreatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
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
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyResponseBody() = default;
};
class CreatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyResponseBody> body{};

  CreatePolicyResponse() {}

  explicit CreatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyResponse() = default;
};
class CreateTagsRequestTagKeyValueParamListTagValueParamList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> value{};

  CreateTagsRequestTagKeyValueParamListTagValueParamList() {}

  explicit CreateTagsRequestTagKeyValueParamListTagValueParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateTagsRequestTagKeyValueParamListTagValueParamList() = default;
};
class CreateTagsRequestTagKeyValueParamList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> key{};
  shared_ptr<vector<CreateTagsRequestTagKeyValueParamListTagValueParamList>> tagValueParamList{};

  CreateTagsRequestTagKeyValueParamList() {}

  explicit CreateTagsRequestTagKeyValueParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (tagValueParamList) {
      vector<boost::any> temp1;
      for(auto item1:*tagValueParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagValueParamList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("TagValueParamList") != m.end() && !m["TagValueParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagValueParamList"].type()) {
        vector<CreateTagsRequestTagKeyValueParamListTagValueParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagValueParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTagsRequestTagKeyValueParamListTagValueParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagValueParamList = make_shared<vector<CreateTagsRequestTagKeyValueParamListTagValueParamList>>(expect1);
      }
    }
  }


  virtual ~CreateTagsRequestTagKeyValueParamList() = default;
};
class CreateTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<vector<CreateTagsRequestTagKeyValueParamList>> tagKeyValueParamList{};

  CreateTagsRequest() {}

  explicit CreateTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagKeyValueParamList) {
      vector<boost::any> temp1;
      for(auto item1:*tagKeyValueParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagKeyValueParamList"] = boost::any(temp1);
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
    if (m.find("TagKeyValueParamList") != m.end() && !m["TagKeyValueParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagKeyValueParamList"].type()) {
        vector<CreateTagsRequestTagKeyValueParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagKeyValueParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTagsRequestTagKeyValueParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagKeyValueParamList = make_shared<vector<CreateTagsRequestTagKeyValueParamList>>(expect1);
      }
    }
  }


  virtual ~CreateTagsRequest() = default;
};
class CreateTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateTagsResponseBody() {}

  explicit CreateTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTagsResponseBody() = default;
};
class CreateTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTagsResponseBody> body{};

  CreateTagsResponse() {}

  explicit CreateTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTagsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTagsResponse() = default;
};
class DeletePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};

  DeletePolicyRequest() {}

  explicit DeletePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DeletePolicyRequest() = default;
};
class DeletePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyResponseBody() {}

  explicit DeletePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyResponseBody() = default;
};
class DeletePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyResponseBody> body{};

  DeletePolicyResponse() {}

  explicit DeletePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyResponse() = default;
};
class DeleteTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> value{};

  DeleteTagRequest() {}

  explicit DeleteTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DeleteTagRequest() = default;
};
class DeleteTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTagResponseBody() {}

  explicit DeleteTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTagResponseBody() = default;
};
class DeleteTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTagResponseBody> body{};

  DeleteTagResponse() {}

  explicit DeleteTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTagResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
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
class DetachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  DetachPolicyRequest() {}

  explicit DetachPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
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
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~DetachPolicyRequest() = default;
};
class DetachPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachPolicyResponseBody() {}

  explicit DetachPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachPolicyResponseBody() = default;
};
class DetachPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachPolicyResponseBody> body{};

  DetachPolicyResponse() {}

  explicit DetachPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DetachPolicyResponse() = default;
};
class DisablePolicyTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> openType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceOwnerId{};
  shared_ptr<string> userType{};

  DisablePolicyTypeRequest() {}

  explicit DisablePolicyTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openType) {
      res["OpenType"] = boost::any(*openType);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenType") != m.end() && !m["OpenType"].empty()) {
      openType = make_shared<string>(boost::any_cast<string>(m["OpenType"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~DisablePolicyTypeRequest() = default;
};
class DisablePolicyTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisablePolicyTypeResponseBody() {}

  explicit DisablePolicyTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisablePolicyTypeResponseBody() = default;
};
class DisablePolicyTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisablePolicyTypeResponseBody> body{};

  DisablePolicyTypeResponse() {}

  explicit DisablePolicyTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisablePolicyTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisablePolicyTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DisablePolicyTypeResponse() = default;
};
class EnablePolicyTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> openType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceOwnerId{};
  shared_ptr<string> userType{};

  EnablePolicyTypeRequest() {}

  explicit EnablePolicyTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openType) {
      res["OpenType"] = boost::any(*openType);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenType") != m.end() && !m["OpenType"].empty()) {
      openType = make_shared<string>(boost::any_cast<string>(m["OpenType"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~EnablePolicyTypeRequest() = default;
};
class EnablePolicyTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnablePolicyTypeResponseBody() {}

  explicit EnablePolicyTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnablePolicyTypeResponseBody() = default;
};
class EnablePolicyTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnablePolicyTypeResponseBody> body{};

  EnablePolicyTypeResponse() {}

  explicit EnablePolicyTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnablePolicyTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnablePolicyTypeResponseBody>(model1);
      }
    }
  }


  virtual ~EnablePolicyTypeResponse() = default;
};
class GenerateConfigRuleReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};
  shared_ptr<string> userType{};

  GenerateConfigRuleReportRequest() {}

  explicit GenerateConfigRuleReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
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
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GenerateConfigRuleReportRequest() = default;
};
class GenerateConfigRuleReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> reportId{};
  shared_ptr<string> requestId{};

  GenerateConfigRuleReportResponseBody() {}

  explicit GenerateConfigRuleReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateConfigRuleReportResponseBody() = default;
};
class GenerateConfigRuleReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateConfigRuleReportResponseBody> body{};

  GenerateConfigRuleReportResponse() {}

  explicit GenerateConfigRuleReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateConfigRuleReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateConfigRuleReportResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateConfigRuleReportResponse() = default;
};
class GetConfigRuleReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};
  shared_ptr<string> userType{};

  GetConfigRuleReportRequest() {}

  explicit GetConfigRuleReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
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
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetConfigRuleReportRequest() = default;
};
class GetConfigRuleReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createdTime{};
  shared_ptr<string> reportId{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  GetConfigRuleReportResponseBodyData() {}

  explicit GetConfigRuleReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetConfigRuleReportResponseBodyData() = default;
};
class GetConfigRuleReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetConfigRuleReportResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConfigRuleReportResponseBody() {}

  explicit GetConfigRuleReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetConfigRuleReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetConfigRuleReportResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetConfigRuleReportResponseBody() = default;
};
class GetConfigRuleReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConfigRuleReportResponseBody> body{};

  GetConfigRuleReportResponse() {}

  explicit GetConfigRuleReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetConfigRuleReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConfigRuleReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetConfigRuleReportResponse() = default;
};
class GetEffectivePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  GetEffectivePolicyRequest() {}

  explicit GetEffectivePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
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
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetEffectivePolicyRequest() = default;
};
class GetEffectivePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> effectivePolicy{};
  shared_ptr<string> requestId{};

  GetEffectivePolicyResponseBody() {}

  explicit GetEffectivePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectivePolicy) {
      res["EffectivePolicy"] = boost::any(*effectivePolicy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EffectivePolicy") != m.end() && !m["EffectivePolicy"].empty()) {
      effectivePolicy = make_shared<string>(boost::any_cast<string>(m["EffectivePolicy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEffectivePolicyResponseBody() = default;
};
class GetEffectivePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEffectivePolicyResponseBody> body{};

  GetEffectivePolicyResponse() {}

  explicit GetEffectivePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEffectivePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEffectivePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetEffectivePolicyResponse() = default;
};
class GetPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};

  GetPolicyRequest() {}

  explicit GetPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~GetPolicyRequest() = default;
};
class GetPolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> policyContent{};
  shared_ptr<string> policyDesc{};
  shared_ptr<string> policyName{};
  shared_ptr<string> userType{};

  GetPolicyResponseBodyPolicy() {}

  explicit GetPolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyContent) {
      res["PolicyContent"] = boost::any(*policyContent);
    }
    if (policyDesc) {
      res["PolicyDesc"] = boost::any(*policyDesc);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyContent") != m.end() && !m["PolicyContent"].empty()) {
      policyContent = make_shared<string>(boost::any_cast<string>(m["PolicyContent"]));
    }
    if (m.find("PolicyDesc") != m.end() && !m["PolicyDesc"].empty()) {
      policyDesc = make_shared<string>(boost::any_cast<string>(m["PolicyDesc"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetPolicyResponseBodyPolicy() = default;
};
class GetPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  GetPolicyResponseBody() {}

  explicit GetPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GetPolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GetPolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolicyResponseBody() = default;
};
class GetPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyResponseBody> body{};

  GetPolicyResponse() {}

  explicit GetPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyResponse() = default;
};
class GetPolicyEnableStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> openType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceOwnerId{};
  shared_ptr<string> userType{};

  GetPolicyEnableStatusRequest() {}

  explicit GetPolicyEnableStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openType) {
      res["OpenType"] = boost::any(*openType);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenType") != m.end() && !m["OpenType"].empty()) {
      openType = make_shared<string>(boost::any_cast<string>(m["OpenType"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetPolicyEnableStatusRequest() = default;
};
class GetPolicyEnableStatusResponseBodyStatusModels : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> userType{};

  GetPolicyEnableStatusResponseBodyStatusModels() {}

  explicit GetPolicyEnableStatusResponseBodyStatusModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetPolicyEnableStatusResponseBodyStatusModels() = default;
};
class GetPolicyEnableStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetPolicyEnableStatusResponseBodyStatusModels>> statusModels{};

  GetPolicyEnableStatusResponseBody() {}

  explicit GetPolicyEnableStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statusModels) {
      vector<boost::any> temp1;
      for(auto item1:*statusModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatusModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusModels") != m.end() && !m["StatusModels"].empty()) {
      if (typeid(vector<boost::any>) == m["StatusModels"].type()) {
        vector<GetPolicyEnableStatusResponseBodyStatusModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatusModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPolicyEnableStatusResponseBodyStatusModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statusModels = make_shared<vector<GetPolicyEnableStatusResponseBodyStatusModels>>(expect1);
      }
    }
  }


  virtual ~GetPolicyEnableStatusResponseBody() = default;
};
class GetPolicyEnableStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyEnableStatusResponseBody> body{};

  GetPolicyEnableStatusResponse() {}

  explicit GetPolicyEnableStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPolicyEnableStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyEnableStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyEnableStatusResponse() = default;
};
class ListConfigRulesForTargetRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};
  shared_ptr<string> userType{};

  ListConfigRulesForTargetRequest() {}

  explicit ListConfigRulesForTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~ListConfigRulesForTargetRequest() = default;
};
class ListConfigRulesForTargetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aggregatorId{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> policyType{};
  shared_ptr<bool> remediation{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  ListConfigRulesForTargetResponseBodyData() {}

  explicit ListConfigRulesForTargetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (remediation) {
      res["Remediation"] = boost::any(*remediation);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("Remediation") != m.end() && !m["Remediation"].empty()) {
      remediation = make_shared<bool>(boost::any_cast<bool>(m["Remediation"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListConfigRulesForTargetResponseBodyData() = default;
};
class ListConfigRulesForTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConfigRulesForTargetResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListConfigRulesForTargetResponseBody() {}

  explicit ListConfigRulesForTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListConfigRulesForTargetResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConfigRulesForTargetResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListConfigRulesForTargetResponseBodyData>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListConfigRulesForTargetResponseBody() = default;
};
class ListConfigRulesForTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConfigRulesForTargetResponseBody> body{};

  ListConfigRulesForTargetResponse() {}

  explicit ListConfigRulesForTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConfigRulesForTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigRulesForTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigRulesForTargetResponse() = default;
};
class ListPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> policyIds{};
  shared_ptr<vector<string>> policyNames{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> userType{};

  ListPoliciesRequest() {}

  explicit ListPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~ListPoliciesRequest() = default;
};
class ListPoliciesResponseBodyPolicyList : public Darabonba::Model {
public:
  shared_ptr<string> policyContent{};
  shared_ptr<string> policyDesc{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> userType{};

  ListPoliciesResponseBodyPolicyList() {}

  explicit ListPoliciesResponseBodyPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyContent) {
      res["PolicyContent"] = boost::any(*policyContent);
    }
    if (policyDesc) {
      res["PolicyDesc"] = boost::any(*policyDesc);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyContent") != m.end() && !m["PolicyContent"].empty()) {
      policyContent = make_shared<string>(boost::any_cast<string>(m["PolicyContent"]));
    }
    if (m.find("PolicyDesc") != m.end() && !m["PolicyDesc"].empty()) {
      policyDesc = make_shared<string>(boost::any_cast<string>(m["PolicyDesc"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~ListPoliciesResponseBodyPolicyList() = default;
};
class ListPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPoliciesResponseBodyPolicyList>> policyList{};
  shared_ptr<string> requestId{};

  ListPoliciesResponseBody() {}

  explicit ListPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policyList) {
      vector<boost::any> temp1;
      for(auto item1:*policyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyList"] = boost::any(temp1);
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
    if (m.find("PolicyList") != m.end() && !m["PolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyList"].type()) {
        vector<ListPoliciesResponseBodyPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesResponseBodyPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyList = make_shared<vector<ListPoliciesResponseBodyPolicyList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPoliciesResponseBody() = default;
};
class ListPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesResponseBody> body{};

  ListPoliciesResponse() {}

  explicit ListPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesResponse() = default;
};
class ListPoliciesForTargetRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  ListPoliciesForTargetRequest() {}

  explicit ListPoliciesForTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListPoliciesForTargetRequest() = default;
};
class ListPoliciesForTargetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> policyContent{};
  shared_ptr<string> policyDesc{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> userType{};

  ListPoliciesForTargetResponseBodyData() {}

  explicit ListPoliciesForTargetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyContent) {
      res["PolicyContent"] = boost::any(*policyContent);
    }
    if (policyDesc) {
      res["PolicyDesc"] = boost::any(*policyDesc);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyContent") != m.end() && !m["PolicyContent"].empty()) {
      policyContent = make_shared<string>(boost::any_cast<string>(m["PolicyContent"]));
    }
    if (m.find("PolicyDesc") != m.end() && !m["PolicyDesc"].empty()) {
      policyDesc = make_shared<string>(boost::any_cast<string>(m["PolicyDesc"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~ListPoliciesForTargetResponseBodyData() = default;
};
class ListPoliciesForTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesForTargetResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListPoliciesForTargetResponseBody() {}

  explicit ListPoliciesForTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPoliciesForTargetResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesForTargetResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPoliciesForTargetResponseBodyData>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPoliciesForTargetResponseBody() = default;
};
class ListPoliciesForTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesForTargetResponseBody> body{};

  ListPoliciesForTargetResponse() {}

  explicit ListPoliciesForTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPoliciesForTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesForTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesForTargetResponse() = default;
};
class ListResourcesByTagRequestTagFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListResourcesByTagRequestTagFilter() {}

  explicit ListResourcesByTagRequestTagFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListResourcesByTagRequestTagFilter() = default;
};
class ListResourcesByTagRequest : public Darabonba::Model {
public:
  shared_ptr<ListResourcesByTagRequestTagFilter> tagFilter{};
  shared_ptr<string> fuzzyType{};
  shared_ptr<bool> includeAllTags{};
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceType{};

  ListResourcesByTagRequest() {}

  explicit ListResourcesByTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagFilter) {
      res["TagFilter"] = tagFilter ? boost::any(tagFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fuzzyType) {
      res["FuzzyType"] = boost::any(*fuzzyType);
    }
    if (includeAllTags) {
      res["IncludeAllTags"] = boost::any(*includeAllTags);
    }
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagFilter") != m.end() && !m["TagFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagFilter"].type()) {
        ListResourcesByTagRequestTagFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagFilter"]));
        tagFilter = make_shared<ListResourcesByTagRequestTagFilter>(model1);
      }
    }
    if (m.find("FuzzyType") != m.end() && !m["FuzzyType"].empty()) {
      fuzzyType = make_shared<string>(boost::any_cast<string>(m["FuzzyType"]));
    }
    if (m.find("IncludeAllTags") != m.end() && !m["IncludeAllTags"].empty()) {
      includeAllTags = make_shared<bool>(boost::any_cast<bool>(m["IncludeAllTags"]));
    }
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListResourcesByTagRequest() = default;
};
class ListResourcesByTagResponseBodyResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListResourcesByTagResponseBodyResourcesTags() {}

  explicit ListResourcesByTagResponseBodyResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListResourcesByTagResponseBodyResourcesTags() = default;
};
class ListResourcesByTagResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<vector<ListResourcesByTagResponseBodyResourcesTags>> tags{};

  ListResourcesByTagResponseBodyResources() {}

  explicit ListResourcesByTagResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListResourcesByTagResponseBodyResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesByTagResponseBodyResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListResourcesByTagResponseBodyResourcesTags>>(expect1);
      }
    }
  }


  virtual ~ListResourcesByTagResponseBodyResources() = default;
};
class ListResourcesByTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourcesByTagResponseBodyResources>> resources{};

  ListResourcesByTagResponseBody() {}

  explicit ListResourcesByTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListResourcesByTagResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesByTagResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesByTagResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~ListResourcesByTagResponseBody() = default;
};
class ListResourcesByTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesByTagResponseBody> body{};

  ListResourcesByTagResponse() {}

  explicit ListResourcesByTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcesByTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesByTagResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesByTagResponse() = default;
};
class ListSupportResourceTypesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceTye{};
  shared_ptr<bool> showItems{};
  shared_ptr<string> supportCode{};

  ListSupportResourceTypesRequest() {}

  explicit ListSupportResourceTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceTye) {
      res["ResourceTye"] = boost::any(*resourceTye);
    }
    if (showItems) {
      res["ShowItems"] = boost::any(*showItems);
    }
    if (supportCode) {
      res["SupportCode"] = boost::any(*supportCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceTye") != m.end() && !m["ResourceTye"].empty()) {
      resourceTye = make_shared<string>(boost::any_cast<string>(m["ResourceTye"]));
    }
    if (m.find("ShowItems") != m.end() && !m["ShowItems"].empty()) {
      showItems = make_shared<bool>(boost::any_cast<bool>(m["ShowItems"]));
    }
    if (m.find("SupportCode") != m.end() && !m["SupportCode"].empty()) {
      supportCode = make_shared<string>(boost::any_cast<string>(m["SupportCode"]));
    }
  }


  virtual ~ListSupportResourceTypesRequest() = default;
};
class ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems : public Darabonba::Model {
public:
  shared_ptr<bool> support{};
  shared_ptr<string> supportCode{};
  shared_ptr<vector<map<string, string>>> supportDetails{};

  ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems() {}

  explicit ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (support) {
      res["Support"] = boost::any(*support);
    }
    if (supportCode) {
      res["SupportCode"] = boost::any(*supportCode);
    }
    if (supportDetails) {
      res["SupportDetails"] = boost::any(*supportDetails);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Support") != m.end() && !m["Support"].empty()) {
      support = make_shared<bool>(boost::any_cast<bool>(m["Support"]));
    }
    if (m.find("SupportCode") != m.end() && !m["SupportCode"].empty()) {
      supportCode = make_shared<string>(boost::any_cast<string>(m["SupportCode"]));
    }
    if (m.find("SupportDetails") != m.end() && !m["SupportDetails"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["SupportDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportDetails"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      supportDetails = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems() = default;
};
class ListSupportResourceTypesResponseBodySupportResourceTypes : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems>> supportItems{};

  ListSupportResourceTypesResponseBodySupportResourceTypes() {}

  explicit ListSupportResourceTypesResponseBodySupportResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (supportItems) {
      vector<boost::any> temp1;
      for(auto item1:*supportItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SupportItems") != m.end() && !m["SupportItems"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportItems"].type()) {
        vector<ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportItems = make_shared<vector<ListSupportResourceTypesResponseBodySupportResourceTypesSupportItems>>(expect1);
      }
    }
  }


  virtual ~ListSupportResourceTypesResponseBodySupportResourceTypes() = default;
};
class ListSupportResourceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSupportResourceTypesResponseBodySupportResourceTypes>> supportResourceTypes{};

  ListSupportResourceTypesResponseBody() {}

  explicit ListSupportResourceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (supportResourceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*supportResourceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportResourceTypes"] = boost::any(temp1);
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
    if (m.find("SupportResourceTypes") != m.end() && !m["SupportResourceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportResourceTypes"].type()) {
        vector<ListSupportResourceTypesResponseBodySupportResourceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportResourceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSupportResourceTypesResponseBodySupportResourceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportResourceTypes = make_shared<vector<ListSupportResourceTypesResponseBodySupportResourceTypes>>(expect1);
      }
    }
  }


  virtual ~ListSupportResourceTypesResponseBody() = default;
};
class ListSupportResourceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSupportResourceTypesResponseBody> body{};

  ListSupportResourceTypesResponse() {}

  explicit ListSupportResourceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSupportResourceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSupportResourceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSupportResourceTypesResponse() = default;
};
class ListTagKeysRequestTagFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  ListTagKeysRequestTagFilter() {}

  explicit ListTagKeysRequestTagFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~ListTagKeysRequestTagFilter() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<ListTagKeysRequestTagFilter> tagFilter{};
  shared_ptr<string> category{};
  shared_ptr<string> fuzzyType{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceType{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagFilter) {
      res["TagFilter"] = tagFilter ? boost::any(tagFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (fuzzyType) {
      res["FuzzyType"] = boost::any(*fuzzyType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagFilter") != m.end() && !m["TagFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagFilter"].type()) {
        ListTagKeysRequestTagFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagFilter"]));
        tagFilter = make_shared<ListTagKeysRequestTagFilter>(model1);
      }
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("FuzzyType") != m.end() && !m["FuzzyType"].empty()) {
      fuzzyType = make_shared<string>(boost::any_cast<string>(m["FuzzyType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyKeysKey : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> key{};

  ListTagKeysResponseBodyKeysKey() {}

  explicit ListTagKeysResponseBodyKeysKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~ListTagKeysResponseBodyKeysKey() = default;
};
class ListTagKeysResponseBodyKeys : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagKeysResponseBodyKeysKey>> key{};

  ListTagKeysResponseBodyKeys() {}

  explicit ListTagKeysResponseBodyKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      vector<boost::any> temp1;
      for(auto item1:*key){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Key"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      if (typeid(vector<boost::any>) == m["Key"].type()) {
        vector<ListTagKeysResponseBodyKeysKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Key"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagKeysResponseBodyKeysKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        key = make_shared<vector<ListTagKeysResponseBodyKeysKey>>(expect1);
      }
    }
  }


  virtual ~ListTagKeysResponseBodyKeys() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTagKeysResponseBodyKeys> keys{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        ListTagKeysResponseBodyKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<ListTagKeysResponseBodyKeys>(model1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceARN{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> tags{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceARN"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceARN"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceARN = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesResponseBodyTagResourcesTags() {}

  explicit ListTagResourcesResponseBodyTagResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTags() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceARN{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTags>> tags{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
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
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      resourceARN = make_shared<string>(boost::any_cast<string>(m["ResourceARN"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTags>>(expect1);
      }
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
class ListTagValuesRequestTagFilter : public Darabonba::Model {
public:
  shared_ptr<string> value{};

  ListTagValuesRequestTagFilter() {}

  explicit ListTagValuesRequestTagFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagValuesRequestTagFilter() = default;
};
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<ListTagValuesRequestTagFilter> tagFilter{};
  shared_ptr<string> fuzzyType{};
  shared_ptr<string> key{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceType{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagFilter) {
      res["TagFilter"] = tagFilter ? boost::any(tagFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fuzzyType) {
      res["FuzzyType"] = boost::any(*fuzzyType);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagFilter") != m.end() && !m["TagFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagFilter"].type()) {
        ListTagValuesRequestTagFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagFilter"]));
        tagFilter = make_shared<ListTagValuesRequestTagFilter>(model1);
      }
    }
    if (m.find("FuzzyType") != m.end() && !m["FuzzyType"].empty()) {
      fuzzyType = make_shared<string>(boost::any_cast<string>(m["FuzzyType"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBodyValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> value{};

  ListTagValuesResponseBodyValues() {}

  explicit ListTagValuesResponseBodyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagValuesResponseBodyValues() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagValuesResponseBodyValues> values{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (values) {
      res["Values"] = values ? boost::any(values->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(map<string, boost::any>) == m["Values"].type()) {
        ListTagValuesResponseBodyValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Values"]));
        values = make_shared<ListTagValuesResponseBodyValues>(model1);
      }
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ListTargetsForPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResult{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};

  ListTargetsForPolicyRequest() {}

  explicit ListTargetsForPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResult) {
      res["MaxResult"] = boost::any(*maxResult);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResult") != m.end() && !m["MaxResult"].empty()) {
      maxResult = make_shared<long>(boost::any_cast<long>(m["MaxResult"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~ListTargetsForPolicyRequest() = default;
};
class ListTargetsForPolicyResponseBodyTargets : public Darabonba::Model {
public:
  shared_ptr<string> targetId{};
  shared_ptr<long> targetType{};

  ListTargetsForPolicyResponseBodyTargets() {}

  explicit ListTargetsForPolicyResponseBodyTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<long>(boost::any_cast<long>(m["TargetType"]));
    }
  }


  virtual ~ListTargetsForPolicyResponseBodyTargets() = default;
};
class ListTargetsForPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isRd{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> rdId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTargetsForPolicyResponseBodyTargets>> targets{};

  ListTargetsForPolicyResponseBody() {}

  explicit ListTargetsForPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isRd) {
      res["IsRd"] = boost::any(*isRd);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (rdId) {
      res["RdId"] = boost::any(*rdId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsRd") != m.end() && !m["IsRd"].empty()) {
      isRd = make_shared<bool>(boost::any_cast<bool>(m["IsRd"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RdId") != m.end() && !m["RdId"].empty()) {
      rdId = make_shared<string>(boost::any_cast<string>(m["RdId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<ListTargetsForPolicyResponseBodyTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTargetsForPolicyResponseBodyTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<ListTargetsForPolicyResponseBodyTargets>>(expect1);
      }
    }
  }


  virtual ~ListTargetsForPolicyResponseBody() = default;
};
class ListTargetsForPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTargetsForPolicyResponseBody> body{};

  ListTargetsForPolicyResponse() {}

  explicit ListTargetsForPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTargetsForPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTargetsForPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListTargetsForPolicyResponse() = default;
};
class ModifyPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> policyContent{};
  shared_ptr<string> policyDesc{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};

  ModifyPolicyRequest() {}

  explicit ModifyPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (policyContent) {
      res["PolicyContent"] = boost::any(*policyContent);
    }
    if (policyDesc) {
      res["PolicyDesc"] = boost::any(*policyDesc);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PolicyContent") != m.end() && !m["PolicyContent"].empty()) {
      policyContent = make_shared<string>(boost::any_cast<string>(m["PolicyContent"]));
    }
    if (m.find("PolicyDesc") != m.end() && !m["PolicyDesc"].empty()) {
      policyDesc = make_shared<string>(boost::any_cast<string>(m["PolicyDesc"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~ModifyPolicyRequest() = default;
};
class ModifyPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPolicyResponseBody() {}

  explicit ModifyPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPolicyResponseBody() = default;
};
class ModifyPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPolicyResponseBody> body{};

  ModifyPolicyResponse() {}

  explicit ModifyPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPolicyResponse() = default;
};
class OpenCreatedByRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceOwnerId{};

  OpenCreatedByRequest() {}

  explicit OpenCreatedByRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OpenCreatedByRequest() = default;
};
class OpenCreatedByResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenCreatedByResponseBody() {}

  explicit OpenCreatedByResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenCreatedByResponseBody() = default;
};
class OpenCreatedByResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenCreatedByResponseBody> body{};

  OpenCreatedByResponse() {}

  explicit OpenCreatedByResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenCreatedByResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenCreatedByResponseBody>(model1);
      }
    }
  }


  virtual ~OpenCreatedByResponse() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceARN{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> tags{};

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
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceARN"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceARN"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceARN = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBodyFailedResourcesFailedResourceResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  TagResourcesResponseBodyFailedResourcesFailedResourceResult() {}

  explicit TagResourcesResponseBodyFailedResourcesFailedResourceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~TagResourcesResponseBodyFailedResourcesFailedResourceResult() = default;
};
class TagResourcesResponseBodyFailedResourcesFailedResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceARN{};
  shared_ptr<TagResourcesResponseBodyFailedResourcesFailedResourceResult> result{};

  TagResourcesResponseBodyFailedResourcesFailedResource() {}

  explicit TagResourcesResponseBodyFailedResourcesFailedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      resourceARN = make_shared<string>(boost::any_cast<string>(m["ResourceARN"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        TagResourcesResponseBodyFailedResourcesFailedResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<TagResourcesResponseBodyFailedResourcesFailedResourceResult>(model1);
      }
    }
  }


  virtual ~TagResourcesResponseBodyFailedResourcesFailedResource() = default;
};
class TagResourcesResponseBodyFailedResources : public Darabonba::Model {
public:
  shared_ptr<vector<TagResourcesResponseBodyFailedResourcesFailedResource>> failedResource{};

  TagResourcesResponseBodyFailedResources() {}

  explicit TagResourcesResponseBodyFailedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedResource) {
      vector<boost::any> temp1;
      for(auto item1:*failedResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedResource") != m.end() && !m["FailedResource"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedResource"].type()) {
        vector<TagResourcesResponseBodyFailedResourcesFailedResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesResponseBodyFailedResourcesFailedResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedResource = make_shared<vector<TagResourcesResponseBodyFailedResourcesFailedResource>>(expect1);
      }
    }
  }


  virtual ~TagResourcesResponseBodyFailedResources() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<TagResourcesResponseBodyFailedResources> failedResources{};
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedResources) {
      res["FailedResources"] = failedResources ? boost::any(failedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedResources") != m.end() && !m["FailedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailedResources"].type()) {
        TagResourcesResponseBodyFailedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailedResources"]));
        failedResources = make_shared<TagResourcesResponseBodyFailedResources>(model1);
      }
    }
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceARN{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
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
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceARN"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceARN"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceARN = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
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
class UntagResourcesResponseBodyFailedResourcesFailedResourceResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  UntagResourcesResponseBodyFailedResourcesFailedResourceResult() {}

  explicit UntagResourcesResponseBodyFailedResourcesFailedResourceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UntagResourcesResponseBodyFailedResourcesFailedResourceResult() = default;
};
class UntagResourcesResponseBodyFailedResourcesFailedResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceARN{};
  shared_ptr<UntagResourcesResponseBodyFailedResourcesFailedResourceResult> result{};

  UntagResourcesResponseBodyFailedResourcesFailedResource() {}

  explicit UntagResourcesResponseBodyFailedResourcesFailedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      resourceARN = make_shared<string>(boost::any_cast<string>(m["ResourceARN"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UntagResourcesResponseBodyFailedResourcesFailedResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UntagResourcesResponseBodyFailedResourcesFailedResourceResult>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponseBodyFailedResourcesFailedResource() = default;
};
class UntagResourcesResponseBodyFailedResources : public Darabonba::Model {
public:
  shared_ptr<vector<UntagResourcesResponseBodyFailedResourcesFailedResource>> failedResource{};

  UntagResourcesResponseBodyFailedResources() {}

  explicit UntagResourcesResponseBodyFailedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedResource) {
      vector<boost::any> temp1;
      for(auto item1:*failedResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedResource") != m.end() && !m["FailedResource"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedResource"].type()) {
        vector<UntagResourcesResponseBodyFailedResourcesFailedResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UntagResourcesResponseBodyFailedResourcesFailedResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedResource = make_shared<vector<UntagResourcesResponseBodyFailedResourcesFailedResource>>(expect1);
      }
    }
  }


  virtual ~UntagResourcesResponseBodyFailedResources() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<UntagResourcesResponseBodyFailedResources> failedResources{};
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedResources) {
      res["FailedResources"] = failedResources ? boost::any(failedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedResources") != m.end() && !m["FailedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailedResources"].type()) {
        UntagResourcesResponseBodyFailedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailedResources"]));
        failedResources = make_shared<UntagResourcesResponseBodyFailedResources>(model1);
      }
    }
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
  AttachPolicyResponse attachPolicyWithOptions(shared_ptr<AttachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachPolicyResponse attachPolicy(shared_ptr<AttachPolicyRequest> request);
  CheckCreatedByEnabledResponse checkCreatedByEnabledWithOptions(shared_ptr<CheckCreatedByEnabledRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCreatedByEnabledResponse checkCreatedByEnabled(shared_ptr<CheckCreatedByEnabledRequest> request);
  CloseCreatedByResponse closeCreatedByWithOptions(shared_ptr<CloseCreatedByRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseCreatedByResponse closeCreatedBy(shared_ptr<CloseCreatedByRequest> request);
  CreatePolicyResponse createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyResponse createPolicy(shared_ptr<CreatePolicyRequest> request);
  CreateTagsResponse createTagsWithOptions(shared_ptr<CreateTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTagsResponse createTags(shared_ptr<CreateTagsRequest> request);
  DeletePolicyResponse deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyResponse deletePolicy(shared_ptr<DeletePolicyRequest> request);
  DeleteTagResponse deleteTagWithOptions(shared_ptr<DeleteTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTagResponse deleteTag(shared_ptr<DeleteTagRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DetachPolicyResponse detachPolicyWithOptions(shared_ptr<DetachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachPolicyResponse detachPolicy(shared_ptr<DetachPolicyRequest> request);
  DisablePolicyTypeResponse disablePolicyTypeWithOptions(shared_ptr<DisablePolicyTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisablePolicyTypeResponse disablePolicyType(shared_ptr<DisablePolicyTypeRequest> request);
  EnablePolicyTypeResponse enablePolicyTypeWithOptions(shared_ptr<EnablePolicyTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnablePolicyTypeResponse enablePolicyType(shared_ptr<EnablePolicyTypeRequest> request);
  GenerateConfigRuleReportResponse generateConfigRuleReportWithOptions(shared_ptr<GenerateConfigRuleReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateConfigRuleReportResponse generateConfigRuleReport(shared_ptr<GenerateConfigRuleReportRequest> request);
  GetConfigRuleReportResponse getConfigRuleReportWithOptions(shared_ptr<GetConfigRuleReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigRuleReportResponse getConfigRuleReport(shared_ptr<GetConfigRuleReportRequest> request);
  GetEffectivePolicyResponse getEffectivePolicyWithOptions(shared_ptr<GetEffectivePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEffectivePolicyResponse getEffectivePolicy(shared_ptr<GetEffectivePolicyRequest> request);
  GetPolicyResponse getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyResponse getPolicy(shared_ptr<GetPolicyRequest> request);
  GetPolicyEnableStatusResponse getPolicyEnableStatusWithOptions(shared_ptr<GetPolicyEnableStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyEnableStatusResponse getPolicyEnableStatus(shared_ptr<GetPolicyEnableStatusRequest> request);
  ListConfigRulesForTargetResponse listConfigRulesForTargetWithOptions(shared_ptr<ListConfigRulesForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigRulesForTargetResponse listConfigRulesForTarget(shared_ptr<ListConfigRulesForTargetRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  ListPoliciesForTargetResponse listPoliciesForTargetWithOptions(shared_ptr<ListPoliciesForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesForTargetResponse listPoliciesForTarget(shared_ptr<ListPoliciesForTargetRequest> request);
  ListResourcesByTagResponse listResourcesByTagWithOptions(shared_ptr<ListResourcesByTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesByTagResponse listResourcesByTag(shared_ptr<ListResourcesByTagRequest> request);
  ListSupportResourceTypesResponse listSupportResourceTypesWithOptions(shared_ptr<ListSupportResourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSupportResourceTypesResponse listSupportResourceTypes(shared_ptr<ListSupportResourceTypesRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  ListTargetsForPolicyResponse listTargetsForPolicyWithOptions(shared_ptr<ListTargetsForPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTargetsForPolicyResponse listTargetsForPolicy(shared_ptr<ListTargetsForPolicyRequest> request);
  ModifyPolicyResponse modifyPolicyWithOptions(shared_ptr<ModifyPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyResponse modifyPolicy(shared_ptr<ModifyPolicyRequest> request);
  OpenCreatedByResponse openCreatedByWithOptions(shared_ptr<OpenCreatedByRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenCreatedByResponse openCreatedBy(shared_ptr<OpenCreatedByRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Tag20180828

#endif
