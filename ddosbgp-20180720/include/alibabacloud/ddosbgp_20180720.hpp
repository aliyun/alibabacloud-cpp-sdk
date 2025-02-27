// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DDOSBGP20180720_H_
#define ALIBABACLOUD_DDOSBGP20180720_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ddosbgp20180720 {
class AddIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  AddIpRequest() {}

  explicit AddIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["IpList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~AddIpRequest() = default;
};
class AddIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddIpResponseBody() {}

  explicit AddIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddIpResponseBody() = default;
};
class AddIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddIpResponseBody> body{};

  AddIpResponse() {}

  explicit AddIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddIpResponseBody>(model1);
      }
    }
  }


  virtual ~AddIpResponse() = default;
};
class AddRdMemberListRequestMemberList : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  AddRdMemberListRequestMemberList() {}

  explicit AddRdMemberListRequestMemberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~AddRdMemberListRequestMemberList() = default;
};
class AddRdMemberListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddRdMemberListRequestMemberList>> memberList{};

  AddRdMemberListRequest() {}

  explicit AddRdMemberListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberList) {
      vector<boost::any> temp1;
      for(auto item1:*memberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MemberList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      if (typeid(vector<boost::any>) == m["MemberList"].type()) {
        vector<AddRdMemberListRequestMemberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MemberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRdMemberListRequestMemberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memberList = make_shared<vector<AddRdMemberListRequestMemberList>>(expect1);
      }
    }
  }


  virtual ~AddRdMemberListRequest() = default;
};
class AddRdMemberListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberListShrink{};

  AddRdMemberListShrinkRequest() {}

  explicit AddRdMemberListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberListShrink) {
      res["MemberList"] = boost::any(*memberListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      memberListShrink = make_shared<string>(boost::any_cast<string>(m["MemberList"]));
    }
  }


  virtual ~AddRdMemberListShrinkRequest() = default;
};
class AddRdMemberListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddRdMemberListResponseBody() {}

  explicit AddRdMemberListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddRdMemberListResponseBody() = default;
};
class AddRdMemberListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddRdMemberListResponseBody> body{};

  AddRdMemberListResponse() {}

  explicit AddRdMemberListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddRdMemberListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRdMemberListResponseBody>(model1);
      }
    }
  }


  virtual ~AddRdMemberListResponse() = default;
};
class AttachAssetGroupToInstanceRequestAssetGroupList : public Darabonba::Model {
public:
  shared_ptr<string> memberUid{};
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> type{};

  AttachAssetGroupToInstanceRequestAssetGroupList() {}

  explicit AttachAssetGroupToInstanceRequestAssetGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AttachAssetGroupToInstanceRequestAssetGroupList() = default;
};
class AttachAssetGroupToInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AttachAssetGroupToInstanceRequestAssetGroupList>> assetGroupList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  AttachAssetGroupToInstanceRequest() {}

  explicit AttachAssetGroupToInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*assetGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssetGroupList"] = boost::any(temp1);
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
    if (m.find("AssetGroupList") != m.end() && !m["AssetGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssetGroupList"].type()) {
        vector<AttachAssetGroupToInstanceRequestAssetGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssetGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachAssetGroupToInstanceRequestAssetGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assetGroupList = make_shared<vector<AttachAssetGroupToInstanceRequestAssetGroupList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachAssetGroupToInstanceRequest() = default;
};
class AttachAssetGroupToInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetGroupListShrink{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  AttachAssetGroupToInstanceShrinkRequest() {}

  explicit AttachAssetGroupToInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetGroupListShrink) {
      res["AssetGroupList"] = boost::any(*assetGroupListShrink);
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
    if (m.find("AssetGroupList") != m.end() && !m["AssetGroupList"].empty()) {
      assetGroupListShrink = make_shared<string>(boost::any_cast<string>(m["AssetGroupList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachAssetGroupToInstanceShrinkRequest() = default;
};
class AttachAssetGroupToInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachAssetGroupToInstanceResponseBody() {}

  explicit AttachAssetGroupToInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachAssetGroupToInstanceResponseBody() = default;
};
class AttachAssetGroupToInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachAssetGroupToInstanceResponseBody> body{};

  AttachAssetGroupToInstanceResponse() {}

  explicit AttachAssetGroupToInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachAssetGroupToInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachAssetGroupToInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~AttachAssetGroupToInstanceResponse() = default;
};
class AttachToPolicyRequestIpPortProtocolList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  AttachToPolicyRequestIpPortProtocolList() {}

  explicit AttachToPolicyRequestIpPortProtocolList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~AttachToPolicyRequestIpPortProtocolList() = default;
};
class AttachToPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AttachToPolicyRequestIpPortProtocolList>> ipPortProtocolList{};
  shared_ptr<string> policyId{};

  AttachToPolicyRequest() {}

  explicit AttachToPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipPortProtocolList) {
      vector<boost::any> temp1;
      for(auto item1:*ipPortProtocolList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpPortProtocolList"] = boost::any(temp1);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpPortProtocolList") != m.end() && !m["IpPortProtocolList"].empty()) {
      if (typeid(vector<boost::any>) == m["IpPortProtocolList"].type()) {
        vector<AttachToPolicyRequestIpPortProtocolList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpPortProtocolList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachToPolicyRequestIpPortProtocolList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipPortProtocolList = make_shared<vector<AttachToPolicyRequestIpPortProtocolList>>(expect1);
      }
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~AttachToPolicyRequest() = default;
};
class AttachToPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipPortProtocolListShrink{};
  shared_ptr<string> policyId{};

  AttachToPolicyShrinkRequest() {}

  explicit AttachToPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipPortProtocolListShrink) {
      res["IpPortProtocolList"] = boost::any(*ipPortProtocolListShrink);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpPortProtocolList") != m.end() && !m["IpPortProtocolList"].empty()) {
      ipPortProtocolListShrink = make_shared<string>(boost::any_cast<string>(m["IpPortProtocolList"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~AttachToPolicyShrinkRequest() = default;
};
class AttachToPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachToPolicyResponseBody() {}

  explicit AttachToPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachToPolicyResponseBody() = default;
};
class AttachToPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachToPolicyResponseBody> body{};

  AttachToPolicyResponse() {}

  explicit AttachToPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachToPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachToPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AttachToPolicyResponse() = default;
};
class CheckAccessLogAuthRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  CheckAccessLogAuthRequest() {}

  explicit CheckAccessLogAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CheckAccessLogAuthRequest() = default;
};
class CheckAccessLogAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> accessLogAuth{};
  shared_ptr<string> requestId{};

  CheckAccessLogAuthResponseBody() {}

  explicit CheckAccessLogAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogAuth) {
      res["AccessLogAuth"] = boost::any(*accessLogAuth);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogAuth") != m.end() && !m["AccessLogAuth"].empty()) {
      accessLogAuth = make_shared<bool>(boost::any_cast<bool>(m["AccessLogAuth"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckAccessLogAuthResponseBody() = default;
};
class CheckAccessLogAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAccessLogAuthResponseBody> body{};

  CheckAccessLogAuthResponse() {}

  explicit CheckAccessLogAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckAccessLogAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAccessLogAuthResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAccessLogAuthResponse() = default;
};
class CheckGrantRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isSlr{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  CheckGrantRequest() {}

  explicit CheckGrantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSlr) {
      res["IsSlr"] = boost::any(*isSlr);
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
    if (m.find("IsSlr") != m.end() && !m["IsSlr"].empty()) {
      isSlr = make_shared<bool>(boost::any_cast<bool>(m["IsSlr"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CheckGrantRequest() = default;
};
class CheckGrantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  CheckGrantResponseBody() {}

  explicit CheckGrantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~CheckGrantResponseBody() = default;
};
class CheckGrantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckGrantResponseBody> body{};

  CheckGrantResponse() {}

  explicit CheckGrantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckGrantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckGrantResponseBody>(model1);
      }
    }
  }


  virtual ~CheckGrantResponse() = default;
};
class ConfigSchedruleOnDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleAction{};
  shared_ptr<string> ruleConditionCnt{};
  shared_ptr<string> ruleConditionKpps{};
  shared_ptr<string> ruleConditionMbps{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleSwitch{};
  shared_ptr<string> ruleUndoBeginTime{};
  shared_ptr<string> ruleUndoEndTime{};
  shared_ptr<string> ruleUndoMode{};
  shared_ptr<string> timeZone{};

  ConfigSchedruleOnDemandRequest() {}

  explicit ConfigSchedruleOnDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ruleAction) {
      res["RuleAction"] = boost::any(*ruleAction);
    }
    if (ruleConditionCnt) {
      res["RuleConditionCnt"] = boost::any(*ruleConditionCnt);
    }
    if (ruleConditionKpps) {
      res["RuleConditionKpps"] = boost::any(*ruleConditionKpps);
    }
    if (ruleConditionMbps) {
      res["RuleConditionMbps"] = boost::any(*ruleConditionMbps);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleSwitch) {
      res["RuleSwitch"] = boost::any(*ruleSwitch);
    }
    if (ruleUndoBeginTime) {
      res["RuleUndoBeginTime"] = boost::any(*ruleUndoBeginTime);
    }
    if (ruleUndoEndTime) {
      res["RuleUndoEndTime"] = boost::any(*ruleUndoEndTime);
    }
    if (ruleUndoMode) {
      res["RuleUndoMode"] = boost::any(*ruleUndoMode);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
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
    if (m.find("RuleAction") != m.end() && !m["RuleAction"].empty()) {
      ruleAction = make_shared<string>(boost::any_cast<string>(m["RuleAction"]));
    }
    if (m.find("RuleConditionCnt") != m.end() && !m["RuleConditionCnt"].empty()) {
      ruleConditionCnt = make_shared<string>(boost::any_cast<string>(m["RuleConditionCnt"]));
    }
    if (m.find("RuleConditionKpps") != m.end() && !m["RuleConditionKpps"].empty()) {
      ruleConditionKpps = make_shared<string>(boost::any_cast<string>(m["RuleConditionKpps"]));
    }
    if (m.find("RuleConditionMbps") != m.end() && !m["RuleConditionMbps"].empty()) {
      ruleConditionMbps = make_shared<string>(boost::any_cast<string>(m["RuleConditionMbps"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleSwitch") != m.end() && !m["RuleSwitch"].empty()) {
      ruleSwitch = make_shared<string>(boost::any_cast<string>(m["RuleSwitch"]));
    }
    if (m.find("RuleUndoBeginTime") != m.end() && !m["RuleUndoBeginTime"].empty()) {
      ruleUndoBeginTime = make_shared<string>(boost::any_cast<string>(m["RuleUndoBeginTime"]));
    }
    if (m.find("RuleUndoEndTime") != m.end() && !m["RuleUndoEndTime"].empty()) {
      ruleUndoEndTime = make_shared<string>(boost::any_cast<string>(m["RuleUndoEndTime"]));
    }
    if (m.find("RuleUndoMode") != m.end() && !m["RuleUndoMode"].empty()) {
      ruleUndoMode = make_shared<string>(boost::any_cast<string>(m["RuleUndoMode"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~ConfigSchedruleOnDemandRequest() = default;
};
class ConfigSchedruleOnDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigSchedruleOnDemandResponseBody() {}

  explicit ConfigSchedruleOnDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigSchedruleOnDemandResponseBody() = default;
};
class ConfigSchedruleOnDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigSchedruleOnDemandResponseBody> body{};

  ConfigSchedruleOnDemandResponse() {}

  explicit ConfigSchedruleOnDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConfigSchedruleOnDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigSchedruleOnDemandResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigSchedruleOnDemandResponse() = default;
};
class CreatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreatePolicyRequest() {}

  explicit CreatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreatePolicyRequest() = default;
};
class CreatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreatePolicyResponseBody() {}

  explicit CreatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
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
class CreateSchedruleOnDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleAction{};
  shared_ptr<string> ruleConditionCnt{};
  shared_ptr<string> ruleConditionKpps{};
  shared_ptr<string> ruleConditionMbps{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleSwitch{};
  shared_ptr<string> ruleUndoBeginTime{};
  shared_ptr<string> ruleUndoEndTime{};
  shared_ptr<string> ruleUndoMode{};
  shared_ptr<string> timeZone{};

  CreateSchedruleOnDemandRequest() {}

  explicit CreateSchedruleOnDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ruleAction) {
      res["RuleAction"] = boost::any(*ruleAction);
    }
    if (ruleConditionCnt) {
      res["RuleConditionCnt"] = boost::any(*ruleConditionCnt);
    }
    if (ruleConditionKpps) {
      res["RuleConditionKpps"] = boost::any(*ruleConditionKpps);
    }
    if (ruleConditionMbps) {
      res["RuleConditionMbps"] = boost::any(*ruleConditionMbps);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleSwitch) {
      res["RuleSwitch"] = boost::any(*ruleSwitch);
    }
    if (ruleUndoBeginTime) {
      res["RuleUndoBeginTime"] = boost::any(*ruleUndoBeginTime);
    }
    if (ruleUndoEndTime) {
      res["RuleUndoEndTime"] = boost::any(*ruleUndoEndTime);
    }
    if (ruleUndoMode) {
      res["RuleUndoMode"] = boost::any(*ruleUndoMode);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
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
    if (m.find("RuleAction") != m.end() && !m["RuleAction"].empty()) {
      ruleAction = make_shared<string>(boost::any_cast<string>(m["RuleAction"]));
    }
    if (m.find("RuleConditionCnt") != m.end() && !m["RuleConditionCnt"].empty()) {
      ruleConditionCnt = make_shared<string>(boost::any_cast<string>(m["RuleConditionCnt"]));
    }
    if (m.find("RuleConditionKpps") != m.end() && !m["RuleConditionKpps"].empty()) {
      ruleConditionKpps = make_shared<string>(boost::any_cast<string>(m["RuleConditionKpps"]));
    }
    if (m.find("RuleConditionMbps") != m.end() && !m["RuleConditionMbps"].empty()) {
      ruleConditionMbps = make_shared<string>(boost::any_cast<string>(m["RuleConditionMbps"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleSwitch") != m.end() && !m["RuleSwitch"].empty()) {
      ruleSwitch = make_shared<string>(boost::any_cast<string>(m["RuleSwitch"]));
    }
    if (m.find("RuleUndoBeginTime") != m.end() && !m["RuleUndoBeginTime"].empty()) {
      ruleUndoBeginTime = make_shared<string>(boost::any_cast<string>(m["RuleUndoBeginTime"]));
    }
    if (m.find("RuleUndoEndTime") != m.end() && !m["RuleUndoEndTime"].empty()) {
      ruleUndoEndTime = make_shared<string>(boost::any_cast<string>(m["RuleUndoEndTime"]));
    }
    if (m.find("RuleUndoMode") != m.end() && !m["RuleUndoMode"].empty()) {
      ruleUndoMode = make_shared<string>(boost::any_cast<string>(m["RuleUndoMode"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~CreateSchedruleOnDemandRequest() = default;
};
class CreateSchedruleOnDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateSchedruleOnDemandResponseBody() {}

  explicit CreateSchedruleOnDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSchedruleOnDemandResponseBody() = default;
};
class CreateSchedruleOnDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSchedruleOnDemandResponseBody> body{};

  CreateSchedruleOnDemandResponse() {}

  explicit CreateSchedruleOnDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSchedruleOnDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSchedruleOnDemandResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSchedruleOnDemandResponse() = default;
};
class DeleteBlackholeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DeleteBlackholeRequest() {}

  explicit DeleteBlackholeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteBlackholeRequest() = default;
};
class DeleteBlackholeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBlackholeResponseBody() {}

  explicit DeleteBlackholeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBlackholeResponseBody() = default;
};
class DeleteBlackholeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBlackholeResponseBody> body{};

  DeleteBlackholeResponse() {}

  explicit DeleteBlackholeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteBlackholeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBlackholeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBlackholeResponse() = default;
};
class DeleteIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DeleteIpRequest() {}

  explicit DeleteIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["IpList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteIpRequest() = default;
};
class DeleteIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpResponseBody() {}

  explicit DeleteIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpResponseBody() = default;
};
class DeleteIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIpResponseBody> body{};

  DeleteIpResponse() {}

  explicit DeleteIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpResponse() = default;
};
class DeletePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeletePolicyRequest() {}

  explicit DeletePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
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
class DeleteRdMemberListRequestMemberList : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  DeleteRdMemberListRequestMemberList() {}

  explicit DeleteRdMemberListRequestMemberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DeleteRdMemberListRequestMemberList() = default;
};
class DeleteRdMemberListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteRdMemberListRequestMemberList>> memberList{};

  DeleteRdMemberListRequest() {}

  explicit DeleteRdMemberListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberList) {
      vector<boost::any> temp1;
      for(auto item1:*memberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MemberList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      if (typeid(vector<boost::any>) == m["MemberList"].type()) {
        vector<DeleteRdMemberListRequestMemberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MemberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteRdMemberListRequestMemberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memberList = make_shared<vector<DeleteRdMemberListRequestMemberList>>(expect1);
      }
    }
  }


  virtual ~DeleteRdMemberListRequest() = default;
};
class DeleteRdMemberListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberListShrink{};

  DeleteRdMemberListShrinkRequest() {}

  explicit DeleteRdMemberListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberListShrink) {
      res["MemberList"] = boost::any(*memberListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      memberListShrink = make_shared<string>(boost::any_cast<string>(m["MemberList"]));
    }
  }


  virtual ~DeleteRdMemberListShrinkRequest() = default;
};
class DeleteRdMemberListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRdMemberListResponseBody() {}

  explicit DeleteRdMemberListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRdMemberListResponseBody() = default;
};
class DeleteRdMemberListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRdMemberListResponseBody> body{};

  DeleteRdMemberListResponse() {}

  explicit DeleteRdMemberListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRdMemberListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRdMemberListResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRdMemberListResponse() = default;
};
class DeleteSchedruleOnDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleName{};

  DeleteSchedruleOnDemandRequest() {}

  explicit DeleteSchedruleOnDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
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
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DeleteSchedruleOnDemandRequest() = default;
};
class DeleteSchedruleOnDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSchedruleOnDemandResponseBody() {}

  explicit DeleteSchedruleOnDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSchedruleOnDemandResponseBody() = default;
};
class DeleteSchedruleOnDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSchedruleOnDemandResponseBody> body{};

  DeleteSchedruleOnDemandResponse() {}

  explicit DeleteSchedruleOnDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSchedruleOnDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSchedruleOnDemandResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSchedruleOnDemandResponse() = default;
};
class DescribeAssetGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  DescribeAssetGroupRequest() {}

  explicit DescribeAssetGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAssetGroupRequest() = default;
};
class DescribeAssetGroupResponseBodyAssetGroupList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> type{};

  DescribeAssetGroupResponseBodyAssetGroupList() {}

  explicit DescribeAssetGroupResponseBodyAssetGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAssetGroupResponseBodyAssetGroupList() = default;
};
class DescribeAssetGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAssetGroupResponseBodyAssetGroupList>> assetGroupList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeAssetGroupResponseBody() {}

  explicit DescribeAssetGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*assetGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssetGroupList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetGroupList") != m.end() && !m["AssetGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssetGroupList"].type()) {
        vector<DescribeAssetGroupResponseBodyAssetGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssetGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAssetGroupResponseBodyAssetGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assetGroupList = make_shared<vector<DescribeAssetGroupResponseBodyAssetGroupList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAssetGroupResponseBody() = default;
};
class DescribeAssetGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAssetGroupResponseBody> body{};

  DescribeAssetGroupResponse() {}

  explicit DescribeAssetGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAssetGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAssetGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAssetGroupResponse() = default;
};
class DescribeAssetGroupToInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  DescribeAssetGroupToInstanceRequest() {}

  explicit DescribeAssetGroupToInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAssetGroupToInstanceRequest() = default;
};
class DescribeAssetGroupToInstanceResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> type{};

  DescribeAssetGroupToInstanceResponseBodyDataList() {}

  explicit DescribeAssetGroupToInstanceResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAssetGroupToInstanceResponseBodyDataList() = default;
};
class DescribeAssetGroupToInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAssetGroupToInstanceResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeAssetGroupToInstanceResponseBody() {}

  explicit DescribeAssetGroupToInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeAssetGroupToInstanceResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAssetGroupToInstanceResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeAssetGroupToInstanceResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAssetGroupToInstanceResponseBody() = default;
};
class DescribeAssetGroupToInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAssetGroupToInstanceResponseBody> body{};

  DescribeAssetGroupToInstanceResponse() {}

  explicit DescribeAssetGroupToInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAssetGroupToInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAssetGroupToInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAssetGroupToInstanceResponse() = default;
};
class DescribeDdosEventRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeDdosEventRequest() {}

  explicit DescribeDdosEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDdosEventRequest() = default;
};
class DescribeDdosEventResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> ip{};
  shared_ptr<long> mbps{};
  shared_ptr<long> pps{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  DescribeDdosEventResponseBodyEvents() {}

  explicit DescribeDdosEventResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mbps) {
      res["Mbps"] = boost::any(*mbps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
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
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mbps") != m.end() && !m["Mbps"].empty()) {
      mbps = make_shared<long>(boost::any_cast<long>(m["Mbps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDdosEventResponseBodyEvents() = default;
};
class DescribeDdosEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDdosEventResponseBodyEvents>> events{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeDdosEventResponseBody() {}

  explicit DescribeDdosEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeDdosEventResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDdosEventResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeDdosEventResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeDdosEventResponseBody() = default;
};
class DescribeDdosEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDdosEventResponseBody> body{};

  DescribeDdosEventResponse() {}

  explicit DescribeDdosEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDdosEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDdosEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDdosEventResponse() = default;
};
class DescribeDdosOriginInstanceBillRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<bool> isShowList{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};

  DescribeDdosOriginInstanceBillRequest() {}

  explicit DescribeDdosOriginInstanceBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isShowList) {
      res["IsShowList"] = boost::any(*isShowList);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IsShowList") != m.end() && !m["IsShowList"].empty()) {
      isShowList = make_shared<bool>(boost::any_cast<bool>(m["IsShowList"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDdosOriginInstanceBillRequest() = default;
};
class DescribeDdosOriginInstanceBillResponseBodyFlowList : public Darabonba::Model {
public:
  shared_ptr<string> memberFlow{};
  shared_ptr<string> regionFlow{};
  shared_ptr<long> time{};
  shared_ptr<long> totalBillFlow{};
  shared_ptr<long> totalFlow{};

  DescribeDdosOriginInstanceBillResponseBodyFlowList() {}

  explicit DescribeDdosOriginInstanceBillResponseBodyFlowList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberFlow) {
      res["MemberFlow"] = boost::any(*memberFlow);
    }
    if (regionFlow) {
      res["RegionFlow"] = boost::any(*regionFlow);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (totalBillFlow) {
      res["TotalBillFlow"] = boost::any(*totalBillFlow);
    }
    if (totalFlow) {
      res["TotalFlow"] = boost::any(*totalFlow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberFlow") != m.end() && !m["MemberFlow"].empty()) {
      memberFlow = make_shared<string>(boost::any_cast<string>(m["MemberFlow"]));
    }
    if (m.find("RegionFlow") != m.end() && !m["RegionFlow"].empty()) {
      regionFlow = make_shared<string>(boost::any_cast<string>(m["RegionFlow"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("TotalBillFlow") != m.end() && !m["TotalBillFlow"].empty()) {
      totalBillFlow = make_shared<long>(boost::any_cast<long>(m["TotalBillFlow"]));
    }
    if (m.find("TotalFlow") != m.end() && !m["TotalFlow"].empty()) {
      totalFlow = make_shared<long>(boost::any_cast<long>(m["TotalFlow"]));
    }
  }


  virtual ~DescribeDdosOriginInstanceBillResponseBodyFlowList() = default;
};
class DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList : public Darabonba::Model {
public:
  shared_ptr<string> coverage{};
  shared_ptr<long> ipCntCn{};
  shared_ptr<long> ipCntOv{};
  shared_ptr<string> memberIpCnt{};
  shared_ptr<long> time{};

  DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList() {}

  explicit DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverage) {
      res["Coverage"] = boost::any(*coverage);
    }
    if (ipCntCn) {
      res["IpCntCn"] = boost::any(*ipCntCn);
    }
    if (ipCntOv) {
      res["IpCntOv"] = boost::any(*ipCntOv);
    }
    if (memberIpCnt) {
      res["MemberIpCnt"] = boost::any(*memberIpCnt);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coverage") != m.end() && !m["Coverage"].empty()) {
      coverage = make_shared<string>(boost::any_cast<string>(m["Coverage"]));
    }
    if (m.find("IpCntCn") != m.end() && !m["IpCntCn"].empty()) {
      ipCntCn = make_shared<long>(boost::any_cast<long>(m["IpCntCn"]));
    }
    if (m.find("IpCntOv") != m.end() && !m["IpCntOv"].empty()) {
      ipCntOv = make_shared<long>(boost::any_cast<long>(m["IpCntOv"]));
    }
    if (m.find("MemberIpCnt") != m.end() && !m["MemberIpCnt"].empty()) {
      memberIpCnt = make_shared<string>(boost::any_cast<string>(m["MemberIpCnt"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList() = default;
};
class DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList : public Darabonba::Model {
public:
  shared_ptr<long> enableDays{};
  shared_ptr<long> flowCn{};
  shared_ptr<long> flowIntl{};
  shared_ptr<long> ipCountCn{};
  shared_ptr<long> ipCountIntl{};
  shared_ptr<string> memberUid{};
  shared_ptr<long> standardAssetsFlowCn{};
  shared_ptr<long> standardAssetsFlowIntl{};
  shared_ptr<string> uid{};

  DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList() {}

  explicit DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDays) {
      res["EnableDays"] = boost::any(*enableDays);
    }
    if (flowCn) {
      res["FlowCn"] = boost::any(*flowCn);
    }
    if (flowIntl) {
      res["FlowIntl"] = boost::any(*flowIntl);
    }
    if (ipCountCn) {
      res["IpCountCn"] = boost::any(*ipCountCn);
    }
    if (ipCountIntl) {
      res["IpCountIntl"] = boost::any(*ipCountIntl);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (standardAssetsFlowCn) {
      res["StandardAssetsFlowCn"] = boost::any(*standardAssetsFlowCn);
    }
    if (standardAssetsFlowIntl) {
      res["StandardAssetsFlowIntl"] = boost::any(*standardAssetsFlowIntl);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableDays") != m.end() && !m["EnableDays"].empty()) {
      enableDays = make_shared<long>(boost::any_cast<long>(m["EnableDays"]));
    }
    if (m.find("FlowCn") != m.end() && !m["FlowCn"].empty()) {
      flowCn = make_shared<long>(boost::any_cast<long>(m["FlowCn"]));
    }
    if (m.find("FlowIntl") != m.end() && !m["FlowIntl"].empty()) {
      flowIntl = make_shared<long>(boost::any_cast<long>(m["FlowIntl"]));
    }
    if (m.find("IpCountCn") != m.end() && !m["IpCountCn"].empty()) {
      ipCountCn = make_shared<long>(boost::any_cast<long>(m["IpCountCn"]));
    }
    if (m.find("IpCountIntl") != m.end() && !m["IpCountIntl"].empty()) {
      ipCountIntl = make_shared<long>(boost::any_cast<long>(m["IpCountIntl"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("StandardAssetsFlowCn") != m.end() && !m["StandardAssetsFlowCn"].empty()) {
      standardAssetsFlowCn = make_shared<long>(boost::any_cast<long>(m["StandardAssetsFlowCn"]));
    }
    if (m.find("StandardAssetsFlowIntl") != m.end() && !m["StandardAssetsFlowIntl"].empty()) {
      standardAssetsFlowIntl = make_shared<long>(boost::any_cast<long>(m["StandardAssetsFlowIntl"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList() = default;
};
class DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList : public Darabonba::Model {
public:
  shared_ptr<string> memberFlow{};
  shared_ptr<string> regionFlow{};
  shared_ptr<long> time{};
  shared_ptr<long> totalFlow{};

  DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList() {}

  explicit DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberFlow) {
      res["MemberFlow"] = boost::any(*memberFlow);
    }
    if (regionFlow) {
      res["RegionFlow"] = boost::any(*regionFlow);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (totalFlow) {
      res["TotalFlow"] = boost::any(*totalFlow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberFlow") != m.end() && !m["MemberFlow"].empty()) {
      memberFlow = make_shared<string>(boost::any_cast<string>(m["MemberFlow"]));
    }
    if (m.find("RegionFlow") != m.end() && !m["RegionFlow"].empty()) {
      regionFlow = make_shared<string>(boost::any_cast<string>(m["RegionFlow"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("TotalFlow") != m.end() && !m["TotalFlow"].empty()) {
      totalFlow = make_shared<long>(boost::any_cast<long>(m["TotalFlow"]));
    }
  }


  virtual ~DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList() = default;
};
class DescribeDdosOriginInstanceBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> assetStatus{};
  shared_ptr<long> debtStatus{};
  shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBodyFlowList>> flowList{};
  shared_ptr<map<string, boost::any>> flowRegion{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ipCount{};
  shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList>> ipCountOrFunctionList{};
  shared_ptr<string> ipInfo{};
  shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList>> monthlySummaryList{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList>> standardAssetsFlowList{};
  shared_ptr<map<string, boost::any>> standardAssetsFlowRegion{};
  shared_ptr<long> standardAssetsTotalFlowCn{};
  shared_ptr<long> standardAssetsTotalFlowOv{};
  shared_ptr<long> status{};
  shared_ptr<long> totalFlowCn{};
  shared_ptr<long> totalFlowOv{};

  DescribeDdosOriginInstanceBillResponseBody() {}

  explicit DescribeDdosOriginInstanceBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetStatus) {
      res["AssetStatus"] = boost::any(*assetStatus);
    }
    if (debtStatus) {
      res["DebtStatus"] = boost::any(*debtStatus);
    }
    if (flowList) {
      vector<boost::any> temp1;
      for(auto item1:*flowList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FlowList"] = boost::any(temp1);
    }
    if (flowRegion) {
      res["FlowRegion"] = boost::any(*flowRegion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipCount) {
      res["IpCount"] = boost::any(*ipCount);
    }
    if (ipCountOrFunctionList) {
      vector<boost::any> temp1;
      for(auto item1:*ipCountOrFunctionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpCountOrFunctionList"] = boost::any(temp1);
    }
    if (ipInfo) {
      res["IpInfo"] = boost::any(*ipInfo);
    }
    if (monthlySummaryList) {
      vector<boost::any> temp1;
      for(auto item1:*monthlySummaryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MonthlySummaryList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (standardAssetsFlowList) {
      vector<boost::any> temp1;
      for(auto item1:*standardAssetsFlowList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StandardAssetsFlowList"] = boost::any(temp1);
    }
    if (standardAssetsFlowRegion) {
      res["StandardAssetsFlowRegion"] = boost::any(*standardAssetsFlowRegion);
    }
    if (standardAssetsTotalFlowCn) {
      res["StandardAssetsTotalFlowCn"] = boost::any(*standardAssetsTotalFlowCn);
    }
    if (standardAssetsTotalFlowOv) {
      res["StandardAssetsTotalFlowOv"] = boost::any(*standardAssetsTotalFlowOv);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalFlowCn) {
      res["TotalFlowCn"] = boost::any(*totalFlowCn);
    }
    if (totalFlowOv) {
      res["TotalFlowOv"] = boost::any(*totalFlowOv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetStatus") != m.end() && !m["AssetStatus"].empty()) {
      assetStatus = make_shared<long>(boost::any_cast<long>(m["AssetStatus"]));
    }
    if (m.find("DebtStatus") != m.end() && !m["DebtStatus"].empty()) {
      debtStatus = make_shared<long>(boost::any_cast<long>(m["DebtStatus"]));
    }
    if (m.find("FlowList") != m.end() && !m["FlowList"].empty()) {
      if (typeid(vector<boost::any>) == m["FlowList"].type()) {
        vector<DescribeDdosOriginInstanceBillResponseBodyFlowList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FlowList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDdosOriginInstanceBillResponseBodyFlowList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowList = make_shared<vector<DescribeDdosOriginInstanceBillResponseBodyFlowList>>(expect1);
      }
    }
    if (m.find("FlowRegion") != m.end() && !m["FlowRegion"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["FlowRegion"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      flowRegion = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpCount") != m.end() && !m["IpCount"].empty()) {
      ipCount = make_shared<long>(boost::any_cast<long>(m["IpCount"]));
    }
    if (m.find("IpCountOrFunctionList") != m.end() && !m["IpCountOrFunctionList"].empty()) {
      if (typeid(vector<boost::any>) == m["IpCountOrFunctionList"].type()) {
        vector<DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpCountOrFunctionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipCountOrFunctionList = make_shared<vector<DescribeDdosOriginInstanceBillResponseBodyIpCountOrFunctionList>>(expect1);
      }
    }
    if (m.find("IpInfo") != m.end() && !m["IpInfo"].empty()) {
      ipInfo = make_shared<string>(boost::any_cast<string>(m["IpInfo"]));
    }
    if (m.find("MonthlySummaryList") != m.end() && !m["MonthlySummaryList"].empty()) {
      if (typeid(vector<boost::any>) == m["MonthlySummaryList"].type()) {
        vector<DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MonthlySummaryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        monthlySummaryList = make_shared<vector<DescribeDdosOriginInstanceBillResponseBodyMonthlySummaryList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StandardAssetsFlowList") != m.end() && !m["StandardAssetsFlowList"].empty()) {
      if (typeid(vector<boost::any>) == m["StandardAssetsFlowList"].type()) {
        vector<DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StandardAssetsFlowList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        standardAssetsFlowList = make_shared<vector<DescribeDdosOriginInstanceBillResponseBodyStandardAssetsFlowList>>(expect1);
      }
    }
    if (m.find("StandardAssetsFlowRegion") != m.end() && !m["StandardAssetsFlowRegion"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["StandardAssetsFlowRegion"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      standardAssetsFlowRegion = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("StandardAssetsTotalFlowCn") != m.end() && !m["StandardAssetsTotalFlowCn"].empty()) {
      standardAssetsTotalFlowCn = make_shared<long>(boost::any_cast<long>(m["StandardAssetsTotalFlowCn"]));
    }
    if (m.find("StandardAssetsTotalFlowOv") != m.end() && !m["StandardAssetsTotalFlowOv"].empty()) {
      standardAssetsTotalFlowOv = make_shared<long>(boost::any_cast<long>(m["StandardAssetsTotalFlowOv"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TotalFlowCn") != m.end() && !m["TotalFlowCn"].empty()) {
      totalFlowCn = make_shared<long>(boost::any_cast<long>(m["TotalFlowCn"]));
    }
    if (m.find("TotalFlowOv") != m.end() && !m["TotalFlowOv"].empty()) {
      totalFlowOv = make_shared<long>(boost::any_cast<long>(m["TotalFlowOv"]));
    }
  }


  virtual ~DescribeDdosOriginInstanceBillResponseBody() = default;
};
class DescribeDdosOriginInstanceBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDdosOriginInstanceBillResponseBody> body{};

  DescribeDdosOriginInstanceBillResponse() {}

  explicit DescribeDdosOriginInstanceBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDdosOriginInstanceBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDdosOriginInstanceBillResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDdosOriginInstanceBillResponse() = default;
};
class DescribeExcpetionCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribeExcpetionCountRequest() {}

  explicit DescribeExcpetionCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeExcpetionCountRequest() = default;
};
class DescribeExcpetionCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> exceptionIpCount{};
  shared_ptr<long> expireTimeCount{};
  shared_ptr<string> requestId{};

  DescribeExcpetionCountResponseBody() {}

  explicit DescribeExcpetionCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionIpCount) {
      res["ExceptionIpCount"] = boost::any(*exceptionIpCount);
    }
    if (expireTimeCount) {
      res["ExpireTimeCount"] = boost::any(*expireTimeCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionIpCount") != m.end() && !m["ExceptionIpCount"].empty()) {
      exceptionIpCount = make_shared<long>(boost::any_cast<long>(m["ExceptionIpCount"]));
    }
    if (m.find("ExpireTimeCount") != m.end() && !m["ExpireTimeCount"].empty()) {
      expireTimeCount = make_shared<long>(boost::any_cast<long>(m["ExpireTimeCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeExcpetionCountResponseBody() = default;
};
class DescribeExcpetionCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExcpetionCountResponseBody> body{};

  DescribeExcpetionCountResponse() {}

  explicit DescribeExcpetionCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeExcpetionCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExcpetionCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExcpetionCountResponse() = default;
};
class DescribeInstanceListRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstanceListRequestTag() {}

  explicit DescribeInstanceListRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceListRequestTag() = default;
};
class DescribeInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIdList{};
  shared_ptr<string> instanceType{};
  shared_ptr<vector<string>> instanceTypeList{};
  shared_ptr<string> ip{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> orderby{};
  shared_ptr<string> orderdire{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeInstanceListRequestTag>> tag{};

  DescribeInstanceListRequest() {}

  explicit DescribeInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceTypeList) {
      res["InstanceTypeList"] = boost::any(*instanceTypeList);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (orderby) {
      res["Orderby"] = boost::any(*orderby);
    }
    if (orderdire) {
      res["Orderdire"] = boost::any(*orderdire);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("InstanceIdList") != m.end() && !m["InstanceIdList"].empty()) {
      instanceIdList = make_shared<string>(boost::any_cast<string>(m["InstanceIdList"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceTypeList") != m.end() && !m["InstanceTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Orderby") != m.end() && !m["Orderby"].empty()) {
      orderby = make_shared<string>(boost::any_cast<string>(m["Orderby"]));
    }
    if (m.find("Orderdire") != m.end() && !m["Orderdire"].empty()) {
      orderdire = make_shared<string>(boost::any_cast<string>(m["Orderdire"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstanceListRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceListRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstanceListRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceListRequest() = default;
};
class DescribeInstanceListResponseBodyInstanceListAutoProtectCondition : public Darabonba::Model {
public:
  shared_ptr<vector<string>> events{};

  DescribeInstanceListResponseBodyInstanceListAutoProtectCondition() {}

  explicit DescribeInstanceListResponseBodyInstanceListAutoProtectCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      res["Events"] = boost::any(*events);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceListResponseBodyInstanceListAutoProtectCondition() = default;
};
class DescribeInstanceListResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<DescribeInstanceListResponseBodyInstanceListAutoProtectCondition> autoProtectCondition{};
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> blackholdingCount{};
  shared_ptr<string> commodityType{};
  shared_ptr<long> coverageType{};
  shared_ptr<long> debtStatus{};
  shared_ptr<long> expireTime{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ipType{};
  shared_ptr<string> product{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};

  DescribeInstanceListResponseBodyInstanceList() {}

  explicit DescribeInstanceListResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoProtectCondition) {
      res["AutoProtectCondition"] = autoProtectCondition ? boost::any(autoProtectCondition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (blackholdingCount) {
      res["BlackholdingCount"] = boost::any(*blackholdingCount);
    }
    if (commodityType) {
      res["CommodityType"] = boost::any(*commodityType);
    }
    if (coverageType) {
      res["CoverageType"] = boost::any(*coverageType);
    }
    if (debtStatus) {
      res["DebtStatus"] = boost::any(*debtStatus);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ipType) {
      res["IpType"] = boost::any(*ipType);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("AutoProtectCondition") != m.end() && !m["AutoProtectCondition"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoProtectCondition"].type()) {
        DescribeInstanceListResponseBodyInstanceListAutoProtectCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoProtectCondition"]));
        autoProtectCondition = make_shared<DescribeInstanceListResponseBodyInstanceListAutoProtectCondition>(model1);
      }
    }
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("BlackholdingCount") != m.end() && !m["BlackholdingCount"].empty()) {
      blackholdingCount = make_shared<string>(boost::any_cast<string>(m["BlackholdingCount"]));
    }
    if (m.find("CommodityType") != m.end() && !m["CommodityType"].empty()) {
      commodityType = make_shared<string>(boost::any_cast<string>(m["CommodityType"]));
    }
    if (m.find("CoverageType") != m.end() && !m["CoverageType"].empty()) {
      coverageType = make_shared<long>(boost::any_cast<long>(m["CoverageType"]));
    }
    if (m.find("DebtStatus") != m.end() && !m["DebtStatus"].empty()) {
      debtStatus = make_shared<long>(boost::any_cast<long>(m["DebtStatus"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IpType") != m.end() && !m["IpType"].empty()) {
      ipType = make_shared<string>(boost::any_cast<string>(m["IpType"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeInstanceListResponseBodyInstanceList() = default;
};
class DescribeInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceListResponseBodyInstanceList>> instanceList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeInstanceListResponseBody() {}

  explicit DescribeInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<DescribeInstanceListResponseBodyInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceListResponseBodyInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<DescribeInstanceListResponseBodyInstanceList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeInstanceListResponseBody() = default;
};
class DescribeInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceListResponseBody> body{};

  DescribeInstanceListResponse() {}

  explicit DescribeInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceListResponse() = default;
};
class DescribeInstanceSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIdList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribeInstanceSpecsRequest() {}

  explicit DescribeInstanceSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
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
    if (m.find("InstanceIdList") != m.end() && !m["InstanceIdList"].empty()) {
      instanceIdList = make_shared<string>(boost::any_cast<string>(m["InstanceIdList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeInstanceSpecsRequest() = default;
};
class DescribeInstanceSpecsResponseBodyInstanceSpecsPackConfig : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<long> bindIpCount{};
  shared_ptr<long> elasticBwMbps{};
  shared_ptr<string> elasticBwMode{};
  shared_ptr<long> ipAdvanceThre{};
  shared_ptr<long> ipBasicThre{};
  shared_ptr<long> ipSpec{};
  shared_ptr<long> normalBandwidth{};
  shared_ptr<long> packAdvThre{};
  shared_ptr<long> packBasicThre{};

  DescribeInstanceSpecsResponseBodyInstanceSpecsPackConfig() {}

  explicit DescribeInstanceSpecsResponseBodyInstanceSpecsPackConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bindIpCount) {
      res["BindIpCount"] = boost::any(*bindIpCount);
    }
    if (elasticBwMbps) {
      res["ElasticBwMbps"] = boost::any(*elasticBwMbps);
    }
    if (elasticBwMode) {
      res["ElasticBwMode"] = boost::any(*elasticBwMode);
    }
    if (ipAdvanceThre) {
      res["IpAdvanceThre"] = boost::any(*ipAdvanceThre);
    }
    if (ipBasicThre) {
      res["IpBasicThre"] = boost::any(*ipBasicThre);
    }
    if (ipSpec) {
      res["IpSpec"] = boost::any(*ipSpec);
    }
    if (normalBandwidth) {
      res["NormalBandwidth"] = boost::any(*normalBandwidth);
    }
    if (packAdvThre) {
      res["PackAdvThre"] = boost::any(*packAdvThre);
    }
    if (packBasicThre) {
      res["PackBasicThre"] = boost::any(*packBasicThre);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BindIpCount") != m.end() && !m["BindIpCount"].empty()) {
      bindIpCount = make_shared<long>(boost::any_cast<long>(m["BindIpCount"]));
    }
    if (m.find("ElasticBwMbps") != m.end() && !m["ElasticBwMbps"].empty()) {
      elasticBwMbps = make_shared<long>(boost::any_cast<long>(m["ElasticBwMbps"]));
    }
    if (m.find("ElasticBwMode") != m.end() && !m["ElasticBwMode"].empty()) {
      elasticBwMode = make_shared<string>(boost::any_cast<string>(m["ElasticBwMode"]));
    }
    if (m.find("IpAdvanceThre") != m.end() && !m["IpAdvanceThre"].empty()) {
      ipAdvanceThre = make_shared<long>(boost::any_cast<long>(m["IpAdvanceThre"]));
    }
    if (m.find("IpBasicThre") != m.end() && !m["IpBasicThre"].empty()) {
      ipBasicThre = make_shared<long>(boost::any_cast<long>(m["IpBasicThre"]));
    }
    if (m.find("IpSpec") != m.end() && !m["IpSpec"].empty()) {
      ipSpec = make_shared<long>(boost::any_cast<long>(m["IpSpec"]));
    }
    if (m.find("NormalBandwidth") != m.end() && !m["NormalBandwidth"].empty()) {
      normalBandwidth = make_shared<long>(boost::any_cast<long>(m["NormalBandwidth"]));
    }
    if (m.find("PackAdvThre") != m.end() && !m["PackAdvThre"].empty()) {
      packAdvThre = make_shared<long>(boost::any_cast<long>(m["PackAdvThre"]));
    }
    if (m.find("PackBasicThre") != m.end() && !m["PackBasicThre"].empty()) {
      packBasicThre = make_shared<long>(boost::any_cast<long>(m["PackBasicThre"]));
    }
  }


  virtual ~DescribeInstanceSpecsResponseBodyInstanceSpecsPackConfig() = default;
};
class DescribeInstanceSpecsResponseBodyInstanceSpecs : public Darabonba::Model {
public:
  shared_ptr<long> availableDefenseTimes{};
  shared_ptr<string> availableDeleteBlackholeCount{};
  shared_ptr<long> defenseTimesPercent{};
  shared_ptr<long> downgradeStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> isFullDefenseMode{};
  shared_ptr<DescribeInstanceSpecsResponseBodyInstanceSpecsPackConfig> packConfig{};
  shared_ptr<string> region{};
  shared_ptr<long> totalDefenseTimes{};

  DescribeInstanceSpecsResponseBodyInstanceSpecs() {}

  explicit DescribeInstanceSpecsResponseBodyInstanceSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableDefenseTimes) {
      res["AvailableDefenseTimes"] = boost::any(*availableDefenseTimes);
    }
    if (availableDeleteBlackholeCount) {
      res["AvailableDeleteBlackholeCount"] = boost::any(*availableDeleteBlackholeCount);
    }
    if (defenseTimesPercent) {
      res["DefenseTimesPercent"] = boost::any(*defenseTimesPercent);
    }
    if (downgradeStatus) {
      res["DowngradeStatus"] = boost::any(*downgradeStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isFullDefenseMode) {
      res["IsFullDefenseMode"] = boost::any(*isFullDefenseMode);
    }
    if (packConfig) {
      res["PackConfig"] = packConfig ? boost::any(packConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (totalDefenseTimes) {
      res["TotalDefenseTimes"] = boost::any(*totalDefenseTimes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableDefenseTimes") != m.end() && !m["AvailableDefenseTimes"].empty()) {
      availableDefenseTimes = make_shared<long>(boost::any_cast<long>(m["AvailableDefenseTimes"]));
    }
    if (m.find("AvailableDeleteBlackholeCount") != m.end() && !m["AvailableDeleteBlackholeCount"].empty()) {
      availableDeleteBlackholeCount = make_shared<string>(boost::any_cast<string>(m["AvailableDeleteBlackholeCount"]));
    }
    if (m.find("DefenseTimesPercent") != m.end() && !m["DefenseTimesPercent"].empty()) {
      defenseTimesPercent = make_shared<long>(boost::any_cast<long>(m["DefenseTimesPercent"]));
    }
    if (m.find("DowngradeStatus") != m.end() && !m["DowngradeStatus"].empty()) {
      downgradeStatus = make_shared<long>(boost::any_cast<long>(m["DowngradeStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsFullDefenseMode") != m.end() && !m["IsFullDefenseMode"].empty()) {
      isFullDefenseMode = make_shared<long>(boost::any_cast<long>(m["IsFullDefenseMode"]));
    }
    if (m.find("PackConfig") != m.end() && !m["PackConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackConfig"].type()) {
        DescribeInstanceSpecsResponseBodyInstanceSpecsPackConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackConfig"]));
        packConfig = make_shared<DescribeInstanceSpecsResponseBodyInstanceSpecsPackConfig>(model1);
      }
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("TotalDefenseTimes") != m.end() && !m["TotalDefenseTimes"].empty()) {
      totalDefenseTimes = make_shared<long>(boost::any_cast<long>(m["TotalDefenseTimes"]));
    }
  }


  virtual ~DescribeInstanceSpecsResponseBodyInstanceSpecs() = default;
};
class DescribeInstanceSpecsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceSpecsResponseBodyInstanceSpecs>> instanceSpecs{};
  shared_ptr<string> requestId{};

  DescribeInstanceSpecsResponseBody() {}

  explicit DescribeInstanceSpecsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*instanceSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceSpecs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSpecs") != m.end() && !m["InstanceSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceSpecs"].type()) {
        vector<DescribeInstanceSpecsResponseBodyInstanceSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceSpecsResponseBodyInstanceSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceSpecs = make_shared<vector<DescribeInstanceSpecsResponseBodyInstanceSpecs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceSpecsResponseBody() = default;
};
class DescribeInstanceSpecsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceSpecsResponseBody> body{};

  DescribeInstanceSpecsResponse() {}

  explicit DescribeInstanceSpecsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceSpecsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSpecsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSpecsResponse() = default;
};
class DescribeOnDemandDdosEventRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeOnDemandDdosEventRequest() {}

  explicit DescribeOnDemandDdosEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeOnDemandDdosEventRequest() = default;
};
class DescribeOnDemandDdosEventResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> ip{};
  shared_ptr<long> mbps{};
  shared_ptr<long> pps{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  DescribeOnDemandDdosEventResponseBodyEvents() {}

  explicit DescribeOnDemandDdosEventResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mbps) {
      res["Mbps"] = boost::any(*mbps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
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
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mbps") != m.end() && !m["Mbps"].empty()) {
      mbps = make_shared<long>(boost::any_cast<long>(m["Mbps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeOnDemandDdosEventResponseBodyEvents() = default;
};
class DescribeOnDemandDdosEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOnDemandDdosEventResponseBodyEvents>> events{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeOnDemandDdosEventResponseBody() {}

  explicit DescribeOnDemandDdosEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeOnDemandDdosEventResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOnDemandDdosEventResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeOnDemandDdosEventResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeOnDemandDdosEventResponseBody() = default;
};
class DescribeOnDemandDdosEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOnDemandDdosEventResponseBody> body{};

  DescribeOnDemandDdosEventResponse() {}

  explicit DescribeOnDemandDdosEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeOnDemandDdosEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOnDemandDdosEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOnDemandDdosEventResponse() = default;
};
class DescribeOnDemandInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIdList{};
  shared_ptr<string> regionId{};

  DescribeOnDemandInstanceStatusRequest() {}

  explicit DescribeOnDemandInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIdList") != m.end() && !m["InstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeOnDemandInstanceStatusRequest() = default;
};
class DescribeOnDemandInstanceStatusResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> declared{};
  shared_ptr<string> desc{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mode{};
  shared_ptr<string> net{};
  shared_ptr<string> registedAs{};
  shared_ptr<string> userId{};

  DescribeOnDemandInstanceStatusResponseBodyInstances() {}

  explicit DescribeOnDemandInstanceStatusResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (declared) {
      res["Declared"] = boost::any(*declared);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (net) {
      res["Net"] = boost::any(*net);
    }
    if (registedAs) {
      res["RegistedAs"] = boost::any(*registedAs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Declared") != m.end() && !m["Declared"].empty()) {
      declared = make_shared<string>(boost::any_cast<string>(m["Declared"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Net") != m.end() && !m["Net"].empty()) {
      net = make_shared<string>(boost::any_cast<string>(m["Net"]));
    }
    if (m.find("RegistedAs") != m.end() && !m["RegistedAs"].empty()) {
      registedAs = make_shared<string>(boost::any_cast<string>(m["RegistedAs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeOnDemandInstanceStatusResponseBodyInstances() = default;
};
class DescribeOnDemandInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOnDemandInstanceStatusResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};

  DescribeOnDemandInstanceStatusResponseBody() {}

  explicit DescribeOnDemandInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeOnDemandInstanceStatusResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOnDemandInstanceStatusResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeOnDemandInstanceStatusResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOnDemandInstanceStatusResponseBody() = default;
};
class DescribeOnDemandInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOnDemandInstanceStatusResponseBody> body{};

  DescribeOnDemandInstanceStatusResponse() {}

  explicit DescribeOnDemandInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeOnDemandInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOnDemandInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOnDemandInstanceStatusResponse() = default;
};
class DescribeOpEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> opAction{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderDir{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeOpEntitiesRequest() {}

  explicit DescribeOpEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (opAction) {
      res["OpAction"] = boost::any(*opAction);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (orderDir) {
      res["OrderDir"] = boost::any(*orderDir);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OpAction") != m.end() && !m["OpAction"].empty()) {
      opAction = make_shared<long>(boost::any_cast<long>(m["OpAction"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OrderDir") != m.end() && !m["OrderDir"].empty()) {
      orderDir = make_shared<string>(boost::any_cast<string>(m["OrderDir"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeOpEntitiesRequest() = default;
};
class DescribeOpEntitiesResponseBodyOpEntities : public Darabonba::Model {
public:
  shared_ptr<string> entityObject{};
  shared_ptr<long> entityType{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> opAccount{};
  shared_ptr<long> opAction{};
  shared_ptr<string> opDesc{};

  DescribeOpEntitiesResponseBodyOpEntities() {}

  explicit DescribeOpEntitiesResponseBodyOpEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityObject) {
      res["EntityObject"] = boost::any(*entityObject);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (opAccount) {
      res["OpAccount"] = boost::any(*opAccount);
    }
    if (opAction) {
      res["OpAction"] = boost::any(*opAction);
    }
    if (opDesc) {
      res["OpDesc"] = boost::any(*opDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityObject") != m.end() && !m["EntityObject"].empty()) {
      entityObject = make_shared<string>(boost::any_cast<string>(m["EntityObject"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<long>(boost::any_cast<long>(m["EntityType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("OpAccount") != m.end() && !m["OpAccount"].empty()) {
      opAccount = make_shared<string>(boost::any_cast<string>(m["OpAccount"]));
    }
    if (m.find("OpAction") != m.end() && !m["OpAction"].empty()) {
      opAction = make_shared<long>(boost::any_cast<long>(m["OpAction"]));
    }
    if (m.find("OpDesc") != m.end() && !m["OpDesc"].empty()) {
      opDesc = make_shared<string>(boost::any_cast<string>(m["OpDesc"]));
    }
  }


  virtual ~DescribeOpEntitiesResponseBodyOpEntities() = default;
};
class DescribeOpEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOpEntitiesResponseBodyOpEntities>> opEntities{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeOpEntitiesResponseBody() {}

  explicit DescribeOpEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opEntities) {
      vector<boost::any> temp1;
      for(auto item1:*opEntities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpEntities"] = boost::any(temp1);
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
    if (m.find("OpEntities") != m.end() && !m["OpEntities"].empty()) {
      if (typeid(vector<boost::any>) == m["OpEntities"].type()) {
        vector<DescribeOpEntitiesResponseBodyOpEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpEntities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOpEntitiesResponseBodyOpEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        opEntities = make_shared<vector<DescribeOpEntitiesResponseBodyOpEntities>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOpEntitiesResponseBody() = default;
};
class DescribeOpEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOpEntitiesResponseBody> body{};

  DescribeOpEntitiesResponse() {}

  explicit DescribeOpEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeOpEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOpEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOpEntitiesResponse() = default;
};
class DescribePackIpListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> memberUid{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribePackIpListRequest() {}

  explicit DescribePackIpListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribePackIpListRequest() = default;
};
class DescribePackIpListResponseBodyIpList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> memberUid{};
  shared_ptr<long> nsmExpireAt{};
  shared_ptr<long> nsmStartAt{};
  shared_ptr<long> nsmStatus{};
  shared_ptr<string> product{};
  shared_ptr<string> region{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  DescribePackIpListResponseBodyIpList() {}

  explicit DescribePackIpListResponseBodyIpList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (nsmExpireAt) {
      res["NsmExpireAt"] = boost::any(*nsmExpireAt);
    }
    if (nsmStartAt) {
      res["NsmStartAt"] = boost::any(*nsmStartAt);
    }
    if (nsmStatus) {
      res["NsmStatus"] = boost::any(*nsmStatus);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("NsmExpireAt") != m.end() && !m["NsmExpireAt"].empty()) {
      nsmExpireAt = make_shared<long>(boost::any_cast<long>(m["NsmExpireAt"]));
    }
    if (m.find("NsmStartAt") != m.end() && !m["NsmStartAt"].empty()) {
      nsmStartAt = make_shared<long>(boost::any_cast<long>(m["NsmStartAt"]));
    }
    if (m.find("NsmStatus") != m.end() && !m["NsmStatus"].empty()) {
      nsmStatus = make_shared<long>(boost::any_cast<long>(m["NsmStatus"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribePackIpListResponseBodyIpList() = default;
};
class DescribePackIpListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribePackIpListResponseBodyIpList>> ipList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  DescribePackIpListResponseBody() {}

  explicit DescribePackIpListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (ipList) {
      vector<boost::any> temp1;
      for(auto item1:*ipList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      if (typeid(vector<boost::any>) == m["IpList"].type()) {
        vector<DescribePackIpListResponseBodyIpList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePackIpListResponseBodyIpList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipList = make_shared<vector<DescribePackIpListResponseBodyIpList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribePackIpListResponseBody() = default;
};
class DescribePackIpListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePackIpListResponseBody> body{};

  DescribePackIpListResponse() {}

  explicit DescribePackIpListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePackIpListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePackIpListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePackIpListResponse() = default;
};
class DescribeRdMemberListRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceDirectoryId{};

  DescribeRdMemberListRequest() {}

  explicit DescribeRdMemberListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
  }


  virtual ~DescribeRdMemberListRequest() = default;
};
class DescribeRdMemberListResponseBodyMemberList : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> name{};
  shared_ptr<string> uid{};

  DescribeRdMemberListResponseBodyMemberList() {}

  explicit DescribeRdMemberListResponseBodyMemberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeRdMemberListResponseBodyMemberList() = default;
};
class DescribeRdMemberListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdMemberListResponseBodyMemberList>> memberList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeRdMemberListResponseBody() {}

  explicit DescribeRdMemberListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberList) {
      vector<boost::any> temp1;
      for(auto item1:*memberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MemberList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      if (typeid(vector<boost::any>) == m["MemberList"].type()) {
        vector<DescribeRdMemberListResponseBodyMemberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MemberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdMemberListResponseBodyMemberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memberList = make_shared<vector<DescribeRdMemberListResponseBodyMemberList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeRdMemberListResponseBody() = default;
};
class DescribeRdMemberListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRdMemberListResponseBody> body{};

  DescribeRdMemberListResponse() {}

  explicit DescribeRdMemberListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRdMemberListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdMemberListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdMemberListResponse() = default;
};
class DescribeRdStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> currentUid{};
  shared_ptr<string> currentUidType{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> localEnable{};
  shared_ptr<string> masterUid{};
  shared_ptr<bool> remoteEnable{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rootUid{};
  shared_ptr<bool> servicePrincipalEnabled{};

  DescribeRdStatusResponseBody() {}

  explicit DescribeRdStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentUid) {
      res["CurrentUid"] = boost::any(*currentUid);
    }
    if (currentUidType) {
      res["CurrentUidType"] = boost::any(*currentUidType);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (localEnable) {
      res["LocalEnable"] = boost::any(*localEnable);
    }
    if (masterUid) {
      res["MasterUid"] = boost::any(*masterUid);
    }
    if (remoteEnable) {
      res["RemoteEnable"] = boost::any(*remoteEnable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rootUid) {
      res["RootUid"] = boost::any(*rootUid);
    }
    if (servicePrincipalEnabled) {
      res["ServicePrincipalEnabled"] = boost::any(*servicePrincipalEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentUid") != m.end() && !m["CurrentUid"].empty()) {
      currentUid = make_shared<string>(boost::any_cast<string>(m["CurrentUid"]));
    }
    if (m.find("CurrentUidType") != m.end() && !m["CurrentUidType"].empty()) {
      currentUidType = make_shared<string>(boost::any_cast<string>(m["CurrentUidType"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("LocalEnable") != m.end() && !m["LocalEnable"].empty()) {
      localEnable = make_shared<bool>(boost::any_cast<bool>(m["LocalEnable"]));
    }
    if (m.find("MasterUid") != m.end() && !m["MasterUid"].empty()) {
      masterUid = make_shared<string>(boost::any_cast<string>(m["MasterUid"]));
    }
    if (m.find("RemoteEnable") != m.end() && !m["RemoteEnable"].empty()) {
      remoteEnable = make_shared<bool>(boost::any_cast<bool>(m["RemoteEnable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RootUid") != m.end() && !m["RootUid"].empty()) {
      rootUid = make_shared<string>(boost::any_cast<string>(m["RootUid"]));
    }
    if (m.find("ServicePrincipalEnabled") != m.end() && !m["ServicePrincipalEnabled"].empty()) {
      servicePrincipalEnabled = make_shared<bool>(boost::any_cast<bool>(m["ServicePrincipalEnabled"]));
    }
  }


  virtual ~DescribeRdStatusResponseBody() = default;
};
class DescribeRdStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRdStatusResponseBody> body{};

  DescribeRdStatusResponse() {}

  explicit DescribeRdStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRdStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdStatusResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionEnName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEnName) {
      res["RegionEnName"] = boost::any(*regionEnName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEnName") != m.end() && !m["RegionEnName"].empty()) {
      regionEnName = make_shared<string>(boost::any_cast<string>(m["RegionEnName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DescribeTrafficRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> flowType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> interval{};
  shared_ptr<string> ip{};
  shared_ptr<string> ipnet{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeTrafficRequest() {}

  explicit DescribeTrafficRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (flowType) {
      res["FlowType"] = boost::any(*flowType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ipnet) {
      res["Ipnet"] = boost::any(*ipnet);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FlowType") != m.end() && !m["FlowType"].empty()) {
      flowType = make_shared<string>(boost::any_cast<string>(m["FlowType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Ipnet") != m.end() && !m["Ipnet"].empty()) {
      ipnet = make_shared<string>(boost::any_cast<string>(m["Ipnet"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeTrafficRequest() = default;
};
class DescribeTrafficResponseBodyFlowList : public Darabonba::Model {
public:
  shared_ptr<long> attackBps{};
  shared_ptr<long> attackPps{};
  shared_ptr<string> flowType{};
  shared_ptr<long> kbps{};
  shared_ptr<string> name{};
  shared_ptr<long> pps{};
  shared_ptr<long> time{};

  DescribeTrafficResponseBodyFlowList() {}

  explicit DescribeTrafficResponseBodyFlowList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackBps) {
      res["AttackBps"] = boost::any(*attackBps);
    }
    if (attackPps) {
      res["AttackPps"] = boost::any(*attackPps);
    }
    if (flowType) {
      res["FlowType"] = boost::any(*flowType);
    }
    if (kbps) {
      res["Kbps"] = boost::any(*kbps);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackBps") != m.end() && !m["AttackBps"].empty()) {
      attackBps = make_shared<long>(boost::any_cast<long>(m["AttackBps"]));
    }
    if (m.find("AttackPps") != m.end() && !m["AttackPps"].empty()) {
      attackPps = make_shared<long>(boost::any_cast<long>(m["AttackPps"]));
    }
    if (m.find("FlowType") != m.end() && !m["FlowType"].empty()) {
      flowType = make_shared<string>(boost::any_cast<string>(m["FlowType"]));
    }
    if (m.find("Kbps") != m.end() && !m["Kbps"].empty()) {
      kbps = make_shared<long>(boost::any_cast<long>(m["Kbps"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~DescribeTrafficResponseBodyFlowList() = default;
};
class DescribeTrafficResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrafficResponseBodyFlowList>> flowList{};
  shared_ptr<string> requestId{};

  DescribeTrafficResponseBody() {}

  explicit DescribeTrafficResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowList) {
      vector<boost::any> temp1;
      for(auto item1:*flowList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FlowList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowList") != m.end() && !m["FlowList"].empty()) {
      if (typeid(vector<boost::any>) == m["FlowList"].type()) {
        vector<DescribeTrafficResponseBodyFlowList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FlowList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrafficResponseBodyFlowList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowList = make_shared<vector<DescribeTrafficResponseBodyFlowList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTrafficResponseBody() = default;
};
class DescribeTrafficResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrafficResponseBody> body{};

  DescribeTrafficResponse() {}

  explicit DescribeTrafficResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTrafficResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrafficResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrafficResponse() = default;
};
class DetachFromPolicyRequestIpPortProtocolList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DetachFromPolicyRequestIpPortProtocolList() {}

  explicit DetachFromPolicyRequestIpPortProtocolList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DetachFromPolicyRequestIpPortProtocolList() = default;
};
class DetachFromPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DetachFromPolicyRequestIpPortProtocolList>> ipPortProtocolList{};
  shared_ptr<string> policyType{};

  DetachFromPolicyRequest() {}

  explicit DetachFromPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipPortProtocolList) {
      vector<boost::any> temp1;
      for(auto item1:*ipPortProtocolList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpPortProtocolList"] = boost::any(temp1);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpPortProtocolList") != m.end() && !m["IpPortProtocolList"].empty()) {
      if (typeid(vector<boost::any>) == m["IpPortProtocolList"].type()) {
        vector<DetachFromPolicyRequestIpPortProtocolList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpPortProtocolList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachFromPolicyRequestIpPortProtocolList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipPortProtocolList = make_shared<vector<DetachFromPolicyRequestIpPortProtocolList>>(expect1);
      }
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~DetachFromPolicyRequest() = default;
};
class DetachFromPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipPortProtocolListShrink{};
  shared_ptr<string> policyType{};

  DetachFromPolicyShrinkRequest() {}

  explicit DetachFromPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipPortProtocolListShrink) {
      res["IpPortProtocolList"] = boost::any(*ipPortProtocolListShrink);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpPortProtocolList") != m.end() && !m["IpPortProtocolList"].empty()) {
      ipPortProtocolListShrink = make_shared<string>(boost::any_cast<string>(m["IpPortProtocolList"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~DetachFromPolicyShrinkRequest() = default;
};
class DetachFromPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachFromPolicyResponseBody() {}

  explicit DetachFromPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachFromPolicyResponseBody() = default;
};
class DetachFromPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachFromPolicyResponseBody> body{};

  DetachFromPolicyResponse() {}

  explicit DetachFromPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachFromPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachFromPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DetachFromPolicyResponse() = default;
};
class DettachAssetGroupToInstanceRequestAssetGroupList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> type{};

  DettachAssetGroupToInstanceRequestAssetGroupList() {}

  explicit DettachAssetGroupToInstanceRequestAssetGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DettachAssetGroupToInstanceRequestAssetGroupList() = default;
};
class DettachAssetGroupToInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DettachAssetGroupToInstanceRequestAssetGroupList>> assetGroupList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DettachAssetGroupToInstanceRequest() {}

  explicit DettachAssetGroupToInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*assetGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssetGroupList"] = boost::any(temp1);
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
    if (m.find("AssetGroupList") != m.end() && !m["AssetGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssetGroupList"].type()) {
        vector<DettachAssetGroupToInstanceRequestAssetGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssetGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DettachAssetGroupToInstanceRequestAssetGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assetGroupList = make_shared<vector<DettachAssetGroupToInstanceRequestAssetGroupList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DettachAssetGroupToInstanceRequest() = default;
};
class DettachAssetGroupToInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetGroupListShrink{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DettachAssetGroupToInstanceShrinkRequest() {}

  explicit DettachAssetGroupToInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetGroupListShrink) {
      res["AssetGroupList"] = boost::any(*assetGroupListShrink);
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
    if (m.find("AssetGroupList") != m.end() && !m["AssetGroupList"].empty()) {
      assetGroupListShrink = make_shared<string>(boost::any_cast<string>(m["AssetGroupList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DettachAssetGroupToInstanceShrinkRequest() = default;
};
class DettachAssetGroupToInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DettachAssetGroupToInstanceResponseBody() {}

  explicit DettachAssetGroupToInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DettachAssetGroupToInstanceResponseBody() = default;
};
class DettachAssetGroupToInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DettachAssetGroupToInstanceResponseBody> body{};

  DettachAssetGroupToInstanceResponse() {}

  explicit DettachAssetGroupToInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DettachAssetGroupToInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DettachAssetGroupToInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DettachAssetGroupToInstanceResponse() = default;
};
class GetSlsOpenStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  GetSlsOpenStatusRequest() {}

  explicit GetSlsOpenStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetSlsOpenStatusRequest() = default;
};
class GetSlsOpenStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> slsOpenStatus{};

  GetSlsOpenStatusResponseBody() {}

  explicit GetSlsOpenStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsOpenStatus) {
      res["SlsOpenStatus"] = boost::any(*slsOpenStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsOpenStatus") != m.end() && !m["SlsOpenStatus"].empty()) {
      slsOpenStatus = make_shared<bool>(boost::any_cast<bool>(m["SlsOpenStatus"]));
    }
  }


  virtual ~GetSlsOpenStatusResponseBody() = default;
};
class GetSlsOpenStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSlsOpenStatusResponseBody> body{};

  GetSlsOpenStatusResponse() {}

  explicit GetSlsOpenStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSlsOpenStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSlsOpenStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetSlsOpenStatusResponse() = default;
};
class ListOpenedAccessLogInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};

  ListOpenedAccessLogInstancesRequest() {}

  explicit ListOpenedAccessLogInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListOpenedAccessLogInstancesRequest() = default;
};
class ListOpenedAccessLogInstancesResponseBodySlsConfigStatus : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> instanceId{};

  ListOpenedAccessLogInstancesResponseBodySlsConfigStatus() {}

  explicit ListOpenedAccessLogInstancesResponseBodySlsConfigStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListOpenedAccessLogInstancesResponseBodySlsConfigStatus() = default;
};
class ListOpenedAccessLogInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOpenedAccessLogInstancesResponseBodySlsConfigStatus>> slsConfigStatus{};
  shared_ptr<long> totalCount{};

  ListOpenedAccessLogInstancesResponseBody() {}

  explicit ListOpenedAccessLogInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsConfigStatus) {
      vector<boost::any> temp1;
      for(auto item1:*slsConfigStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlsConfigStatus"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsConfigStatus") != m.end() && !m["SlsConfigStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["SlsConfigStatus"].type()) {
        vector<ListOpenedAccessLogInstancesResponseBodySlsConfigStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlsConfigStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOpenedAccessLogInstancesResponseBodySlsConfigStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slsConfigStatus = make_shared<vector<ListOpenedAccessLogInstancesResponseBodySlsConfigStatus>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOpenedAccessLogInstancesResponseBody() = default;
};
class ListOpenedAccessLogInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOpenedAccessLogInstancesResponseBody> body{};

  ListOpenedAccessLogInstancesResponse() {}

  explicit ListOpenedAccessLogInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOpenedAccessLogInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOpenedAccessLogInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListOpenedAccessLogInstancesResponse() = default;
};
class ListPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> type{};

  ListPolicyRequest() {}

  explicit ListPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListPolicyRequest() = default;
};
class ListPolicyResponseBodyPolicyListContentFingerPrintRuleList : public Darabonba::Model {
public:
  shared_ptr<long> dstPortEnd{};
  shared_ptr<long> dstPortStart{};
  shared_ptr<string> id{};
  shared_ptr<string> matchAction{};
  shared_ptr<long> maxPktLen{};
  shared_ptr<long> minPktLen{};
  shared_ptr<long> offset{};
  shared_ptr<string> payloadBytes{};
  shared_ptr<string> protocol{};
  shared_ptr<long> rateValue{};
  shared_ptr<long> seqNo{};
  shared_ptr<long> srcPortEnd{};
  shared_ptr<long> srcPortStart{};

  ListPolicyResponseBodyPolicyListContentFingerPrintRuleList() {}

  explicit ListPolicyResponseBodyPolicyListContentFingerPrintRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstPortEnd) {
      res["DstPortEnd"] = boost::any(*dstPortEnd);
    }
    if (dstPortStart) {
      res["DstPortStart"] = boost::any(*dstPortStart);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchAction) {
      res["MatchAction"] = boost::any(*matchAction);
    }
    if (maxPktLen) {
      res["MaxPktLen"] = boost::any(*maxPktLen);
    }
    if (minPktLen) {
      res["MinPktLen"] = boost::any(*minPktLen);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (payloadBytes) {
      res["PayloadBytes"] = boost::any(*payloadBytes);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (rateValue) {
      res["RateValue"] = boost::any(*rateValue);
    }
    if (seqNo) {
      res["SeqNo"] = boost::any(*seqNo);
    }
    if (srcPortEnd) {
      res["SrcPortEnd"] = boost::any(*srcPortEnd);
    }
    if (srcPortStart) {
      res["SrcPortStart"] = boost::any(*srcPortStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstPortEnd") != m.end() && !m["DstPortEnd"].empty()) {
      dstPortEnd = make_shared<long>(boost::any_cast<long>(m["DstPortEnd"]));
    }
    if (m.find("DstPortStart") != m.end() && !m["DstPortStart"].empty()) {
      dstPortStart = make_shared<long>(boost::any_cast<long>(m["DstPortStart"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchAction") != m.end() && !m["MatchAction"].empty()) {
      matchAction = make_shared<string>(boost::any_cast<string>(m["MatchAction"]));
    }
    if (m.find("MaxPktLen") != m.end() && !m["MaxPktLen"].empty()) {
      maxPktLen = make_shared<long>(boost::any_cast<long>(m["MaxPktLen"]));
    }
    if (m.find("MinPktLen") != m.end() && !m["MinPktLen"].empty()) {
      minPktLen = make_shared<long>(boost::any_cast<long>(m["MinPktLen"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PayloadBytes") != m.end() && !m["PayloadBytes"].empty()) {
      payloadBytes = make_shared<string>(boost::any_cast<string>(m["PayloadBytes"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RateValue") != m.end() && !m["RateValue"].empty()) {
      rateValue = make_shared<long>(boost::any_cast<long>(m["RateValue"]));
    }
    if (m.find("SeqNo") != m.end() && !m["SeqNo"].empty()) {
      seqNo = make_shared<long>(boost::any_cast<long>(m["SeqNo"]));
    }
    if (m.find("SrcPortEnd") != m.end() && !m["SrcPortEnd"].empty()) {
      srcPortEnd = make_shared<long>(boost::any_cast<long>(m["SrcPortEnd"]));
    }
    if (m.find("SrcPortStart") != m.end() && !m["SrcPortStart"].empty()) {
      srcPortStart = make_shared<long>(boost::any_cast<long>(m["SrcPortStart"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyListContentFingerPrintRuleList() = default;
};
class ListPolicyResponseBodyPolicyListContentL4RuleListConditionList : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<long> depth{};
  shared_ptr<long> position{};

  ListPolicyResponseBodyPolicyListContentL4RuleListConditionList() {}

  explicit ListPolicyResponseBodyPolicyListContentL4RuleListConditionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (depth) {
      res["Depth"] = boost::any(*depth);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["Arg"]));
    }
    if (m.find("Depth") != m.end() && !m["Depth"].empty()) {
      depth = make_shared<long>(boost::any_cast<long>(m["Depth"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyListContentL4RuleListConditionList() = default;
};
class ListPolicyResponseBodyPolicyListContentL4RuleList : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<vector<ListPolicyResponseBodyPolicyListContentL4RuleListConditionList>> conditionList{};
  shared_ptr<long> limited{};
  shared_ptr<string> match{};
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<long> priority{};

  ListPolicyResponseBodyPolicyListContentL4RuleList() {}

  explicit ListPolicyResponseBodyPolicyListContentL4RuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (conditionList) {
      vector<boost::any> temp1;
      for(auto item1:*conditionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionList"] = boost::any(temp1);
    }
    if (limited) {
      res["Limited"] = boost::any(*limited);
    }
    if (match) {
      res["Match"] = boost::any(*match);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ConditionList") != m.end() && !m["ConditionList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionList"].type()) {
        vector<ListPolicyResponseBodyPolicyListContentL4RuleListConditionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyResponseBodyPolicyListContentL4RuleListConditionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionList = make_shared<vector<ListPolicyResponseBodyPolicyListContentL4RuleListConditionList>>(expect1);
      }
    }
    if (m.find("Limited") != m.end() && !m["Limited"].empty()) {
      limited = make_shared<long>(boost::any_cast<long>(m["Limited"]));
    }
    if (m.find("Match") != m.end() && !m["Match"].empty()) {
      match = make_shared<string>(boost::any_cast<string>(m["Match"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyListContentL4RuleList() = default;
};
class ListPolicyResponseBodyPolicyListContentPortRuleList : public Darabonba::Model {
public:
  shared_ptr<long> dstPortEnd{};
  shared_ptr<long> dstPortStart{};
  shared_ptr<string> id{};
  shared_ptr<string> matchAction{};
  shared_ptr<string> protocol{};
  shared_ptr<long> seqNo{};
  shared_ptr<long> srcPortEnd{};
  shared_ptr<long> srcPortStart{};

  ListPolicyResponseBodyPolicyListContentPortRuleList() {}

  explicit ListPolicyResponseBodyPolicyListContentPortRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstPortEnd) {
      res["DstPortEnd"] = boost::any(*dstPortEnd);
    }
    if (dstPortStart) {
      res["DstPortStart"] = boost::any(*dstPortStart);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchAction) {
      res["MatchAction"] = boost::any(*matchAction);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (seqNo) {
      res["SeqNo"] = boost::any(*seqNo);
    }
    if (srcPortEnd) {
      res["SrcPortEnd"] = boost::any(*srcPortEnd);
    }
    if (srcPortStart) {
      res["SrcPortStart"] = boost::any(*srcPortStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstPortEnd") != m.end() && !m["DstPortEnd"].empty()) {
      dstPortEnd = make_shared<long>(boost::any_cast<long>(m["DstPortEnd"]));
    }
    if (m.find("DstPortStart") != m.end() && !m["DstPortStart"].empty()) {
      dstPortStart = make_shared<long>(boost::any_cast<long>(m["DstPortStart"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchAction") != m.end() && !m["MatchAction"].empty()) {
      matchAction = make_shared<string>(boost::any_cast<string>(m["MatchAction"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("SeqNo") != m.end() && !m["SeqNo"].empty()) {
      seqNo = make_shared<long>(boost::any_cast<long>(m["SeqNo"]));
    }
    if (m.find("SrcPortEnd") != m.end() && !m["SrcPortEnd"].empty()) {
      srcPortEnd = make_shared<long>(boost::any_cast<long>(m["SrcPortEnd"]));
    }
    if (m.find("SrcPortStart") != m.end() && !m["SrcPortStart"].empty()) {
      srcPortStart = make_shared<long>(boost::any_cast<long>(m["SrcPortStart"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyListContentPortRuleList() = default;
};
class ListPolicyResponseBodyPolicyListContentSourceBlockList : public Darabonba::Model {
public:
  shared_ptr<long> blockExpireSeconds{};
  shared_ptr<long> everySeconds{};
  shared_ptr<long> exceedLimitTimes{};
  shared_ptr<long> type{};

  ListPolicyResponseBodyPolicyListContentSourceBlockList() {}

  explicit ListPolicyResponseBodyPolicyListContentSourceBlockList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockExpireSeconds) {
      res["BlockExpireSeconds"] = boost::any(*blockExpireSeconds);
    }
    if (everySeconds) {
      res["EverySeconds"] = boost::any(*everySeconds);
    }
    if (exceedLimitTimes) {
      res["ExceedLimitTimes"] = boost::any(*exceedLimitTimes);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockExpireSeconds") != m.end() && !m["BlockExpireSeconds"].empty()) {
      blockExpireSeconds = make_shared<long>(boost::any_cast<long>(m["BlockExpireSeconds"]));
    }
    if (m.find("EverySeconds") != m.end() && !m["EverySeconds"].empty()) {
      everySeconds = make_shared<long>(boost::any_cast<long>(m["EverySeconds"]));
    }
    if (m.find("ExceedLimitTimes") != m.end() && !m["ExceedLimitTimes"].empty()) {
      exceedLimitTimes = make_shared<long>(boost::any_cast<long>(m["ExceedLimitTimes"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyListContentSourceBlockList() = default;
};
class ListPolicyResponseBodyPolicyListContentSourceLimit : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<long> pps{};
  shared_ptr<long> synBps{};
  shared_ptr<long> synPps{};

  ListPolicyResponseBodyPolicyListContentSourceLimit() {}

  explicit ListPolicyResponseBodyPolicyListContentSourceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    if (synBps) {
      res["SynBps"] = boost::any(*synBps);
    }
    if (synPps) {
      res["SynPps"] = boost::any(*synPps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
    if (m.find("SynBps") != m.end() && !m["SynBps"].empty()) {
      synBps = make_shared<long>(boost::any_cast<long>(m["SynBps"]));
    }
    if (m.find("SynPps") != m.end() && !m["SynPps"].empty()) {
      synPps = make_shared<long>(boost::any_cast<long>(m["SynPps"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyListContentSourceLimit() = default;
};
class ListPolicyResponseBodyPolicyListContent : public Darabonba::Model {
public:
  shared_ptr<long> blackIpListExpireAt{};
  shared_ptr<bool> enableDropIcmp{};
  shared_ptr<bool> enableIntelligence{};
  shared_ptr<bool> enableL4Defense{};
  shared_ptr<vector<ListPolicyResponseBodyPolicyListContentFingerPrintRuleList>> fingerPrintRuleList{};
  shared_ptr<string> intelligenceLevel{};
  shared_ptr<vector<ListPolicyResponseBodyPolicyListContentL4RuleList>> l4RuleList{};
  shared_ptr<vector<ListPolicyResponseBodyPolicyListContentPortRuleList>> portRuleList{};
  shared_ptr<vector<long>> reflectBlockUdpPortList{};
  shared_ptr<vector<long>> regionBlockCountryList{};
  shared_ptr<vector<long>> regionBlockProvinceList{};
  shared_ptr<vector<ListPolicyResponseBodyPolicyListContentSourceBlockList>> sourceBlockList{};
  shared_ptr<ListPolicyResponseBodyPolicyListContentSourceLimit> sourceLimit{};
  shared_ptr<bool> whitenGfbrNets{};

  ListPolicyResponseBodyPolicyListContent() {}

  explicit ListPolicyResponseBodyPolicyListContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackIpListExpireAt) {
      res["BlackIpListExpireAt"] = boost::any(*blackIpListExpireAt);
    }
    if (enableDropIcmp) {
      res["EnableDropIcmp"] = boost::any(*enableDropIcmp);
    }
    if (enableIntelligence) {
      res["EnableIntelligence"] = boost::any(*enableIntelligence);
    }
    if (enableL4Defense) {
      res["EnableL4Defense"] = boost::any(*enableL4Defense);
    }
    if (fingerPrintRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*fingerPrintRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FingerPrintRuleList"] = boost::any(temp1);
    }
    if (intelligenceLevel) {
      res["IntelligenceLevel"] = boost::any(*intelligenceLevel);
    }
    if (l4RuleList) {
      vector<boost::any> temp1;
      for(auto item1:*l4RuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["L4RuleList"] = boost::any(temp1);
    }
    if (portRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*portRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRuleList"] = boost::any(temp1);
    }
    if (reflectBlockUdpPortList) {
      res["ReflectBlockUdpPortList"] = boost::any(*reflectBlockUdpPortList);
    }
    if (regionBlockCountryList) {
      res["RegionBlockCountryList"] = boost::any(*regionBlockCountryList);
    }
    if (regionBlockProvinceList) {
      res["RegionBlockProvinceList"] = boost::any(*regionBlockProvinceList);
    }
    if (sourceBlockList) {
      vector<boost::any> temp1;
      for(auto item1:*sourceBlockList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceBlockList"] = boost::any(temp1);
    }
    if (sourceLimit) {
      res["SourceLimit"] = sourceLimit ? boost::any(sourceLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (whitenGfbrNets) {
      res["WhitenGfbrNets"] = boost::any(*whitenGfbrNets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackIpListExpireAt") != m.end() && !m["BlackIpListExpireAt"].empty()) {
      blackIpListExpireAt = make_shared<long>(boost::any_cast<long>(m["BlackIpListExpireAt"]));
    }
    if (m.find("EnableDropIcmp") != m.end() && !m["EnableDropIcmp"].empty()) {
      enableDropIcmp = make_shared<bool>(boost::any_cast<bool>(m["EnableDropIcmp"]));
    }
    if (m.find("EnableIntelligence") != m.end() && !m["EnableIntelligence"].empty()) {
      enableIntelligence = make_shared<bool>(boost::any_cast<bool>(m["EnableIntelligence"]));
    }
    if (m.find("EnableL4Defense") != m.end() && !m["EnableL4Defense"].empty()) {
      enableL4Defense = make_shared<bool>(boost::any_cast<bool>(m["EnableL4Defense"]));
    }
    if (m.find("FingerPrintRuleList") != m.end() && !m["FingerPrintRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["FingerPrintRuleList"].type()) {
        vector<ListPolicyResponseBodyPolicyListContentFingerPrintRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FingerPrintRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyResponseBodyPolicyListContentFingerPrintRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fingerPrintRuleList = make_shared<vector<ListPolicyResponseBodyPolicyListContentFingerPrintRuleList>>(expect1);
      }
    }
    if (m.find("IntelligenceLevel") != m.end() && !m["IntelligenceLevel"].empty()) {
      intelligenceLevel = make_shared<string>(boost::any_cast<string>(m["IntelligenceLevel"]));
    }
    if (m.find("L4RuleList") != m.end() && !m["L4RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["L4RuleList"].type()) {
        vector<ListPolicyResponseBodyPolicyListContentL4RuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["L4RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyResponseBodyPolicyListContentL4RuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        l4RuleList = make_shared<vector<ListPolicyResponseBodyPolicyListContentL4RuleList>>(expect1);
      }
    }
    if (m.find("PortRuleList") != m.end() && !m["PortRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRuleList"].type()) {
        vector<ListPolicyResponseBodyPolicyListContentPortRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyResponseBodyPolicyListContentPortRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRuleList = make_shared<vector<ListPolicyResponseBodyPolicyListContentPortRuleList>>(expect1);
      }
    }
    if (m.find("ReflectBlockUdpPortList") != m.end() && !m["ReflectBlockUdpPortList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ReflectBlockUdpPortList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReflectBlockUdpPortList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      reflectBlockUdpPortList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionBlockCountryList") != m.end() && !m["RegionBlockCountryList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RegionBlockCountryList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionBlockCountryList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      regionBlockCountryList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionBlockProvinceList") != m.end() && !m["RegionBlockProvinceList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RegionBlockProvinceList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionBlockProvinceList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      regionBlockProvinceList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SourceBlockList") != m.end() && !m["SourceBlockList"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceBlockList"].type()) {
        vector<ListPolicyResponseBodyPolicyListContentSourceBlockList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceBlockList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyResponseBodyPolicyListContentSourceBlockList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceBlockList = make_shared<vector<ListPolicyResponseBodyPolicyListContentSourceBlockList>>(expect1);
      }
    }
    if (m.find("SourceLimit") != m.end() && !m["SourceLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceLimit"].type()) {
        ListPolicyResponseBodyPolicyListContentSourceLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceLimit"]));
        sourceLimit = make_shared<ListPolicyResponseBodyPolicyListContentSourceLimit>(model1);
      }
    }
    if (m.find("WhitenGfbrNets") != m.end() && !m["WhitenGfbrNets"].empty()) {
      whitenGfbrNets = make_shared<bool>(boost::any_cast<bool>(m["WhitenGfbrNets"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyListContent() = default;
};
class ListPolicyResponseBodyPolicyList : public Darabonba::Model {
public:
  shared_ptr<long> attachedCount{};
  shared_ptr<ListPolicyResponseBodyPolicyListContent> content{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> type{};

  ListPolicyResponseBodyPolicyList() {}

  explicit ListPolicyResponseBodyPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachedCount) {
      res["AttachedCount"] = boost::any(*attachedCount);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachedCount") != m.end() && !m["AttachedCount"].empty()) {
      attachedCount = make_shared<long>(boost::any_cast<long>(m["AttachedCount"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListPolicyResponseBodyPolicyListContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListPolicyResponseBodyPolicyListContent>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListPolicyResponseBodyPolicyList() = default;
};
class ListPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyResponseBodyPolicyList>> policyList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListPolicyResponseBody() {}

  explicit ListPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyList") != m.end() && !m["PolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyList"].type()) {
        vector<ListPolicyResponseBodyPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyResponseBodyPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyList = make_shared<vector<ListPolicyResponseBodyPolicyList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListPolicyResponseBody() = default;
};
class ListPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicyResponseBody> body{};

  ListPolicyResponse() {}

  explicit ListPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyResponse() = default;
};
class ListPolicyAttachmentRequestIpPortProtocolList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  ListPolicyAttachmentRequestIpPortProtocolList() {}

  explicit ListPolicyAttachmentRequestIpPortProtocolList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~ListPolicyAttachmentRequestIpPortProtocolList() = default;
};
class ListPolicyAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyAttachmentRequestIpPortProtocolList>> ipPortProtocolList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyType{};

  ListPolicyAttachmentRequest() {}

  explicit ListPolicyAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipPortProtocolList) {
      vector<boost::any> temp1;
      for(auto item1:*ipPortProtocolList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpPortProtocolList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpPortProtocolList") != m.end() && !m["IpPortProtocolList"].empty()) {
      if (typeid(vector<boost::any>) == m["IpPortProtocolList"].type()) {
        vector<ListPolicyAttachmentRequestIpPortProtocolList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpPortProtocolList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyAttachmentRequestIpPortProtocolList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipPortProtocolList = make_shared<vector<ListPolicyAttachmentRequestIpPortProtocolList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPolicyAttachmentRequest() = default;
};
class ListPolicyAttachmentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipPortProtocolListShrink{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyType{};

  ListPolicyAttachmentShrinkRequest() {}

  explicit ListPolicyAttachmentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipPortProtocolListShrink) {
      res["IpPortProtocolList"] = boost::any(*ipPortProtocolListShrink);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpPortProtocolList") != m.end() && !m["IpPortProtocolList"].empty()) {
      ipPortProtocolListShrink = make_shared<string>(boost::any_cast<string>(m["IpPortProtocolList"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPolicyAttachmentShrinkRequest() = default;
};
class ListPolicyAttachmentResponseBodyAttachmentList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyRemark{};
  shared_ptr<string> policyType{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> region{};

  ListPolicyAttachmentResponseBodyAttachmentList() {}

  explicit ListPolicyAttachmentResponseBodyAttachmentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyRemark) {
      res["PolicyRemark"] = boost::any(*policyRemark);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyRemark") != m.end() && !m["PolicyRemark"].empty()) {
      policyRemark = make_shared<string>(boost::any_cast<string>(m["PolicyRemark"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ListPolicyAttachmentResponseBodyAttachmentList() = default;
};
class ListPolicyAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyAttachmentResponseBodyAttachmentList>> attachmentList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListPolicyAttachmentResponseBody() {}

  explicit ListPolicyAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentList) {
      vector<boost::any> temp1;
      for(auto item1:*attachmentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttachmentList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentList") != m.end() && !m["AttachmentList"].empty()) {
      if (typeid(vector<boost::any>) == m["AttachmentList"].type()) {
        vector<ListPolicyAttachmentResponseBodyAttachmentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttachmentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyAttachmentResponseBodyAttachmentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attachmentList = make_shared<vector<ListPolicyAttachmentResponseBodyAttachmentList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListPolicyAttachmentResponseBody() = default;
};
class ListPolicyAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicyAttachmentResponseBody> body{};

  ListPolicyAttachmentResponse() {}

  explicit ListPolicyAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPolicyAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyAttachmentResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceType{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyTagKeys : public Darabonba::Model {
public:
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagKey{};

  ListTagKeysResponseBodyTagKeys() {}

  explicit ListTagKeysResponseBodyTagKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagKeysResponseBodyTagKeys() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagKeysResponseBodyTagKeys>> tagKeys{};
  shared_ptr<long> totalCount{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagKeys) {
      vector<boost::any> temp1;
      for(auto item1:*tagKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagKeys"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<ListTagKeysResponseBodyTagKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagKeysResponseBodyTagKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagKeys = make_shared<vector<ListTagKeysResponseBodyTagKeys>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
class ModifyPolicyRequestContentFingerPrintRuleList : public Darabonba::Model {
public:
  shared_ptr<long> dstPortEnd{};
  shared_ptr<long> dstPortStart{};
  shared_ptr<string> id{};
  shared_ptr<string> matchAction{};
  shared_ptr<long> maxPktLen{};
  shared_ptr<long> minPktLen{};
  shared_ptr<long> offset{};
  shared_ptr<string> payloadBytes{};
  shared_ptr<string> protocol{};
  shared_ptr<long> rateValue{};
  shared_ptr<long> seqNo{};
  shared_ptr<long> srcPortEnd{};
  shared_ptr<long> srcPortStart{};

  ModifyPolicyRequestContentFingerPrintRuleList() {}

  explicit ModifyPolicyRequestContentFingerPrintRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstPortEnd) {
      res["DstPortEnd"] = boost::any(*dstPortEnd);
    }
    if (dstPortStart) {
      res["DstPortStart"] = boost::any(*dstPortStart);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchAction) {
      res["MatchAction"] = boost::any(*matchAction);
    }
    if (maxPktLen) {
      res["MaxPktLen"] = boost::any(*maxPktLen);
    }
    if (minPktLen) {
      res["MinPktLen"] = boost::any(*minPktLen);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (payloadBytes) {
      res["PayloadBytes"] = boost::any(*payloadBytes);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (rateValue) {
      res["RateValue"] = boost::any(*rateValue);
    }
    if (seqNo) {
      res["SeqNo"] = boost::any(*seqNo);
    }
    if (srcPortEnd) {
      res["SrcPortEnd"] = boost::any(*srcPortEnd);
    }
    if (srcPortStart) {
      res["SrcPortStart"] = boost::any(*srcPortStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstPortEnd") != m.end() && !m["DstPortEnd"].empty()) {
      dstPortEnd = make_shared<long>(boost::any_cast<long>(m["DstPortEnd"]));
    }
    if (m.find("DstPortStart") != m.end() && !m["DstPortStart"].empty()) {
      dstPortStart = make_shared<long>(boost::any_cast<long>(m["DstPortStart"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchAction") != m.end() && !m["MatchAction"].empty()) {
      matchAction = make_shared<string>(boost::any_cast<string>(m["MatchAction"]));
    }
    if (m.find("MaxPktLen") != m.end() && !m["MaxPktLen"].empty()) {
      maxPktLen = make_shared<long>(boost::any_cast<long>(m["MaxPktLen"]));
    }
    if (m.find("MinPktLen") != m.end() && !m["MinPktLen"].empty()) {
      minPktLen = make_shared<long>(boost::any_cast<long>(m["MinPktLen"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PayloadBytes") != m.end() && !m["PayloadBytes"].empty()) {
      payloadBytes = make_shared<string>(boost::any_cast<string>(m["PayloadBytes"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RateValue") != m.end() && !m["RateValue"].empty()) {
      rateValue = make_shared<long>(boost::any_cast<long>(m["RateValue"]));
    }
    if (m.find("SeqNo") != m.end() && !m["SeqNo"].empty()) {
      seqNo = make_shared<long>(boost::any_cast<long>(m["SeqNo"]));
    }
    if (m.find("SrcPortEnd") != m.end() && !m["SrcPortEnd"].empty()) {
      srcPortEnd = make_shared<long>(boost::any_cast<long>(m["SrcPortEnd"]));
    }
    if (m.find("SrcPortStart") != m.end() && !m["SrcPortStart"].empty()) {
      srcPortStart = make_shared<long>(boost::any_cast<long>(m["SrcPortStart"]));
    }
  }


  virtual ~ModifyPolicyRequestContentFingerPrintRuleList() = default;
};
class ModifyPolicyRequestContentL4RuleListConditionList : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<long> depth{};
  shared_ptr<long> position{};

  ModifyPolicyRequestContentL4RuleListConditionList() {}

  explicit ModifyPolicyRequestContentL4RuleListConditionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (depth) {
      res["Depth"] = boost::any(*depth);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["Arg"]));
    }
    if (m.find("Depth") != m.end() && !m["Depth"].empty()) {
      depth = make_shared<long>(boost::any_cast<long>(m["Depth"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
  }


  virtual ~ModifyPolicyRequestContentL4RuleListConditionList() = default;
};
class ModifyPolicyRequestContentL4RuleList : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<vector<ModifyPolicyRequestContentL4RuleListConditionList>> conditionList{};
  shared_ptr<long> limited{};
  shared_ptr<string> match{};
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<long> priority{};

  ModifyPolicyRequestContentL4RuleList() {}

  explicit ModifyPolicyRequestContentL4RuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (conditionList) {
      vector<boost::any> temp1;
      for(auto item1:*conditionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionList"] = boost::any(temp1);
    }
    if (limited) {
      res["Limited"] = boost::any(*limited);
    }
    if (match) {
      res["Match"] = boost::any(*match);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ConditionList") != m.end() && !m["ConditionList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionList"].type()) {
        vector<ModifyPolicyRequestContentL4RuleListConditionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyRequestContentL4RuleListConditionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionList = make_shared<vector<ModifyPolicyRequestContentL4RuleListConditionList>>(expect1);
      }
    }
    if (m.find("Limited") != m.end() && !m["Limited"].empty()) {
      limited = make_shared<long>(boost::any_cast<long>(m["Limited"]));
    }
    if (m.find("Match") != m.end() && !m["Match"].empty()) {
      match = make_shared<string>(boost::any_cast<string>(m["Match"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
  }


  virtual ~ModifyPolicyRequestContentL4RuleList() = default;
};
class ModifyPolicyRequestContentPortRuleList : public Darabonba::Model {
public:
  shared_ptr<long> dstPortEnd{};
  shared_ptr<long> dstPortStart{};
  shared_ptr<string> id{};
  shared_ptr<string> matchAction{};
  shared_ptr<string> protocol{};
  shared_ptr<long> seqNo{};
  shared_ptr<long> srcPortEnd{};
  shared_ptr<long> srcPortStart{};

  ModifyPolicyRequestContentPortRuleList() {}

  explicit ModifyPolicyRequestContentPortRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstPortEnd) {
      res["DstPortEnd"] = boost::any(*dstPortEnd);
    }
    if (dstPortStart) {
      res["DstPortStart"] = boost::any(*dstPortStart);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchAction) {
      res["MatchAction"] = boost::any(*matchAction);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (seqNo) {
      res["SeqNo"] = boost::any(*seqNo);
    }
    if (srcPortEnd) {
      res["SrcPortEnd"] = boost::any(*srcPortEnd);
    }
    if (srcPortStart) {
      res["SrcPortStart"] = boost::any(*srcPortStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstPortEnd") != m.end() && !m["DstPortEnd"].empty()) {
      dstPortEnd = make_shared<long>(boost::any_cast<long>(m["DstPortEnd"]));
    }
    if (m.find("DstPortStart") != m.end() && !m["DstPortStart"].empty()) {
      dstPortStart = make_shared<long>(boost::any_cast<long>(m["DstPortStart"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchAction") != m.end() && !m["MatchAction"].empty()) {
      matchAction = make_shared<string>(boost::any_cast<string>(m["MatchAction"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("SeqNo") != m.end() && !m["SeqNo"].empty()) {
      seqNo = make_shared<long>(boost::any_cast<long>(m["SeqNo"]));
    }
    if (m.find("SrcPortEnd") != m.end() && !m["SrcPortEnd"].empty()) {
      srcPortEnd = make_shared<long>(boost::any_cast<long>(m["SrcPortEnd"]));
    }
    if (m.find("SrcPortStart") != m.end() && !m["SrcPortStart"].empty()) {
      srcPortStart = make_shared<long>(boost::any_cast<long>(m["SrcPortStart"]));
    }
  }


  virtual ~ModifyPolicyRequestContentPortRuleList() = default;
};
class ModifyPolicyRequestContentSourceBlockList : public Darabonba::Model {
public:
  shared_ptr<long> blockExpireSeconds{};
  shared_ptr<long> everySeconds{};
  shared_ptr<long> exceedLimitTimes{};
  shared_ptr<long> type{};

  ModifyPolicyRequestContentSourceBlockList() {}

  explicit ModifyPolicyRequestContentSourceBlockList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockExpireSeconds) {
      res["BlockExpireSeconds"] = boost::any(*blockExpireSeconds);
    }
    if (everySeconds) {
      res["EverySeconds"] = boost::any(*everySeconds);
    }
    if (exceedLimitTimes) {
      res["ExceedLimitTimes"] = boost::any(*exceedLimitTimes);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockExpireSeconds") != m.end() && !m["BlockExpireSeconds"].empty()) {
      blockExpireSeconds = make_shared<long>(boost::any_cast<long>(m["BlockExpireSeconds"]));
    }
    if (m.find("EverySeconds") != m.end() && !m["EverySeconds"].empty()) {
      everySeconds = make_shared<long>(boost::any_cast<long>(m["EverySeconds"]));
    }
    if (m.find("ExceedLimitTimes") != m.end() && !m["ExceedLimitTimes"].empty()) {
      exceedLimitTimes = make_shared<long>(boost::any_cast<long>(m["ExceedLimitTimes"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ModifyPolicyRequestContentSourceBlockList() = default;
};
class ModifyPolicyRequestContentSourceLimit : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<long> pps{};
  shared_ptr<long> synBps{};
  shared_ptr<long> synPps{};

  ModifyPolicyRequestContentSourceLimit() {}

  explicit ModifyPolicyRequestContentSourceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    if (synBps) {
      res["SynBps"] = boost::any(*synBps);
    }
    if (synPps) {
      res["SynPps"] = boost::any(*synPps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
    if (m.find("SynBps") != m.end() && !m["SynBps"].empty()) {
      synBps = make_shared<long>(boost::any_cast<long>(m["SynBps"]));
    }
    if (m.find("SynPps") != m.end() && !m["SynPps"].empty()) {
      synPps = make_shared<long>(boost::any_cast<long>(m["SynPps"]));
    }
  }


  virtual ~ModifyPolicyRequestContentSourceLimit() = default;
};
class ModifyPolicyRequestContent : public Darabonba::Model {
public:
  shared_ptr<vector<string>> blackIpList{};
  shared_ptr<long> blackIpListExpireAt{};
  shared_ptr<bool> enableDropIcmp{};
  shared_ptr<bool> enableIntelligence{};
  shared_ptr<bool> enableL4Defense{};
  shared_ptr<vector<ModifyPolicyRequestContentFingerPrintRuleList>> fingerPrintRuleList{};
  shared_ptr<string> intelligenceLevel{};
  shared_ptr<vector<ModifyPolicyRequestContentL4RuleList>> l4RuleList{};
  shared_ptr<vector<ModifyPolicyRequestContentPortRuleList>> portRuleList{};
  shared_ptr<vector<long>> reflectBlockUdpPortList{};
  shared_ptr<vector<long>> regionBlockCountryList{};
  shared_ptr<vector<long>> regionBlockProvinceList{};
  shared_ptr<vector<ModifyPolicyRequestContentSourceBlockList>> sourceBlockList{};
  shared_ptr<ModifyPolicyRequestContentSourceLimit> sourceLimit{};
  shared_ptr<vector<string>> whiteIpList{};
  shared_ptr<bool> whitenGfbrNets{};

  ModifyPolicyRequestContent() {}

  explicit ModifyPolicyRequestContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackIpList) {
      res["BlackIpList"] = boost::any(*blackIpList);
    }
    if (blackIpListExpireAt) {
      res["BlackIpListExpireAt"] = boost::any(*blackIpListExpireAt);
    }
    if (enableDropIcmp) {
      res["EnableDropIcmp"] = boost::any(*enableDropIcmp);
    }
    if (enableIntelligence) {
      res["EnableIntelligence"] = boost::any(*enableIntelligence);
    }
    if (enableL4Defense) {
      res["EnableL4Defense"] = boost::any(*enableL4Defense);
    }
    if (fingerPrintRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*fingerPrintRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FingerPrintRuleList"] = boost::any(temp1);
    }
    if (intelligenceLevel) {
      res["IntelligenceLevel"] = boost::any(*intelligenceLevel);
    }
    if (l4RuleList) {
      vector<boost::any> temp1;
      for(auto item1:*l4RuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["L4RuleList"] = boost::any(temp1);
    }
    if (portRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*portRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRuleList"] = boost::any(temp1);
    }
    if (reflectBlockUdpPortList) {
      res["ReflectBlockUdpPortList"] = boost::any(*reflectBlockUdpPortList);
    }
    if (regionBlockCountryList) {
      res["RegionBlockCountryList"] = boost::any(*regionBlockCountryList);
    }
    if (regionBlockProvinceList) {
      res["RegionBlockProvinceList"] = boost::any(*regionBlockProvinceList);
    }
    if (sourceBlockList) {
      vector<boost::any> temp1;
      for(auto item1:*sourceBlockList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceBlockList"] = boost::any(temp1);
    }
    if (sourceLimit) {
      res["SourceLimit"] = sourceLimit ? boost::any(sourceLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (whiteIpList) {
      res["WhiteIpList"] = boost::any(*whiteIpList);
    }
    if (whitenGfbrNets) {
      res["WhitenGfbrNets"] = boost::any(*whitenGfbrNets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackIpList") != m.end() && !m["BlackIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BlackIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      blackIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BlackIpListExpireAt") != m.end() && !m["BlackIpListExpireAt"].empty()) {
      blackIpListExpireAt = make_shared<long>(boost::any_cast<long>(m["BlackIpListExpireAt"]));
    }
    if (m.find("EnableDropIcmp") != m.end() && !m["EnableDropIcmp"].empty()) {
      enableDropIcmp = make_shared<bool>(boost::any_cast<bool>(m["EnableDropIcmp"]));
    }
    if (m.find("EnableIntelligence") != m.end() && !m["EnableIntelligence"].empty()) {
      enableIntelligence = make_shared<bool>(boost::any_cast<bool>(m["EnableIntelligence"]));
    }
    if (m.find("EnableL4Defense") != m.end() && !m["EnableL4Defense"].empty()) {
      enableL4Defense = make_shared<bool>(boost::any_cast<bool>(m["EnableL4Defense"]));
    }
    if (m.find("FingerPrintRuleList") != m.end() && !m["FingerPrintRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["FingerPrintRuleList"].type()) {
        vector<ModifyPolicyRequestContentFingerPrintRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FingerPrintRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyRequestContentFingerPrintRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fingerPrintRuleList = make_shared<vector<ModifyPolicyRequestContentFingerPrintRuleList>>(expect1);
      }
    }
    if (m.find("IntelligenceLevel") != m.end() && !m["IntelligenceLevel"].empty()) {
      intelligenceLevel = make_shared<string>(boost::any_cast<string>(m["IntelligenceLevel"]));
    }
    if (m.find("L4RuleList") != m.end() && !m["L4RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["L4RuleList"].type()) {
        vector<ModifyPolicyRequestContentL4RuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["L4RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyRequestContentL4RuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        l4RuleList = make_shared<vector<ModifyPolicyRequestContentL4RuleList>>(expect1);
      }
    }
    if (m.find("PortRuleList") != m.end() && !m["PortRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRuleList"].type()) {
        vector<ModifyPolicyRequestContentPortRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyRequestContentPortRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRuleList = make_shared<vector<ModifyPolicyRequestContentPortRuleList>>(expect1);
      }
    }
    if (m.find("ReflectBlockUdpPortList") != m.end() && !m["ReflectBlockUdpPortList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ReflectBlockUdpPortList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReflectBlockUdpPortList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      reflectBlockUdpPortList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionBlockCountryList") != m.end() && !m["RegionBlockCountryList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RegionBlockCountryList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionBlockCountryList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      regionBlockCountryList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionBlockProvinceList") != m.end() && !m["RegionBlockProvinceList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RegionBlockProvinceList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionBlockProvinceList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      regionBlockProvinceList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SourceBlockList") != m.end() && !m["SourceBlockList"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceBlockList"].type()) {
        vector<ModifyPolicyRequestContentSourceBlockList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceBlockList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyRequestContentSourceBlockList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceBlockList = make_shared<vector<ModifyPolicyRequestContentSourceBlockList>>(expect1);
      }
    }
    if (m.find("SourceLimit") != m.end() && !m["SourceLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceLimit"].type()) {
        ModifyPolicyRequestContentSourceLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceLimit"]));
        sourceLimit = make_shared<ModifyPolicyRequestContentSourceLimit>(model1);
      }
    }
    if (m.find("WhiteIpList") != m.end() && !m["WhiteIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WhitenGfbrNets") != m.end() && !m["WhitenGfbrNets"].empty()) {
      whitenGfbrNets = make_shared<bool>(boost::any_cast<bool>(m["WhitenGfbrNets"]));
    }
  }


  virtual ~ModifyPolicyRequestContent() = default;
};
class ModifyPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> actionType{};
  shared_ptr<ModifyPolicyRequestContent> content{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ModifyPolicyRequest() {}

  explicit ModifyPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<long>(boost::any_cast<long>(m["ActionType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ModifyPolicyRequestContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ModifyPolicyRequestContent>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyPolicyRequest() = default;
};
class ModifyPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> actionType{};
  shared_ptr<string> contentShrink{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ModifyPolicyShrinkRequest() {}

  explicit ModifyPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (contentShrink) {
      res["Content"] = boost::any(*contentShrink);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<long>(boost::any_cast<long>(m["ActionType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      contentShrink = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyPolicyShrinkRequest() = default;
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
class ModifyPolicyContentRequestContentFingerPrintRuleList : public Darabonba::Model {
public:
  shared_ptr<long> dstPortEnd{};
  shared_ptr<long> dstPortStart{};
  shared_ptr<string> id{};
  shared_ptr<string> matchAction{};
  shared_ptr<long> maxPktLen{};
  shared_ptr<long> minPktLen{};
  shared_ptr<long> offset{};
  shared_ptr<string> payloadBytes{};
  shared_ptr<string> protocol{};
  shared_ptr<long> rateValue{};
  shared_ptr<long> seqNo{};
  shared_ptr<long> srcPortEnd{};
  shared_ptr<long> srcPortStart{};

  ModifyPolicyContentRequestContentFingerPrintRuleList() {}

  explicit ModifyPolicyContentRequestContentFingerPrintRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstPortEnd) {
      res["DstPortEnd"] = boost::any(*dstPortEnd);
    }
    if (dstPortStart) {
      res["DstPortStart"] = boost::any(*dstPortStart);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchAction) {
      res["MatchAction"] = boost::any(*matchAction);
    }
    if (maxPktLen) {
      res["MaxPktLen"] = boost::any(*maxPktLen);
    }
    if (minPktLen) {
      res["MinPktLen"] = boost::any(*minPktLen);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (payloadBytes) {
      res["PayloadBytes"] = boost::any(*payloadBytes);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (rateValue) {
      res["RateValue"] = boost::any(*rateValue);
    }
    if (seqNo) {
      res["SeqNo"] = boost::any(*seqNo);
    }
    if (srcPortEnd) {
      res["SrcPortEnd"] = boost::any(*srcPortEnd);
    }
    if (srcPortStart) {
      res["SrcPortStart"] = boost::any(*srcPortStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstPortEnd") != m.end() && !m["DstPortEnd"].empty()) {
      dstPortEnd = make_shared<long>(boost::any_cast<long>(m["DstPortEnd"]));
    }
    if (m.find("DstPortStart") != m.end() && !m["DstPortStart"].empty()) {
      dstPortStart = make_shared<long>(boost::any_cast<long>(m["DstPortStart"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchAction") != m.end() && !m["MatchAction"].empty()) {
      matchAction = make_shared<string>(boost::any_cast<string>(m["MatchAction"]));
    }
    if (m.find("MaxPktLen") != m.end() && !m["MaxPktLen"].empty()) {
      maxPktLen = make_shared<long>(boost::any_cast<long>(m["MaxPktLen"]));
    }
    if (m.find("MinPktLen") != m.end() && !m["MinPktLen"].empty()) {
      minPktLen = make_shared<long>(boost::any_cast<long>(m["MinPktLen"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PayloadBytes") != m.end() && !m["PayloadBytes"].empty()) {
      payloadBytes = make_shared<string>(boost::any_cast<string>(m["PayloadBytes"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RateValue") != m.end() && !m["RateValue"].empty()) {
      rateValue = make_shared<long>(boost::any_cast<long>(m["RateValue"]));
    }
    if (m.find("SeqNo") != m.end() && !m["SeqNo"].empty()) {
      seqNo = make_shared<long>(boost::any_cast<long>(m["SeqNo"]));
    }
    if (m.find("SrcPortEnd") != m.end() && !m["SrcPortEnd"].empty()) {
      srcPortEnd = make_shared<long>(boost::any_cast<long>(m["SrcPortEnd"]));
    }
    if (m.find("SrcPortStart") != m.end() && !m["SrcPortStart"].empty()) {
      srcPortStart = make_shared<long>(boost::any_cast<long>(m["SrcPortStart"]));
    }
  }


  virtual ~ModifyPolicyContentRequestContentFingerPrintRuleList() = default;
};
class ModifyPolicyContentRequestContentL4RuleListConditionList : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<long> depth{};
  shared_ptr<long> position{};

  ModifyPolicyContentRequestContentL4RuleListConditionList() {}

  explicit ModifyPolicyContentRequestContentL4RuleListConditionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (depth) {
      res["Depth"] = boost::any(*depth);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["Arg"]));
    }
    if (m.find("Depth") != m.end() && !m["Depth"].empty()) {
      depth = make_shared<long>(boost::any_cast<long>(m["Depth"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
  }


  virtual ~ModifyPolicyContentRequestContentL4RuleListConditionList() = default;
};
class ModifyPolicyContentRequestContentL4RuleList : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<vector<ModifyPolicyContentRequestContentL4RuleListConditionList>> conditionList{};
  shared_ptr<long> limited{};
  shared_ptr<string> match{};
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<long> priority{};

  ModifyPolicyContentRequestContentL4RuleList() {}

  explicit ModifyPolicyContentRequestContentL4RuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (conditionList) {
      vector<boost::any> temp1;
      for(auto item1:*conditionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConditionList"] = boost::any(temp1);
    }
    if (limited) {
      res["Limited"] = boost::any(*limited);
    }
    if (match) {
      res["Match"] = boost::any(*match);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ConditionList") != m.end() && !m["ConditionList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConditionList"].type()) {
        vector<ModifyPolicyContentRequestContentL4RuleListConditionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConditionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyContentRequestContentL4RuleListConditionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditionList = make_shared<vector<ModifyPolicyContentRequestContentL4RuleListConditionList>>(expect1);
      }
    }
    if (m.find("Limited") != m.end() && !m["Limited"].empty()) {
      limited = make_shared<long>(boost::any_cast<long>(m["Limited"]));
    }
    if (m.find("Match") != m.end() && !m["Match"].empty()) {
      match = make_shared<string>(boost::any_cast<string>(m["Match"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
  }


  virtual ~ModifyPolicyContentRequestContentL4RuleList() = default;
};
class ModifyPolicyContentRequestContentPortRuleList : public Darabonba::Model {
public:
  shared_ptr<long> dstPortEnd{};
  shared_ptr<long> dstPortStart{};
  shared_ptr<string> id{};
  shared_ptr<string> matchAction{};
  shared_ptr<string> protocol{};
  shared_ptr<long> seqNo{};
  shared_ptr<long> srcPortEnd{};
  shared_ptr<long> srcPortStart{};

  ModifyPolicyContentRequestContentPortRuleList() {}

  explicit ModifyPolicyContentRequestContentPortRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstPortEnd) {
      res["DstPortEnd"] = boost::any(*dstPortEnd);
    }
    if (dstPortStart) {
      res["DstPortStart"] = boost::any(*dstPortStart);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchAction) {
      res["MatchAction"] = boost::any(*matchAction);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (seqNo) {
      res["SeqNo"] = boost::any(*seqNo);
    }
    if (srcPortEnd) {
      res["SrcPortEnd"] = boost::any(*srcPortEnd);
    }
    if (srcPortStart) {
      res["SrcPortStart"] = boost::any(*srcPortStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstPortEnd") != m.end() && !m["DstPortEnd"].empty()) {
      dstPortEnd = make_shared<long>(boost::any_cast<long>(m["DstPortEnd"]));
    }
    if (m.find("DstPortStart") != m.end() && !m["DstPortStart"].empty()) {
      dstPortStart = make_shared<long>(boost::any_cast<long>(m["DstPortStart"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchAction") != m.end() && !m["MatchAction"].empty()) {
      matchAction = make_shared<string>(boost::any_cast<string>(m["MatchAction"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("SeqNo") != m.end() && !m["SeqNo"].empty()) {
      seqNo = make_shared<long>(boost::any_cast<long>(m["SeqNo"]));
    }
    if (m.find("SrcPortEnd") != m.end() && !m["SrcPortEnd"].empty()) {
      srcPortEnd = make_shared<long>(boost::any_cast<long>(m["SrcPortEnd"]));
    }
    if (m.find("SrcPortStart") != m.end() && !m["SrcPortStart"].empty()) {
      srcPortStart = make_shared<long>(boost::any_cast<long>(m["SrcPortStart"]));
    }
  }


  virtual ~ModifyPolicyContentRequestContentPortRuleList() = default;
};
class ModifyPolicyContentRequestContentSourceBlockList : public Darabonba::Model {
public:
  shared_ptr<long> blockExpireSeconds{};
  shared_ptr<long> everySeconds{};
  shared_ptr<long> exceedLimitTimes{};
  shared_ptr<long> type{};

  ModifyPolicyContentRequestContentSourceBlockList() {}

  explicit ModifyPolicyContentRequestContentSourceBlockList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockExpireSeconds) {
      res["BlockExpireSeconds"] = boost::any(*blockExpireSeconds);
    }
    if (everySeconds) {
      res["EverySeconds"] = boost::any(*everySeconds);
    }
    if (exceedLimitTimes) {
      res["ExceedLimitTimes"] = boost::any(*exceedLimitTimes);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockExpireSeconds") != m.end() && !m["BlockExpireSeconds"].empty()) {
      blockExpireSeconds = make_shared<long>(boost::any_cast<long>(m["BlockExpireSeconds"]));
    }
    if (m.find("EverySeconds") != m.end() && !m["EverySeconds"].empty()) {
      everySeconds = make_shared<long>(boost::any_cast<long>(m["EverySeconds"]));
    }
    if (m.find("ExceedLimitTimes") != m.end() && !m["ExceedLimitTimes"].empty()) {
      exceedLimitTimes = make_shared<long>(boost::any_cast<long>(m["ExceedLimitTimes"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ModifyPolicyContentRequestContentSourceBlockList() = default;
};
class ModifyPolicyContentRequestContentSourceLimit : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<long> pps{};
  shared_ptr<long> synBps{};
  shared_ptr<long> synPps{};

  ModifyPolicyContentRequestContentSourceLimit() {}

  explicit ModifyPolicyContentRequestContentSourceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    if (synBps) {
      res["SynBps"] = boost::any(*synBps);
    }
    if (synPps) {
      res["SynPps"] = boost::any(*synPps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
    if (m.find("SynBps") != m.end() && !m["SynBps"].empty()) {
      synBps = make_shared<long>(boost::any_cast<long>(m["SynBps"]));
    }
    if (m.find("SynPps") != m.end() && !m["SynPps"].empty()) {
      synPps = make_shared<long>(boost::any_cast<long>(m["SynPps"]));
    }
  }


  virtual ~ModifyPolicyContentRequestContentSourceLimit() = default;
};
class ModifyPolicyContentRequestContent : public Darabonba::Model {
public:
  shared_ptr<long> blackIpListExpireAt{};
  shared_ptr<bool> enableDropIcmp{};
  shared_ptr<bool> enableIntelligence{};
  shared_ptr<bool> enableL4Defense{};
  shared_ptr<vector<ModifyPolicyContentRequestContentFingerPrintRuleList>> fingerPrintRuleList{};
  shared_ptr<string> intelligenceLevel{};
  shared_ptr<vector<ModifyPolicyContentRequestContentL4RuleList>> l4RuleList{};
  shared_ptr<vector<ModifyPolicyContentRequestContentPortRuleList>> portRuleList{};
  shared_ptr<vector<long>> reflectBlockUdpPortList{};
  shared_ptr<vector<long>> regionBlockCountryList{};
  shared_ptr<vector<long>> regionBlockProvinceList{};
  shared_ptr<vector<ModifyPolicyContentRequestContentSourceBlockList>> sourceBlockList{};
  shared_ptr<ModifyPolicyContentRequestContentSourceLimit> sourceLimit{};
  shared_ptr<bool> whitenGfbrNets{};

  ModifyPolicyContentRequestContent() {}

  explicit ModifyPolicyContentRequestContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackIpListExpireAt) {
      res["BlackIpListExpireAt"] = boost::any(*blackIpListExpireAt);
    }
    if (enableDropIcmp) {
      res["EnableDropIcmp"] = boost::any(*enableDropIcmp);
    }
    if (enableIntelligence) {
      res["EnableIntelligence"] = boost::any(*enableIntelligence);
    }
    if (enableL4Defense) {
      res["EnableL4Defense"] = boost::any(*enableL4Defense);
    }
    if (fingerPrintRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*fingerPrintRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FingerPrintRuleList"] = boost::any(temp1);
    }
    if (intelligenceLevel) {
      res["IntelligenceLevel"] = boost::any(*intelligenceLevel);
    }
    if (l4RuleList) {
      vector<boost::any> temp1;
      for(auto item1:*l4RuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["L4RuleList"] = boost::any(temp1);
    }
    if (portRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*portRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRuleList"] = boost::any(temp1);
    }
    if (reflectBlockUdpPortList) {
      res["ReflectBlockUdpPortList"] = boost::any(*reflectBlockUdpPortList);
    }
    if (regionBlockCountryList) {
      res["RegionBlockCountryList"] = boost::any(*regionBlockCountryList);
    }
    if (regionBlockProvinceList) {
      res["RegionBlockProvinceList"] = boost::any(*regionBlockProvinceList);
    }
    if (sourceBlockList) {
      vector<boost::any> temp1;
      for(auto item1:*sourceBlockList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceBlockList"] = boost::any(temp1);
    }
    if (sourceLimit) {
      res["SourceLimit"] = sourceLimit ? boost::any(sourceLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (whitenGfbrNets) {
      res["WhitenGfbrNets"] = boost::any(*whitenGfbrNets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackIpListExpireAt") != m.end() && !m["BlackIpListExpireAt"].empty()) {
      blackIpListExpireAt = make_shared<long>(boost::any_cast<long>(m["BlackIpListExpireAt"]));
    }
    if (m.find("EnableDropIcmp") != m.end() && !m["EnableDropIcmp"].empty()) {
      enableDropIcmp = make_shared<bool>(boost::any_cast<bool>(m["EnableDropIcmp"]));
    }
    if (m.find("EnableIntelligence") != m.end() && !m["EnableIntelligence"].empty()) {
      enableIntelligence = make_shared<bool>(boost::any_cast<bool>(m["EnableIntelligence"]));
    }
    if (m.find("EnableL4Defense") != m.end() && !m["EnableL4Defense"].empty()) {
      enableL4Defense = make_shared<bool>(boost::any_cast<bool>(m["EnableL4Defense"]));
    }
    if (m.find("FingerPrintRuleList") != m.end() && !m["FingerPrintRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["FingerPrintRuleList"].type()) {
        vector<ModifyPolicyContentRequestContentFingerPrintRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FingerPrintRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyContentRequestContentFingerPrintRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fingerPrintRuleList = make_shared<vector<ModifyPolicyContentRequestContentFingerPrintRuleList>>(expect1);
      }
    }
    if (m.find("IntelligenceLevel") != m.end() && !m["IntelligenceLevel"].empty()) {
      intelligenceLevel = make_shared<string>(boost::any_cast<string>(m["IntelligenceLevel"]));
    }
    if (m.find("L4RuleList") != m.end() && !m["L4RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["L4RuleList"].type()) {
        vector<ModifyPolicyContentRequestContentL4RuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["L4RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyContentRequestContentL4RuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        l4RuleList = make_shared<vector<ModifyPolicyContentRequestContentL4RuleList>>(expect1);
      }
    }
    if (m.find("PortRuleList") != m.end() && !m["PortRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRuleList"].type()) {
        vector<ModifyPolicyContentRequestContentPortRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyContentRequestContentPortRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRuleList = make_shared<vector<ModifyPolicyContentRequestContentPortRuleList>>(expect1);
      }
    }
    if (m.find("ReflectBlockUdpPortList") != m.end() && !m["ReflectBlockUdpPortList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ReflectBlockUdpPortList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReflectBlockUdpPortList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      reflectBlockUdpPortList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionBlockCountryList") != m.end() && !m["RegionBlockCountryList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RegionBlockCountryList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionBlockCountryList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      regionBlockCountryList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionBlockProvinceList") != m.end() && !m["RegionBlockProvinceList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RegionBlockProvinceList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionBlockProvinceList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      regionBlockProvinceList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SourceBlockList") != m.end() && !m["SourceBlockList"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceBlockList"].type()) {
        vector<ModifyPolicyContentRequestContentSourceBlockList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceBlockList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyContentRequestContentSourceBlockList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceBlockList = make_shared<vector<ModifyPolicyContentRequestContentSourceBlockList>>(expect1);
      }
    }
    if (m.find("SourceLimit") != m.end() && !m["SourceLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceLimit"].type()) {
        ModifyPolicyContentRequestContentSourceLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceLimit"]));
        sourceLimit = make_shared<ModifyPolicyContentRequestContentSourceLimit>(model1);
      }
    }
    if (m.find("WhitenGfbrNets") != m.end() && !m["WhitenGfbrNets"].empty()) {
      whitenGfbrNets = make_shared<bool>(boost::any_cast<bool>(m["WhitenGfbrNets"]));
    }
  }


  virtual ~ModifyPolicyContentRequestContent() = default;
};
class ModifyPolicyContentRequest : public Darabonba::Model {
public:
  shared_ptr<ModifyPolicyContentRequestContent> content{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ModifyPolicyContentRequest() {}

  explicit ModifyPolicyContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ModifyPolicyContentRequestContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ModifyPolicyContentRequestContent>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyPolicyContentRequest() = default;
};
class ModifyPolicyContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> contentShrink{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ModifyPolicyContentShrinkRequest() {}

  explicit ModifyPolicyContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentShrink) {
      res["Content"] = boost::any(*contentShrink);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      contentShrink = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyPolicyContentShrinkRequest() = default;
};
class ModifyPolicyContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPolicyContentResponseBody() {}

  explicit ModifyPolicyContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPolicyContentResponseBody() = default;
};
class ModifyPolicyContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPolicyContentResponseBody> body{};

  ModifyPolicyContentResponse() {}

  explicit ModifyPolicyContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyPolicyContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPolicyContentResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPolicyContentResponse() = default;
};
class ModifyRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};

  ModifyRemarkRequest() {}

  explicit ModifyRemarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ModifyRemarkRequest() = default;
};
class ModifyRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyRemarkResponseBody() {}

  explicit ModifyRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyRemarkResponseBody() = default;
};
class ModifyRemarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRemarkResponseBody> body{};

  ModifyRemarkResponse() {}

  explicit ModifyRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRemarkResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class QuerySchedruleOnDemandRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  QuerySchedruleOnDemandRequest() {}

  explicit QuerySchedruleOnDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QuerySchedruleOnDemandRequest() = default;
};
class QuerySchedruleOnDemandResponseBodyRuleConfig : public Darabonba::Model {
public:
  shared_ptr<string> ruleAction{};
  shared_ptr<string> ruleConditionCnt{};
  shared_ptr<string> ruleConditionKpps{};
  shared_ptr<string> ruleConditionMbps{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleSwitch{};
  shared_ptr<string> ruleUndoBeginTime{};
  shared_ptr<string> ruleUndoEndTime{};
  shared_ptr<string> ruleUndoMode{};
  shared_ptr<string> timeZone{};

  QuerySchedruleOnDemandResponseBodyRuleConfig() {}

  explicit QuerySchedruleOnDemandResponseBodyRuleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleAction) {
      res["RuleAction"] = boost::any(*ruleAction);
    }
    if (ruleConditionCnt) {
      res["RuleConditionCnt"] = boost::any(*ruleConditionCnt);
    }
    if (ruleConditionKpps) {
      res["RuleConditionKpps"] = boost::any(*ruleConditionKpps);
    }
    if (ruleConditionMbps) {
      res["RuleConditionMbps"] = boost::any(*ruleConditionMbps);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleSwitch) {
      res["RuleSwitch"] = boost::any(*ruleSwitch);
    }
    if (ruleUndoBeginTime) {
      res["RuleUndoBeginTime"] = boost::any(*ruleUndoBeginTime);
    }
    if (ruleUndoEndTime) {
      res["RuleUndoEndTime"] = boost::any(*ruleUndoEndTime);
    }
    if (ruleUndoMode) {
      res["RuleUndoMode"] = boost::any(*ruleUndoMode);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleAction") != m.end() && !m["RuleAction"].empty()) {
      ruleAction = make_shared<string>(boost::any_cast<string>(m["RuleAction"]));
    }
    if (m.find("RuleConditionCnt") != m.end() && !m["RuleConditionCnt"].empty()) {
      ruleConditionCnt = make_shared<string>(boost::any_cast<string>(m["RuleConditionCnt"]));
    }
    if (m.find("RuleConditionKpps") != m.end() && !m["RuleConditionKpps"].empty()) {
      ruleConditionKpps = make_shared<string>(boost::any_cast<string>(m["RuleConditionKpps"]));
    }
    if (m.find("RuleConditionMbps") != m.end() && !m["RuleConditionMbps"].empty()) {
      ruleConditionMbps = make_shared<string>(boost::any_cast<string>(m["RuleConditionMbps"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleSwitch") != m.end() && !m["RuleSwitch"].empty()) {
      ruleSwitch = make_shared<string>(boost::any_cast<string>(m["RuleSwitch"]));
    }
    if (m.find("RuleUndoBeginTime") != m.end() && !m["RuleUndoBeginTime"].empty()) {
      ruleUndoBeginTime = make_shared<string>(boost::any_cast<string>(m["RuleUndoBeginTime"]));
    }
    if (m.find("RuleUndoEndTime") != m.end() && !m["RuleUndoEndTime"].empty()) {
      ruleUndoEndTime = make_shared<string>(boost::any_cast<string>(m["RuleUndoEndTime"]));
    }
    if (m.find("RuleUndoMode") != m.end() && !m["RuleUndoMode"].empty()) {
      ruleUndoMode = make_shared<string>(boost::any_cast<string>(m["RuleUndoMode"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~QuerySchedruleOnDemandResponseBodyRuleConfig() = default;
};
class QuerySchedruleOnDemandResponseBodyRuleStatus : public Darabonba::Model {
public:
  shared_ptr<string> net{};
  shared_ptr<string> ruleSchedStatus{};

  QuerySchedruleOnDemandResponseBodyRuleStatus() {}

  explicit QuerySchedruleOnDemandResponseBodyRuleStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (net) {
      res["Net"] = boost::any(*net);
    }
    if (ruleSchedStatus) {
      res["RuleSchedStatus"] = boost::any(*ruleSchedStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Net") != m.end() && !m["Net"].empty()) {
      net = make_shared<string>(boost::any_cast<string>(m["Net"]));
    }
    if (m.find("RuleSchedStatus") != m.end() && !m["RuleSchedStatus"].empty()) {
      ruleSchedStatus = make_shared<string>(boost::any_cast<string>(m["RuleSchedStatus"]));
    }
  }


  virtual ~QuerySchedruleOnDemandResponseBodyRuleStatus() = default;
};
class QuerySchedruleOnDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<QuerySchedruleOnDemandResponseBodyRuleConfig>> ruleConfig{};
  shared_ptr<vector<QuerySchedruleOnDemandResponseBodyRuleStatus>> ruleStatus{};
  shared_ptr<string> userId{};

  QuerySchedruleOnDemandResponseBody() {}

  explicit QuerySchedruleOnDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleConfig) {
      vector<boost::any> temp1;
      for(auto item1:*ruleConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleConfig"] = boost::any(temp1);
    }
    if (ruleStatus) {
      vector<boost::any> temp1;
      for(auto item1:*ruleStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleStatus"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleConfig") != m.end() && !m["RuleConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleConfig"].type()) {
        vector<QuerySchedruleOnDemandResponseBodyRuleConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySchedruleOnDemandResponseBodyRuleConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleConfig = make_shared<vector<QuerySchedruleOnDemandResponseBodyRuleConfig>>(expect1);
      }
    }
    if (m.find("RuleStatus") != m.end() && !m["RuleStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleStatus"].type()) {
        vector<QuerySchedruleOnDemandResponseBodyRuleStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySchedruleOnDemandResponseBodyRuleStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleStatus = make_shared<vector<QuerySchedruleOnDemandResponseBodyRuleStatus>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QuerySchedruleOnDemandResponseBody() = default;
};
class QuerySchedruleOnDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySchedruleOnDemandResponseBody> body{};

  QuerySchedruleOnDemandResponse() {}

  explicit QuerySchedruleOnDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QuerySchedruleOnDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySchedruleOnDemandResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySchedruleOnDemandResponse() = default;
};
class ReleaseDdosOriginInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ReleaseDdosOriginInstanceRequest() {}

  explicit ReleaseDdosOriginInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ReleaseDdosOriginInstanceRequest() = default;
};
class ReleaseDdosOriginInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseDdosOriginInstanceResponseBody() {}

  explicit ReleaseDdosOriginInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseDdosOriginInstanceResponseBody() = default;
};
class ReleaseDdosOriginInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseDdosOriginInstanceResponseBody> body{};

  ReleaseDdosOriginInstanceResponse() {}

  explicit ReleaseDdosOriginInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseDdosOriginInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseDdosOriginInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseDdosOriginInstanceResponse() = default;
};
class SetInstanceModeOnDemandRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIdList{};
  shared_ptr<string> mode{};
  shared_ptr<string> regionId{};

  SetInstanceModeOnDemandRequest() {}

  explicit SetInstanceModeOnDemandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIdList") != m.end() && !m["InstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SetInstanceModeOnDemandRequest() = default;
};
class SetInstanceModeOnDemandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetInstanceModeOnDemandResponseBody() {}

  explicit SetInstanceModeOnDemandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetInstanceModeOnDemandResponseBody() = default;
};
class SetInstanceModeOnDemandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetInstanceModeOnDemandResponseBody> body{};

  SetInstanceModeOnDemandResponse() {}

  explicit SetInstanceModeOnDemandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetInstanceModeOnDemandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetInstanceModeOnDemandResponseBody>(model1);
      }
    }
  }


  virtual ~SetInstanceModeOnDemandResponse() = default;
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  AddIpResponse addIpWithOptions(shared_ptr<AddIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddIpResponse addIp(shared_ptr<AddIpRequest> request);
  AddRdMemberListResponse addRdMemberListWithOptions(shared_ptr<AddRdMemberListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddRdMemberListResponse addRdMemberList(shared_ptr<AddRdMemberListRequest> request);
  AttachAssetGroupToInstanceResponse attachAssetGroupToInstanceWithOptions(shared_ptr<AttachAssetGroupToInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachAssetGroupToInstanceResponse attachAssetGroupToInstance(shared_ptr<AttachAssetGroupToInstanceRequest> request);
  AttachToPolicyResponse attachToPolicyWithOptions(shared_ptr<AttachToPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachToPolicyResponse attachToPolicy(shared_ptr<AttachToPolicyRequest> request);
  CheckAccessLogAuthResponse checkAccessLogAuthWithOptions(shared_ptr<CheckAccessLogAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAccessLogAuthResponse checkAccessLogAuth(shared_ptr<CheckAccessLogAuthRequest> request);
  CheckGrantResponse checkGrantWithOptions(shared_ptr<CheckGrantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckGrantResponse checkGrant(shared_ptr<CheckGrantRequest> request);
  ConfigSchedruleOnDemandResponse configSchedruleOnDemandWithOptions(shared_ptr<ConfigSchedruleOnDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigSchedruleOnDemandResponse configSchedruleOnDemand(shared_ptr<ConfigSchedruleOnDemandRequest> request);
  CreatePolicyResponse createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyResponse createPolicy(shared_ptr<CreatePolicyRequest> request);
  CreateSchedruleOnDemandResponse createSchedruleOnDemandWithOptions(shared_ptr<CreateSchedruleOnDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSchedruleOnDemandResponse createSchedruleOnDemand(shared_ptr<CreateSchedruleOnDemandRequest> request);
  DeleteBlackholeResponse deleteBlackholeWithOptions(shared_ptr<DeleteBlackholeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBlackholeResponse deleteBlackhole(shared_ptr<DeleteBlackholeRequest> request);
  DeleteIpResponse deleteIpWithOptions(shared_ptr<DeleteIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpResponse deleteIp(shared_ptr<DeleteIpRequest> request);
  DeletePolicyResponse deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyResponse deletePolicy(shared_ptr<DeletePolicyRequest> request);
  DeleteRdMemberListResponse deleteRdMemberListWithOptions(shared_ptr<DeleteRdMemberListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRdMemberListResponse deleteRdMemberList(shared_ptr<DeleteRdMemberListRequest> request);
  DeleteSchedruleOnDemandResponse deleteSchedruleOnDemandWithOptions(shared_ptr<DeleteSchedruleOnDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSchedruleOnDemandResponse deleteSchedruleOnDemand(shared_ptr<DeleteSchedruleOnDemandRequest> request);
  DescribeAssetGroupResponse describeAssetGroupWithOptions(shared_ptr<DescribeAssetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAssetGroupResponse describeAssetGroup(shared_ptr<DescribeAssetGroupRequest> request);
  DescribeAssetGroupToInstanceResponse describeAssetGroupToInstanceWithOptions(shared_ptr<DescribeAssetGroupToInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAssetGroupToInstanceResponse describeAssetGroupToInstance(shared_ptr<DescribeAssetGroupToInstanceRequest> request);
  DescribeDdosEventResponse describeDdosEventWithOptions(shared_ptr<DescribeDdosEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDdosEventResponse describeDdosEvent(shared_ptr<DescribeDdosEventRequest> request);
  DescribeDdosOriginInstanceBillResponse describeDdosOriginInstanceBillWithOptions(shared_ptr<DescribeDdosOriginInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDdosOriginInstanceBillResponse describeDdosOriginInstanceBill(shared_ptr<DescribeDdosOriginInstanceBillRequest> request);
  DescribeExcpetionCountResponse describeExcpetionCountWithOptions(shared_ptr<DescribeExcpetionCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExcpetionCountResponse describeExcpetionCount(shared_ptr<DescribeExcpetionCountRequest> request);
  DescribeInstanceListResponse describeInstanceListWithOptions(shared_ptr<DescribeInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceListResponse describeInstanceList(shared_ptr<DescribeInstanceListRequest> request);
  DescribeInstanceSpecsResponse describeInstanceSpecsWithOptions(shared_ptr<DescribeInstanceSpecsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSpecsResponse describeInstanceSpecs(shared_ptr<DescribeInstanceSpecsRequest> request);
  DescribeOnDemandDdosEventResponse describeOnDemandDdosEventWithOptions(shared_ptr<DescribeOnDemandDdosEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOnDemandDdosEventResponse describeOnDemandDdosEvent(shared_ptr<DescribeOnDemandDdosEventRequest> request);
  DescribeOnDemandInstanceStatusResponse describeOnDemandInstanceStatusWithOptions(shared_ptr<DescribeOnDemandInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOnDemandInstanceStatusResponse describeOnDemandInstanceStatus(shared_ptr<DescribeOnDemandInstanceStatusRequest> request);
  DescribeOpEntitiesResponse describeOpEntitiesWithOptions(shared_ptr<DescribeOpEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOpEntitiesResponse describeOpEntities(shared_ptr<DescribeOpEntitiesRequest> request);
  DescribePackIpListResponse describePackIpListWithOptions(shared_ptr<DescribePackIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackIpListResponse describePackIpList(shared_ptr<DescribePackIpListRequest> request);
  DescribeRdMemberListResponse describeRdMemberListWithOptions(shared_ptr<DescribeRdMemberListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdMemberListResponse describeRdMemberList(shared_ptr<DescribeRdMemberListRequest> request);
  DescribeRdStatusResponse describeRdStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdStatusResponse describeRdStatus();
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeTrafficResponse describeTrafficWithOptions(shared_ptr<DescribeTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrafficResponse describeTraffic(shared_ptr<DescribeTrafficRequest> request);
  DetachFromPolicyResponse detachFromPolicyWithOptions(shared_ptr<DetachFromPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachFromPolicyResponse detachFromPolicy(shared_ptr<DetachFromPolicyRequest> request);
  DettachAssetGroupToInstanceResponse dettachAssetGroupToInstanceWithOptions(shared_ptr<DettachAssetGroupToInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DettachAssetGroupToInstanceResponse dettachAssetGroupToInstance(shared_ptr<DettachAssetGroupToInstanceRequest> request);
  GetSlsOpenStatusResponse getSlsOpenStatusWithOptions(shared_ptr<GetSlsOpenStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSlsOpenStatusResponse getSlsOpenStatus(shared_ptr<GetSlsOpenStatusRequest> request);
  ListOpenedAccessLogInstancesResponse listOpenedAccessLogInstancesWithOptions(shared_ptr<ListOpenedAccessLogInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOpenedAccessLogInstancesResponse listOpenedAccessLogInstances(shared_ptr<ListOpenedAccessLogInstancesRequest> request);
  ListPolicyResponse listPolicyWithOptions(shared_ptr<ListPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyResponse listPolicy(shared_ptr<ListPolicyRequest> request);
  ListPolicyAttachmentResponse listPolicyAttachmentWithOptions(shared_ptr<ListPolicyAttachmentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyAttachmentResponse listPolicyAttachment(shared_ptr<ListPolicyAttachmentRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyPolicyResponse modifyPolicyWithOptions(shared_ptr<ModifyPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyResponse modifyPolicy(shared_ptr<ModifyPolicyRequest> request);
  ModifyPolicyContentResponse modifyPolicyContentWithOptions(shared_ptr<ModifyPolicyContentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyContentResponse modifyPolicyContent(shared_ptr<ModifyPolicyContentRequest> request);
  ModifyRemarkResponse modifyRemarkWithOptions(shared_ptr<ModifyRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRemarkResponse modifyRemark(shared_ptr<ModifyRemarkRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  QuerySchedruleOnDemandResponse querySchedruleOnDemandWithOptions(shared_ptr<QuerySchedruleOnDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySchedruleOnDemandResponse querySchedruleOnDemand(shared_ptr<QuerySchedruleOnDemandRequest> request);
  ReleaseDdosOriginInstanceResponse releaseDdosOriginInstanceWithOptions(shared_ptr<ReleaseDdosOriginInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseDdosOriginInstanceResponse releaseDdosOriginInstance(shared_ptr<ReleaseDdosOriginInstanceRequest> request);
  SetInstanceModeOnDemandResponse setInstanceModeOnDemandWithOptions(shared_ptr<SetInstanceModeOnDemandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetInstanceModeOnDemandResponse setInstanceModeOnDemand(shared_ptr<SetInstanceModeOnDemandRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ddosbgp20180720

#endif
