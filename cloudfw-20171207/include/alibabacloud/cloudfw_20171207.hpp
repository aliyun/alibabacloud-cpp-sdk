// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDFW20171207_H_
#define ALIBABACLOUD_CLOUDFW20171207_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudfw20171207 {
class AddAddressBookRequestTagList : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  AddAddressBookRequestTagList() {}

  explicit AddAddressBookRequestTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddAddressBookRequestTagList() = default;
};
class AddAddressBookRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressList{};
  shared_ptr<string> autoAddTagEcs{};
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<vector<AddAddressBookRequestTagList>> tagList{};
  shared_ptr<string> tagRelation{};

  AddAddressBookRequest() {}

  explicit AddAddressBookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressList) {
      res["AddressList"] = boost::any(*addressList);
    }
    if (autoAddTagEcs) {
      res["AutoAddTagEcs"] = boost::any(*autoAddTagEcs);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (tagRelation) {
      res["TagRelation"] = boost::any(*tagRelation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressList") != m.end() && !m["AddressList"].empty()) {
      addressList = make_shared<string>(boost::any_cast<string>(m["AddressList"]));
    }
    if (m.find("AutoAddTagEcs") != m.end() && !m["AutoAddTagEcs"].empty()) {
      autoAddTagEcs = make_shared<string>(boost::any_cast<string>(m["AutoAddTagEcs"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<AddAddressBookRequestTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddAddressBookRequestTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<AddAddressBookRequestTagList>>(expect1);
      }
    }
    if (m.find("TagRelation") != m.end() && !m["TagRelation"].empty()) {
      tagRelation = make_shared<string>(boost::any_cast<string>(m["TagRelation"]));
    }
  }


  virtual ~AddAddressBookRequest() = default;
};
class AddAddressBookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> groupUuid{};
  shared_ptr<string> requestId{};

  AddAddressBookResponseBody() {}

  explicit AddAddressBookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupUuid) {
      res["GroupUuid"] = boost::any(*groupUuid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupUuid") != m.end() && !m["GroupUuid"].empty()) {
      groupUuid = make_shared<string>(boost::any_cast<string>(m["GroupUuid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddAddressBookResponseBody() = default;
};
class AddAddressBookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddAddressBookResponseBody> body{};

  AddAddressBookResponse() {}

  explicit AddAddressBookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddAddressBookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddAddressBookResponseBody>(model1);
      }
    }
  }


  virtual ~AddAddressBookResponse() = default;
};
class AddControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> applicationName{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> direction{};
  shared_ptr<string> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> newOrder{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};

  AddControlPolicyRequest() {}

  explicit AddControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (newOrder) {
      res["NewOrder"] = boost::any(*newOrder);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<string>(boost::any_cast<string>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NewOrder") != m.end() && !m["NewOrder"].empty()) {
      newOrder = make_shared<string>(boost::any_cast<string>(m["NewOrder"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~AddControlPolicyRequest() = default;
};
class AddControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> requestId{};

  AddControlPolicyResponseBody() {}

  explicit AddControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddControlPolicyResponseBody() = default;
};
class AddControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddControlPolicyResponseBody> body{};

  AddControlPolicyResponse() {}

  explicit AddControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AddControlPolicyResponse() = default;
};
class AddInstanceMembersRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberDesc{};
  shared_ptr<long> memberUid{};

  AddInstanceMembersRequestMembers() {}

  explicit AddInstanceMembersRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberDesc) {
      res["MemberDesc"] = boost::any(*memberDesc);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberDesc") != m.end() && !m["MemberDesc"].empty()) {
      memberDesc = make_shared<string>(boost::any_cast<string>(m["MemberDesc"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
  }


  virtual ~AddInstanceMembersRequestMembers() = default;
};
class AddInstanceMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddInstanceMembersRequestMembers>> members{};

  AddInstanceMembersRequest() {}

  explicit AddInstanceMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<AddInstanceMembersRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddInstanceMembersRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<AddInstanceMembersRequestMembers>>(expect1);
      }
    }
  }


  virtual ~AddInstanceMembersRequest() = default;
};
class AddInstanceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddInstanceMembersResponseBody() {}

  explicit AddInstanceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddInstanceMembersResponseBody() = default;
};
class AddInstanceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddInstanceMembersResponseBody> body{};

  AddInstanceMembersResponse() {}

  explicit AddInstanceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddInstanceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddInstanceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AddInstanceMembersResponse() = default;
};
class BatchCopyVpcFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> sourceVpcFirewallId{};
  shared_ptr<string> targetVpcFirewallId{};

  BatchCopyVpcFirewallControlPolicyRequest() {}

  explicit BatchCopyVpcFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (sourceVpcFirewallId) {
      res["SourceVpcFirewallId"] = boost::any(*sourceVpcFirewallId);
    }
    if (targetVpcFirewallId) {
      res["TargetVpcFirewallId"] = boost::any(*targetVpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("SourceVpcFirewallId") != m.end() && !m["SourceVpcFirewallId"].empty()) {
      sourceVpcFirewallId = make_shared<string>(boost::any_cast<string>(m["SourceVpcFirewallId"]));
    }
    if (m.find("TargetVpcFirewallId") != m.end() && !m["TargetVpcFirewallId"].empty()) {
      targetVpcFirewallId = make_shared<string>(boost::any_cast<string>(m["TargetVpcFirewallId"]));
    }
  }


  virtual ~BatchCopyVpcFirewallControlPolicyRequest() = default;
};
class BatchCopyVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchCopyVpcFirewallControlPolicyResponseBody() {}

  explicit BatchCopyVpcFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchCopyVpcFirewallControlPolicyResponseBody() = default;
};
class BatchCopyVpcFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchCopyVpcFirewallControlPolicyResponseBody> body{};

  BatchCopyVpcFirewallControlPolicyResponse() {}

  explicit BatchCopyVpcFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchCopyVpcFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchCopyVpcFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~BatchCopyVpcFirewallControlPolicyResponse() = default;
};
class BatchDeleteVpcFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aclUuidList{};
  shared_ptr<string> vpcFirewallId{};

  BatchDeleteVpcFirewallControlPolicyRequest() {}

  explicit BatchDeleteVpcFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuidList) {
      res["AclUuidList"] = boost::any(*aclUuidList);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuidList") != m.end() && !m["AclUuidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclUuidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclUuidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclUuidList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~BatchDeleteVpcFirewallControlPolicyRequest() = default;
};
class BatchDeleteVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchDeleteVpcFirewallControlPolicyResponseBody() {}

  explicit BatchDeleteVpcFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchDeleteVpcFirewallControlPolicyResponseBody() = default;
};
class BatchDeleteVpcFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchDeleteVpcFirewallControlPolicyResponseBody> body{};

  BatchDeleteVpcFirewallControlPolicyResponse() {}

  explicit BatchDeleteVpcFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchDeleteVpcFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteVpcFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteVpcFirewallControlPolicyResponse() = default;
};
class CreateDownloadTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> taskData{};
  shared_ptr<string> taskType{};
  shared_ptr<string> timeZone{};

  CreateDownloadTaskRequest() {}

  explicit CreateDownloadTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (taskData) {
      res["TaskData"] = boost::any(*taskData);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TaskData") != m.end() && !m["TaskData"].empty()) {
      taskData = make_shared<string>(boost::any_cast<string>(m["TaskData"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~CreateDownloadTaskRequest() = default;
};
class CreateDownloadTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<long> taskId{};
  shared_ptr<string> taskName{};

  CreateDownloadTaskResponseBody() {}

  explicit CreateDownloadTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~CreateDownloadTaskResponseBody() = default;
};
class CreateDownloadTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDownloadTaskResponseBody> body{};

  CreateDownloadTaskResponse() {}

  explicit CreateDownloadTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDownloadTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDownloadTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDownloadTaskResponse() = default;
};
class CreateNatFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> direction{};
  shared_ptr<long> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> newOrder{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};

  CreateNatFirewallControlPolicyRequest() {}

  explicit CreateNatFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (newOrder) {
      res["NewOrder"] = boost::any(*newOrder);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<long>(boost::any_cast<long>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("NewOrder") != m.end() && !m["NewOrder"].empty()) {
      newOrder = make_shared<string>(boost::any_cast<string>(m["NewOrder"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~CreateNatFirewallControlPolicyRequest() = default;
};
class CreateNatFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> requestId{};

  CreateNatFirewallControlPolicyResponseBody() {}

  explicit CreateNatFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNatFirewallControlPolicyResponseBody() = default;
};
class CreateNatFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNatFirewallControlPolicyResponseBody> body{};

  CreateNatFirewallControlPolicyResponse() {}

  explicit CreateNatFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNatFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNatFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNatFirewallControlPolicyResponse() = default;
};
class CreateSecurityProxyRequestNatRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> routeTableId{};

  CreateSecurityProxyRequestNatRouteEntryList() {}

  explicit CreateSecurityProxyRequestNatRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~CreateSecurityProxyRequestNatRouteEntryList() = default;
};
class CreateSecurityProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallSwitch{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<vector<CreateSecurityProxyRequestNatRouteEntryList>> natRouteEntryList{};
  shared_ptr<string> proxyName{};
  shared_ptr<string> regionNo{};
  shared_ptr<long> strictMode{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchAuto{};
  shared_ptr<string> vswitchCidr{};
  shared_ptr<string> vswitchId{};

  CreateSecurityProxyRequest() {}

  explicit CreateSecurityProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallSwitch) {
      res["FirewallSwitch"] = boost::any(*firewallSwitch);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (natRouteEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*natRouteEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NatRouteEntryList"] = boost::any(temp1);
    }
    if (proxyName) {
      res["ProxyName"] = boost::any(*proxyName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (strictMode) {
      res["StrictMode"] = boost::any(*strictMode);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchAuto) {
      res["VswitchAuto"] = boost::any(*vswitchAuto);
    }
    if (vswitchCidr) {
      res["VswitchCidr"] = boost::any(*vswitchCidr);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallSwitch") != m.end() && !m["FirewallSwitch"].empty()) {
      firewallSwitch = make_shared<string>(boost::any_cast<string>(m["FirewallSwitch"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("NatRouteEntryList") != m.end() && !m["NatRouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["NatRouteEntryList"].type()) {
        vector<CreateSecurityProxyRequestNatRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NatRouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSecurityProxyRequestNatRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        natRouteEntryList = make_shared<vector<CreateSecurityProxyRequestNatRouteEntryList>>(expect1);
      }
    }
    if (m.find("ProxyName") != m.end() && !m["ProxyName"].empty()) {
      proxyName = make_shared<string>(boost::any_cast<string>(m["ProxyName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("StrictMode") != m.end() && !m["StrictMode"].empty()) {
      strictMode = make_shared<long>(boost::any_cast<long>(m["StrictMode"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchAuto") != m.end() && !m["VswitchAuto"].empty()) {
      vswitchAuto = make_shared<string>(boost::any_cast<string>(m["VswitchAuto"]));
    }
    if (m.find("VswitchCidr") != m.end() && !m["VswitchCidr"].empty()) {
      vswitchCidr = make_shared<string>(boost::any_cast<string>(m["VswitchCidr"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~CreateSecurityProxyRequest() = default;
};
class CreateSecurityProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> proxyId{};
  shared_ptr<string> requestId{};

  CreateSecurityProxyResponseBody() {}

  explicit CreateSecurityProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (proxyId) {
      res["ProxyId"] = boost::any(*proxyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProxyId") != m.end() && !m["ProxyId"].empty()) {
      proxyId = make_shared<string>(boost::any_cast<string>(m["ProxyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSecurityProxyResponseBody() = default;
};
class CreateSecurityProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSecurityProxyResponseBody> body{};

  CreateSecurityProxyResponse() {}

  explicit CreateSecurityProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSecurityProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSecurityProxyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSecurityProxyResponse() = default;
};
class CreateSlsLogDispatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> slsRegionId{};
  shared_ptr<long> ttl{};

  CreateSlsLogDispatchRequest() {}

  explicit CreateSlsLogDispatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slsRegionId) {
      res["SlsRegionId"] = boost::any(*slsRegionId);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlsRegionId") != m.end() && !m["SlsRegionId"].empty()) {
      slsRegionId = make_shared<string>(boost::any_cast<string>(m["SlsRegionId"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~CreateSlsLogDispatchRequest() = default;
};
class CreateSlsLogDispatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateSlsLogDispatchResponseBody() {}

  explicit CreateSlsLogDispatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSlsLogDispatchResponseBody() = default;
};
class CreateSlsLogDispatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSlsLogDispatchResponseBody> body{};

  CreateSlsLogDispatchResponse() {}

  explicit CreateSlsLogDispatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSlsLogDispatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSlsLogDispatchResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSlsLogDispatchResponse() = default;
};
class CreateTrFirewallV2Request : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> firewallDescription{};
  shared_ptr<string> firewallName{};
  shared_ptr<string> firewallSubnetCidr{};
  shared_ptr<string> firewallVpcCidr{};
  shared_ptr<string> firewallVpcId{};
  shared_ptr<string> firewallVswitchId{};
  shared_ptr<string> lang{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> routeMode{};
  shared_ptr<string> trAttachmentMasterCidr{};
  shared_ptr<string> trAttachmentMasterZone{};
  shared_ptr<string> trAttachmentSlaveCidr{};
  shared_ptr<string> trAttachmentSlaveZone{};
  shared_ptr<string> transitRouterId{};

  CreateTrFirewallV2Request() {}

  explicit CreateTrFirewallV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (firewallDescription) {
      res["FirewallDescription"] = boost::any(*firewallDescription);
    }
    if (firewallName) {
      res["FirewallName"] = boost::any(*firewallName);
    }
    if (firewallSubnetCidr) {
      res["FirewallSubnetCidr"] = boost::any(*firewallSubnetCidr);
    }
    if (firewallVpcCidr) {
      res["FirewallVpcCidr"] = boost::any(*firewallVpcCidr);
    }
    if (firewallVpcId) {
      res["FirewallVpcId"] = boost::any(*firewallVpcId);
    }
    if (firewallVswitchId) {
      res["FirewallVswitchId"] = boost::any(*firewallVswitchId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (routeMode) {
      res["RouteMode"] = boost::any(*routeMode);
    }
    if (trAttachmentMasterCidr) {
      res["TrAttachmentMasterCidr"] = boost::any(*trAttachmentMasterCidr);
    }
    if (trAttachmentMasterZone) {
      res["TrAttachmentMasterZone"] = boost::any(*trAttachmentMasterZone);
    }
    if (trAttachmentSlaveCidr) {
      res["TrAttachmentSlaveCidr"] = boost::any(*trAttachmentSlaveCidr);
    }
    if (trAttachmentSlaveZone) {
      res["TrAttachmentSlaveZone"] = boost::any(*trAttachmentSlaveZone);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("FirewallDescription") != m.end() && !m["FirewallDescription"].empty()) {
      firewallDescription = make_shared<string>(boost::any_cast<string>(m["FirewallDescription"]));
    }
    if (m.find("FirewallName") != m.end() && !m["FirewallName"].empty()) {
      firewallName = make_shared<string>(boost::any_cast<string>(m["FirewallName"]));
    }
    if (m.find("FirewallSubnetCidr") != m.end() && !m["FirewallSubnetCidr"].empty()) {
      firewallSubnetCidr = make_shared<string>(boost::any_cast<string>(m["FirewallSubnetCidr"]));
    }
    if (m.find("FirewallVpcCidr") != m.end() && !m["FirewallVpcCidr"].empty()) {
      firewallVpcCidr = make_shared<string>(boost::any_cast<string>(m["FirewallVpcCidr"]));
    }
    if (m.find("FirewallVpcId") != m.end() && !m["FirewallVpcId"].empty()) {
      firewallVpcId = make_shared<string>(boost::any_cast<string>(m["FirewallVpcId"]));
    }
    if (m.find("FirewallVswitchId") != m.end() && !m["FirewallVswitchId"].empty()) {
      firewallVswitchId = make_shared<string>(boost::any_cast<string>(m["FirewallVswitchId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RouteMode") != m.end() && !m["RouteMode"].empty()) {
      routeMode = make_shared<string>(boost::any_cast<string>(m["RouteMode"]));
    }
    if (m.find("TrAttachmentMasterCidr") != m.end() && !m["TrAttachmentMasterCidr"].empty()) {
      trAttachmentMasterCidr = make_shared<string>(boost::any_cast<string>(m["TrAttachmentMasterCidr"]));
    }
    if (m.find("TrAttachmentMasterZone") != m.end() && !m["TrAttachmentMasterZone"].empty()) {
      trAttachmentMasterZone = make_shared<string>(boost::any_cast<string>(m["TrAttachmentMasterZone"]));
    }
    if (m.find("TrAttachmentSlaveCidr") != m.end() && !m["TrAttachmentSlaveCidr"].empty()) {
      trAttachmentSlaveCidr = make_shared<string>(boost::any_cast<string>(m["TrAttachmentSlaveCidr"]));
    }
    if (m.find("TrAttachmentSlaveZone") != m.end() && !m["TrAttachmentSlaveZone"].empty()) {
      trAttachmentSlaveZone = make_shared<string>(boost::any_cast<string>(m["TrAttachmentSlaveZone"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~CreateTrFirewallV2Request() = default;
};
class CreateTrFirewallV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> firewallId{};
  shared_ptr<string> requestId{};

  CreateTrFirewallV2ResponseBody() {}

  explicit CreateTrFirewallV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTrFirewallV2ResponseBody() = default;
};
class CreateTrFirewallV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrFirewallV2ResponseBody> body{};

  CreateTrFirewallV2Response() {}

  explicit CreateTrFirewallV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTrFirewallV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrFirewallV2ResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrFirewallV2Response() = default;
};
class CreateTrFirewallV2RoutePolicyRequestDestCandidateList : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateType{};

  CreateTrFirewallV2RoutePolicyRequestDestCandidateList() {}

  explicit CreateTrFirewallV2RoutePolicyRequestDestCandidateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
  }


  virtual ~CreateTrFirewallV2RoutePolicyRequestDestCandidateList() = default;
};
class CreateTrFirewallV2RoutePolicyRequestSrcCandidateList : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateType{};

  CreateTrFirewallV2RoutePolicyRequestSrcCandidateList() {}

  explicit CreateTrFirewallV2RoutePolicyRequestSrcCandidateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
  }


  virtual ~CreateTrFirewallV2RoutePolicyRequestSrcCandidateList() = default;
};
class CreateTrFirewallV2RoutePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList>> destCandidateList{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList>> srcCandidateList{};

  CreateTrFirewallV2RoutePolicyRequest() {}

  explicit CreateTrFirewallV2RoutePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destCandidateList) {
      vector<boost::any> temp1;
      for(auto item1:*destCandidateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DestCandidateList"] = boost::any(temp1);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (srcCandidateList) {
      vector<boost::any> temp1;
      for(auto item1:*srcCandidateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SrcCandidateList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestCandidateList") != m.end() && !m["DestCandidateList"].empty()) {
      if (typeid(vector<boost::any>) == m["DestCandidateList"].type()) {
        vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DestCandidateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTrFirewallV2RoutePolicyRequestDestCandidateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        destCandidateList = make_shared<vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList>>(expect1);
      }
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("SrcCandidateList") != m.end() && !m["SrcCandidateList"].empty()) {
      if (typeid(vector<boost::any>) == m["SrcCandidateList"].type()) {
        vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SrcCandidateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTrFirewallV2RoutePolicyRequestSrcCandidateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        srcCandidateList = make_shared<vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList>>(expect1);
      }
    }
  }


  virtual ~CreateTrFirewallV2RoutePolicyRequest() = default;
};
class CreateTrFirewallV2RoutePolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> destCandidateListShrink{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> srcCandidateListShrink{};

  CreateTrFirewallV2RoutePolicyShrinkRequest() {}

  explicit CreateTrFirewallV2RoutePolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destCandidateListShrink) {
      res["DestCandidateList"] = boost::any(*destCandidateListShrink);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (srcCandidateListShrink) {
      res["SrcCandidateList"] = boost::any(*srcCandidateListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestCandidateList") != m.end() && !m["DestCandidateList"].empty()) {
      destCandidateListShrink = make_shared<string>(boost::any_cast<string>(m["DestCandidateList"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("SrcCandidateList") != m.end() && !m["SrcCandidateList"].empty()) {
      srcCandidateListShrink = make_shared<string>(boost::any_cast<string>(m["SrcCandidateList"]));
    }
  }


  virtual ~CreateTrFirewallV2RoutePolicyShrinkRequest() = default;
};
class CreateTrFirewallV2RoutePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  CreateTrFirewallV2RoutePolicyResponseBody() {}

  explicit CreateTrFirewallV2RoutePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~CreateTrFirewallV2RoutePolicyResponseBody() = default;
};
class CreateTrFirewallV2RoutePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrFirewallV2RoutePolicyResponseBody> body{};

  CreateTrFirewallV2RoutePolicyResponse() {}

  explicit CreateTrFirewallV2RoutePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTrFirewallV2RoutePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrFirewallV2RoutePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrFirewallV2RoutePolicyResponse() = default;
};
class CreateVpcFirewallCenConfigureRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> firewallSwitch{};
  shared_ptr<string> firewallVSwitchCidrBlock{};
  shared_ptr<string> firewallVpcCidrBlock{};
  shared_ptr<string> firewallVpcStandbyZoneId{};
  shared_ptr<string> firewallVpcZoneId{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> networkInstanceId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcFirewallName{};
  shared_ptr<string> vpcRegion{};

  CreateVpcFirewallCenConfigureRequest() {}

  explicit CreateVpcFirewallCenConfigureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (firewallSwitch) {
      res["FirewallSwitch"] = boost::any(*firewallSwitch);
    }
    if (firewallVSwitchCidrBlock) {
      res["FirewallVSwitchCidrBlock"] = boost::any(*firewallVSwitchCidrBlock);
    }
    if (firewallVpcCidrBlock) {
      res["FirewallVpcCidrBlock"] = boost::any(*firewallVpcCidrBlock);
    }
    if (firewallVpcStandbyZoneId) {
      res["FirewallVpcStandbyZoneId"] = boost::any(*firewallVpcStandbyZoneId);
    }
    if (firewallVpcZoneId) {
      res["FirewallVpcZoneId"] = boost::any(*firewallVpcZoneId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (networkInstanceId) {
      res["NetworkInstanceId"] = boost::any(*networkInstanceId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    if (vpcRegion) {
      res["VpcRegion"] = boost::any(*vpcRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("FirewallSwitch") != m.end() && !m["FirewallSwitch"].empty()) {
      firewallSwitch = make_shared<string>(boost::any_cast<string>(m["FirewallSwitch"]));
    }
    if (m.find("FirewallVSwitchCidrBlock") != m.end() && !m["FirewallVSwitchCidrBlock"].empty()) {
      firewallVSwitchCidrBlock = make_shared<string>(boost::any_cast<string>(m["FirewallVSwitchCidrBlock"]));
    }
    if (m.find("FirewallVpcCidrBlock") != m.end() && !m["FirewallVpcCidrBlock"].empty()) {
      firewallVpcCidrBlock = make_shared<string>(boost::any_cast<string>(m["FirewallVpcCidrBlock"]));
    }
    if (m.find("FirewallVpcStandbyZoneId") != m.end() && !m["FirewallVpcStandbyZoneId"].empty()) {
      firewallVpcStandbyZoneId = make_shared<string>(boost::any_cast<string>(m["FirewallVpcStandbyZoneId"]));
    }
    if (m.find("FirewallVpcZoneId") != m.end() && !m["FirewallVpcZoneId"].empty()) {
      firewallVpcZoneId = make_shared<string>(boost::any_cast<string>(m["FirewallVpcZoneId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("NetworkInstanceId") != m.end() && !m["NetworkInstanceId"].empty()) {
      networkInstanceId = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
    if (m.find("VpcRegion") != m.end() && !m["VpcRegion"].empty()) {
      vpcRegion = make_shared<string>(boost::any_cast<string>(m["VpcRegion"]));
    }
  }


  virtual ~CreateVpcFirewallCenConfigureRequest() = default;
};
class CreateVpcFirewallCenConfigureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> vpcFirewallId{};

  CreateVpcFirewallCenConfigureResponseBody() {}

  explicit CreateVpcFirewallCenConfigureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~CreateVpcFirewallCenConfigureResponseBody() = default;
};
class CreateVpcFirewallCenConfigureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVpcFirewallCenConfigureResponseBody> body{};

  CreateVpcFirewallCenConfigureResponse() {}

  explicit CreateVpcFirewallCenConfigureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVpcFirewallCenConfigureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpcFirewallCenConfigureResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpcFirewallCenConfigureResponse() = default;
};
class CreateVpcFirewallConfigureRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallSwitch{};
  shared_ptr<string> lang{};
  shared_ptr<string> localVpcCidrTableList{};
  shared_ptr<string> localVpcId{};
  shared_ptr<string> localVpcRegion{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> peerVpcCidrTableList{};
  shared_ptr<string> peerVpcId{};
  shared_ptr<string> peerVpcRegion{};
  shared_ptr<string> vpcFirewallName{};

  CreateVpcFirewallConfigureRequest() {}

  explicit CreateVpcFirewallConfigureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallSwitch) {
      res["FirewallSwitch"] = boost::any(*firewallSwitch);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (localVpcCidrTableList) {
      res["LocalVpcCidrTableList"] = boost::any(*localVpcCidrTableList);
    }
    if (localVpcId) {
      res["LocalVpcId"] = boost::any(*localVpcId);
    }
    if (localVpcRegion) {
      res["LocalVpcRegion"] = boost::any(*localVpcRegion);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (peerVpcCidrTableList) {
      res["PeerVpcCidrTableList"] = boost::any(*peerVpcCidrTableList);
    }
    if (peerVpcId) {
      res["PeerVpcId"] = boost::any(*peerVpcId);
    }
    if (peerVpcRegion) {
      res["PeerVpcRegion"] = boost::any(*peerVpcRegion);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallSwitch") != m.end() && !m["FirewallSwitch"].empty()) {
      firewallSwitch = make_shared<string>(boost::any_cast<string>(m["FirewallSwitch"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LocalVpcCidrTableList") != m.end() && !m["LocalVpcCidrTableList"].empty()) {
      localVpcCidrTableList = make_shared<string>(boost::any_cast<string>(m["LocalVpcCidrTableList"]));
    }
    if (m.find("LocalVpcId") != m.end() && !m["LocalVpcId"].empty()) {
      localVpcId = make_shared<string>(boost::any_cast<string>(m["LocalVpcId"]));
    }
    if (m.find("LocalVpcRegion") != m.end() && !m["LocalVpcRegion"].empty()) {
      localVpcRegion = make_shared<string>(boost::any_cast<string>(m["LocalVpcRegion"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PeerVpcCidrTableList") != m.end() && !m["PeerVpcCidrTableList"].empty()) {
      peerVpcCidrTableList = make_shared<string>(boost::any_cast<string>(m["PeerVpcCidrTableList"]));
    }
    if (m.find("PeerVpcId") != m.end() && !m["PeerVpcId"].empty()) {
      peerVpcId = make_shared<string>(boost::any_cast<string>(m["PeerVpcId"]));
    }
    if (m.find("PeerVpcRegion") != m.end() && !m["PeerVpcRegion"].empty()) {
      peerVpcRegion = make_shared<string>(boost::any_cast<string>(m["PeerVpcRegion"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~CreateVpcFirewallConfigureRequest() = default;
};
class CreateVpcFirewallConfigureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> vpcFirewallId{};

  CreateVpcFirewallConfigureResponseBody() {}

  explicit CreateVpcFirewallConfigureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~CreateVpcFirewallConfigureResponseBody() = default;
};
class CreateVpcFirewallConfigureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVpcFirewallConfigureResponseBody> body{};

  CreateVpcFirewallConfigureResponse() {}

  explicit CreateVpcFirewallConfigureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVpcFirewallConfigureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpcFirewallConfigureResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpcFirewallConfigureResponse() = default;
};
class CreateVpcFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> applicationName{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> newOrder{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> vpcFirewallId{};

  CreateVpcFirewallControlPolicyRequest() {}

  explicit CreateVpcFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (newOrder) {
      res["NewOrder"] = boost::any(*newOrder);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<string>(boost::any_cast<string>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("NewOrder") != m.end() && !m["NewOrder"].empty()) {
      newOrder = make_shared<string>(boost::any_cast<string>(m["NewOrder"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~CreateVpcFirewallControlPolicyRequest() = default;
};
class CreateVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> requestId{};

  CreateVpcFirewallControlPolicyResponseBody() {}

  explicit CreateVpcFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVpcFirewallControlPolicyResponseBody() = default;
};
class CreateVpcFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVpcFirewallControlPolicyResponseBody> body{};

  CreateVpcFirewallControlPolicyResponse() {}

  explicit CreateVpcFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVpcFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpcFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpcFirewallControlPolicyResponse() = default;
};
class DeleteAddressBookRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupUuid{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DeleteAddressBookRequest() {}

  explicit DeleteAddressBookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupUuid) {
      res["GroupUuid"] = boost::any(*groupUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupUuid") != m.end() && !m["GroupUuid"].empty()) {
      groupUuid = make_shared<string>(boost::any_cast<string>(m["GroupUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteAddressBookRequest() = default;
};
class DeleteAddressBookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAddressBookResponseBody() {}

  explicit DeleteAddressBookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAddressBookResponseBody() = default;
};
class DeleteAddressBookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAddressBookResponseBody> body{};

  DeleteAddressBookResponse() {}

  explicit DeleteAddressBookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAddressBookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAddressBookResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAddressBookResponse() = default;
};
class DeleteControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> direction{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DeleteControlPolicyRequest() {}

  explicit DeleteControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteControlPolicyRequest() = default;
};
class DeleteControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteControlPolicyResponseBody() {}

  explicit DeleteControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteControlPolicyResponseBody() = default;
};
class DeleteControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteControlPolicyResponseBody> body{};

  DeleteControlPolicyResponse() {}

  explicit DeleteControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteControlPolicyResponse() = default;
};
class DeleteControlPolicyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> templateId{};

  DeleteControlPolicyTemplateRequest() {}

  explicit DeleteControlPolicyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteControlPolicyTemplateRequest() = default;
};
class DeleteControlPolicyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteControlPolicyTemplateResponseBody() {}

  explicit DeleteControlPolicyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteControlPolicyTemplateResponseBody() = default;
};
class DeleteControlPolicyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteControlPolicyTemplateResponseBody> body{};

  DeleteControlPolicyTemplateResponse() {}

  explicit DeleteControlPolicyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteControlPolicyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteControlPolicyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteControlPolicyTemplateResponse() = default;
};
class DeleteDownloadTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> taskId{};

  DeleteDownloadTaskRequest() {}

  explicit DeleteDownloadTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteDownloadTaskRequest() = default;
};
class DeleteDownloadTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDownloadTaskResponseBody() {}

  explicit DeleteDownloadTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDownloadTaskResponseBody() = default;
};
class DeleteDownloadTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDownloadTaskResponseBody> body{};

  DeleteDownloadTaskResponse() {}

  explicit DeleteDownloadTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDownloadTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDownloadTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDownloadTaskResponse() = default;
};
class DeleteFirewallV2RoutePoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  DeleteFirewallV2RoutePoliciesRequest() {}

  explicit DeleteFirewallV2RoutePoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~DeleteFirewallV2RoutePoliciesRequest() = default;
};
class DeleteFirewallV2RoutePoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFirewallV2RoutePoliciesResponseBody() {}

  explicit DeleteFirewallV2RoutePoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFirewallV2RoutePoliciesResponseBody() = default;
};
class DeleteFirewallV2RoutePoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFirewallV2RoutePoliciesResponseBody> body{};

  DeleteFirewallV2RoutePoliciesResponse() {}

  explicit DeleteFirewallV2RoutePoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFirewallV2RoutePoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFirewallV2RoutePoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFirewallV2RoutePoliciesResponse() = default;
};
class DeleteInstanceMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> memberUids{};

  DeleteInstanceMembersRequest() {}

  explicit DeleteInstanceMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberUids) {
      res["MemberUids"] = boost::any(*memberUids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberUids") != m.end() && !m["MemberUids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["MemberUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MemberUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      memberUids = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DeleteInstanceMembersRequest() = default;
};
class DeleteInstanceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceMembersResponseBody() {}

  explicit DeleteInstanceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceMembersResponseBody() = default;
};
class DeleteInstanceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceMembersResponseBody> body{};

  DeleteInstanceMembersResponse() {}

  explicit DeleteInstanceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteInstanceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceMembersResponse() = default;
};
class DeleteNatFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> direction{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};

  DeleteNatFirewallControlPolicyRequest() {}

  explicit DeleteNatFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
  }


  virtual ~DeleteNatFirewallControlPolicyRequest() = default;
};
class DeleteNatFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNatFirewallControlPolicyResponseBody() {}

  explicit DeleteNatFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNatFirewallControlPolicyResponseBody() = default;
};
class DeleteNatFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNatFirewallControlPolicyResponseBody> body{};

  DeleteNatFirewallControlPolicyResponse() {}

  explicit DeleteNatFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNatFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNatFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNatFirewallControlPolicyResponse() = default;
};
class DeleteNatFirewallControlPolicyBatchRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aclUuidList{};
  shared_ptr<string> direction{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};

  DeleteNatFirewallControlPolicyBatchRequest() {}

  explicit DeleteNatFirewallControlPolicyBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuidList) {
      res["AclUuidList"] = boost::any(*aclUuidList);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuidList") != m.end() && !m["AclUuidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AclUuidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AclUuidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclUuidList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
  }


  virtual ~DeleteNatFirewallControlPolicyBatchRequest() = default;
};
class DeleteNatFirewallControlPolicyBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNatFirewallControlPolicyBatchResponseBody() {}

  explicit DeleteNatFirewallControlPolicyBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNatFirewallControlPolicyBatchResponseBody() = default;
};
class DeleteNatFirewallControlPolicyBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNatFirewallControlPolicyBatchResponseBody> body{};

  DeleteNatFirewallControlPolicyBatchResponse() {}

  explicit DeleteNatFirewallControlPolicyBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNatFirewallControlPolicyBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNatFirewallControlPolicyBatchResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNatFirewallControlPolicyBatchResponse() = default;
};
class DeleteSecurityProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> proxyId{};

  DeleteSecurityProxyRequest() {}

  explicit DeleteSecurityProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (proxyId) {
      res["ProxyId"] = boost::any(*proxyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ProxyId") != m.end() && !m["ProxyId"].empty()) {
      proxyId = make_shared<string>(boost::any_cast<string>(m["ProxyId"]));
    }
  }


  virtual ~DeleteSecurityProxyRequest() = default;
};
class DeleteSecurityProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSecurityProxyResponseBody() {}

  explicit DeleteSecurityProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSecurityProxyResponseBody() = default;
};
class DeleteSecurityProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSecurityProxyResponseBody> body{};

  DeleteSecurityProxyResponse() {}

  explicit DeleteSecurityProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSecurityProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecurityProxyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecurityProxyResponse() = default;
};
class DeleteTrFirewallV2Request : public Darabonba::Model {
public:
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};

  DeleteTrFirewallV2Request() {}

  explicit DeleteTrFirewallV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DeleteTrFirewallV2Request() = default;
};
class DeleteTrFirewallV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTrFirewallV2ResponseBody() {}

  explicit DeleteTrFirewallV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTrFirewallV2ResponseBody() = default;
};
class DeleteTrFirewallV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTrFirewallV2ResponseBody> body{};

  DeleteTrFirewallV2Response() {}

  explicit DeleteTrFirewallV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTrFirewallV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTrFirewallV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTrFirewallV2Response() = default;
};
class DeleteVpcFirewallCenConfigureRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<vector<string>> vpcFirewallIdList{};

  DeleteVpcFirewallCenConfigureRequest() {}

  explicit DeleteVpcFirewallCenConfigureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallIdList) {
      res["VpcFirewallIdList"] = boost::any(*vpcFirewallIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallIdList") != m.end() && !m["VpcFirewallIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcFirewallIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcFirewallIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcFirewallIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteVpcFirewallCenConfigureRequest() = default;
};
class DeleteVpcFirewallCenConfigureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVpcFirewallCenConfigureResponseBody() {}

  explicit DeleteVpcFirewallCenConfigureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVpcFirewallCenConfigureResponseBody() = default;
};
class DeleteVpcFirewallCenConfigureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVpcFirewallCenConfigureResponseBody> body{};

  DeleteVpcFirewallCenConfigureResponse() {}

  explicit DeleteVpcFirewallCenConfigureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVpcFirewallCenConfigureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpcFirewallCenConfigureResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpcFirewallCenConfigureResponse() = default;
};
class DeleteVpcFirewallConfigureRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<vector<string>> vpcFirewallIdList{};

  DeleteVpcFirewallConfigureRequest() {}

  explicit DeleteVpcFirewallConfigureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallIdList) {
      res["VpcFirewallIdList"] = boost::any(*vpcFirewallIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallIdList") != m.end() && !m["VpcFirewallIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcFirewallIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcFirewallIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcFirewallIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteVpcFirewallConfigureRequest() = default;
};
class DeleteVpcFirewallConfigureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVpcFirewallConfigureResponseBody() {}

  explicit DeleteVpcFirewallConfigureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVpcFirewallConfigureResponseBody() = default;
};
class DeleteVpcFirewallConfigureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVpcFirewallConfigureResponseBody> body{};

  DeleteVpcFirewallConfigureResponse() {}

  explicit DeleteVpcFirewallConfigureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVpcFirewallConfigureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpcFirewallConfigureResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpcFirewallConfigureResponse() = default;
};
class DeleteVpcFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> lang{};
  shared_ptr<string> vpcFirewallId{};

  DeleteVpcFirewallControlPolicyRequest() {}

  explicit DeleteVpcFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~DeleteVpcFirewallControlPolicyRequest() = default;
};
class DeleteVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVpcFirewallControlPolicyResponseBody() {}

  explicit DeleteVpcFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVpcFirewallControlPolicyResponseBody() = default;
};
class DeleteVpcFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVpcFirewallControlPolicyResponseBody> body{};

  DeleteVpcFirewallControlPolicyResponse() {}

  explicit DeleteVpcFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVpcFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpcFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpcFirewallControlPolicyResponse() = default;
};
class DescribeACLProtectTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startTime{};

  DescribeACLProtectTrendRequest() {}

  explicit DescribeACLProtectTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
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
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeACLProtectTrendRequest() = default;
};
class DescribeACLProtectTrendResponseBodyTrendList : public Darabonba::Model {
public:
  shared_ptr<long> protectCnt{};
  shared_ptr<long> time{};

  DescribeACLProtectTrendResponseBodyTrendList() {}

  explicit DescribeACLProtectTrendResponseBodyTrendList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectCnt) {
      res["ProtectCnt"] = boost::any(*protectCnt);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectCnt") != m.end() && !m["ProtectCnt"].empty()) {
      protectCnt = make_shared<long>(boost::any_cast<long>(m["ProtectCnt"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~DescribeACLProtectTrendResponseBodyTrendList() = default;
};
class DescribeACLProtectTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> inProtectCnt{};
  shared_ptr<long> interVPCProtectCnt{};
  shared_ptr<long> interval{};
  shared_ptr<long> outProtectCnt{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalProtectCnt{};
  shared_ptr<vector<DescribeACLProtectTrendResponseBodyTrendList>> trendList{};

  DescribeACLProtectTrendResponseBody() {}

  explicit DescribeACLProtectTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inProtectCnt) {
      res["InProtectCnt"] = boost::any(*inProtectCnt);
    }
    if (interVPCProtectCnt) {
      res["InterVPCProtectCnt"] = boost::any(*interVPCProtectCnt);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (outProtectCnt) {
      res["OutProtectCnt"] = boost::any(*outProtectCnt);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalProtectCnt) {
      res["TotalProtectCnt"] = boost::any(*totalProtectCnt);
    }
    if (trendList) {
      vector<boost::any> temp1;
      for(auto item1:*trendList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrendList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InProtectCnt") != m.end() && !m["InProtectCnt"].empty()) {
      inProtectCnt = make_shared<long>(boost::any_cast<long>(m["InProtectCnt"]));
    }
    if (m.find("InterVPCProtectCnt") != m.end() && !m["InterVPCProtectCnt"].empty()) {
      interVPCProtectCnt = make_shared<long>(boost::any_cast<long>(m["InterVPCProtectCnt"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("OutProtectCnt") != m.end() && !m["OutProtectCnt"].empty()) {
      outProtectCnt = make_shared<long>(boost::any_cast<long>(m["OutProtectCnt"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalProtectCnt") != m.end() && !m["TotalProtectCnt"].empty()) {
      totalProtectCnt = make_shared<long>(boost::any_cast<long>(m["TotalProtectCnt"]));
    }
    if (m.find("TrendList") != m.end() && !m["TrendList"].empty()) {
      if (typeid(vector<boost::any>) == m["TrendList"].type()) {
        vector<DescribeACLProtectTrendResponseBodyTrendList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrendList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeACLProtectTrendResponseBodyTrendList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trendList = make_shared<vector<DescribeACLProtectTrendResponseBodyTrendList>>(expect1);
      }
    }
  }


  virtual ~DescribeACLProtectTrendResponseBody() = default;
};
class DescribeACLProtectTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeACLProtectTrendResponseBody> body{};

  DescribeACLProtectTrendResponse() {}

  explicit DescribeACLProtectTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeACLProtectTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeACLProtectTrendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeACLProtectTrendResponse() = default;
};
class DescribeAddressBookRequest : public Darabonba::Model {
public:
  shared_ptr<string> containPort{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> groupType{};
  shared_ptr<string> lang{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> query{};

  DescribeAddressBookRequest() {}

  explicit DescribeAddressBookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containPort) {
      res["ContainPort"] = boost::any(*containPort);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainPort") != m.end() && !m["ContainPort"].empty()) {
      containPort = make_shared<string>(boost::any_cast<string>(m["ContainPort"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~DescribeAddressBookRequest() = default;
};
class DescribeAddressBookResponseBodyAclsAddresses : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> note{};

  DescribeAddressBookResponseBodyAclsAddresses() {}

  explicit DescribeAddressBookResponseBodyAclsAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
  }


  virtual ~DescribeAddressBookResponseBodyAclsAddresses() = default;
};
class DescribeAddressBookResponseBodyAclsTagList : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeAddressBookResponseBodyAclsTagList() {}

  explicit DescribeAddressBookResponseBodyAclsTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAddressBookResponseBodyAclsTagList() = default;
};
class DescribeAddressBookResponseBodyAcls : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addressList{};
  shared_ptr<long> addressListCount{};
  shared_ptr<vector<DescribeAddressBookResponseBodyAclsAddresses>> addresses{};
  shared_ptr<long> autoAddTagEcs{};
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> groupUuid{};
  shared_ptr<long> referenceCount{};
  shared_ptr<vector<DescribeAddressBookResponseBodyAclsTagList>> tagList{};
  shared_ptr<string> tagRelation{};

  DescribeAddressBookResponseBodyAcls() {}

  explicit DescribeAddressBookResponseBodyAcls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressList) {
      res["AddressList"] = boost::any(*addressList);
    }
    if (addressListCount) {
      res["AddressListCount"] = boost::any(*addressListCount);
    }
    if (addresses) {
      vector<boost::any> temp1;
      for(auto item1:*addresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addresses"] = boost::any(temp1);
    }
    if (autoAddTagEcs) {
      res["AutoAddTagEcs"] = boost::any(*autoAddTagEcs);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (groupUuid) {
      res["GroupUuid"] = boost::any(*groupUuid);
    }
    if (referenceCount) {
      res["ReferenceCount"] = boost::any(*referenceCount);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (tagRelation) {
      res["TagRelation"] = boost::any(*tagRelation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressList") != m.end() && !m["AddressList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AddressList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AddressList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addressList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AddressListCount") != m.end() && !m["AddressListCount"].empty()) {
      addressListCount = make_shared<long>(boost::any_cast<long>(m["AddressListCount"]));
    }
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<DescribeAddressBookResponseBodyAclsAddresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddressBookResponseBodyAclsAddresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addresses = make_shared<vector<DescribeAddressBookResponseBodyAclsAddresses>>(expect1);
      }
    }
    if (m.find("AutoAddTagEcs") != m.end() && !m["AutoAddTagEcs"].empty()) {
      autoAddTagEcs = make_shared<long>(boost::any_cast<long>(m["AutoAddTagEcs"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("GroupUuid") != m.end() && !m["GroupUuid"].empty()) {
      groupUuid = make_shared<string>(boost::any_cast<string>(m["GroupUuid"]));
    }
    if (m.find("ReferenceCount") != m.end() && !m["ReferenceCount"].empty()) {
      referenceCount = make_shared<long>(boost::any_cast<long>(m["ReferenceCount"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<DescribeAddressBookResponseBodyAclsTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddressBookResponseBodyAclsTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<DescribeAddressBookResponseBodyAclsTagList>>(expect1);
      }
    }
    if (m.find("TagRelation") != m.end() && !m["TagRelation"].empty()) {
      tagRelation = make_shared<string>(boost::any_cast<string>(m["TagRelation"]));
    }
  }


  virtual ~DescribeAddressBookResponseBodyAcls() = default;
};
class DescribeAddressBookResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAddressBookResponseBodyAcls>> acls{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeAddressBookResponseBody() {}

  explicit DescribeAddressBookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acls) {
      vector<boost::any> temp1;
      for(auto item1:*acls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Acls"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("Acls") != m.end() && !m["Acls"].empty()) {
      if (typeid(vector<boost::any>) == m["Acls"].type()) {
        vector<DescribeAddressBookResponseBodyAcls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Acls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddressBookResponseBodyAcls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acls = make_shared<vector<DescribeAddressBookResponseBodyAcls>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAddressBookResponseBody() = default;
};
class DescribeAddressBookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAddressBookResponseBody> body{};

  DescribeAddressBookResponse() {}

  explicit DescribeAddressBookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAddressBookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAddressBookResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAddressBookResponse() = default;
};
class DescribeAssetListRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> newResourceTag{};
  shared_ptr<string> outStatistic{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> searchItem{};
  shared_ptr<string> sensitiveStatus{};
  shared_ptr<string> sgStatus{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> userType{};

  DescribeAssetListRequest() {}

  explicit DescribeAssetListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (newResourceTag) {
      res["NewResourceTag"] = boost::any(*newResourceTag);
    }
    if (outStatistic) {
      res["OutStatistic"] = boost::any(*outStatistic);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (searchItem) {
      res["SearchItem"] = boost::any(*searchItem);
    }
    if (sensitiveStatus) {
      res["SensitiveStatus"] = boost::any(*sensitiveStatus);
    }
    if (sgStatus) {
      res["SgStatus"] = boost::any(*sgStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("NewResourceTag") != m.end() && !m["NewResourceTag"].empty()) {
      newResourceTag = make_shared<string>(boost::any_cast<string>(m["NewResourceTag"]));
    }
    if (m.find("OutStatistic") != m.end() && !m["OutStatistic"].empty()) {
      outStatistic = make_shared<string>(boost::any_cast<string>(m["OutStatistic"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SearchItem") != m.end() && !m["SearchItem"].empty()) {
      searchItem = make_shared<string>(boost::any_cast<string>(m["SearchItem"]));
    }
    if (m.find("SensitiveStatus") != m.end() && !m["SensitiveStatus"].empty()) {
      sensitiveStatus = make_shared<string>(boost::any_cast<string>(m["SensitiveStatus"]));
    }
    if (m.find("SgStatus") != m.end() && !m["SgStatus"].empty()) {
      sgStatus = make_shared<string>(boost::any_cast<string>(m["SgStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~DescribeAssetListRequest() = default;
};
class DescribeAssetListResponseBodyAssets : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> bindInstanceId{};
  shared_ptr<string> bindInstanceName{};
  shared_ptr<string> createTimeStamp{};
  shared_ptr<string> internetAddress{};
  shared_ptr<string> intranetAddress{};
  shared_ptr<long> ipVersion{};
  shared_ptr<long> last7DayOutTrafficBytes{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> name{};
  shared_ptr<string> newResourceTag{};
  shared_ptr<string> note{};
  shared_ptr<string> protectStatus{};
  shared_ptr<string> regionID{};
  shared_ptr<string> regionStatus{};
  shared_ptr<string> resourceInstanceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> sensitiveDataStatus{};
  shared_ptr<string> sgStatus{};
  shared_ptr<long> sgStatusTime{};
  shared_ptr<string> syncStatus{};
  shared_ptr<string> type{};

  DescribeAssetListResponseBodyAssets() {}

  explicit DescribeAssetListResponseBodyAssets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bindInstanceId) {
      res["BindInstanceId"] = boost::any(*bindInstanceId);
    }
    if (bindInstanceName) {
      res["BindInstanceName"] = boost::any(*bindInstanceName);
    }
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (internetAddress) {
      res["InternetAddress"] = boost::any(*internetAddress);
    }
    if (intranetAddress) {
      res["IntranetAddress"] = boost::any(*intranetAddress);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (last7DayOutTrafficBytes) {
      res["Last7DayOutTrafficBytes"] = boost::any(*last7DayOutTrafficBytes);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newResourceTag) {
      res["NewResourceTag"] = boost::any(*newResourceTag);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (protectStatus) {
      res["ProtectStatus"] = boost::any(*protectStatus);
    }
    if (regionID) {
      res["RegionID"] = boost::any(*regionID);
    }
    if (regionStatus) {
      res["RegionStatus"] = boost::any(*regionStatus);
    }
    if (resourceInstanceId) {
      res["ResourceInstanceId"] = boost::any(*resourceInstanceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sensitiveDataStatus) {
      res["SensitiveDataStatus"] = boost::any(*sensitiveDataStatus);
    }
    if (sgStatus) {
      res["SgStatus"] = boost::any(*sgStatus);
    }
    if (sgStatusTime) {
      res["SgStatusTime"] = boost::any(*sgStatusTime);
    }
    if (syncStatus) {
      res["SyncStatus"] = boost::any(*syncStatus);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("BindInstanceId") != m.end() && !m["BindInstanceId"].empty()) {
      bindInstanceId = make_shared<string>(boost::any_cast<string>(m["BindInstanceId"]));
    }
    if (m.find("BindInstanceName") != m.end() && !m["BindInstanceName"].empty()) {
      bindInstanceName = make_shared<string>(boost::any_cast<string>(m["BindInstanceName"]));
    }
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<string>(boost::any_cast<string>(m["CreateTimeStamp"]));
    }
    if (m.find("InternetAddress") != m.end() && !m["InternetAddress"].empty()) {
      internetAddress = make_shared<string>(boost::any_cast<string>(m["InternetAddress"]));
    }
    if (m.find("IntranetAddress") != m.end() && !m["IntranetAddress"].empty()) {
      intranetAddress = make_shared<string>(boost::any_cast<string>(m["IntranetAddress"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<long>(boost::any_cast<long>(m["IpVersion"]));
    }
    if (m.find("Last7DayOutTrafficBytes") != m.end() && !m["Last7DayOutTrafficBytes"].empty()) {
      last7DayOutTrafficBytes = make_shared<long>(boost::any_cast<long>(m["Last7DayOutTrafficBytes"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewResourceTag") != m.end() && !m["NewResourceTag"].empty()) {
      newResourceTag = make_shared<string>(boost::any_cast<string>(m["NewResourceTag"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ProtectStatus") != m.end() && !m["ProtectStatus"].empty()) {
      protectStatus = make_shared<string>(boost::any_cast<string>(m["ProtectStatus"]));
    }
    if (m.find("RegionID") != m.end() && !m["RegionID"].empty()) {
      regionID = make_shared<string>(boost::any_cast<string>(m["RegionID"]));
    }
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      regionStatus = make_shared<string>(boost::any_cast<string>(m["RegionStatus"]));
    }
    if (m.find("ResourceInstanceId") != m.end() && !m["ResourceInstanceId"].empty()) {
      resourceInstanceId = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("SensitiveDataStatus") != m.end() && !m["SensitiveDataStatus"].empty()) {
      sensitiveDataStatus = make_shared<string>(boost::any_cast<string>(m["SensitiveDataStatus"]));
    }
    if (m.find("SgStatus") != m.end() && !m["SgStatus"].empty()) {
      sgStatus = make_shared<string>(boost::any_cast<string>(m["SgStatus"]));
    }
    if (m.find("SgStatusTime") != m.end() && !m["SgStatusTime"].empty()) {
      sgStatusTime = make_shared<long>(boost::any_cast<long>(m["SgStatusTime"]));
    }
    if (m.find("SyncStatus") != m.end() && !m["SyncStatus"].empty()) {
      syncStatus = make_shared<string>(boost::any_cast<string>(m["SyncStatus"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAssetListResponseBodyAssets() = default;
};
class DescribeAssetListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAssetListResponseBodyAssets>> assets{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAssetListResponseBody() {}

  explicit DescribeAssetListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assets) {
      vector<boost::any> temp1;
      for(auto item1:*assets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Assets"] = boost::any(temp1);
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
    if (m.find("Assets") != m.end() && !m["Assets"].empty()) {
      if (typeid(vector<boost::any>) == m["Assets"].type()) {
        vector<DescribeAssetListResponseBodyAssets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Assets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAssetListResponseBodyAssets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assets = make_shared<vector<DescribeAssetListResponseBodyAssets>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAssetListResponseBody() = default;
};
class DescribeAssetListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAssetListResponseBody> body{};

  DescribeAssetListResponse() {}

  explicit DescribeAssetListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAssetListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAssetListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAssetListResponse() = default;
};
class DescribeAssetRiskListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipAddrList{};
  shared_ptr<long> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeAssetRiskListRequest() {}

  explicit DescribeAssetRiskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAddrList) {
      res["IpAddrList"] = boost::any(*ipAddrList);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpAddrList") != m.end() && !m["IpAddrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<long>(boost::any_cast<long>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeAssetRiskListRequest() = default;
};
class DescribeAssetRiskListResponseBodyAssetList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> ipVersion{};
  shared_ptr<string> reason{};
  shared_ptr<string> riskLevel{};

  DescribeAssetRiskListResponseBodyAssetList() {}

  explicit DescribeAssetRiskListResponseBodyAssetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<long>(boost::any_cast<long>(m["IpVersion"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
  }


  virtual ~DescribeAssetRiskListResponseBodyAssetList() = default;
};
class DescribeAssetRiskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAssetRiskListResponseBodyAssetList>> assetList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAssetRiskListResponseBody() {}

  explicit DescribeAssetRiskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetList) {
      vector<boost::any> temp1;
      for(auto item1:*assetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssetList"] = boost::any(temp1);
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
    if (m.find("AssetList") != m.end() && !m["AssetList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssetList"].type()) {
        vector<DescribeAssetRiskListResponseBodyAssetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAssetRiskListResponseBodyAssetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        assetList = make_shared<vector<DescribeAssetRiskListResponseBodyAssetList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAssetRiskListResponseBody() = default;
};
class DescribeAssetRiskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAssetRiskListResponseBody> body{};

  DescribeAssetRiskListResponse() {}

  explicit DescribeAssetRiskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAssetRiskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAssetRiskListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAssetRiskListResponse() = default;
};
class DescribeAssetStatisticRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeAssetStatisticRequest() {}

  explicit DescribeAssetStatisticRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeAssetStatisticRequest() = default;
};
class DescribeAssetStatisticResponseBodyResourceSpecStatistic : public Darabonba::Model {
public:
  shared_ptr<long> ipNumSpec{};
  shared_ptr<long> ipNumUsed{};
  shared_ptr<long> sensitiveDataIpNumSpec{};
  shared_ptr<long> sensitiveDataIpNumUsed{};

  DescribeAssetStatisticResponseBodyResourceSpecStatistic() {}

  explicit DescribeAssetStatisticResponseBodyResourceSpecStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipNumSpec) {
      res["IpNumSpec"] = boost::any(*ipNumSpec);
    }
    if (ipNumUsed) {
      res["IpNumUsed"] = boost::any(*ipNumUsed);
    }
    if (sensitiveDataIpNumSpec) {
      res["SensitiveDataIpNumSpec"] = boost::any(*sensitiveDataIpNumSpec);
    }
    if (sensitiveDataIpNumUsed) {
      res["SensitiveDataIpNumUsed"] = boost::any(*sensitiveDataIpNumUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpNumSpec") != m.end() && !m["IpNumSpec"].empty()) {
      ipNumSpec = make_shared<long>(boost::any_cast<long>(m["IpNumSpec"]));
    }
    if (m.find("IpNumUsed") != m.end() && !m["IpNumUsed"].empty()) {
      ipNumUsed = make_shared<long>(boost::any_cast<long>(m["IpNumUsed"]));
    }
    if (m.find("SensitiveDataIpNumSpec") != m.end() && !m["SensitiveDataIpNumSpec"].empty()) {
      sensitiveDataIpNumSpec = make_shared<long>(boost::any_cast<long>(m["SensitiveDataIpNumSpec"]));
    }
    if (m.find("SensitiveDataIpNumUsed") != m.end() && !m["SensitiveDataIpNumUsed"].empty()) {
      sensitiveDataIpNumUsed = make_shared<long>(boost::any_cast<long>(m["SensitiveDataIpNumUsed"]));
    }
  }


  virtual ~DescribeAssetStatisticResponseBodyResourceSpecStatistic() = default;
};
class DescribeAssetStatisticResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAssetStatisticResponseBodyResourceSpecStatistic> resourceSpecStatistic{};

  DescribeAssetStatisticResponseBody() {}

  explicit DescribeAssetStatisticResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceSpecStatistic) {
      res["ResourceSpecStatistic"] = resourceSpecStatistic ? boost::any(resourceSpecStatistic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceSpecStatistic") != m.end() && !m["ResourceSpecStatistic"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpecStatistic"].type()) {
        DescribeAssetStatisticResponseBodyResourceSpecStatistic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpecStatistic"]));
        resourceSpecStatistic = make_shared<DescribeAssetStatisticResponseBodyResourceSpecStatistic>(model1);
      }
    }
  }


  virtual ~DescribeAssetStatisticResponseBody() = default;
};
class DescribeAssetStatisticResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAssetStatisticResponseBody> body{};

  DescribeAssetStatisticResponse() {}

  explicit DescribeAssetStatisticResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAssetStatisticResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAssetStatisticResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAssetStatisticResponse() = default;
};
class DescribeCfwRiskLevelSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<string> lang{};
  shared_ptr<string> regionId{};

  DescribeCfwRiskLevelSummaryRequest() {}

  explicit DescribeCfwRiskLevelSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCfwRiskLevelSummaryRequest() = default;
};
class DescribeCfwRiskLevelSummaryResponseBodyRiskList : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<string> num{};
  shared_ptr<string> type{};

  DescribeCfwRiskLevelSummaryResponseBodyRiskList() {}

  explicit DescribeCfwRiskLevelSummaryResponseBodyRiskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<string>(boost::any_cast<string>(m["Num"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCfwRiskLevelSummaryResponseBodyRiskList() = default;
};
class DescribeCfwRiskLevelSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList>> riskList{};

  DescribeCfwRiskLevelSummaryResponseBody() {}

  explicit DescribeCfwRiskLevelSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (riskList) {
      vector<boost::any> temp1;
      for(auto item1:*riskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RiskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RiskList") != m.end() && !m["RiskList"].empty()) {
      if (typeid(vector<boost::any>) == m["RiskList"].type()) {
        vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RiskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCfwRiskLevelSummaryResponseBodyRiskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskList = make_shared<vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList>>(expect1);
      }
    }
  }


  virtual ~DescribeCfwRiskLevelSummaryResponseBody() = default;
};
class DescribeCfwRiskLevelSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCfwRiskLevelSummaryResponseBody> body{};

  DescribeCfwRiskLevelSummaryResponse() {}

  explicit DescribeCfwRiskLevelSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCfwRiskLevelSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCfwRiskLevelSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCfwRiskLevelSummaryResponse() = default;
};
class DescribeControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> description{};
  shared_ptr<string> destination{};
  shared_ptr<string> direction{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};

  DescribeControlPolicyRequest() {}

  explicit DescribeControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DescribeControlPolicyRequest() = default;
};
class DescribeControlPolicyResponseBodyPolicys : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> applicationName{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<vector<string>> destPortGroupPorts{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<vector<string>> destinationGroupCidrs{};
  shared_ptr<string> destinationGroupType{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> direction{};
  shared_ptr<string> dnsResult{};
  shared_ptr<long> dnsResultTime{};
  shared_ptr<string> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<long> hitLastTime{};
  shared_ptr<long> hitTimes{};
  shared_ptr<long> ipVersion{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> order{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<vector<string>> sourceGroupCidrs{};
  shared_ptr<string> sourceGroupType{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> spreadCnt{};
  shared_ptr<long> startTime{};

  DescribeControlPolicyResponseBodyPolicys() {}

  explicit DescribeControlPolicyResponseBodyPolicys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortGroupPorts) {
      res["DestPortGroupPorts"] = boost::any(*destPortGroupPorts);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationGroupCidrs) {
      res["DestinationGroupCidrs"] = boost::any(*destinationGroupCidrs);
    }
    if (destinationGroupType) {
      res["DestinationGroupType"] = boost::any(*destinationGroupType);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (dnsResult) {
      res["DnsResult"] = boost::any(*dnsResult);
    }
    if (dnsResultTime) {
      res["DnsResultTime"] = boost::any(*dnsResultTime);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hitLastTime) {
      res["HitLastTime"] = boost::any(*hitLastTime);
    }
    if (hitTimes) {
      res["HitTimes"] = boost::any(*hitTimes);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceGroupCidrs) {
      res["SourceGroupCidrs"] = boost::any(*sourceGroupCidrs);
    }
    if (sourceGroupType) {
      res["SourceGroupType"] = boost::any(*sourceGroupType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (spreadCnt) {
      res["SpreadCnt"] = boost::any(*spreadCnt);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortGroupPorts") != m.end() && !m["DestPortGroupPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestPortGroupPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestPortGroupPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destPortGroupPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationGroupCidrs") != m.end() && !m["DestinationGroupCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationGroupCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationGroupCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationGroupCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationGroupType") != m.end() && !m["DestinationGroupType"].empty()) {
      destinationGroupType = make_shared<string>(boost::any_cast<string>(m["DestinationGroupType"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("DnsResult") != m.end() && !m["DnsResult"].empty()) {
      dnsResult = make_shared<string>(boost::any_cast<string>(m["DnsResult"]));
    }
    if (m.find("DnsResultTime") != m.end() && !m["DnsResultTime"].empty()) {
      dnsResultTime = make_shared<long>(boost::any_cast<long>(m["DnsResultTime"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<string>(boost::any_cast<string>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("HitLastTime") != m.end() && !m["HitLastTime"].empty()) {
      hitLastTime = make_shared<long>(boost::any_cast<long>(m["HitLastTime"]));
    }
    if (m.find("HitTimes") != m.end() && !m["HitTimes"].empty()) {
      hitTimes = make_shared<long>(boost::any_cast<long>(m["HitTimes"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<long>(boost::any_cast<long>(m["IpVersion"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceGroupCidrs") != m.end() && !m["SourceGroupCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceGroupCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceGroupCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceGroupCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceGroupType") != m.end() && !m["SourceGroupType"].empty()) {
      sourceGroupType = make_shared<string>(boost::any_cast<string>(m["SourceGroupType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpreadCnt") != m.end() && !m["SpreadCnt"].empty()) {
      spreadCnt = make_shared<long>(boost::any_cast<long>(m["SpreadCnt"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeControlPolicyResponseBodyPolicys() = default;
};
class DescribeControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<DescribeControlPolicyResponseBodyPolicys>> policys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeControlPolicyResponseBody() {}

  explicit DescribeControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policys) {
      vector<boost::any> temp1;
      for(auto item1:*policys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policys"] = boost::any(temp1);
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
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Policys") != m.end() && !m["Policys"].empty()) {
      if (typeid(vector<boost::any>) == m["Policys"].type()) {
        vector<DescribeControlPolicyResponseBodyPolicys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeControlPolicyResponseBodyPolicys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policys = make_shared<vector<DescribeControlPolicyResponseBodyPolicys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeControlPolicyResponseBody() = default;
};
class DescribeControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeControlPolicyResponseBody> body{};

  DescribeControlPolicyResponse() {}

  explicit DescribeControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeControlPolicyResponse() = default;
};
class DescribeDefaultIPSConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  DescribeDefaultIPSConfigRequest() {}

  explicit DescribeDefaultIPSConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeDefaultIPSConfigRequest() = default;
};
class DescribeDefaultIPSConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> basicRules{};
  shared_ptr<long> ctiRules{};
  shared_ptr<long> maxSdl{};
  shared_ptr<long> patchRules{};
  shared_ptr<string> requestId{};
  shared_ptr<long> ruleClass{};
  shared_ptr<long> runMode{};

  DescribeDefaultIPSConfigResponseBody() {}

  explicit DescribeDefaultIPSConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicRules) {
      res["BasicRules"] = boost::any(*basicRules);
    }
    if (ctiRules) {
      res["CtiRules"] = boost::any(*ctiRules);
    }
    if (maxSdl) {
      res["MaxSdl"] = boost::any(*maxSdl);
    }
    if (patchRules) {
      res["PatchRules"] = boost::any(*patchRules);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleClass) {
      res["RuleClass"] = boost::any(*ruleClass);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicRules") != m.end() && !m["BasicRules"].empty()) {
      basicRules = make_shared<long>(boost::any_cast<long>(m["BasicRules"]));
    }
    if (m.find("CtiRules") != m.end() && !m["CtiRules"].empty()) {
      ctiRules = make_shared<long>(boost::any_cast<long>(m["CtiRules"]));
    }
    if (m.find("MaxSdl") != m.end() && !m["MaxSdl"].empty()) {
      maxSdl = make_shared<long>(boost::any_cast<long>(m["MaxSdl"]));
    }
    if (m.find("PatchRules") != m.end() && !m["PatchRules"].empty()) {
      patchRules = make_shared<long>(boost::any_cast<long>(m["PatchRules"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleClass") != m.end() && !m["RuleClass"].empty()) {
      ruleClass = make_shared<long>(boost::any_cast<long>(m["RuleClass"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<long>(boost::any_cast<long>(m["RunMode"]));
    }
  }


  virtual ~DescribeDefaultIPSConfigResponseBody() = default;
};
class DescribeDefaultIPSConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefaultIPSConfigResponseBody> body{};

  DescribeDefaultIPSConfigResponse() {}

  explicit DescribeDefaultIPSConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDefaultIPSConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefaultIPSConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefaultIPSConfigResponse() = default;
};
class DescribeDomainResolveRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeDomainResolveRequest() {}

  explicit DescribeDomainResolveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeDomainResolveRequest() = default;
};
class DescribeDomainResolveResponseBodyResolveResult : public Darabonba::Model {
public:
  shared_ptr<string> ipAddrs{};
  shared_ptr<long> updateTime{};

  DescribeDomainResolveResponseBodyResolveResult() {}

  explicit DescribeDomainResolveResponseBodyResolveResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAddrs) {
      res["IpAddrs"] = boost::any(*ipAddrs);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpAddrs") != m.end() && !m["IpAddrs"].empty()) {
      ipAddrs = make_shared<string>(boost::any_cast<string>(m["IpAddrs"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeDomainResolveResponseBodyResolveResult() = default;
};
class DescribeDomainResolveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDomainResolveResponseBodyResolveResult> resolveResult{};

  DescribeDomainResolveResponseBody() {}

  explicit DescribeDomainResolveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resolveResult) {
      res["ResolveResult"] = resolveResult ? boost::any(resolveResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResolveResult") != m.end() && !m["ResolveResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResolveResult"].type()) {
        DescribeDomainResolveResponseBodyResolveResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResolveResult"]));
        resolveResult = make_shared<DescribeDomainResolveResponseBodyResolveResult>(model1);
      }
    }
  }


  virtual ~DescribeDomainResolveResponseBody() = default;
};
class DescribeDomainResolveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainResolveResponseBody> body{};

  DescribeDomainResolveResponse() {}

  explicit DescribeDomainResolveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDomainResolveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainResolveResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainResolveResponse() = default;
};
class DescribeDownloadTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> lang{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> taskType{};

  DescribeDownloadTaskRequest() {}

  explicit DescribeDownloadTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeDownloadTaskRequest() = default;
};
class DescribeDownloadTaskResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> fileSize{};
  shared_ptr<string> fileURL{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskType{};

  DescribeDownloadTaskResponseBodyTasks() {}

  explicit DescribeDownloadTaskResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<string>(boost::any_cast<string>(m["FileSize"]));
    }
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeDownloadTaskResponseBodyTasks() = default;
};
class DescribeDownloadTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDownloadTaskResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  DescribeDownloadTaskResponseBody() {}

  explicit DescribeDownloadTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
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
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<DescribeDownloadTaskResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDownloadTaskResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<DescribeDownloadTaskResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDownloadTaskResponseBody() = default;
};
class DescribeDownloadTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadTaskResponseBody> body{};

  DescribeDownloadTaskResponse() {}

  explicit DescribeDownloadTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDownloadTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadTaskResponse() = default;
};
class DescribeDownloadTaskTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> lang{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> taskType{};

  DescribeDownloadTaskTypeRequest() {}

  explicit DescribeDownloadTaskTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeDownloadTaskTypeRequest() = default;
};
class DescribeDownloadTaskTypeResponseBodyTaskTypeArray : public Darabonba::Model {
public:
  shared_ptr<string> taskName{};
  shared_ptr<string> taskType{};

  DescribeDownloadTaskTypeResponseBodyTaskTypeArray() {}

  explicit DescribeDownloadTaskTypeResponseBodyTaskTypeArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeDownloadTaskTypeResponseBodyTaskTypeArray() = default;
};
class DescribeDownloadTaskTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray>> taskTypeArray{};
  shared_ptr<long> totalCount{};

  DescribeDownloadTaskTypeResponseBody() {}

  explicit DescribeDownloadTaskTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskTypeArray) {
      vector<boost::any> temp1;
      for(auto item1:*taskTypeArray){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskTypeArray"] = boost::any(temp1);
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
    if (m.find("TaskTypeArray") != m.end() && !m["TaskTypeArray"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskTypeArray"].type()) {
        vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskTypeArray"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDownloadTaskTypeResponseBodyTaskTypeArray model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskTypeArray = make_shared<vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDownloadTaskTypeResponseBody() = default;
};
class DescribeDownloadTaskTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadTaskTypeResponseBody> body{};

  DescribeDownloadTaskTypeResponse() {}

  explicit DescribeDownloadTaskTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDownloadTaskTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadTaskTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadTaskTypeResponse() = default;
};
class DescribeInstanceMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> memberDesc{};
  shared_ptr<string> memberDisplayName{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> pageSize{};

  DescribeInstanceMembersRequest() {}

  explicit DescribeInstanceMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (memberDesc) {
      res["MemberDesc"] = boost::any(*memberDesc);
    }
    if (memberDisplayName) {
      res["MemberDisplayName"] = boost::any(*memberDisplayName);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("MemberDesc") != m.end() && !m["MemberDesc"].empty()) {
      memberDesc = make_shared<string>(boost::any_cast<string>(m["MemberDesc"]));
    }
    if (m.find("MemberDisplayName") != m.end() && !m["MemberDisplayName"].empty()) {
      memberDisplayName = make_shared<string>(boost::any_cast<string>(m["MemberDisplayName"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~DescribeInstanceMembersRequest() = default;
};
class DescribeInstanceMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> memberDesc{};
  shared_ptr<string> memberDisplayName{};
  shared_ptr<string> memberStatus{};
  shared_ptr<long> memberUid{};
  shared_ptr<long> modifyTime{};

  DescribeInstanceMembersResponseBodyMembers() {}

  explicit DescribeInstanceMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (memberDesc) {
      res["MemberDesc"] = boost::any(*memberDesc);
    }
    if (memberDisplayName) {
      res["MemberDisplayName"] = boost::any(*memberDisplayName);
    }
    if (memberStatus) {
      res["MemberStatus"] = boost::any(*memberStatus);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("MemberDesc") != m.end() && !m["MemberDesc"].empty()) {
      memberDesc = make_shared<string>(boost::any_cast<string>(m["MemberDesc"]));
    }
    if (m.find("MemberDisplayName") != m.end() && !m["MemberDisplayName"].empty()) {
      memberDisplayName = make_shared<string>(boost::any_cast<string>(m["MemberDisplayName"]));
    }
    if (m.find("MemberStatus") != m.end() && !m["MemberStatus"].empty()) {
      memberStatus = make_shared<string>(boost::any_cast<string>(m["MemberStatus"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
  }


  virtual ~DescribeInstanceMembersResponseBodyMembers() = default;
};
class DescribeInstanceMembersResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeInstanceMembersResponseBodyPageInfo() {}

  explicit DescribeInstanceMembersResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInstanceMembersResponseBodyPageInfo() = default;
};
class DescribeInstanceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceMembersResponseBodyMembers>> members{};
  shared_ptr<DescribeInstanceMembersResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};

  DescribeInstanceMembersResponseBody() {}

  explicit DescribeInstanceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<DescribeInstanceMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<DescribeInstanceMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeInstanceMembersResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeInstanceMembersResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceMembersResponseBody() = default;
};
class DescribeInstanceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceMembersResponseBody> body{};

  DescribeInstanceMembersResponse() {}

  explicit DescribeInstanceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceMembersResponse() = default;
};
class DescribeInstanceRiskLevelsRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> uuid{};

  DescribeInstanceRiskLevelsRequestInstances() {}

  explicit DescribeInstanceRiskLevelsRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InternetIp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InternetIp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      internetIp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~DescribeInstanceRiskLevelsRequestInstances() = default;
};
class DescribeInstanceRiskLevelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceRiskLevelsRequestInstances>> instances{};
  shared_ptr<string> lang{};

  DescribeInstanceRiskLevelsRequest() {}

  explicit DescribeInstanceRiskLevelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeInstanceRiskLevelsRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceRiskLevelsRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeInstanceRiskLevelsRequestInstances>>(expect1);
      }
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeInstanceRiskLevelsRequest() = default;
};
class DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> level{};
  shared_ptr<string> type{};

  DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails() {}

  explicit DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails() = default;
};
class DescribeInstanceRiskLevelsResponseBodyInstanceRisks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails>> details{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> level{};

  DescribeInstanceRiskLevelsResponseBodyInstanceRisks() {}

  explicit DescribeInstanceRiskLevelsResponseBodyInstanceRisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(vector<boost::any>) == m["Details"].type()) {
        vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
  }


  virtual ~DescribeInstanceRiskLevelsResponseBodyInstanceRisks() = default;
};
class DescribeInstanceRiskLevelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks>> instanceRisks{};
  shared_ptr<string> requestId{};

  DescribeInstanceRiskLevelsResponseBody() {}

  explicit DescribeInstanceRiskLevelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceRisks) {
      vector<boost::any> temp1;
      for(auto item1:*instanceRisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceRisks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceRisks") != m.end() && !m["InstanceRisks"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceRisks"].type()) {
        vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceRisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceRiskLevelsResponseBodyInstanceRisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceRisks = make_shared<vector<DescribeInstanceRiskLevelsResponseBodyInstanceRisks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceRiskLevelsResponseBody() = default;
};
class DescribeInstanceRiskLevelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceRiskLevelsResponseBody> body{};

  DescribeInstanceRiskLevelsResponse() {}

  explicit DescribeInstanceRiskLevelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceRiskLevelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceRiskLevelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceRiskLevelsResponse() = default;
};
class DescribeInternetOpenIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetsInstanceId{};
  shared_ptr<string> assetsInstanceName{};
  shared_ptr<string> assetsType{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> port{};
  shared_ptr<string> publicIp{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> startTime{};

  DescribeInternetOpenIpRequest() {}

  explicit DescribeInternetOpenIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetsInstanceId) {
      res["AssetsInstanceId"] = boost::any(*assetsInstanceId);
    }
    if (assetsInstanceName) {
      res["AssetsInstanceName"] = boost::any(*assetsInstanceName);
    }
    if (assetsType) {
      res["AssetsType"] = boost::any(*assetsType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetsInstanceId") != m.end() && !m["AssetsInstanceId"].empty()) {
      assetsInstanceId = make_shared<string>(boost::any_cast<string>(m["AssetsInstanceId"]));
    }
    if (m.find("AssetsInstanceName") != m.end() && !m["AssetsInstanceName"].empty()) {
      assetsInstanceName = make_shared<string>(boost::any_cast<string>(m["AssetsInstanceName"]));
    }
    if (m.find("AssetsType") != m.end() && !m["AssetsType"].empty()) {
      assetsType = make_shared<string>(boost::any_cast<string>(m["AssetsType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeInternetOpenIpRequest() = default;
};
class DescribeInternetOpenIpResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> aclRecommendDetail{};
  shared_ptr<string> assetsInstanceId{};
  shared_ptr<string> assetsName{};
  shared_ptr<string> assetsType{};
  shared_ptr<long> detailNum{};
  shared_ptr<bool> hasAclRecommend{};
  shared_ptr<vector<string>> portList{};
  shared_ptr<string> publicIp{};
  shared_ptr<string> regionNo{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> riskReason{};
  shared_ptr<vector<string>> serviceNameList{};
  shared_ptr<long> srcIpCnt{};
  shared_ptr<long> totalReplyBytes{};
  shared_ptr<string> trafficPercent1Day{};
  shared_ptr<string> trafficPercent30Day{};
  shared_ptr<string> trafficPercent7Day{};

  DescribeInternetOpenIpResponseBodyDataList() {}

  explicit DescribeInternetOpenIpResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclRecommendDetail) {
      res["AclRecommendDetail"] = boost::any(*aclRecommendDetail);
    }
    if (assetsInstanceId) {
      res["AssetsInstanceId"] = boost::any(*assetsInstanceId);
    }
    if (assetsName) {
      res["AssetsName"] = boost::any(*assetsName);
    }
    if (assetsType) {
      res["AssetsType"] = boost::any(*assetsType);
    }
    if (detailNum) {
      res["DetailNum"] = boost::any(*detailNum);
    }
    if (hasAclRecommend) {
      res["HasAclRecommend"] = boost::any(*hasAclRecommend);
    }
    if (portList) {
      res["PortList"] = boost::any(*portList);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (riskReason) {
      res["RiskReason"] = boost::any(*riskReason);
    }
    if (serviceNameList) {
      res["ServiceNameList"] = boost::any(*serviceNameList);
    }
    if (srcIpCnt) {
      res["SrcIpCnt"] = boost::any(*srcIpCnt);
    }
    if (totalReplyBytes) {
      res["TotalReplyBytes"] = boost::any(*totalReplyBytes);
    }
    if (trafficPercent1Day) {
      res["TrafficPercent1Day"] = boost::any(*trafficPercent1Day);
    }
    if (trafficPercent30Day) {
      res["TrafficPercent30Day"] = boost::any(*trafficPercent30Day);
    }
    if (trafficPercent7Day) {
      res["TrafficPercent7Day"] = boost::any(*trafficPercent7Day);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclRecommendDetail") != m.end() && !m["AclRecommendDetail"].empty()) {
      aclRecommendDetail = make_shared<string>(boost::any_cast<string>(m["AclRecommendDetail"]));
    }
    if (m.find("AssetsInstanceId") != m.end() && !m["AssetsInstanceId"].empty()) {
      assetsInstanceId = make_shared<string>(boost::any_cast<string>(m["AssetsInstanceId"]));
    }
    if (m.find("AssetsName") != m.end() && !m["AssetsName"].empty()) {
      assetsName = make_shared<string>(boost::any_cast<string>(m["AssetsName"]));
    }
    if (m.find("AssetsType") != m.end() && !m["AssetsType"].empty()) {
      assetsType = make_shared<string>(boost::any_cast<string>(m["AssetsType"]));
    }
    if (m.find("DetailNum") != m.end() && !m["DetailNum"].empty()) {
      detailNum = make_shared<long>(boost::any_cast<long>(m["DetailNum"]));
    }
    if (m.find("HasAclRecommend") != m.end() && !m["HasAclRecommend"].empty()) {
      hasAclRecommend = make_shared<bool>(boost::any_cast<bool>(m["HasAclRecommend"]));
    }
    if (m.find("PortList") != m.end() && !m["PortList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PortList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PortList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      portList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("RiskReason") != m.end() && !m["RiskReason"].empty()) {
      riskReason = make_shared<string>(boost::any_cast<string>(m["RiskReason"]));
    }
    if (m.find("ServiceNameList") != m.end() && !m["ServiceNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SrcIpCnt") != m.end() && !m["SrcIpCnt"].empty()) {
      srcIpCnt = make_shared<long>(boost::any_cast<long>(m["SrcIpCnt"]));
    }
    if (m.find("TotalReplyBytes") != m.end() && !m["TotalReplyBytes"].empty()) {
      totalReplyBytes = make_shared<long>(boost::any_cast<long>(m["TotalReplyBytes"]));
    }
    if (m.find("TrafficPercent1Day") != m.end() && !m["TrafficPercent1Day"].empty()) {
      trafficPercent1Day = make_shared<string>(boost::any_cast<string>(m["TrafficPercent1Day"]));
    }
    if (m.find("TrafficPercent30Day") != m.end() && !m["TrafficPercent30Day"].empty()) {
      trafficPercent30Day = make_shared<string>(boost::any_cast<string>(m["TrafficPercent30Day"]));
    }
    if (m.find("TrafficPercent7Day") != m.end() && !m["TrafficPercent7Day"].empty()) {
      trafficPercent7Day = make_shared<string>(boost::any_cast<string>(m["TrafficPercent7Day"]));
    }
  }


  virtual ~DescribeInternetOpenIpResponseBodyDataList() = default;
};
class DescribeInternetOpenIpResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeInternetOpenIpResponseBodyPageInfo() {}

  explicit DescribeInternetOpenIpResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInternetOpenIpResponseBodyPageInfo() = default;
};
class DescribeInternetOpenIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInternetOpenIpResponseBodyDataList>> dataList{};
  shared_ptr<DescribeInternetOpenIpResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};

  DescribeInternetOpenIpResponseBody() {}

  explicit DescribeInternetOpenIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeInternetOpenIpResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInternetOpenIpResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeInternetOpenIpResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeInternetOpenIpResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeInternetOpenIpResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInternetOpenIpResponseBody() = default;
};
class DescribeInternetOpenIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInternetOpenIpResponseBody> body{};

  DescribeInternetOpenIpResponse() {}

  explicit DescribeInternetOpenIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInternetOpenIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInternetOpenIpResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInternetOpenIpResponse() = default;
};
class DescribeInternetTrafficTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> srcPrivateIP{};
  shared_ptr<string> srcPublicIP{};
  shared_ptr<string> startTime{};
  shared_ptr<string> trafficType{};

  DescribeInternetTrafficTrendRequest() {}

  explicit DescribeInternetTrafficTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (srcPrivateIP) {
      res["SrcPrivateIP"] = boost::any(*srcPrivateIP);
    }
    if (srcPublicIP) {
      res["SrcPublicIP"] = boost::any(*srcPublicIP);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (trafficType) {
      res["TrafficType"] = boost::any(*trafficType);
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
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("SrcPrivateIP") != m.end() && !m["SrcPrivateIP"].empty()) {
      srcPrivateIP = make_shared<string>(boost::any_cast<string>(m["SrcPrivateIP"]));
    }
    if (m.find("SrcPublicIP") != m.end() && !m["SrcPublicIP"].empty()) {
      srcPublicIP = make_shared<string>(boost::any_cast<string>(m["SrcPublicIP"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TrafficType") != m.end() && !m["TrafficType"].empty()) {
      trafficType = make_shared<string>(boost::any_cast<string>(m["TrafficType"]));
    }
  }


  virtual ~DescribeInternetTrafficTrendRequest() = default;
};
class DescribeInternetTrafficTrendResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> inBps{};
  shared_ptr<long> inBytes{};
  shared_ptr<long> inPps{};
  shared_ptr<long> newConn{};
  shared_ptr<long> outBps{};
  shared_ptr<long> outBytes{};
  shared_ptr<long> outPps{};
  shared_ptr<long> sessionCount{};
  shared_ptr<long> time{};
  shared_ptr<long> totalBps{};

  DescribeInternetTrafficTrendResponseBodyDataList() {}

  explicit DescribeInternetTrafficTrendResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inBps) {
      res["InBps"] = boost::any(*inBps);
    }
    if (inBytes) {
      res["InBytes"] = boost::any(*inBytes);
    }
    if (inPps) {
      res["InPps"] = boost::any(*inPps);
    }
    if (newConn) {
      res["NewConn"] = boost::any(*newConn);
    }
    if (outBps) {
      res["OutBps"] = boost::any(*outBps);
    }
    if (outBytes) {
      res["OutBytes"] = boost::any(*outBytes);
    }
    if (outPps) {
      res["OutPps"] = boost::any(*outPps);
    }
    if (sessionCount) {
      res["SessionCount"] = boost::any(*sessionCount);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (totalBps) {
      res["TotalBps"] = boost::any(*totalBps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InBps") != m.end() && !m["InBps"].empty()) {
      inBps = make_shared<long>(boost::any_cast<long>(m["InBps"]));
    }
    if (m.find("InBytes") != m.end() && !m["InBytes"].empty()) {
      inBytes = make_shared<long>(boost::any_cast<long>(m["InBytes"]));
    }
    if (m.find("InPps") != m.end() && !m["InPps"].empty()) {
      inPps = make_shared<long>(boost::any_cast<long>(m["InPps"]));
    }
    if (m.find("NewConn") != m.end() && !m["NewConn"].empty()) {
      newConn = make_shared<long>(boost::any_cast<long>(m["NewConn"]));
    }
    if (m.find("OutBps") != m.end() && !m["OutBps"].empty()) {
      outBps = make_shared<long>(boost::any_cast<long>(m["OutBps"]));
    }
    if (m.find("OutBytes") != m.end() && !m["OutBytes"].empty()) {
      outBytes = make_shared<long>(boost::any_cast<long>(m["OutBytes"]));
    }
    if (m.find("OutPps") != m.end() && !m["OutPps"].empty()) {
      outPps = make_shared<long>(boost::any_cast<long>(m["OutPps"]));
    }
    if (m.find("SessionCount") != m.end() && !m["SessionCount"].empty()) {
      sessionCount = make_shared<long>(boost::any_cast<long>(m["SessionCount"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("TotalBps") != m.end() && !m["TotalBps"].empty()) {
      totalBps = make_shared<long>(boost::any_cast<long>(m["TotalBps"]));
    }
  }


  virtual ~DescribeInternetTrafficTrendResponseBodyDataList() = default;
};
class DescribeInternetTrafficTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> avgInBps{};
  shared_ptr<long> avgOutBps{};
  shared_ptr<long> avgSession{};
  shared_ptr<long> avgTotalBps{};
  shared_ptr<vector<DescribeInternetTrafficTrendResponseBodyDataList>> dataList{};
  shared_ptr<long> maxBandwidthTime{};
  shared_ptr<long> maxDayExceedBytes{};
  shared_ptr<long> maxInBps{};
  shared_ptr<long> maxOutBps{};
  shared_ptr<long> maxSession{};
  shared_ptr<long> maxTotalBps{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalBytes{};
  shared_ptr<long> totalExceedBytes{};
  shared_ptr<long> totalInBytes{};
  shared_ptr<long> totalOutBytes{};
  shared_ptr<long> totalSession{};

  DescribeInternetTrafficTrendResponseBody() {}

  explicit DescribeInternetTrafficTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgInBps) {
      res["AvgInBps"] = boost::any(*avgInBps);
    }
    if (avgOutBps) {
      res["AvgOutBps"] = boost::any(*avgOutBps);
    }
    if (avgSession) {
      res["AvgSession"] = boost::any(*avgSession);
    }
    if (avgTotalBps) {
      res["AvgTotalBps"] = boost::any(*avgTotalBps);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (maxBandwidthTime) {
      res["MaxBandwidthTime"] = boost::any(*maxBandwidthTime);
    }
    if (maxDayExceedBytes) {
      res["MaxDayExceedBytes"] = boost::any(*maxDayExceedBytes);
    }
    if (maxInBps) {
      res["MaxInBps"] = boost::any(*maxInBps);
    }
    if (maxOutBps) {
      res["MaxOutBps"] = boost::any(*maxOutBps);
    }
    if (maxSession) {
      res["MaxSession"] = boost::any(*maxSession);
    }
    if (maxTotalBps) {
      res["MaxTotalBps"] = boost::any(*maxTotalBps);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    if (totalExceedBytes) {
      res["TotalExceedBytes"] = boost::any(*totalExceedBytes);
    }
    if (totalInBytes) {
      res["TotalInBytes"] = boost::any(*totalInBytes);
    }
    if (totalOutBytes) {
      res["TotalOutBytes"] = boost::any(*totalOutBytes);
    }
    if (totalSession) {
      res["TotalSession"] = boost::any(*totalSession);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgInBps") != m.end() && !m["AvgInBps"].empty()) {
      avgInBps = make_shared<long>(boost::any_cast<long>(m["AvgInBps"]));
    }
    if (m.find("AvgOutBps") != m.end() && !m["AvgOutBps"].empty()) {
      avgOutBps = make_shared<long>(boost::any_cast<long>(m["AvgOutBps"]));
    }
    if (m.find("AvgSession") != m.end() && !m["AvgSession"].empty()) {
      avgSession = make_shared<long>(boost::any_cast<long>(m["AvgSession"]));
    }
    if (m.find("AvgTotalBps") != m.end() && !m["AvgTotalBps"].empty()) {
      avgTotalBps = make_shared<long>(boost::any_cast<long>(m["AvgTotalBps"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeInternetTrafficTrendResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInternetTrafficTrendResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeInternetTrafficTrendResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("MaxBandwidthTime") != m.end() && !m["MaxBandwidthTime"].empty()) {
      maxBandwidthTime = make_shared<long>(boost::any_cast<long>(m["MaxBandwidthTime"]));
    }
    if (m.find("MaxDayExceedBytes") != m.end() && !m["MaxDayExceedBytes"].empty()) {
      maxDayExceedBytes = make_shared<long>(boost::any_cast<long>(m["MaxDayExceedBytes"]));
    }
    if (m.find("MaxInBps") != m.end() && !m["MaxInBps"].empty()) {
      maxInBps = make_shared<long>(boost::any_cast<long>(m["MaxInBps"]));
    }
    if (m.find("MaxOutBps") != m.end() && !m["MaxOutBps"].empty()) {
      maxOutBps = make_shared<long>(boost::any_cast<long>(m["MaxOutBps"]));
    }
    if (m.find("MaxSession") != m.end() && !m["MaxSession"].empty()) {
      maxSession = make_shared<long>(boost::any_cast<long>(m["MaxSession"]));
    }
    if (m.find("MaxTotalBps") != m.end() && !m["MaxTotalBps"].empty()) {
      maxTotalBps = make_shared<long>(boost::any_cast<long>(m["MaxTotalBps"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<long>(boost::any_cast<long>(m["TotalBytes"]));
    }
    if (m.find("TotalExceedBytes") != m.end() && !m["TotalExceedBytes"].empty()) {
      totalExceedBytes = make_shared<long>(boost::any_cast<long>(m["TotalExceedBytes"]));
    }
    if (m.find("TotalInBytes") != m.end() && !m["TotalInBytes"].empty()) {
      totalInBytes = make_shared<long>(boost::any_cast<long>(m["TotalInBytes"]));
    }
    if (m.find("TotalOutBytes") != m.end() && !m["TotalOutBytes"].empty()) {
      totalOutBytes = make_shared<long>(boost::any_cast<long>(m["TotalOutBytes"]));
    }
    if (m.find("TotalSession") != m.end() && !m["TotalSession"].empty()) {
      totalSession = make_shared<long>(boost::any_cast<long>(m["TotalSession"]));
    }
  }


  virtual ~DescribeInternetTrafficTrendResponseBody() = default;
};
class DescribeInternetTrafficTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInternetTrafficTrendResponseBody> body{};

  DescribeInternetTrafficTrendResponse() {}

  explicit DescribeInternetTrafficTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInternetTrafficTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInternetTrafficTrendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInternetTrafficTrendResponse() = default;
};
class DescribeInvadeEventListRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetsIP{};
  shared_ptr<string> assetsInstanceId{};
  shared_ptr<string> assetsInstanceName{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> endTime{};
  shared_ptr<string> eventKey{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventUuid{};
  shared_ptr<string> isIgnore{};
  shared_ptr<string> lang{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<long>> processStatusList{};
  shared_ptr<vector<long>> riskLevel{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startTime{};

  DescribeInvadeEventListRequest() {}

  explicit DescribeInvadeEventListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetsIP) {
      res["AssetsIP"] = boost::any(*assetsIP);
    }
    if (assetsInstanceId) {
      res["AssetsInstanceId"] = boost::any(*assetsInstanceId);
    }
    if (assetsInstanceName) {
      res["AssetsInstanceName"] = boost::any(*assetsInstanceName);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventKey) {
      res["EventKey"] = boost::any(*eventKey);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventUuid) {
      res["EventUuid"] = boost::any(*eventUuid);
    }
    if (isIgnore) {
      res["IsIgnore"] = boost::any(*isIgnore);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (processStatusList) {
      res["ProcessStatusList"] = boost::any(*processStatusList);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetsIP") != m.end() && !m["AssetsIP"].empty()) {
      assetsIP = make_shared<string>(boost::any_cast<string>(m["AssetsIP"]));
    }
    if (m.find("AssetsInstanceId") != m.end() && !m["AssetsInstanceId"].empty()) {
      assetsInstanceId = make_shared<string>(boost::any_cast<string>(m["AssetsInstanceId"]));
    }
    if (m.find("AssetsInstanceName") != m.end() && !m["AssetsInstanceName"].empty()) {
      assetsInstanceName = make_shared<string>(boost::any_cast<string>(m["AssetsInstanceName"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventKey") != m.end() && !m["EventKey"].empty()) {
      eventKey = make_shared<string>(boost::any_cast<string>(m["EventKey"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventUuid") != m.end() && !m["EventUuid"].empty()) {
      eventUuid = make_shared<string>(boost::any_cast<string>(m["EventUuid"]));
    }
    if (m.find("IsIgnore") != m.end() && !m["IsIgnore"].empty()) {
      isIgnore = make_shared<string>(boost::any_cast<string>(m["IsIgnore"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ProcessStatusList") != m.end() && !m["ProcessStatusList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ProcessStatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProcessStatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      processStatusList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RiskLevel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RiskLevel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      riskLevel = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeInvadeEventListRequest() = default;
};
class DescribeInvadeEventListResponseBodyEventList : public Darabonba::Model {
public:
  shared_ptr<string> assetsInstanceId{};
  shared_ptr<string> assetsInstanceName{};
  shared_ptr<string> assetsType{};
  shared_ptr<string> eventKey{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventSrc{};
  shared_ptr<string> eventUuid{};
  shared_ptr<long> firstTime{};
  shared_ptr<bool> isIgnore{};
  shared_ptr<long> lastTime{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> privateIP{};
  shared_ptr<long> processStatus{};
  shared_ptr<string> publicIP{};
  shared_ptr<string> publicIpType{};
  shared_ptr<long> riskLevel{};

  DescribeInvadeEventListResponseBodyEventList() {}

  explicit DescribeInvadeEventListResponseBodyEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetsInstanceId) {
      res["AssetsInstanceId"] = boost::any(*assetsInstanceId);
    }
    if (assetsInstanceName) {
      res["AssetsInstanceName"] = boost::any(*assetsInstanceName);
    }
    if (assetsType) {
      res["AssetsType"] = boost::any(*assetsType);
    }
    if (eventKey) {
      res["EventKey"] = boost::any(*eventKey);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventSrc) {
      res["EventSrc"] = boost::any(*eventSrc);
    }
    if (eventUuid) {
      res["EventUuid"] = boost::any(*eventUuid);
    }
    if (firstTime) {
      res["FirstTime"] = boost::any(*firstTime);
    }
    if (isIgnore) {
      res["IsIgnore"] = boost::any(*isIgnore);
    }
    if (lastTime) {
      res["LastTime"] = boost::any(*lastTime);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (privateIP) {
      res["PrivateIP"] = boost::any(*privateIP);
    }
    if (processStatus) {
      res["ProcessStatus"] = boost::any(*processStatus);
    }
    if (publicIP) {
      res["PublicIP"] = boost::any(*publicIP);
    }
    if (publicIpType) {
      res["PublicIpType"] = boost::any(*publicIpType);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetsInstanceId") != m.end() && !m["AssetsInstanceId"].empty()) {
      assetsInstanceId = make_shared<string>(boost::any_cast<string>(m["AssetsInstanceId"]));
    }
    if (m.find("AssetsInstanceName") != m.end() && !m["AssetsInstanceName"].empty()) {
      assetsInstanceName = make_shared<string>(boost::any_cast<string>(m["AssetsInstanceName"]));
    }
    if (m.find("AssetsType") != m.end() && !m["AssetsType"].empty()) {
      assetsType = make_shared<string>(boost::any_cast<string>(m["AssetsType"]));
    }
    if (m.find("EventKey") != m.end() && !m["EventKey"].empty()) {
      eventKey = make_shared<string>(boost::any_cast<string>(m["EventKey"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventSrc") != m.end() && !m["EventSrc"].empty()) {
      eventSrc = make_shared<string>(boost::any_cast<string>(m["EventSrc"]));
    }
    if (m.find("EventUuid") != m.end() && !m["EventUuid"].empty()) {
      eventUuid = make_shared<string>(boost::any_cast<string>(m["EventUuid"]));
    }
    if (m.find("FirstTime") != m.end() && !m["FirstTime"].empty()) {
      firstTime = make_shared<long>(boost::any_cast<long>(m["FirstTime"]));
    }
    if (m.find("IsIgnore") != m.end() && !m["IsIgnore"].empty()) {
      isIgnore = make_shared<bool>(boost::any_cast<bool>(m["IsIgnore"]));
    }
    if (m.find("LastTime") != m.end() && !m["LastTime"].empty()) {
      lastTime = make_shared<long>(boost::any_cast<long>(m["LastTime"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PrivateIP") != m.end() && !m["PrivateIP"].empty()) {
      privateIP = make_shared<string>(boost::any_cast<string>(m["PrivateIP"]));
    }
    if (m.find("ProcessStatus") != m.end() && !m["ProcessStatus"].empty()) {
      processStatus = make_shared<long>(boost::any_cast<long>(m["ProcessStatus"]));
    }
    if (m.find("PublicIP") != m.end() && !m["PublicIP"].empty()) {
      publicIP = make_shared<string>(boost::any_cast<string>(m["PublicIP"]));
    }
    if (m.find("PublicIpType") != m.end() && !m["PublicIpType"].empty()) {
      publicIpType = make_shared<string>(boost::any_cast<string>(m["PublicIpType"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
  }


  virtual ~DescribeInvadeEventListResponseBodyEventList() = default;
};
class DescribeInvadeEventListResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeInvadeEventListResponseBodyPageInfo() {}

  explicit DescribeInvadeEventListResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInvadeEventListResponseBodyPageInfo() = default;
};
class DescribeInvadeEventListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInvadeEventListResponseBodyEventList>> eventList{};
  shared_ptr<long> highLevelPercent{};
  shared_ptr<long> lowLevelPercent{};
  shared_ptr<long> middleLevelPercent{};
  shared_ptr<DescribeInvadeEventListResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};

  DescribeInvadeEventListResponseBody() {}

  explicit DescribeInvadeEventListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventList) {
      vector<boost::any> temp1;
      for(auto item1:*eventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventList"] = boost::any(temp1);
    }
    if (highLevelPercent) {
      res["HighLevelPercent"] = boost::any(*highLevelPercent);
    }
    if (lowLevelPercent) {
      res["LowLevelPercent"] = boost::any(*lowLevelPercent);
    }
    if (middleLevelPercent) {
      res["MiddleLevelPercent"] = boost::any(*middleLevelPercent);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventList") != m.end() && !m["EventList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventList"].type()) {
        vector<DescribeInvadeEventListResponseBodyEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInvadeEventListResponseBodyEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventList = make_shared<vector<DescribeInvadeEventListResponseBodyEventList>>(expect1);
      }
    }
    if (m.find("HighLevelPercent") != m.end() && !m["HighLevelPercent"].empty()) {
      highLevelPercent = make_shared<long>(boost::any_cast<long>(m["HighLevelPercent"]));
    }
    if (m.find("LowLevelPercent") != m.end() && !m["LowLevelPercent"].empty()) {
      lowLevelPercent = make_shared<long>(boost::any_cast<long>(m["LowLevelPercent"]));
    }
    if (m.find("MiddleLevelPercent") != m.end() && !m["MiddleLevelPercent"].empty()) {
      middleLevelPercent = make_shared<long>(boost::any_cast<long>(m["MiddleLevelPercent"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeInvadeEventListResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeInvadeEventListResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInvadeEventListResponseBody() = default;
};
class DescribeInvadeEventListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInvadeEventListResponseBody> body{};

  DescribeInvadeEventListResponse() {}

  explicit DescribeInvadeEventListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInvadeEventListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInvadeEventListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInvadeEventListResponse() = default;
};
class DescribeNatAclPageStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  DescribeNatAclPageStatusRequest() {}

  explicit DescribeNatAclPageStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeNatAclPageStatusRequest() = default;
};
class DescribeNatAclPageStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<bool> natAclPageEnable{};
  shared_ptr<string> requestId{};

  DescribeNatAclPageStatusResponseBody() {}

  explicit DescribeNatAclPageStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (natAclPageEnable) {
      res["NatAclPageEnable"] = boost::any(*natAclPageEnable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("NatAclPageEnable") != m.end() && !m["NatAclPageEnable"].empty()) {
      natAclPageEnable = make_shared<bool>(boost::any_cast<bool>(m["NatAclPageEnable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNatAclPageStatusResponseBody() = default;
};
class DescribeNatAclPageStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNatAclPageStatusResponseBody> body{};

  DescribeNatAclPageStatusResponse() {}

  explicit DescribeNatAclPageStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNatAclPageStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNatAclPageStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNatAclPageStatusResponse() = default;
};
class DescribeNatFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> description{};
  shared_ptr<string> destination{};
  shared_ptr<string> direction{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};

  DescribeNatFirewallControlPolicyRequest() {}

  explicit DescribeNatFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DescribeNatFirewallControlPolicyRequest() = default;
};
class DescribeNatFirewallControlPolicyResponseBodyPolicys : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<vector<string>> destPortGroupPorts{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<vector<string>> destinationGroupCidrs{};
  shared_ptr<string> destinationGroupType{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> dnsResult{};
  shared_ptr<long> dnsResultTime{};
  shared_ptr<long> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<long> hitLastTime{};
  shared_ptr<long> hitTimes{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<long> order{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<vector<string>> sourceGroupCidrs{};
  shared_ptr<string> sourceGroupType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> spreadCnt{};
  shared_ptr<long> startTime{};

  DescribeNatFirewallControlPolicyResponseBodyPolicys() {}

  explicit DescribeNatFirewallControlPolicyResponseBodyPolicys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortGroupPorts) {
      res["DestPortGroupPorts"] = boost::any(*destPortGroupPorts);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationGroupCidrs) {
      res["DestinationGroupCidrs"] = boost::any(*destinationGroupCidrs);
    }
    if (destinationGroupType) {
      res["DestinationGroupType"] = boost::any(*destinationGroupType);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (dnsResult) {
      res["DnsResult"] = boost::any(*dnsResult);
    }
    if (dnsResultTime) {
      res["DnsResultTime"] = boost::any(*dnsResultTime);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hitLastTime) {
      res["HitLastTime"] = boost::any(*hitLastTime);
    }
    if (hitTimes) {
      res["HitTimes"] = boost::any(*hitTimes);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceGroupCidrs) {
      res["SourceGroupCidrs"] = boost::any(*sourceGroupCidrs);
    }
    if (sourceGroupType) {
      res["SourceGroupType"] = boost::any(*sourceGroupType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (spreadCnt) {
      res["SpreadCnt"] = boost::any(*spreadCnt);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortGroupPorts") != m.end() && !m["DestPortGroupPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestPortGroupPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestPortGroupPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destPortGroupPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationGroupCidrs") != m.end() && !m["DestinationGroupCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationGroupCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationGroupCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationGroupCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationGroupType") != m.end() && !m["DestinationGroupType"].empty()) {
      destinationGroupType = make_shared<string>(boost::any_cast<string>(m["DestinationGroupType"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DnsResult") != m.end() && !m["DnsResult"].empty()) {
      dnsResult = make_shared<string>(boost::any_cast<string>(m["DnsResult"]));
    }
    if (m.find("DnsResultTime") != m.end() && !m["DnsResultTime"].empty()) {
      dnsResultTime = make_shared<long>(boost::any_cast<long>(m["DnsResultTime"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<long>(boost::any_cast<long>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("HitLastTime") != m.end() && !m["HitLastTime"].empty()) {
      hitLastTime = make_shared<long>(boost::any_cast<long>(m["HitLastTime"]));
    }
    if (m.find("HitTimes") != m.end() && !m["HitTimes"].empty()) {
      hitTimes = make_shared<long>(boost::any_cast<long>(m["HitTimes"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceGroupCidrs") != m.end() && !m["SourceGroupCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceGroupCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceGroupCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceGroupCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceGroupType") != m.end() && !m["SourceGroupType"].empty()) {
      sourceGroupType = make_shared<string>(boost::any_cast<string>(m["SourceGroupType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpreadCnt") != m.end() && !m["SpreadCnt"].empty()) {
      spreadCnt = make_shared<string>(boost::any_cast<string>(m["SpreadCnt"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeNatFirewallControlPolicyResponseBodyPolicys() = default;
};
class DescribeNatFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNatFirewallControlPolicyResponseBodyPolicys>> policys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeNatFirewallControlPolicyResponseBody() {}

  explicit DescribeNatFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policys) {
      vector<boost::any> temp1;
      for(auto item1:*policys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policys"] = boost::any(temp1);
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
    if (m.find("Policys") != m.end() && !m["Policys"].empty()) {
      if (typeid(vector<boost::any>) == m["Policys"].type()) {
        vector<DescribeNatFirewallControlPolicyResponseBodyPolicys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNatFirewallControlPolicyResponseBodyPolicys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policys = make_shared<vector<DescribeNatFirewallControlPolicyResponseBodyPolicys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeNatFirewallControlPolicyResponseBody() = default;
};
class DescribeNatFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNatFirewallControlPolicyResponseBody> body{};

  DescribeNatFirewallControlPolicyResponse() {}

  explicit DescribeNatFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNatFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNatFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNatFirewallControlPolicyResponse() = default;
};
class DescribeNatFirewallListRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> proxyId{};
  shared_ptr<string> proxyName{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};

  DescribeNatFirewallListRequest() {}

  explicit DescribeNatFirewallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (proxyId) {
      res["ProxyId"] = boost::any(*proxyId);
    }
    if (proxyName) {
      res["ProxyName"] = boost::any(*proxyName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProxyId") != m.end() && !m["ProxyId"].empty()) {
      proxyId = make_shared<string>(boost::any_cast<string>(m["ProxyId"]));
    }
    if (m.find("ProxyName") != m.end() && !m["ProxyName"].empty()) {
      proxyName = make_shared<string>(boost::any_cast<string>(m["ProxyName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeNatFirewallListRequest() = default;
};
class DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> routeTableId{};

  DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList() {}

  explicit DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList() = default;
};
class DescribeNatFirewallListResponseBodyNatFirewallList : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> errorDetail{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> natGatewayName{};
  shared_ptr<vector<DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList>> natRouteEntryList{};
  shared_ptr<string> proxyId{};
  shared_ptr<string> proxyName{};
  shared_ptr<string> proxyStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> strictMode{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeNatFirewallListResponseBodyNatFirewallList() {}

  explicit DescribeNatFirewallListResponseBodyNatFirewallList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (errorDetail) {
      res["ErrorDetail"] = boost::any(*errorDetail);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (natGatewayName) {
      res["NatGatewayName"] = boost::any(*natGatewayName);
    }
    if (natRouteEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*natRouteEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NatRouteEntryList"] = boost::any(temp1);
    }
    if (proxyId) {
      res["ProxyId"] = boost::any(*proxyId);
    }
    if (proxyName) {
      res["ProxyName"] = boost::any(*proxyName);
    }
    if (proxyStatus) {
      res["ProxyStatus"] = boost::any(*proxyStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (strictMode) {
      res["StrictMode"] = boost::any(*strictMode);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ErrorDetail") != m.end() && !m["ErrorDetail"].empty()) {
      errorDetail = make_shared<string>(boost::any_cast<string>(m["ErrorDetail"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("NatGatewayName") != m.end() && !m["NatGatewayName"].empty()) {
      natGatewayName = make_shared<string>(boost::any_cast<string>(m["NatGatewayName"]));
    }
    if (m.find("NatRouteEntryList") != m.end() && !m["NatRouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["NatRouteEntryList"].type()) {
        vector<DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NatRouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        natRouteEntryList = make_shared<vector<DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList>>(expect1);
      }
    }
    if (m.find("ProxyId") != m.end() && !m["ProxyId"].empty()) {
      proxyId = make_shared<string>(boost::any_cast<string>(m["ProxyId"]));
    }
    if (m.find("ProxyName") != m.end() && !m["ProxyName"].empty()) {
      proxyName = make_shared<string>(boost::any_cast<string>(m["ProxyName"]));
    }
    if (m.find("ProxyStatus") != m.end() && !m["ProxyStatus"].empty()) {
      proxyStatus = make_shared<string>(boost::any_cast<string>(m["ProxyStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StrictMode") != m.end() && !m["StrictMode"].empty()) {
      strictMode = make_shared<long>(boost::any_cast<long>(m["StrictMode"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeNatFirewallListResponseBodyNatFirewallList() = default;
};
class DescribeNatFirewallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNatFirewallListResponseBodyNatFirewallList>> natFirewallList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeNatFirewallListResponseBody() {}

  explicit DescribeNatFirewallListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (natFirewallList) {
      vector<boost::any> temp1;
      for(auto item1:*natFirewallList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NatFirewallList"] = boost::any(temp1);
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
    if (m.find("NatFirewallList") != m.end() && !m["NatFirewallList"].empty()) {
      if (typeid(vector<boost::any>) == m["NatFirewallList"].type()) {
        vector<DescribeNatFirewallListResponseBodyNatFirewallList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NatFirewallList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNatFirewallListResponseBodyNatFirewallList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        natFirewallList = make_shared<vector<DescribeNatFirewallListResponseBodyNatFirewallList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeNatFirewallListResponseBody() = default;
};
class DescribeNatFirewallListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNatFirewallListResponseBody> body{};

  DescribeNatFirewallListResponse() {}

  explicit DescribeNatFirewallListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNatFirewallListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNatFirewallListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNatFirewallListResponse() = default;
};
class DescribeNatFirewallPolicyPriorUsedRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};

  DescribeNatFirewallPolicyPriorUsedRequest() {}

  explicit DescribeNatFirewallPolicyPriorUsedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
  }


  virtual ~DescribeNatFirewallPolicyPriorUsedRequest() = default;
};
class DescribeNatFirewallPolicyPriorUsedResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> end{};
  shared_ptr<string> requestId{};
  shared_ptr<long> start{};

  DescribeNatFirewallPolicyPriorUsedResponseBody() {}

  explicit DescribeNatFirewallPolicyPriorUsedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~DescribeNatFirewallPolicyPriorUsedResponseBody() = default;
};
class DescribeNatFirewallPolicyPriorUsedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNatFirewallPolicyPriorUsedResponseBody> body{};

  DescribeNatFirewallPolicyPriorUsedResponse() {}

  explicit DescribeNatFirewallPolicyPriorUsedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNatFirewallPolicyPriorUsedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNatFirewallPolicyPriorUsedResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNatFirewallPolicyPriorUsedResponse() = default;
};
class DescribeOutgoingDestinationIPRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> categoryId{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> dstIP{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> order{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> port{};
  shared_ptr<string> privateIP{};
  shared_ptr<string> publicIP{};
  shared_ptr<string> sort{};
  shared_ptr<string> startTime{};
  shared_ptr<string> tagIdNew{};

  DescribeOutgoingDestinationIPRequest() {}

  explicit DescribeOutgoingDestinationIPRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dstIP) {
      res["DstIP"] = boost::any(*dstIP);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (privateIP) {
      res["PrivateIP"] = boost::any(*privateIP);
    }
    if (publicIP) {
      res["PublicIP"] = boost::any(*publicIP);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tagIdNew) {
      res["TagIdNew"] = boost::any(*tagIdNew);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("DstIP") != m.end() && !m["DstIP"].empty()) {
      dstIP = make_shared<string>(boost::any_cast<string>(m["DstIP"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("PrivateIP") != m.end() && !m["PrivateIP"].empty()) {
      privateIP = make_shared<string>(boost::any_cast<string>(m["PrivateIP"]));
    }
    if (m.find("PublicIP") != m.end() && !m["PublicIP"].empty()) {
      publicIP = make_shared<string>(boost::any_cast<string>(m["PublicIP"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TagIdNew") != m.end() && !m["TagIdNew"].empty()) {
      tagIdNew = make_shared<string>(boost::any_cast<string>(m["TagIdNew"]));
    }
  }


  virtual ~DescribeOutgoingDestinationIPRequest() = default;
};
class DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList : public Darabonba::Model {
public:
  shared_ptr<string> addressGroupName{};
  shared_ptr<string> addressGroupUUID{};

  DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList() {}

  explicit DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressGroupName) {
      res["AddressGroupName"] = boost::any(*addressGroupName);
    }
    if (addressGroupUUID) {
      res["AddressGroupUUID"] = boost::any(*addressGroupUUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressGroupName") != m.end() && !m["AddressGroupName"].empty()) {
      addressGroupName = make_shared<string>(boost::any_cast<string>(m["AddressGroupName"]));
    }
    if (m.find("AddressGroupUUID") != m.end() && !m["AddressGroupUUID"].empty()) {
      addressGroupUUID = make_shared<string>(boost::any_cast<string>(m["AddressGroupUUID"]));
    }
  }


  virtual ~DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList() = default;
};
class DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<long> port{};

  DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList() {}

  explicit DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList() = default;
};
class DescribeOutgoingDestinationIPResponseBodyDstIPListTagList : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> tagDescribe{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};

  DescribeOutgoingDestinationIPResponseBodyDstIPListTagList() {}

  explicit DescribeOutgoingDestinationIPResponseBodyDstIPListTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (tagDescribe) {
      res["TagDescribe"] = boost::any(*tagDescribe);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("TagDescribe") != m.end() && !m["TagDescribe"].empty()) {
      tagDescribe = make_shared<string>(boost::any_cast<string>(m["TagDescribe"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~DescribeOutgoingDestinationIPResponseBodyDstIPListTagList() = default;
};
class DescribeOutgoingDestinationIPResponseBodyDstIPList : public Darabonba::Model {
public:
  shared_ptr<string> aclCoverage{};
  shared_ptr<string> aclRecommendDetail{};
  shared_ptr<string> aclStatus{};
  shared_ptr<vector<DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList>> addressGroupList{};
  shared_ptr<vector<DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList>> applicationPortList{};
  shared_ptr<long> assetCount{};
  shared_ptr<string> categoryClassId{};
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> dstIP{};
  shared_ptr<string> groupName{};
  shared_ptr<string> hasAcl{};
  shared_ptr<bool> hasAclRecommend{};
  shared_ptr<long> inBytes{};
  shared_ptr<bool> isMarkNormal{};
  shared_ptr<string> locationName{};
  shared_ptr<long> outBytes{};
  shared_ptr<long> privateAssetCount{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> securityReason{};
  shared_ptr<string> securitySuggest{};
  shared_ptr<long> sessionCount{};
  shared_ptr<vector<DescribeOutgoingDestinationIPResponseBodyDstIPListTagList>> tagList{};
  shared_ptr<string> totalBytes{};

  DescribeOutgoingDestinationIPResponseBodyDstIPList() {}

  explicit DescribeOutgoingDestinationIPResponseBodyDstIPList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclCoverage) {
      res["AclCoverage"] = boost::any(*aclCoverage);
    }
    if (aclRecommendDetail) {
      res["AclRecommendDetail"] = boost::any(*aclRecommendDetail);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (addressGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*addressGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AddressGroupList"] = boost::any(temp1);
    }
    if (applicationPortList) {
      vector<boost::any> temp1;
      for(auto item1:*applicationPortList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationPortList"] = boost::any(temp1);
    }
    if (assetCount) {
      res["AssetCount"] = boost::any(*assetCount);
    }
    if (categoryClassId) {
      res["CategoryClassId"] = boost::any(*categoryClassId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (dstIP) {
      res["DstIP"] = boost::any(*dstIP);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (hasAcl) {
      res["HasAcl"] = boost::any(*hasAcl);
    }
    if (hasAclRecommend) {
      res["HasAclRecommend"] = boost::any(*hasAclRecommend);
    }
    if (inBytes) {
      res["InBytes"] = boost::any(*inBytes);
    }
    if (isMarkNormal) {
      res["IsMarkNormal"] = boost::any(*isMarkNormal);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (outBytes) {
      res["OutBytes"] = boost::any(*outBytes);
    }
    if (privateAssetCount) {
      res["PrivateAssetCount"] = boost::any(*privateAssetCount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (securityReason) {
      res["SecurityReason"] = boost::any(*securityReason);
    }
    if (securitySuggest) {
      res["SecuritySuggest"] = boost::any(*securitySuggest);
    }
    if (sessionCount) {
      res["SessionCount"] = boost::any(*sessionCount);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclCoverage") != m.end() && !m["AclCoverage"].empty()) {
      aclCoverage = make_shared<string>(boost::any_cast<string>(m["AclCoverage"]));
    }
    if (m.find("AclRecommendDetail") != m.end() && !m["AclRecommendDetail"].empty()) {
      aclRecommendDetail = make_shared<string>(boost::any_cast<string>(m["AclRecommendDetail"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("AddressGroupList") != m.end() && !m["AddressGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["AddressGroupList"].type()) {
        vector<DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AddressGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addressGroupList = make_shared<vector<DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList>>(expect1);
      }
    }
    if (m.find("ApplicationPortList") != m.end() && !m["ApplicationPortList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationPortList"].type()) {
        vector<DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationPortList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationPortList = make_shared<vector<DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList>>(expect1);
      }
    }
    if (m.find("AssetCount") != m.end() && !m["AssetCount"].empty()) {
      assetCount = make_shared<long>(boost::any_cast<long>(m["AssetCount"]));
    }
    if (m.find("CategoryClassId") != m.end() && !m["CategoryClassId"].empty()) {
      categoryClassId = make_shared<string>(boost::any_cast<string>(m["CategoryClassId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("DstIP") != m.end() && !m["DstIP"].empty()) {
      dstIP = make_shared<string>(boost::any_cast<string>(m["DstIP"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HasAcl") != m.end() && !m["HasAcl"].empty()) {
      hasAcl = make_shared<string>(boost::any_cast<string>(m["HasAcl"]));
    }
    if (m.find("HasAclRecommend") != m.end() && !m["HasAclRecommend"].empty()) {
      hasAclRecommend = make_shared<bool>(boost::any_cast<bool>(m["HasAclRecommend"]));
    }
    if (m.find("InBytes") != m.end() && !m["InBytes"].empty()) {
      inBytes = make_shared<long>(boost::any_cast<long>(m["InBytes"]));
    }
    if (m.find("IsMarkNormal") != m.end() && !m["IsMarkNormal"].empty()) {
      isMarkNormal = make_shared<bool>(boost::any_cast<bool>(m["IsMarkNormal"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("OutBytes") != m.end() && !m["OutBytes"].empty()) {
      outBytes = make_shared<long>(boost::any_cast<long>(m["OutBytes"]));
    }
    if (m.find("PrivateAssetCount") != m.end() && !m["PrivateAssetCount"].empty()) {
      privateAssetCount = make_shared<long>(boost::any_cast<long>(m["PrivateAssetCount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SecurityReason") != m.end() && !m["SecurityReason"].empty()) {
      securityReason = make_shared<string>(boost::any_cast<string>(m["SecurityReason"]));
    }
    if (m.find("SecuritySuggest") != m.end() && !m["SecuritySuggest"].empty()) {
      securitySuggest = make_shared<string>(boost::any_cast<string>(m["SecuritySuggest"]));
    }
    if (m.find("SessionCount") != m.end() && !m["SessionCount"].empty()) {
      sessionCount = make_shared<long>(boost::any_cast<long>(m["SessionCount"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<DescribeOutgoingDestinationIPResponseBodyDstIPListTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOutgoingDestinationIPResponseBodyDstIPListTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<DescribeOutgoingDestinationIPResponseBodyDstIPListTagList>>(expect1);
      }
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<string>(boost::any_cast<string>(m["TotalBytes"]));
    }
  }


  virtual ~DescribeOutgoingDestinationIPResponseBodyDstIPList() = default;
};
class DescribeOutgoingDestinationIPResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOutgoingDestinationIPResponseBodyDstIPList>> dstIPList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeOutgoingDestinationIPResponseBody() {}

  explicit DescribeOutgoingDestinationIPResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstIPList) {
      vector<boost::any> temp1;
      for(auto item1:*dstIPList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DstIPList"] = boost::any(temp1);
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
    if (m.find("DstIPList") != m.end() && !m["DstIPList"].empty()) {
      if (typeid(vector<boost::any>) == m["DstIPList"].type()) {
        vector<DescribeOutgoingDestinationIPResponseBodyDstIPList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DstIPList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOutgoingDestinationIPResponseBodyDstIPList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dstIPList = make_shared<vector<DescribeOutgoingDestinationIPResponseBodyDstIPList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOutgoingDestinationIPResponseBody() = default;
};
class DescribeOutgoingDestinationIPResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOutgoingDestinationIPResponseBody> body{};

  DescribeOutgoingDestinationIPResponse() {}

  explicit DescribeOutgoingDestinationIPResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeOutgoingDestinationIPResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOutgoingDestinationIPResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOutgoingDestinationIPResponse() = default;
};
class DescribeOutgoingDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> domain{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> order{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> publicIP{};
  shared_ptr<string> sort{};
  shared_ptr<string> startTime{};
  shared_ptr<string> tagIdNew{};

  DescribeOutgoingDomainRequest() {}

  explicit DescribeOutgoingDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (publicIP) {
      res["PublicIP"] = boost::any(*publicIP);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tagIdNew) {
      res["TagIdNew"] = boost::any(*tagIdNew);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PublicIP") != m.end() && !m["PublicIP"].empty()) {
      publicIP = make_shared<string>(boost::any_cast<string>(m["PublicIP"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TagIdNew") != m.end() && !m["TagIdNew"].empty()) {
      tagIdNew = make_shared<string>(boost::any_cast<string>(m["TagIdNew"]));
    }
  }


  virtual ~DescribeOutgoingDomainRequest() = default;
};
class DescribeOutgoingDomainResponseBodyDomainListTagList : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> tagDescribe{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};

  DescribeOutgoingDomainResponseBodyDomainListTagList() {}

  explicit DescribeOutgoingDomainResponseBodyDomainListTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (tagDescribe) {
      res["TagDescribe"] = boost::any(*tagDescribe);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["ClassId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("TagDescribe") != m.end() && !m["TagDescribe"].empty()) {
      tagDescribe = make_shared<string>(boost::any_cast<string>(m["TagDescribe"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~DescribeOutgoingDomainResponseBodyDomainListTagList() = default;
};
class DescribeOutgoingDomainResponseBodyDomainList : public Darabonba::Model {
public:
  shared_ptr<string> aclCoverage{};
  shared_ptr<string> aclRecommendDetail{};
  shared_ptr<string> aclStatus{};
  shared_ptr<string> addressGroupName{};
  shared_ptr<string> addressGroupUUID{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<long> assetCount{};
  shared_ptr<string> business{};
  shared_ptr<string> categoryClassId{};
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> domain{};
  shared_ptr<string> groupName{};
  shared_ptr<string> hasAcl{};
  shared_ptr<bool> hasAclRecommend{};
  shared_ptr<long> inBytes{};
  shared_ptr<bool> isMarkNormal{};
  shared_ptr<string> organization{};
  shared_ptr<long> outBytes{};
  shared_ptr<long> privateAssetCount{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> securityReason{};
  shared_ptr<string> securitySuggest{};
  shared_ptr<long> sessionCount{};
  shared_ptr<vector<DescribeOutgoingDomainResponseBodyDomainListTagList>> tagList{};
  shared_ptr<string> totalBytes{};

  DescribeOutgoingDomainResponseBodyDomainList() {}

  explicit DescribeOutgoingDomainResponseBodyDomainList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclCoverage) {
      res["AclCoverage"] = boost::any(*aclCoverage);
    }
    if (aclRecommendDetail) {
      res["AclRecommendDetail"] = boost::any(*aclRecommendDetail);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (addressGroupName) {
      res["AddressGroupName"] = boost::any(*addressGroupName);
    }
    if (addressGroupUUID) {
      res["AddressGroupUUID"] = boost::any(*addressGroupUUID);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (assetCount) {
      res["AssetCount"] = boost::any(*assetCount);
    }
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (categoryClassId) {
      res["CategoryClassId"] = boost::any(*categoryClassId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (hasAcl) {
      res["HasAcl"] = boost::any(*hasAcl);
    }
    if (hasAclRecommend) {
      res["HasAclRecommend"] = boost::any(*hasAclRecommend);
    }
    if (inBytes) {
      res["InBytes"] = boost::any(*inBytes);
    }
    if (isMarkNormal) {
      res["IsMarkNormal"] = boost::any(*isMarkNormal);
    }
    if (organization) {
      res["Organization"] = boost::any(*organization);
    }
    if (outBytes) {
      res["OutBytes"] = boost::any(*outBytes);
    }
    if (privateAssetCount) {
      res["PrivateAssetCount"] = boost::any(*privateAssetCount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (securityReason) {
      res["SecurityReason"] = boost::any(*securityReason);
    }
    if (securitySuggest) {
      res["SecuritySuggest"] = boost::any(*securitySuggest);
    }
    if (sessionCount) {
      res["SessionCount"] = boost::any(*sessionCount);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclCoverage") != m.end() && !m["AclCoverage"].empty()) {
      aclCoverage = make_shared<string>(boost::any_cast<string>(m["AclCoverage"]));
    }
    if (m.find("AclRecommendDetail") != m.end() && !m["AclRecommendDetail"].empty()) {
      aclRecommendDetail = make_shared<string>(boost::any_cast<string>(m["AclRecommendDetail"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<string>(boost::any_cast<string>(m["AclStatus"]));
    }
    if (m.find("AddressGroupName") != m.end() && !m["AddressGroupName"].empty()) {
      addressGroupName = make_shared<string>(boost::any_cast<string>(m["AddressGroupName"]));
    }
    if (m.find("AddressGroupUUID") != m.end() && !m["AddressGroupUUID"].empty()) {
      addressGroupUUID = make_shared<string>(boost::any_cast<string>(m["AddressGroupUUID"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AssetCount") != m.end() && !m["AssetCount"].empty()) {
      assetCount = make_shared<long>(boost::any_cast<long>(m["AssetCount"]));
    }
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("CategoryClassId") != m.end() && !m["CategoryClassId"].empty()) {
      categoryClassId = make_shared<string>(boost::any_cast<string>(m["CategoryClassId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HasAcl") != m.end() && !m["HasAcl"].empty()) {
      hasAcl = make_shared<string>(boost::any_cast<string>(m["HasAcl"]));
    }
    if (m.find("HasAclRecommend") != m.end() && !m["HasAclRecommend"].empty()) {
      hasAclRecommend = make_shared<bool>(boost::any_cast<bool>(m["HasAclRecommend"]));
    }
    if (m.find("InBytes") != m.end() && !m["InBytes"].empty()) {
      inBytes = make_shared<long>(boost::any_cast<long>(m["InBytes"]));
    }
    if (m.find("IsMarkNormal") != m.end() && !m["IsMarkNormal"].empty()) {
      isMarkNormal = make_shared<bool>(boost::any_cast<bool>(m["IsMarkNormal"]));
    }
    if (m.find("Organization") != m.end() && !m["Organization"].empty()) {
      organization = make_shared<string>(boost::any_cast<string>(m["Organization"]));
    }
    if (m.find("OutBytes") != m.end() && !m["OutBytes"].empty()) {
      outBytes = make_shared<long>(boost::any_cast<long>(m["OutBytes"]));
    }
    if (m.find("PrivateAssetCount") != m.end() && !m["PrivateAssetCount"].empty()) {
      privateAssetCount = make_shared<long>(boost::any_cast<long>(m["PrivateAssetCount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SecurityReason") != m.end() && !m["SecurityReason"].empty()) {
      securityReason = make_shared<string>(boost::any_cast<string>(m["SecurityReason"]));
    }
    if (m.find("SecuritySuggest") != m.end() && !m["SecuritySuggest"].empty()) {
      securitySuggest = make_shared<string>(boost::any_cast<string>(m["SecuritySuggest"]));
    }
    if (m.find("SessionCount") != m.end() && !m["SessionCount"].empty()) {
      sessionCount = make_shared<long>(boost::any_cast<long>(m["SessionCount"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<DescribeOutgoingDomainResponseBodyDomainListTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOutgoingDomainResponseBodyDomainListTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<DescribeOutgoingDomainResponseBodyDomainListTagList>>(expect1);
      }
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<string>(boost::any_cast<string>(m["TotalBytes"]));
    }
  }


  virtual ~DescribeOutgoingDomainResponseBodyDomainList() = default;
};
class DescribeOutgoingDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOutgoingDomainResponseBodyDomainList>> domainList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeOutgoingDomainResponseBody() {}

  explicit DescribeOutgoingDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainList) {
      vector<boost::any> temp1;
      for(auto item1:*domainList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainList"] = boost::any(temp1);
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
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainList"].type()) {
        vector<DescribeOutgoingDomainResponseBodyDomainList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOutgoingDomainResponseBodyDomainList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainList = make_shared<vector<DescribeOutgoingDomainResponseBodyDomainList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOutgoingDomainResponseBody() = default;
};
class DescribeOutgoingDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOutgoingDomainResponseBody> body{};

  DescribeOutgoingDomainResponse() {}

  explicit DescribeOutgoingDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeOutgoingDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOutgoingDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOutgoingDomainResponse() = default;
};
class DescribePolicyAdvancedConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribePolicyAdvancedConfigRequest() {}

  explicit DescribePolicyAdvancedConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribePolicyAdvancedConfigRequest() = default;
};
class DescribePolicyAdvancedConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> internetSwitch{};
  shared_ptr<string> requestId{};

  DescribePolicyAdvancedConfigResponseBody() {}

  explicit DescribePolicyAdvancedConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetSwitch) {
      res["InternetSwitch"] = boost::any(*internetSwitch);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternetSwitch") != m.end() && !m["InternetSwitch"].empty()) {
      internetSwitch = make_shared<string>(boost::any_cast<string>(m["InternetSwitch"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePolicyAdvancedConfigResponseBody() = default;
};
class DescribePolicyAdvancedConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyAdvancedConfigResponseBody> body{};

  DescribePolicyAdvancedConfigResponse() {}

  explicit DescribePolicyAdvancedConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePolicyAdvancedConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyAdvancedConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyAdvancedConfigResponse() = default;
};
class DescribePolicyPriorUsedRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribePolicyPriorUsedRequest() {}

  explicit DescribePolicyPriorUsedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribePolicyPriorUsedRequest() = default;
};
class DescribePolicyPriorUsedResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> end{};
  shared_ptr<string> requestId{};
  shared_ptr<long> start{};

  DescribePolicyPriorUsedResponseBody() {}

  explicit DescribePolicyPriorUsedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~DescribePolicyPriorUsedResponseBody() = default;
};
class DescribePolicyPriorUsedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyPriorUsedResponseBody> body{};

  DescribePolicyPriorUsedResponse() {}

  explicit DescribePolicyPriorUsedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePolicyPriorUsedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyPriorUsedResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyPriorUsedResponse() = default;
};
class DescribePostpayTrafficDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> order{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> searchItem{};
  shared_ptr<string> startTime{};
  shared_ptr<string> trafficType{};

  DescribePostpayTrafficDetailRequest() {}

  explicit DescribePostpayTrafficDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (searchItem) {
      res["SearchItem"] = boost::any(*searchItem);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (trafficType) {
      res["TrafficType"] = boost::any(*trafficType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("SearchItem") != m.end() && !m["SearchItem"].empty()) {
      searchItem = make_shared<string>(boost::any_cast<string>(m["SearchItem"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TrafficType") != m.end() && !m["TrafficType"].empty()) {
      trafficType = make_shared<string>(boost::any_cast<string>(m["TrafficType"]));
    }
  }


  virtual ~DescribePostpayTrafficDetailRequest() = default;
};
class DescribePostpayTrafficDetailResponseBodyTrafficList : public Darabonba::Model {
public:
  shared_ptr<long> inBytes{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> outBytes{};
  shared_ptr<long> protectionDuration{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> totalBytes{};
  shared_ptr<string> trafficDay{};
  shared_ptr<string> trafficType{};

  DescribePostpayTrafficDetailResponseBodyTrafficList() {}

  explicit DescribePostpayTrafficDetailResponseBodyTrafficList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inBytes) {
      res["InBytes"] = boost::any(*inBytes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (outBytes) {
      res["OutBytes"] = boost::any(*outBytes);
    }
    if (protectionDuration) {
      res["ProtectionDuration"] = boost::any(*protectionDuration);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    if (trafficDay) {
      res["TrafficDay"] = boost::any(*trafficDay);
    }
    if (trafficType) {
      res["TrafficType"] = boost::any(*trafficType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InBytes") != m.end() && !m["InBytes"].empty()) {
      inBytes = make_shared<long>(boost::any_cast<long>(m["InBytes"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OutBytes") != m.end() && !m["OutBytes"].empty()) {
      outBytes = make_shared<long>(boost::any_cast<long>(m["OutBytes"]));
    }
    if (m.find("ProtectionDuration") != m.end() && !m["ProtectionDuration"].empty()) {
      protectionDuration = make_shared<long>(boost::any_cast<long>(m["ProtectionDuration"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<long>(boost::any_cast<long>(m["TotalBytes"]));
    }
    if (m.find("TrafficDay") != m.end() && !m["TrafficDay"].empty()) {
      trafficDay = make_shared<string>(boost::any_cast<string>(m["TrafficDay"]));
    }
    if (m.find("TrafficType") != m.end() && !m["TrafficType"].empty()) {
      trafficType = make_shared<string>(boost::any_cast<string>(m["TrafficType"]));
    }
  }


  virtual ~DescribePostpayTrafficDetailResponseBodyTrafficList() = default;
};
class DescribePostpayTrafficDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribePostpayTrafficDetailResponseBodyTrafficList>> trafficList{};

  DescribePostpayTrafficDetailResponseBody() {}

  explicit DescribePostpayTrafficDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (trafficList) {
      vector<boost::any> temp1;
      for(auto item1:*trafficList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TrafficList") != m.end() && !m["TrafficList"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficList"].type()) {
        vector<DescribePostpayTrafficDetailResponseBodyTrafficList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePostpayTrafficDetailResponseBodyTrafficList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficList = make_shared<vector<DescribePostpayTrafficDetailResponseBodyTrafficList>>(expect1);
      }
    }
  }


  virtual ~DescribePostpayTrafficDetailResponseBody() = default;
};
class DescribePostpayTrafficDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePostpayTrafficDetailResponseBody> body{};

  DescribePostpayTrafficDetailResponse() {}

  explicit DescribePostpayTrafficDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePostpayTrafficDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePostpayTrafficDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePostpayTrafficDetailResponse() = default;
};
class DescribePostpayTrafficTotalRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  DescribePostpayTrafficTotalRequest() {}

  explicit DescribePostpayTrafficTotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribePostpayTrafficTotalRequest() = default;
};
class DescribePostpayTrafficTotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalAssets{};
  shared_ptr<long> totalBillTraffic{};
  shared_ptr<long> totalInternetAssets{};
  shared_ptr<long> totalInternetTraffic{};
  shared_ptr<long> totalNatAssets{};
  shared_ptr<long> totalNatTraffic{};
  shared_ptr<long> totalSdlBillTraffic{};
  shared_ptr<long> totalSdlFreeTraffic{};
  shared_ptr<long> totalTraffic{};
  shared_ptr<long> totalVpcAssets{};
  shared_ptr<long> totalVpcTraffic{};

  DescribePostpayTrafficTotalResponseBody() {}

  explicit DescribePostpayTrafficTotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalAssets) {
      res["TotalAssets"] = boost::any(*totalAssets);
    }
    if (totalBillTraffic) {
      res["TotalBillTraffic"] = boost::any(*totalBillTraffic);
    }
    if (totalInternetAssets) {
      res["TotalInternetAssets"] = boost::any(*totalInternetAssets);
    }
    if (totalInternetTraffic) {
      res["TotalInternetTraffic"] = boost::any(*totalInternetTraffic);
    }
    if (totalNatAssets) {
      res["TotalNatAssets"] = boost::any(*totalNatAssets);
    }
    if (totalNatTraffic) {
      res["TotalNatTraffic"] = boost::any(*totalNatTraffic);
    }
    if (totalSdlBillTraffic) {
      res["TotalSdlBillTraffic"] = boost::any(*totalSdlBillTraffic);
    }
    if (totalSdlFreeTraffic) {
      res["TotalSdlFreeTraffic"] = boost::any(*totalSdlFreeTraffic);
    }
    if (totalTraffic) {
      res["TotalTraffic"] = boost::any(*totalTraffic);
    }
    if (totalVpcAssets) {
      res["TotalVpcAssets"] = boost::any(*totalVpcAssets);
    }
    if (totalVpcTraffic) {
      res["TotalVpcTraffic"] = boost::any(*totalVpcTraffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalAssets") != m.end() && !m["TotalAssets"].empty()) {
      totalAssets = make_shared<long>(boost::any_cast<long>(m["TotalAssets"]));
    }
    if (m.find("TotalBillTraffic") != m.end() && !m["TotalBillTraffic"].empty()) {
      totalBillTraffic = make_shared<long>(boost::any_cast<long>(m["TotalBillTraffic"]));
    }
    if (m.find("TotalInternetAssets") != m.end() && !m["TotalInternetAssets"].empty()) {
      totalInternetAssets = make_shared<long>(boost::any_cast<long>(m["TotalInternetAssets"]));
    }
    if (m.find("TotalInternetTraffic") != m.end() && !m["TotalInternetTraffic"].empty()) {
      totalInternetTraffic = make_shared<long>(boost::any_cast<long>(m["TotalInternetTraffic"]));
    }
    if (m.find("TotalNatAssets") != m.end() && !m["TotalNatAssets"].empty()) {
      totalNatAssets = make_shared<long>(boost::any_cast<long>(m["TotalNatAssets"]));
    }
    if (m.find("TotalNatTraffic") != m.end() && !m["TotalNatTraffic"].empty()) {
      totalNatTraffic = make_shared<long>(boost::any_cast<long>(m["TotalNatTraffic"]));
    }
    if (m.find("TotalSdlBillTraffic") != m.end() && !m["TotalSdlBillTraffic"].empty()) {
      totalSdlBillTraffic = make_shared<long>(boost::any_cast<long>(m["TotalSdlBillTraffic"]));
    }
    if (m.find("TotalSdlFreeTraffic") != m.end() && !m["TotalSdlFreeTraffic"].empty()) {
      totalSdlFreeTraffic = make_shared<long>(boost::any_cast<long>(m["TotalSdlFreeTraffic"]));
    }
    if (m.find("TotalTraffic") != m.end() && !m["TotalTraffic"].empty()) {
      totalTraffic = make_shared<long>(boost::any_cast<long>(m["TotalTraffic"]));
    }
    if (m.find("TotalVpcAssets") != m.end() && !m["TotalVpcAssets"].empty()) {
      totalVpcAssets = make_shared<long>(boost::any_cast<long>(m["TotalVpcAssets"]));
    }
    if (m.find("TotalVpcTraffic") != m.end() && !m["TotalVpcTraffic"].empty()) {
      totalVpcTraffic = make_shared<long>(boost::any_cast<long>(m["TotalVpcTraffic"]));
    }
  }


  virtual ~DescribePostpayTrafficTotalResponseBody() = default;
};
class DescribePostpayTrafficTotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePostpayTrafficTotalResponseBody> body{};

  DescribePostpayTrafficTotalResponse() {}

  explicit DescribePostpayTrafficTotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePostpayTrafficTotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePostpayTrafficTotalResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePostpayTrafficTotalResponse() = default;
};
class DescribePrefixListsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionNo{};
  shared_ptr<string> sourceIp{};

  DescribePrefixListsRequest() {}

  explicit DescribePrefixListsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribePrefixListsRequest() = default;
};
class DescribePrefixListsResponseBodyPrefixList : public Darabonba::Model {
public:
  shared_ptr<string> addressFamily{};
  shared_ptr<long> associationCount{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<long> maxEntries{};
  shared_ptr<string> prefixListId{};
  shared_ptr<string> prefixListName{};

  DescribePrefixListsResponseBodyPrefixList() {}

  explicit DescribePrefixListsResponseBodyPrefixList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressFamily) {
      res["AddressFamily"] = boost::any(*addressFamily);
    }
    if (associationCount) {
      res["AssociationCount"] = boost::any(*associationCount);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxEntries) {
      res["MaxEntries"] = boost::any(*maxEntries);
    }
    if (prefixListId) {
      res["PrefixListId"] = boost::any(*prefixListId);
    }
    if (prefixListName) {
      res["PrefixListName"] = boost::any(*prefixListName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressFamily") != m.end() && !m["AddressFamily"].empty()) {
      addressFamily = make_shared<string>(boost::any_cast<string>(m["AddressFamily"]));
    }
    if (m.find("AssociationCount") != m.end() && !m["AssociationCount"].empty()) {
      associationCount = make_shared<long>(boost::any_cast<long>(m["AssociationCount"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxEntries") != m.end() && !m["MaxEntries"].empty()) {
      maxEntries = make_shared<long>(boost::any_cast<long>(m["MaxEntries"]));
    }
    if (m.find("PrefixListId") != m.end() && !m["PrefixListId"].empty()) {
      prefixListId = make_shared<string>(boost::any_cast<string>(m["PrefixListId"]));
    }
    if (m.find("PrefixListName") != m.end() && !m["PrefixListName"].empty()) {
      prefixListName = make_shared<string>(boost::any_cast<string>(m["PrefixListName"]));
    }
  }


  virtual ~DescribePrefixListsResponseBodyPrefixList() = default;
};
class DescribePrefixListsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePrefixListsResponseBodyPrefixList>> prefixList{};
  shared_ptr<string> requestId{};

  DescribePrefixListsResponseBody() {}

  explicit DescribePrefixListsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prefixList) {
      vector<boost::any> temp1;
      for(auto item1:*prefixList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrefixList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrefixList") != m.end() && !m["PrefixList"].empty()) {
      if (typeid(vector<boost::any>) == m["PrefixList"].type()) {
        vector<DescribePrefixListsResponseBodyPrefixList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrefixList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePrefixListsResponseBodyPrefixList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        prefixList = make_shared<vector<DescribePrefixListsResponseBodyPrefixList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePrefixListsResponseBody() = default;
};
class DescribePrefixListsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePrefixListsResponseBody> body{};

  DescribePrefixListsResponse() {}

  explicit DescribePrefixListsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePrefixListsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePrefixListsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePrefixListsResponse() = default;
};
class DescribeRiskEventGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attackApp{};
  shared_ptr<string> attackType{};
  shared_ptr<long> buyVersion{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> dataType{};
  shared_ptr<string> direction{};
  shared_ptr<string> dstIP{};
  shared_ptr<string> dstNetworkInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> eventName{};
  shared_ptr<string> firewallType{};
  shared_ptr<string> isOnlyPrivateAssoc{};
  shared_ptr<string> lang{};
  shared_ptr<string> noLocation{};
  shared_ptr<string> order{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> ruleResult{};
  shared_ptr<string> ruleSource{};
  shared_ptr<string> sort{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> srcNetworkInstanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> vulLevel{};

  DescribeRiskEventGroupRequest() {}

  explicit DescribeRiskEventGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackApp) {
      res["AttackApp"] = boost::any(*attackApp);
    }
    if (attackType) {
      res["AttackType"] = boost::any(*attackType);
    }
    if (buyVersion) {
      res["BuyVersion"] = boost::any(*buyVersion);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (dstIP) {
      res["DstIP"] = boost::any(*dstIP);
    }
    if (dstNetworkInstanceId) {
      res["DstNetworkInstanceId"] = boost::any(*dstNetworkInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (firewallType) {
      res["FirewallType"] = boost::any(*firewallType);
    }
    if (isOnlyPrivateAssoc) {
      res["IsOnlyPrivateAssoc"] = boost::any(*isOnlyPrivateAssoc);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (noLocation) {
      res["NoLocation"] = boost::any(*noLocation);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ruleResult) {
      res["RuleResult"] = boost::any(*ruleResult);
    }
    if (ruleSource) {
      res["RuleSource"] = boost::any(*ruleSource);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (srcNetworkInstanceId) {
      res["SrcNetworkInstanceId"] = boost::any(*srcNetworkInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (vulLevel) {
      res["VulLevel"] = boost::any(*vulLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackApp") != m.end() && !m["AttackApp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AttackApp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AttackApp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attackApp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AttackType") != m.end() && !m["AttackType"].empty()) {
      attackType = make_shared<string>(boost::any_cast<string>(m["AttackType"]));
    }
    if (m.find("BuyVersion") != m.end() && !m["BuyVersion"].empty()) {
      buyVersion = make_shared<long>(boost::any_cast<long>(m["BuyVersion"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("DstIP") != m.end() && !m["DstIP"].empty()) {
      dstIP = make_shared<string>(boost::any_cast<string>(m["DstIP"]));
    }
    if (m.find("DstNetworkInstanceId") != m.end() && !m["DstNetworkInstanceId"].empty()) {
      dstNetworkInstanceId = make_shared<string>(boost::any_cast<string>(m["DstNetworkInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("FirewallType") != m.end() && !m["FirewallType"].empty()) {
      firewallType = make_shared<string>(boost::any_cast<string>(m["FirewallType"]));
    }
    if (m.find("IsOnlyPrivateAssoc") != m.end() && !m["IsOnlyPrivateAssoc"].empty()) {
      isOnlyPrivateAssoc = make_shared<string>(boost::any_cast<string>(m["IsOnlyPrivateAssoc"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NoLocation") != m.end() && !m["NoLocation"].empty()) {
      noLocation = make_shared<string>(boost::any_cast<string>(m["NoLocation"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RuleResult") != m.end() && !m["RuleResult"].empty()) {
      ruleResult = make_shared<string>(boost::any_cast<string>(m["RuleResult"]));
    }
    if (m.find("RuleSource") != m.end() && !m["RuleSource"].empty()) {
      ruleSource = make_shared<string>(boost::any_cast<string>(m["RuleSource"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("SrcNetworkInstanceId") != m.end() && !m["SrcNetworkInstanceId"].empty()) {
      srcNetworkInstanceId = make_shared<string>(boost::any_cast<string>(m["SrcNetworkInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("VulLevel") != m.end() && !m["VulLevel"].empty()) {
      vulLevel = make_shared<string>(boost::any_cast<string>(m["VulLevel"]));
    }
  }


  virtual ~DescribeRiskEventGroupRequest() = default;
};
class DescribeRiskEventGroupResponseBodyDataListIPLocationInfo : public Darabonba::Model {
public:
  shared_ptr<string> cityId{};
  shared_ptr<string> cityName{};
  shared_ptr<string> countryId{};
  shared_ptr<string> countryName{};

  DescribeRiskEventGroupResponseBodyDataListIPLocationInfo() {}

  explicit DescribeRiskEventGroupResponseBodyDataListIPLocationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityId) {
      res["CityId"] = boost::any(*cityId);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (countryName) {
      res["CountryName"] = boost::any(*countryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CityId") != m.end() && !m["CityId"].empty()) {
      cityId = make_shared<string>(boost::any_cast<string>(m["CityId"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("CountryName") != m.end() && !m["CountryName"].empty()) {
      countryName = make_shared<string>(boost::any_cast<string>(m["CountryName"]));
    }
  }


  virtual ~DescribeRiskEventGroupResponseBodyDataListIPLocationInfo() = default;
};
class DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList : public Darabonba::Model {
public:
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceInstanceId{};
  shared_ptr<string> resourceInstanceName{};
  shared_ptr<string> resourcePrivateIP{};

  DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList() {}

  explicit DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceInstanceId) {
      res["ResourceInstanceId"] = boost::any(*resourceInstanceId);
    }
    if (resourceInstanceName) {
      res["ResourceInstanceName"] = boost::any(*resourceInstanceName);
    }
    if (resourcePrivateIP) {
      res["ResourcePrivateIP"] = boost::any(*resourcePrivateIP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceInstanceId") != m.end() && !m["ResourceInstanceId"].empty()) {
      resourceInstanceId = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceId"]));
    }
    if (m.find("ResourceInstanceName") != m.end() && !m["ResourceInstanceName"].empty()) {
      resourceInstanceName = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceName"]));
    }
    if (m.find("ResourcePrivateIP") != m.end() && !m["ResourcePrivateIP"].empty()) {
      resourcePrivateIP = make_shared<string>(boost::any_cast<string>(m["ResourcePrivateIP"]));
    }
  }


  virtual ~DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList() = default;
};
class DescribeRiskEventGroupResponseBodyDataListVpcDstInfo : public Darabonba::Model {
public:
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> ecsInstanceName{};
  shared_ptr<string> networkInstanceId{};
  shared_ptr<string> networkInstanceName{};
  shared_ptr<string> regionNo{};

  DescribeRiskEventGroupResponseBodyDataListVpcDstInfo() {}

  explicit DescribeRiskEventGroupResponseBodyDataListVpcDstInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (ecsInstanceName) {
      res["EcsInstanceName"] = boost::any(*ecsInstanceName);
    }
    if (networkInstanceId) {
      res["NetworkInstanceId"] = boost::any(*networkInstanceId);
    }
    if (networkInstanceName) {
      res["NetworkInstanceName"] = boost::any(*networkInstanceName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("EcsInstanceName") != m.end() && !m["EcsInstanceName"].empty()) {
      ecsInstanceName = make_shared<string>(boost::any_cast<string>(m["EcsInstanceName"]));
    }
    if (m.find("NetworkInstanceId") != m.end() && !m["NetworkInstanceId"].empty()) {
      networkInstanceId = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceId"]));
    }
    if (m.find("NetworkInstanceName") != m.end() && !m["NetworkInstanceName"].empty()) {
      networkInstanceName = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
  }


  virtual ~DescribeRiskEventGroupResponseBodyDataListVpcDstInfo() = default;
};
class DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo : public Darabonba::Model {
public:
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> ecsInstanceName{};
  shared_ptr<string> networkInstanceId{};
  shared_ptr<string> networkInstanceName{};
  shared_ptr<string> regionNo{};

  DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo() {}

  explicit DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (ecsInstanceName) {
      res["EcsInstanceName"] = boost::any(*ecsInstanceName);
    }
    if (networkInstanceId) {
      res["NetworkInstanceId"] = boost::any(*networkInstanceId);
    }
    if (networkInstanceName) {
      res["NetworkInstanceName"] = boost::any(*networkInstanceName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("EcsInstanceName") != m.end() && !m["EcsInstanceName"].empty()) {
      ecsInstanceName = make_shared<string>(boost::any_cast<string>(m["EcsInstanceName"]));
    }
    if (m.find("NetworkInstanceId") != m.end() && !m["NetworkInstanceId"].empty()) {
      networkInstanceId = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceId"]));
    }
    if (m.find("NetworkInstanceName") != m.end() && !m["NetworkInstanceName"].empty()) {
      networkInstanceName = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
  }


  virtual ~DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo() = default;
};
class DescribeRiskEventGroupResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> attackApp{};
  shared_ptr<long> attackType{};
  shared_ptr<string> description{};
  shared_ptr<string> direction{};
  shared_ptr<string> dstIP{};
  shared_ptr<long> eventCount{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventName{};
  shared_ptr<long> firstEventTime{};
  shared_ptr<DescribeRiskEventGroupResponseBodyDataListIPLocationInfo> IPLocationInfo{};
  shared_ptr<long> lastEventTime{};
  shared_ptr<vector<DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList>> resourcePrivateIPList{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> ruleId{};
  shared_ptr<long> ruleResult{};
  shared_ptr<long> ruleSource{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> srcIPTag{};
  shared_ptr<vector<string>> srcPrivateIPList{};
  shared_ptr<string> tag{};
  shared_ptr<DescribeRiskEventGroupResponseBodyDataListVpcDstInfo> vpcDstInfo{};
  shared_ptr<DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo> vpcSrcInfo{};
  shared_ptr<long> vulLevel{};

  DescribeRiskEventGroupResponseBodyDataList() {}

  explicit DescribeRiskEventGroupResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackApp) {
      res["AttackApp"] = boost::any(*attackApp);
    }
    if (attackType) {
      res["AttackType"] = boost::any(*attackType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (dstIP) {
      res["DstIP"] = boost::any(*dstIP);
    }
    if (eventCount) {
      res["EventCount"] = boost::any(*eventCount);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (firstEventTime) {
      res["FirstEventTime"] = boost::any(*firstEventTime);
    }
    if (IPLocationInfo) {
      res["IPLocationInfo"] = IPLocationInfo ? boost::any(IPLocationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lastEventTime) {
      res["LastEventTime"] = boost::any(*lastEventTime);
    }
    if (resourcePrivateIPList) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePrivateIPList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePrivateIPList"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleResult) {
      res["RuleResult"] = boost::any(*ruleResult);
    }
    if (ruleSource) {
      res["RuleSource"] = boost::any(*ruleSource);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (srcIPTag) {
      res["SrcIPTag"] = boost::any(*srcIPTag);
    }
    if (srcPrivateIPList) {
      res["SrcPrivateIPList"] = boost::any(*srcPrivateIPList);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (vpcDstInfo) {
      res["VpcDstInfo"] = vpcDstInfo ? boost::any(vpcDstInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcSrcInfo) {
      res["VpcSrcInfo"] = vpcSrcInfo ? boost::any(vpcSrcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vulLevel) {
      res["VulLevel"] = boost::any(*vulLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackApp") != m.end() && !m["AttackApp"].empty()) {
      attackApp = make_shared<string>(boost::any_cast<string>(m["AttackApp"]));
    }
    if (m.find("AttackType") != m.end() && !m["AttackType"].empty()) {
      attackType = make_shared<long>(boost::any_cast<long>(m["AttackType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("DstIP") != m.end() && !m["DstIP"].empty()) {
      dstIP = make_shared<string>(boost::any_cast<string>(m["DstIP"]));
    }
    if (m.find("EventCount") != m.end() && !m["EventCount"].empty()) {
      eventCount = make_shared<long>(boost::any_cast<long>(m["EventCount"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("FirstEventTime") != m.end() && !m["FirstEventTime"].empty()) {
      firstEventTime = make_shared<long>(boost::any_cast<long>(m["FirstEventTime"]));
    }
    if (m.find("IPLocationInfo") != m.end() && !m["IPLocationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IPLocationInfo"].type()) {
        DescribeRiskEventGroupResponseBodyDataListIPLocationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IPLocationInfo"]));
        IPLocationInfo = make_shared<DescribeRiskEventGroupResponseBodyDataListIPLocationInfo>(model1);
      }
    }
    if (m.find("LastEventTime") != m.end() && !m["LastEventTime"].empty()) {
      lastEventTime = make_shared<long>(boost::any_cast<long>(m["LastEventTime"]));
    }
    if (m.find("ResourcePrivateIPList") != m.end() && !m["ResourcePrivateIPList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePrivateIPList"].type()) {
        vector<DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePrivateIPList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePrivateIPList = make_shared<vector<DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleResult") != m.end() && !m["RuleResult"].empty()) {
      ruleResult = make_shared<long>(boost::any_cast<long>(m["RuleResult"]));
    }
    if (m.find("RuleSource") != m.end() && !m["RuleSource"].empty()) {
      ruleSource = make_shared<long>(boost::any_cast<long>(m["RuleSource"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("SrcIPTag") != m.end() && !m["SrcIPTag"].empty()) {
      srcIPTag = make_shared<string>(boost::any_cast<string>(m["SrcIPTag"]));
    }
    if (m.find("SrcPrivateIPList") != m.end() && !m["SrcPrivateIPList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SrcPrivateIPList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SrcPrivateIPList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      srcPrivateIPList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("VpcDstInfo") != m.end() && !m["VpcDstInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcDstInfo"].type()) {
        DescribeRiskEventGroupResponseBodyDataListVpcDstInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcDstInfo"]));
        vpcDstInfo = make_shared<DescribeRiskEventGroupResponseBodyDataListVpcDstInfo>(model1);
      }
    }
    if (m.find("VpcSrcInfo") != m.end() && !m["VpcSrcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcSrcInfo"].type()) {
        DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcSrcInfo"]));
        vpcSrcInfo = make_shared<DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo>(model1);
      }
    }
    if (m.find("VulLevel") != m.end() && !m["VulLevel"].empty()) {
      vulLevel = make_shared<long>(boost::any_cast<long>(m["VulLevel"]));
    }
  }


  virtual ~DescribeRiskEventGroupResponseBodyDataList() = default;
};
class DescribeRiskEventGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRiskEventGroupResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeRiskEventGroupResponseBody() {}

  explicit DescribeRiskEventGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeRiskEventGroupResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRiskEventGroupResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeRiskEventGroupResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRiskEventGroupResponseBody() = default;
};
class DescribeRiskEventGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRiskEventGroupResponseBody> body{};

  DescribeRiskEventGroupResponse() {}

  explicit DescribeRiskEventGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRiskEventGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRiskEventGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRiskEventGroupResponse() = default;
};
class DescribeRiskEventPayloadRequest : public Darabonba::Model {
public:
  shared_ptr<string> dstIP{};
  shared_ptr<string> dstVpcId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> firewallType{};
  shared_ptr<string> publicIP{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> srcVpcId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> UUID{};

  DescribeRiskEventPayloadRequest() {}

  explicit DescribeRiskEventPayloadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstIP) {
      res["DstIP"] = boost::any(*dstIP);
    }
    if (dstVpcId) {
      res["DstVpcId"] = boost::any(*dstVpcId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (firewallType) {
      res["FirewallType"] = boost::any(*firewallType);
    }
    if (publicIP) {
      res["PublicIP"] = boost::any(*publicIP);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (srcVpcId) {
      res["SrcVpcId"] = boost::any(*srcVpcId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (UUID) {
      res["UUID"] = boost::any(*UUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstIP") != m.end() && !m["DstIP"].empty()) {
      dstIP = make_shared<string>(boost::any_cast<string>(m["DstIP"]));
    }
    if (m.find("DstVpcId") != m.end() && !m["DstVpcId"].empty()) {
      dstVpcId = make_shared<string>(boost::any_cast<string>(m["DstVpcId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FirewallType") != m.end() && !m["FirewallType"].empty()) {
      firewallType = make_shared<string>(boost::any_cast<string>(m["FirewallType"]));
    }
    if (m.find("PublicIP") != m.end() && !m["PublicIP"].empty()) {
      publicIP = make_shared<string>(boost::any_cast<string>(m["PublicIP"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("SrcVpcId") != m.end() && !m["SrcVpcId"].empty()) {
      srcVpcId = make_shared<string>(boost::any_cast<string>(m["SrcVpcId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UUID") != m.end() && !m["UUID"].empty()) {
      UUID = make_shared<string>(boost::any_cast<string>(m["UUID"]));
    }
  }


  virtual ~DescribeRiskEventPayloadRequest() = default;
};
class DescribeRiskEventPayloadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dstIP{};
  shared_ptr<long> dstPort{};
  shared_ptr<string> dstVpcId{};
  shared_ptr<long> hitContentType{};
  shared_ptr<long> hitTo{};
  shared_ptr<string> parsedContent{};
  shared_ptr<string> payload{};
  shared_ptr<long> payloadLen{};
  shared_ptr<string> proto{};
  shared_ptr<string> realIp{};
  shared_ptr<string> requestId{};
  shared_ptr<string> srcIP{};
  shared_ptr<long> srcPort{};
  shared_ptr<string> srcVpcId{};
  shared_ptr<string> XForwardFor{};

  DescribeRiskEventPayloadResponseBody() {}

  explicit DescribeRiskEventPayloadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstIP) {
      res["DstIP"] = boost::any(*dstIP);
    }
    if (dstPort) {
      res["DstPort"] = boost::any(*dstPort);
    }
    if (dstVpcId) {
      res["DstVpcId"] = boost::any(*dstVpcId);
    }
    if (hitContentType) {
      res["HitContentType"] = boost::any(*hitContentType);
    }
    if (hitTo) {
      res["HitTo"] = boost::any(*hitTo);
    }
    if (parsedContent) {
      res["ParsedContent"] = boost::any(*parsedContent);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (payloadLen) {
      res["PayloadLen"] = boost::any(*payloadLen);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (realIp) {
      res["RealIp"] = boost::any(*realIp);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (srcPort) {
      res["SrcPort"] = boost::any(*srcPort);
    }
    if (srcVpcId) {
      res["SrcVpcId"] = boost::any(*srcVpcId);
    }
    if (XForwardFor) {
      res["XForwardFor"] = boost::any(*XForwardFor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstIP") != m.end() && !m["DstIP"].empty()) {
      dstIP = make_shared<string>(boost::any_cast<string>(m["DstIP"]));
    }
    if (m.find("DstPort") != m.end() && !m["DstPort"].empty()) {
      dstPort = make_shared<long>(boost::any_cast<long>(m["DstPort"]));
    }
    if (m.find("DstVpcId") != m.end() && !m["DstVpcId"].empty()) {
      dstVpcId = make_shared<string>(boost::any_cast<string>(m["DstVpcId"]));
    }
    if (m.find("HitContentType") != m.end() && !m["HitContentType"].empty()) {
      hitContentType = make_shared<long>(boost::any_cast<long>(m["HitContentType"]));
    }
    if (m.find("HitTo") != m.end() && !m["HitTo"].empty()) {
      hitTo = make_shared<long>(boost::any_cast<long>(m["HitTo"]));
    }
    if (m.find("ParsedContent") != m.end() && !m["ParsedContent"].empty()) {
      parsedContent = make_shared<string>(boost::any_cast<string>(m["ParsedContent"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("PayloadLen") != m.end() && !m["PayloadLen"].empty()) {
      payloadLen = make_shared<long>(boost::any_cast<long>(m["PayloadLen"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("RealIp") != m.end() && !m["RealIp"].empty()) {
      realIp = make_shared<string>(boost::any_cast<string>(m["RealIp"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("SrcPort") != m.end() && !m["SrcPort"].empty()) {
      srcPort = make_shared<long>(boost::any_cast<long>(m["SrcPort"]));
    }
    if (m.find("SrcVpcId") != m.end() && !m["SrcVpcId"].empty()) {
      srcVpcId = make_shared<string>(boost::any_cast<string>(m["SrcVpcId"]));
    }
    if (m.find("XForwardFor") != m.end() && !m["XForwardFor"].empty()) {
      XForwardFor = make_shared<string>(boost::any_cast<string>(m["XForwardFor"]));
    }
  }


  virtual ~DescribeRiskEventPayloadResponseBody() = default;
};
class DescribeRiskEventPayloadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRiskEventPayloadResponseBody> body{};

  DescribeRiskEventPayloadResponse() {}

  explicit DescribeRiskEventPayloadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRiskEventPayloadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRiskEventPayloadResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRiskEventPayloadResponse() = default;
};
class DescribeSignatureLibVersionResponseBodyVersion : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> version{};

  DescribeSignatureLibVersionResponseBodyVersion() {}

  explicit DescribeSignatureLibVersionResponseBodyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeSignatureLibVersionResponseBodyVersion() = default;
};
class DescribeSignatureLibVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeSignatureLibVersionResponseBodyVersion>> version{};

  DescribeSignatureLibVersionResponseBody() {}

  explicit DescribeSignatureLibVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (version) {
      vector<boost::any> temp1;
      for(auto item1:*version){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Version"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      if (typeid(vector<boost::any>) == m["Version"].type()) {
        vector<DescribeSignatureLibVersionResponseBodyVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Version"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSignatureLibVersionResponseBodyVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        version = make_shared<vector<DescribeSignatureLibVersionResponseBodyVersion>>(expect1);
      }
    }
  }


  virtual ~DescribeSignatureLibVersionResponseBody() = default;
};
class DescribeSignatureLibVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSignatureLibVersionResponseBody> body{};

  DescribeSignatureLibVersionResponse() {}

  explicit DescribeSignatureLibVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSignatureLibVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSignatureLibVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSignatureLibVersionResponse() = default;
};
class DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateType{};

  DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList() {}

  explicit DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
  }


  virtual ~DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList() = default;
};
class DescribeTrFirewallPolicyBackUpAssociationListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList>> candidateList{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  DescribeTrFirewallPolicyBackUpAssociationListRequest() {}

  explicit DescribeTrFirewallPolicyBackUpAssociationListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateList) {
      vector<boost::any> temp1;
      for(auto item1:*candidateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CandidateList"] = boost::any(temp1);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateList") != m.end() && !m["CandidateList"].empty()) {
      if (typeid(vector<boost::any>) == m["CandidateList"].type()) {
        vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CandidateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        candidateList = make_shared<vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList>>(expect1);
      }
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~DescribeTrFirewallPolicyBackUpAssociationListRequest() = default;
};
class DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> candidateListShrink{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest() {}

  explicit DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateListShrink) {
      res["CandidateList"] = boost::any(*candidateListShrink);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateList") != m.end() && !m["CandidateList"].empty()) {
      candidateListShrink = make_shared<string>(boost::any_cast<string>(m["CandidateList"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest() = default;
};
class DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateName{};
  shared_ptr<string> candidateType{};
  shared_ptr<string> currentRouteTableId{};
  shared_ptr<string> originalRouteTableId{};

  DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs() {}

  explicit DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateName) {
      res["CandidateName"] = boost::any(*candidateName);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    if (currentRouteTableId) {
      res["CurrentRouteTableId"] = boost::any(*currentRouteTableId);
    }
    if (originalRouteTableId) {
      res["OriginalRouteTableId"] = boost::any(*originalRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateName") != m.end() && !m["CandidateName"].empty()) {
      candidateName = make_shared<string>(boost::any_cast<string>(m["CandidateName"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
    if (m.find("CurrentRouteTableId") != m.end() && !m["CurrentRouteTableId"].empty()) {
      currentRouteTableId = make_shared<string>(boost::any_cast<string>(m["CurrentRouteTableId"]));
    }
    if (m.find("OriginalRouteTableId") != m.end() && !m["OriginalRouteTableId"].empty()) {
      originalRouteTableId = make_shared<string>(boost::any_cast<string>(m["OriginalRouteTableId"]));
    }
  }


  virtual ~DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs() = default;
};
class DescribeTrFirewallPolicyBackUpAssociationListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs>> policyAssociationBackupConfigs{};
  shared_ptr<string> requestId{};

  DescribeTrFirewallPolicyBackUpAssociationListResponseBody() {}

  explicit DescribeTrFirewallPolicyBackUpAssociationListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyAssociationBackupConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*policyAssociationBackupConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyAssociationBackupConfigs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyAssociationBackupConfigs") != m.end() && !m["PolicyAssociationBackupConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyAssociationBackupConfigs"].type()) {
        vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyAssociationBackupConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyAssociationBackupConfigs = make_shared<vector<DescribeTrFirewallPolicyBackUpAssociationListResponseBodyPolicyAssociationBackupConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTrFirewallPolicyBackUpAssociationListResponseBody() = default;
};
class DescribeTrFirewallPolicyBackUpAssociationListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrFirewallPolicyBackUpAssociationListResponseBody> body{};

  DescribeTrFirewallPolicyBackUpAssociationListResponse() {}

  explicit DescribeTrFirewallPolicyBackUpAssociationListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTrFirewallPolicyBackUpAssociationListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrFirewallPolicyBackUpAssociationListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrFirewallPolicyBackUpAssociationListResponse() = default;
};
class DescribeTrFirewallV2RoutePolicyListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyId{};

  DescribeTrFirewallV2RoutePolicyListRequest() {}

  explicit DescribeTrFirewallV2RoutePolicyListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~DescribeTrFirewallV2RoutePolicyListRequest() = default;
};
class DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateType{};

  DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList() {}

  explicit DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
  }


  virtual ~DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList() = default;
};
class DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateType{};

  DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList() {}

  explicit DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
  }


  virtual ~DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList() = default;
};
class DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList>> destCandidateList{};
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyStatus{};
  shared_ptr<string> policyType{};
  shared_ptr<vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList>> srcCandidateList{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies() {}

  explicit DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destCandidateList) {
      vector<boost::any> temp1;
      for(auto item1:*destCandidateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DestCandidateList"] = boost::any(temp1);
    }
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyStatus) {
      res["PolicyStatus"] = boost::any(*policyStatus);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (srcCandidateList) {
      vector<boost::any> temp1;
      for(auto item1:*srcCandidateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SrcCandidateList"] = boost::any(temp1);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestCandidateList") != m.end() && !m["DestCandidateList"].empty()) {
      if (typeid(vector<boost::any>) == m["DestCandidateList"].type()) {
        vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DestCandidateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        destCandidateList = make_shared<vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesDestCandidateList>>(expect1);
      }
    }
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyStatus") != m.end() && !m["PolicyStatus"].empty()) {
      policyStatus = make_shared<string>(boost::any_cast<string>(m["PolicyStatus"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("SrcCandidateList") != m.end() && !m["SrcCandidateList"].empty()) {
      if (typeid(vector<boost::any>) == m["SrcCandidateList"].type()) {
        vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SrcCandidateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        srcCandidateList = make_shared<vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePoliciesSrcCandidateList>>(expect1);
      }
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies() = default;
};
class DescribeTrFirewallV2RoutePolicyListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};
  shared_ptr<vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies>> trFirewallRoutePolicies{};

  DescribeTrFirewallV2RoutePolicyListResponseBody() {}

  explicit DescribeTrFirewallV2RoutePolicyListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (trFirewallRoutePolicies) {
      vector<boost::any> temp1;
      for(auto item1:*trFirewallRoutePolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrFirewallRoutePolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("TrFirewallRoutePolicies") != m.end() && !m["TrFirewallRoutePolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["TrFirewallRoutePolicies"].type()) {
        vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrFirewallRoutePolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trFirewallRoutePolicies = make_shared<vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies>>(expect1);
      }
    }
  }


  virtual ~DescribeTrFirewallV2RoutePolicyListResponseBody() = default;
};
class DescribeTrFirewallV2RoutePolicyListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrFirewallV2RoutePolicyListResponseBody> body{};

  DescribeTrFirewallV2RoutePolicyListResponse() {}

  explicit DescribeTrFirewallV2RoutePolicyListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTrFirewallV2RoutePolicyListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrFirewallV2RoutePolicyListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrFirewallV2RoutePolicyListResponse() = default;
};
class DescribeTrFirewallsV2DetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};

  DescribeTrFirewallsV2DetailRequest() {}

  explicit DescribeTrFirewallsV2DetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeTrFirewallsV2DetailRequest() = default;
};
class DescribeTrFirewallsV2DetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> firewallDescription{};
  shared_ptr<string> firewallEniId{};
  shared_ptr<string> firewallEniVpcId{};
  shared_ptr<string> firewallEniVswitchId{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> firewallName{};
  shared_ptr<string> firewallStatus{};
  shared_ptr<string> firewallSubnetCidr{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<string> firewallVpcCidr{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> routeMode{};
  shared_ptr<string> trAttachmentMasterCidr{};
  shared_ptr<string> trAttachmentMasterZone{};
  shared_ptr<string> trAttachmentSlaveCidr{};
  shared_ptr<string> trAttachmentSlaveZone{};
  shared_ptr<string> transitRouterId{};

  DescribeTrFirewallsV2DetailResponseBody() {}

  explicit DescribeTrFirewallsV2DetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (firewallDescription) {
      res["FirewallDescription"] = boost::any(*firewallDescription);
    }
    if (firewallEniId) {
      res["FirewallEniId"] = boost::any(*firewallEniId);
    }
    if (firewallEniVpcId) {
      res["FirewallEniVpcId"] = boost::any(*firewallEniVpcId);
    }
    if (firewallEniVswitchId) {
      res["FirewallEniVswitchId"] = boost::any(*firewallEniVswitchId);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (firewallName) {
      res["FirewallName"] = boost::any(*firewallName);
    }
    if (firewallStatus) {
      res["FirewallStatus"] = boost::any(*firewallStatus);
    }
    if (firewallSubnetCidr) {
      res["FirewallSubnetCidr"] = boost::any(*firewallSubnetCidr);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (firewallVpcCidr) {
      res["FirewallVpcCidr"] = boost::any(*firewallVpcCidr);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (routeMode) {
      res["RouteMode"] = boost::any(*routeMode);
    }
    if (trAttachmentMasterCidr) {
      res["TrAttachmentMasterCidr"] = boost::any(*trAttachmentMasterCidr);
    }
    if (trAttachmentMasterZone) {
      res["TrAttachmentMasterZone"] = boost::any(*trAttachmentMasterZone);
    }
    if (trAttachmentSlaveCidr) {
      res["TrAttachmentSlaveCidr"] = boost::any(*trAttachmentSlaveCidr);
    }
    if (trAttachmentSlaveZone) {
      res["TrAttachmentSlaveZone"] = boost::any(*trAttachmentSlaveZone);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("FirewallDescription") != m.end() && !m["FirewallDescription"].empty()) {
      firewallDescription = make_shared<string>(boost::any_cast<string>(m["FirewallDescription"]));
    }
    if (m.find("FirewallEniId") != m.end() && !m["FirewallEniId"].empty()) {
      firewallEniId = make_shared<string>(boost::any_cast<string>(m["FirewallEniId"]));
    }
    if (m.find("FirewallEniVpcId") != m.end() && !m["FirewallEniVpcId"].empty()) {
      firewallEniVpcId = make_shared<string>(boost::any_cast<string>(m["FirewallEniVpcId"]));
    }
    if (m.find("FirewallEniVswitchId") != m.end() && !m["FirewallEniVswitchId"].empty()) {
      firewallEniVswitchId = make_shared<string>(boost::any_cast<string>(m["FirewallEniVswitchId"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("FirewallName") != m.end() && !m["FirewallName"].empty()) {
      firewallName = make_shared<string>(boost::any_cast<string>(m["FirewallName"]));
    }
    if (m.find("FirewallStatus") != m.end() && !m["FirewallStatus"].empty()) {
      firewallStatus = make_shared<string>(boost::any_cast<string>(m["FirewallStatus"]));
    }
    if (m.find("FirewallSubnetCidr") != m.end() && !m["FirewallSubnetCidr"].empty()) {
      firewallSubnetCidr = make_shared<string>(boost::any_cast<string>(m["FirewallSubnetCidr"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("FirewallVpcCidr") != m.end() && !m["FirewallVpcCidr"].empty()) {
      firewallVpcCidr = make_shared<string>(boost::any_cast<string>(m["FirewallVpcCidr"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RouteMode") != m.end() && !m["RouteMode"].empty()) {
      routeMode = make_shared<string>(boost::any_cast<string>(m["RouteMode"]));
    }
    if (m.find("TrAttachmentMasterCidr") != m.end() && !m["TrAttachmentMasterCidr"].empty()) {
      trAttachmentMasterCidr = make_shared<string>(boost::any_cast<string>(m["TrAttachmentMasterCidr"]));
    }
    if (m.find("TrAttachmentMasterZone") != m.end() && !m["TrAttachmentMasterZone"].empty()) {
      trAttachmentMasterZone = make_shared<string>(boost::any_cast<string>(m["TrAttachmentMasterZone"]));
    }
    if (m.find("TrAttachmentSlaveCidr") != m.end() && !m["TrAttachmentSlaveCidr"].empty()) {
      trAttachmentSlaveCidr = make_shared<string>(boost::any_cast<string>(m["TrAttachmentSlaveCidr"]));
    }
    if (m.find("TrAttachmentSlaveZone") != m.end() && !m["TrAttachmentSlaveZone"].empty()) {
      trAttachmentSlaveZone = make_shared<string>(boost::any_cast<string>(m["TrAttachmentSlaveZone"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~DescribeTrFirewallsV2DetailResponseBody() = default;
};
class DescribeTrFirewallsV2DetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrFirewallsV2DetailResponseBody> body{};

  DescribeTrFirewallsV2DetailResponse() {}

  explicit DescribeTrFirewallsV2DetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTrFirewallsV2DetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrFirewallsV2DetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrFirewallsV2DetailResponse() = default;
};
class DescribeTrFirewallsV2ListRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> firewallName{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<string> lang{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> routeMode{};
  shared_ptr<string> transitRouterId{};

  DescribeTrFirewallsV2ListRequest() {}

  explicit DescribeTrFirewallsV2ListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (firewallName) {
      res["FirewallName"] = boost::any(*firewallName);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (routeMode) {
      res["RouteMode"] = boost::any(*routeMode);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("FirewallName") != m.end() && !m["FirewallName"].empty()) {
      firewallName = make_shared<string>(boost::any_cast<string>(m["FirewallName"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RouteMode") != m.end() && !m["RouteMode"].empty()) {
      routeMode = make_shared<string>(boost::any_cast<string>(m["RouteMode"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
  }


  virtual ~DescribeTrFirewallsV2ListRequest() = default;
};
class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig : public Darabonba::Model {
public:
  shared_ptr<long> strictMode{};

  DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig() {}

  explicit DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (strictMode) {
      res["StrictMode"] = boost::any(*strictMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StrictMode") != m.end() && !m["StrictMode"].empty()) {
      strictMode = make_shared<long>(boost::any_cast<long>(m["StrictMode"]));
    }
  }


  virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig() = default;
};
class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig : public Darabonba::Model {
public:
  shared_ptr<long> basicRules{};
  shared_ptr<long> enableAllPatch{};
  shared_ptr<long> ruleClass{};
  shared_ptr<long> runMode{};

  DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig() {}

  explicit DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicRules) {
      res["BasicRules"] = boost::any(*basicRules);
    }
    if (enableAllPatch) {
      res["EnableAllPatch"] = boost::any(*enableAllPatch);
    }
    if (ruleClass) {
      res["RuleClass"] = boost::any(*ruleClass);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicRules") != m.end() && !m["BasicRules"].empty()) {
      basicRules = make_shared<long>(boost::any_cast<long>(m["BasicRules"]));
    }
    if (m.find("EnableAllPatch") != m.end() && !m["EnableAllPatch"].empty()) {
      enableAllPatch = make_shared<long>(boost::any_cast<long>(m["EnableAllPatch"]));
    }
    if (m.find("RuleClass") != m.end() && !m["RuleClass"].empty()) {
      ruleClass = make_shared<long>(boost::any_cast<long>(m["RuleClass"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<long>(boost::any_cast<long>(m["RunMode"]));
    }
  }


  virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig() = default;
};
class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> ecrList{};
  shared_ptr<vector<string>> peerTrList{};
  shared_ptr<vector<string>> vbrList{};
  shared_ptr<vector<string>> vpcList{};
  shared_ptr<vector<string>> vpnList{};

  DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource() {}

  explicit DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ecrList) {
      res["EcrList"] = boost::any(*ecrList);
    }
    if (peerTrList) {
      res["PeerTrList"] = boost::any(*peerTrList);
    }
    if (vbrList) {
      res["VbrList"] = boost::any(*vbrList);
    }
    if (vpcList) {
      res["VpcList"] = boost::any(*vpcList);
    }
    if (vpnList) {
      res["VpnList"] = boost::any(*vpnList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("EcrList") != m.end() && !m["EcrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EcrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EcrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ecrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PeerTrList") != m.end() && !m["PeerTrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PeerTrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PeerTrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      peerTrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VbrList") != m.end() && !m["VbrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VbrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VbrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vbrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcList") != m.end() && !m["VpcList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpnList") != m.end() && !m["VpnList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpnList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpnList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpnList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource() = default;
};
class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> ecrList{};
  shared_ptr<vector<string>> peerTrList{};
  shared_ptr<vector<string>> vbrList{};
  shared_ptr<vector<string>> vpcList{};
  shared_ptr<vector<string>> vpnList{};

  DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource() {}

  explicit DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ecrList) {
      res["EcrList"] = boost::any(*ecrList);
    }
    if (peerTrList) {
      res["PeerTrList"] = boost::any(*peerTrList);
    }
    if (vbrList) {
      res["VbrList"] = boost::any(*vbrList);
    }
    if (vpcList) {
      res["VpcList"] = boost::any(*vpcList);
    }
    if (vpnList) {
      res["VpnList"] = boost::any(*vpnList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("EcrList") != m.end() && !m["EcrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EcrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EcrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ecrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PeerTrList") != m.end() && !m["PeerTrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PeerTrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PeerTrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      peerTrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VbrList") != m.end() && !m["VbrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VbrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VbrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vbrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcList") != m.end() && !m["VpcList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpnList") != m.end() && !m["VpnList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpnList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpnList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpnList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource() = default;
};
class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls : public Darabonba::Model {
public:
  shared_ptr<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig> aclConfig{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenName{};
  shared_ptr<string> cloudFirewallVpcOrderType{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig> ipsConfig{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> precheckStatus{};
  shared_ptr<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource> protectedResource{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> regionStatus{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> routeMode{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource> unprotectedResource{};
  shared_ptr<string> vpcFirewallName{};

  DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls() {}

  explicit DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclConfig) {
      res["AclConfig"] = aclConfig ? boost::any(aclConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenName) {
      res["CenName"] = boost::any(*cenName);
    }
    if (cloudFirewallVpcOrderType) {
      res["CloudFirewallVpcOrderType"] = boost::any(*cloudFirewallVpcOrderType);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (ipsConfig) {
      res["IpsConfig"] = ipsConfig ? boost::any(ipsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (precheckStatus) {
      res["PrecheckStatus"] = boost::any(*precheckStatus);
    }
    if (protectedResource) {
      res["ProtectedResource"] = protectedResource ? boost::any(protectedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (regionStatus) {
      res["RegionStatus"] = boost::any(*regionStatus);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (routeMode) {
      res["RouteMode"] = boost::any(*routeMode);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (unprotectedResource) {
      res["UnprotectedResource"] = unprotectedResource ? boost::any(unprotectedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclConfig") != m.end() && !m["AclConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AclConfig"].type()) {
        DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AclConfig"]));
        aclConfig = make_shared<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig>(model1);
      }
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenName") != m.end() && !m["CenName"].empty()) {
      cenName = make_shared<string>(boost::any_cast<string>(m["CenName"]));
    }
    if (m.find("CloudFirewallVpcOrderType") != m.end() && !m["CloudFirewallVpcOrderType"].empty()) {
      cloudFirewallVpcOrderType = make_shared<string>(boost::any_cast<string>(m["CloudFirewallVpcOrderType"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("IpsConfig") != m.end() && !m["IpsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpsConfig"].type()) {
        DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpsConfig"]));
        ipsConfig = make_shared<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PrecheckStatus") != m.end() && !m["PrecheckStatus"].empty()) {
      precheckStatus = make_shared<string>(boost::any_cast<string>(m["PrecheckStatus"]));
    }
    if (m.find("ProtectedResource") != m.end() && !m["ProtectedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProtectedResource"].type()) {
        DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProtectedResource"]));
        protectedResource = make_shared<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource>(model1);
      }
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      regionStatus = make_shared<string>(boost::any_cast<string>(m["RegionStatus"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("RouteMode") != m.end() && !m["RouteMode"].empty()) {
      routeMode = make_shared<string>(boost::any_cast<string>(m["RouteMode"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("UnprotectedResource") != m.end() && !m["UnprotectedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["UnprotectedResource"].type()) {
        DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UnprotectedResource"]));
        unprotectedResource = make_shared<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource>(model1);
      }
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls() = default;
};
class DescribeTrFirewallsV2ListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};
  shared_ptr<vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls>> vpcTrFirewalls{};

  DescribeTrFirewallsV2ListResponseBody() {}

  explicit DescribeTrFirewallsV2ListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vpcTrFirewalls) {
      vector<boost::any> temp1;
      for(auto item1:*vpcTrFirewalls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcTrFirewalls"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("VpcTrFirewalls") != m.end() && !m["VpcTrFirewalls"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcTrFirewalls"].type()) {
        vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcTrFirewalls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcTrFirewalls = make_shared<vector<DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls>>(expect1);
      }
    }
  }


  virtual ~DescribeTrFirewallsV2ListResponseBody() = default;
};
class DescribeTrFirewallsV2ListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrFirewallsV2ListResponseBody> body{};

  DescribeTrFirewallsV2ListResponse() {}

  explicit DescribeTrFirewallsV2ListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTrFirewallsV2ListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrFirewallsV2ListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrFirewallsV2ListResponse() = default;
};
class DescribeTrFirewallsV2RouteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  DescribeTrFirewallsV2RouteListRequest() {}

  explicit DescribeTrFirewallsV2RouteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~DescribeTrFirewallsV2RouteListRequest() = default;
};
class DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList : public Darabonba::Model {
public:
  shared_ptr<string> trFirewallRouteDestination{};
  shared_ptr<string> trFirewallRouteNexthop{};
  shared_ptr<string> trFirewallRoutePolicyId{};
  shared_ptr<string> trFirewallRouteTableId{};

  DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList() {}

  explicit DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trFirewallRouteDestination) {
      res["TrFirewallRouteDestination"] = boost::any(*trFirewallRouteDestination);
    }
    if (trFirewallRouteNexthop) {
      res["TrFirewallRouteNexthop"] = boost::any(*trFirewallRouteNexthop);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    if (trFirewallRouteTableId) {
      res["TrFirewallRouteTableId"] = boost::any(*trFirewallRouteTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrFirewallRouteDestination") != m.end() && !m["TrFirewallRouteDestination"].empty()) {
      trFirewallRouteDestination = make_shared<string>(boost::any_cast<string>(m["TrFirewallRouteDestination"]));
    }
    if (m.find("TrFirewallRouteNexthop") != m.end() && !m["TrFirewallRouteNexthop"].empty()) {
      trFirewallRouteNexthop = make_shared<string>(boost::any_cast<string>(m["TrFirewallRouteNexthop"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
    if (m.find("TrFirewallRouteTableId") != m.end() && !m["TrFirewallRouteTableId"].empty()) {
      trFirewallRouteTableId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRouteTableId"]));
    }
  }


  virtual ~DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList() = default;
};
class DescribeTrFirewallsV2RouteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList>> firewallRouteDetailList{};
  shared_ptr<string> requestId{};

  DescribeTrFirewallsV2RouteListResponseBody() {}

  explicit DescribeTrFirewallsV2RouteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallRouteDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*firewallRouteDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FirewallRouteDetailList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallRouteDetailList") != m.end() && !m["FirewallRouteDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["FirewallRouteDetailList"].type()) {
        vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FirewallRouteDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        firewallRouteDetailList = make_shared<vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTrFirewallsV2RouteListResponseBody() = default;
};
class DescribeTrFirewallsV2RouteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrFirewallsV2RouteListResponseBody> body{};

  DescribeTrFirewallsV2RouteListResponse() {}

  explicit DescribeTrFirewallsV2RouteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTrFirewallsV2RouteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrFirewallsV2RouteListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrFirewallsV2RouteListResponse() = default;
};
class DescribeUserAssetIPTrafficInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> assetIP{};
  shared_ptr<string> lang{};
  shared_ptr<string> trafficTime{};

  DescribeUserAssetIPTrafficInfoRequest() {}

  explicit DescribeUserAssetIPTrafficInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetIP) {
      res["AssetIP"] = boost::any(*assetIP);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (trafficTime) {
      res["TrafficTime"] = boost::any(*trafficTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetIP") != m.end() && !m["AssetIP"].empty()) {
      assetIP = make_shared<string>(boost::any_cast<string>(m["AssetIP"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TrafficTime") != m.end() && !m["TrafficTime"].empty()) {
      trafficTime = make_shared<string>(boost::any_cast<string>(m["TrafficTime"]));
    }
  }


  virtual ~DescribeUserAssetIPTrafficInfoRequest() = default;
};
class DescribeUserAssetIPTrafficInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> inBps{};
  shared_ptr<long> inPps{};
  shared_ptr<long> newConn{};
  shared_ptr<long> outBps{};
  shared_ptr<long> outPps{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sessionCount{};
  shared_ptr<long> startTime{};

  DescribeUserAssetIPTrafficInfoResponseBody() {}

  explicit DescribeUserAssetIPTrafficInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (inBps) {
      res["InBps"] = boost::any(*inBps);
    }
    if (inPps) {
      res["InPps"] = boost::any(*inPps);
    }
    if (newConn) {
      res["NewConn"] = boost::any(*newConn);
    }
    if (outBps) {
      res["OutBps"] = boost::any(*outBps);
    }
    if (outPps) {
      res["OutPps"] = boost::any(*outPps);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionCount) {
      res["SessionCount"] = boost::any(*sessionCount);
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
    if (m.find("InBps") != m.end() && !m["InBps"].empty()) {
      inBps = make_shared<long>(boost::any_cast<long>(m["InBps"]));
    }
    if (m.find("InPps") != m.end() && !m["InPps"].empty()) {
      inPps = make_shared<long>(boost::any_cast<long>(m["InPps"]));
    }
    if (m.find("NewConn") != m.end() && !m["NewConn"].empty()) {
      newConn = make_shared<long>(boost::any_cast<long>(m["NewConn"]));
    }
    if (m.find("OutBps") != m.end() && !m["OutBps"].empty()) {
      outBps = make_shared<long>(boost::any_cast<long>(m["OutBps"]));
    }
    if (m.find("OutPps") != m.end() && !m["OutPps"].empty()) {
      outPps = make_shared<long>(boost::any_cast<long>(m["OutPps"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionCount") != m.end() && !m["SessionCount"].empty()) {
      sessionCount = make_shared<long>(boost::any_cast<long>(m["SessionCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeUserAssetIPTrafficInfoResponseBody() = default;
};
class DescribeUserAssetIPTrafficInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserAssetIPTrafficInfoResponseBody> body{};

  DescribeUserAssetIPTrafficInfoResponse() {}

  explicit DescribeUserAssetIPTrafficInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserAssetIPTrafficInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserAssetIPTrafficInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserAssetIPTrafficInfoResponse() = default;
};
class DescribeUserBuyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeUserBuyVersionRequest() {}

  explicit DescribeUserBuyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeUserBuyVersionRequest() = default;
};
class DescribeUserBuyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> expire{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> internetBandwidth{};
  shared_ptr<long> ipNumber{};
  shared_ptr<bool> logStatus{};
  shared_ptr<long> logStorage{};
  shared_ptr<long> maxOverflow{};
  shared_ptr<long> natBandwidth{};
  shared_ptr<string> requestId{};
  shared_ptr<long> startTime{};
  shared_ptr<bool> userStatus{};
  shared_ptr<long> version{};
  shared_ptr<long> vpcBandwidth{};
  shared_ptr<long> vpcNumber{};

  DescribeUserBuyVersionResponseBody() {}

  explicit DescribeUserBuyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (internetBandwidth) {
      res["InternetBandwidth"] = boost::any(*internetBandwidth);
    }
    if (ipNumber) {
      res["IpNumber"] = boost::any(*ipNumber);
    }
    if (logStatus) {
      res["LogStatus"] = boost::any(*logStatus);
    }
    if (logStorage) {
      res["LogStorage"] = boost::any(*logStorage);
    }
    if (maxOverflow) {
      res["MaxOverflow"] = boost::any(*maxOverflow);
    }
    if (natBandwidth) {
      res["NatBandwidth"] = boost::any(*natBandwidth);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (userStatus) {
      res["UserStatus"] = boost::any(*userStatus);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vpcBandwidth) {
      res["VpcBandwidth"] = boost::any(*vpcBandwidth);
    }
    if (vpcNumber) {
      res["VpcNumber"] = boost::any(*vpcNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InternetBandwidth") != m.end() && !m["InternetBandwidth"].empty()) {
      internetBandwidth = make_shared<long>(boost::any_cast<long>(m["InternetBandwidth"]));
    }
    if (m.find("IpNumber") != m.end() && !m["IpNumber"].empty()) {
      ipNumber = make_shared<long>(boost::any_cast<long>(m["IpNumber"]));
    }
    if (m.find("LogStatus") != m.end() && !m["LogStatus"].empty()) {
      logStatus = make_shared<bool>(boost::any_cast<bool>(m["LogStatus"]));
    }
    if (m.find("LogStorage") != m.end() && !m["LogStorage"].empty()) {
      logStorage = make_shared<long>(boost::any_cast<long>(m["LogStorage"]));
    }
    if (m.find("MaxOverflow") != m.end() && !m["MaxOverflow"].empty()) {
      maxOverflow = make_shared<long>(boost::any_cast<long>(m["MaxOverflow"]));
    }
    if (m.find("NatBandwidth") != m.end() && !m["NatBandwidth"].empty()) {
      natBandwidth = make_shared<long>(boost::any_cast<long>(m["NatBandwidth"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UserStatus") != m.end() && !m["UserStatus"].empty()) {
      userStatus = make_shared<bool>(boost::any_cast<bool>(m["UserStatus"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("VpcBandwidth") != m.end() && !m["VpcBandwidth"].empty()) {
      vpcBandwidth = make_shared<long>(boost::any_cast<long>(m["VpcBandwidth"]));
    }
    if (m.find("VpcNumber") != m.end() && !m["VpcNumber"].empty()) {
      vpcNumber = make_shared<long>(boost::any_cast<long>(m["VpcNumber"]));
    }
  }


  virtual ~DescribeUserBuyVersionResponseBody() = default;
};
class DescribeUserBuyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserBuyVersionResponseBody> body{};

  DescribeUserBuyVersionResponse() {}

  explicit DescribeUserBuyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserBuyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserBuyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserBuyVersionResponse() = default;
};
class DescribeUserIPSWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeUserIPSWhitelistRequest() {}

  explicit DescribeUserIPSWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeUserIPSWhitelistRequest() = default;
};
class DescribeUserIPSWhitelistResponseBodyIpv6Whitelists : public Darabonba::Model {
public:
  shared_ptr<long> direction{};
  shared_ptr<long> listType{};
  shared_ptr<string> listValue{};
  shared_ptr<vector<string>> whiteListValue{};
  shared_ptr<long> whiteType{};

  DescribeUserIPSWhitelistResponseBodyIpv6Whitelists() {}

  explicit DescribeUserIPSWhitelistResponseBodyIpv6Whitelists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (listType) {
      res["ListType"] = boost::any(*listType);
    }
    if (listValue) {
      res["ListValue"] = boost::any(*listValue);
    }
    if (whiteListValue) {
      res["WhiteListValue"] = boost::any(*whiteListValue);
    }
    if (whiteType) {
      res["WhiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<long>(boost::any_cast<long>(m["Direction"]));
    }
    if (m.find("ListType") != m.end() && !m["ListType"].empty()) {
      listType = make_shared<long>(boost::any_cast<long>(m["ListType"]));
    }
    if (m.find("ListValue") != m.end() && !m["ListValue"].empty()) {
      listValue = make_shared<string>(boost::any_cast<string>(m["ListValue"]));
    }
    if (m.find("WhiteListValue") != m.end() && !m["WhiteListValue"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteListValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteListValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteListValue = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WhiteType") != m.end() && !m["WhiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["WhiteType"]));
    }
  }


  virtual ~DescribeUserIPSWhitelistResponseBodyIpv6Whitelists() = default;
};
class DescribeUserIPSWhitelistResponseBodyWhitelists : public Darabonba::Model {
public:
  shared_ptr<long> direction{};
  shared_ptr<long> listType{};
  shared_ptr<string> listValue{};
  shared_ptr<vector<string>> whiteListValue{};
  shared_ptr<long> whiteType{};

  DescribeUserIPSWhitelistResponseBodyWhitelists() {}

  explicit DescribeUserIPSWhitelistResponseBodyWhitelists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (listType) {
      res["ListType"] = boost::any(*listType);
    }
    if (listValue) {
      res["ListValue"] = boost::any(*listValue);
    }
    if (whiteListValue) {
      res["WhiteListValue"] = boost::any(*whiteListValue);
    }
    if (whiteType) {
      res["WhiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<long>(boost::any_cast<long>(m["Direction"]));
    }
    if (m.find("ListType") != m.end() && !m["ListType"].empty()) {
      listType = make_shared<long>(boost::any_cast<long>(m["ListType"]));
    }
    if (m.find("ListValue") != m.end() && !m["ListValue"].empty()) {
      listValue = make_shared<string>(boost::any_cast<string>(m["ListValue"]));
    }
    if (m.find("WhiteListValue") != m.end() && !m["WhiteListValue"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteListValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteListValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteListValue = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WhiteType") != m.end() && !m["WhiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["WhiteType"]));
    }
  }


  virtual ~DescribeUserIPSWhitelistResponseBodyWhitelists() = default;
};
class DescribeUserIPSWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists>> ipv6Whitelists{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUserIPSWhitelistResponseBodyWhitelists>> whitelists{};

  DescribeUserIPSWhitelistResponseBody() {}

  explicit DescribeUserIPSWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipv6Whitelists) {
      vector<boost::any> temp1;
      for(auto item1:*ipv6Whitelists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ipv6Whitelists"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (whitelists) {
      vector<boost::any> temp1;
      for(auto item1:*whitelists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Whitelists"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ipv6Whitelists") != m.end() && !m["Ipv6Whitelists"].empty()) {
      if (typeid(vector<boost::any>) == m["Ipv6Whitelists"].type()) {
        vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ipv6Whitelists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserIPSWhitelistResponseBodyIpv6Whitelists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipv6Whitelists = make_shared<vector<DescribeUserIPSWhitelistResponseBodyIpv6Whitelists>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Whitelists") != m.end() && !m["Whitelists"].empty()) {
      if (typeid(vector<boost::any>) == m["Whitelists"].type()) {
        vector<DescribeUserIPSWhitelistResponseBodyWhitelists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Whitelists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserIPSWhitelistResponseBodyWhitelists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whitelists = make_shared<vector<DescribeUserIPSWhitelistResponseBodyWhitelists>>(expect1);
      }
    }
  }


  virtual ~DescribeUserIPSWhitelistResponseBody() = default;
};
class DescribeUserIPSWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserIPSWhitelistResponseBody> body{};

  DescribeUserIPSWhitelistResponse() {}

  explicit DescribeUserIPSWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserIPSWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserIPSWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserIPSWhitelistResponse() = default;
};
class DescribeVpcFirewallAclGroupListRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> firewallConfigureStatus{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> pageSize{};

  DescribeVpcFirewallAclGroupListRequest() {}

  explicit DescribeVpcFirewallAclGroupListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (firewallConfigureStatus) {
      res["FirewallConfigureStatus"] = boost::any(*firewallConfigureStatus);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("FirewallConfigureStatus") != m.end() && !m["FirewallConfigureStatus"].empty()) {
      firewallConfigureStatus = make_shared<string>(boost::any_cast<string>(m["FirewallConfigureStatus"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~DescribeVpcFirewallAclGroupListRequest() = default;
};
class DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig : public Darabonba::Model {
public:
  shared_ptr<long> strictMode{};

  DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig() {}

  explicit DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (strictMode) {
      res["StrictMode"] = boost::any(*strictMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StrictMode") != m.end() && !m["StrictMode"].empty()) {
      strictMode = make_shared<long>(boost::any_cast<long>(m["StrictMode"]));
    }
  }


  virtual ~DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig() = default;
};
class DescribeVpcFirewallAclGroupListResponseBodyAclGroupList : public Darabonba::Model {
public:
  shared_ptr<DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig> aclConfig{};
  shared_ptr<string> aclGroupId{};
  shared_ptr<string> aclGroupName{};
  shared_ptr<long> aclRuleCount{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> memberUid{};

  DescribeVpcFirewallAclGroupListResponseBodyAclGroupList() {}

  explicit DescribeVpcFirewallAclGroupListResponseBodyAclGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclConfig) {
      res["AclConfig"] = aclConfig ? boost::any(aclConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (aclGroupId) {
      res["AclGroupId"] = boost::any(*aclGroupId);
    }
    if (aclGroupName) {
      res["AclGroupName"] = boost::any(*aclGroupName);
    }
    if (aclRuleCount) {
      res["AclRuleCount"] = boost::any(*aclRuleCount);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclConfig") != m.end() && !m["AclConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AclConfig"].type()) {
        DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AclConfig"]));
        aclConfig = make_shared<DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig>(model1);
      }
    }
    if (m.find("AclGroupId") != m.end() && !m["AclGroupId"].empty()) {
      aclGroupId = make_shared<string>(boost::any_cast<string>(m["AclGroupId"]));
    }
    if (m.find("AclGroupName") != m.end() && !m["AclGroupName"].empty()) {
      aclGroupName = make_shared<string>(boost::any_cast<string>(m["AclGroupName"]));
    }
    if (m.find("AclRuleCount") != m.end() && !m["AclRuleCount"].empty()) {
      aclRuleCount = make_shared<long>(boost::any_cast<long>(m["AclRuleCount"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
  }


  virtual ~DescribeVpcFirewallAclGroupListResponseBodyAclGroupList() = default;
};
class DescribeVpcFirewallAclGroupListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList>> aclGroupList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeVpcFirewallAclGroupListResponseBody() {}

  explicit DescribeVpcFirewallAclGroupListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*aclGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclGroupList"] = boost::any(temp1);
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
    if (m.find("AclGroupList") != m.end() && !m["AclGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["AclGroupList"].type()) {
        vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallAclGroupListResponseBodyAclGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclGroupList = make_shared<vector<DescribeVpcFirewallAclGroupListResponseBodyAclGroupList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeVpcFirewallAclGroupListResponseBody() = default;
};
class DescribeVpcFirewallAclGroupListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallAclGroupListResponseBody> body{};

  DescribeVpcFirewallAclGroupListResponse() {}

  explicit DescribeVpcFirewallAclGroupListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallAclGroupListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallAclGroupListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallAclGroupListResponse() = default;
};
class DescribeVpcFirewallCenDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> networkInstanceId{};
  shared_ptr<string> vpcFirewallId{};

  DescribeVpcFirewallCenDetailRequest() {}

  explicit DescribeVpcFirewallCenDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (networkInstanceId) {
      res["NetworkInstanceId"] = boost::any(*networkInstanceId);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NetworkInstanceId") != m.end() && !m["NetworkInstanceId"].empty()) {
      networkInstanceId = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceId"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~DescribeVpcFirewallCenDetailRequest() = default;
};
class DescribeVpcFirewallCenDetailResponseBodyFirewallVpc : public Darabonba::Model {
public:
  shared_ptr<long> allowConfiguration{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<string> vpcCidr{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchCidr{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> vswitchZoneId{};
  shared_ptr<string> zoneId{};

  DescribeVpcFirewallCenDetailResponseBodyFirewallVpc() {}

  explicit DescribeVpcFirewallCenDetailResponseBodyFirewallVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowConfiguration) {
      res["AllowConfiguration"] = boost::any(*allowConfiguration);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (vpcCidr) {
      res["VpcCidr"] = boost::any(*vpcCidr);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchCidr) {
      res["VswitchCidr"] = boost::any(*vswitchCidr);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (vswitchZoneId) {
      res["VswitchZoneId"] = boost::any(*vswitchZoneId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowConfiguration") != m.end() && !m["AllowConfiguration"].empty()) {
      allowConfiguration = make_shared<long>(boost::any_cast<long>(m["AllowConfiguration"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("VpcCidr") != m.end() && !m["VpcCidr"].empty()) {
      vpcCidr = make_shared<string>(boost::any_cast<string>(m["VpcCidr"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchCidr") != m.end() && !m["VswitchCidr"].empty()) {
      vswitchCidr = make_shared<string>(boost::any_cast<string>(m["VswitchCidr"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("VswitchZoneId") != m.end() && !m["VswitchZoneId"].empty()) {
      vswitchZoneId = make_shared<string>(boost::any_cast<string>(m["VswitchZoneId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeVpcFirewallCenDetailResponseBodyFirewallVpc() = default;
};
class DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList : public Darabonba::Model {
public:
  shared_ptr<string> eniId{};
  shared_ptr<string> eniPrivateIpAddress{};
  shared_ptr<string> eniVSwitchId{};

  DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList() {}

  explicit DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (eniPrivateIpAddress) {
      res["EniPrivateIpAddress"] = boost::any(*eniPrivateIpAddress);
    }
    if (eniVSwitchId) {
      res["EniVSwitchId"] = boost::any(*eniVSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("EniPrivateIpAddress") != m.end() && !m["EniPrivateIpAddress"].empty()) {
      eniPrivateIpAddress = make_shared<string>(boost::any_cast<string>(m["EniPrivateIpAddress"]));
    }
    if (m.find("EniVSwitchId") != m.end() && !m["EniVSwitchId"].empty()) {
      eniVSwitchId = make_shared<string>(boost::any_cast<string>(m["EniVSwitchId"]));
    }
  }


  virtual ~DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList() = default;
};
class DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopInstanceId{};

  DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList() {}

  explicit DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
  }


  virtual ~DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList() = default;
};
class DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList{};
  shared_ptr<string> routeTableId{};

  DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList() {}

  explicit DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*routeEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteEntryList"] = boost::any(temp1);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteEntryList") != m.end() && !m["RouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteEntryList"].type()) {
        vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeEntryList = make_shared<vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>>(expect1);
      }
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList() = default;
};
class DescribeVpcFirewallCenDetailResponseBodyLocalVpc : public Darabonba::Model {
public:
  shared_ptr<string> attachmentId{};
  shared_ptr<string> attachmentName{};
  shared_ptr<vector<string>> defendCidrList{};
  shared_ptr<vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList>> eniList{};
  shared_ptr<string> manualVSwitchId{};
  shared_ptr<string> networkInstanceId{};
  shared_ptr<string> networkInstanceName{};
  shared_ptr<string> networkInstanceType{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> routeMode{};
  shared_ptr<string> supportManualMode{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> transitRouterType{};
  shared_ptr<vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList>> vpcCidrTableList{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcFirewallCenDetailResponseBodyLocalVpc() {}

  explicit DescribeVpcFirewallCenDetailResponseBodyLocalVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentId) {
      res["AttachmentId"] = boost::any(*attachmentId);
    }
    if (attachmentName) {
      res["AttachmentName"] = boost::any(*attachmentName);
    }
    if (defendCidrList) {
      res["DefendCidrList"] = boost::any(*defendCidrList);
    }
    if (eniList) {
      vector<boost::any> temp1;
      for(auto item1:*eniList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EniList"] = boost::any(temp1);
    }
    if (manualVSwitchId) {
      res["ManualVSwitchId"] = boost::any(*manualVSwitchId);
    }
    if (networkInstanceId) {
      res["NetworkInstanceId"] = boost::any(*networkInstanceId);
    }
    if (networkInstanceName) {
      res["NetworkInstanceName"] = boost::any(*networkInstanceName);
    }
    if (networkInstanceType) {
      res["NetworkInstanceType"] = boost::any(*networkInstanceType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (routeMode) {
      res["RouteMode"] = boost::any(*routeMode);
    }
    if (supportManualMode) {
      res["SupportManualMode"] = boost::any(*supportManualMode);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (transitRouterType) {
      res["TransitRouterType"] = boost::any(*transitRouterType);
    }
    if (vpcCidrTableList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcCidrTableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcCidrTableList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentId") != m.end() && !m["AttachmentId"].empty()) {
      attachmentId = make_shared<string>(boost::any_cast<string>(m["AttachmentId"]));
    }
    if (m.find("AttachmentName") != m.end() && !m["AttachmentName"].empty()) {
      attachmentName = make_shared<string>(boost::any_cast<string>(m["AttachmentName"]));
    }
    if (m.find("DefendCidrList") != m.end() && !m["DefendCidrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DefendCidrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DefendCidrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      defendCidrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EniList") != m.end() && !m["EniList"].empty()) {
      if (typeid(vector<boost::any>) == m["EniList"].type()) {
        vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EniList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eniList = make_shared<vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList>>(expect1);
      }
    }
    if (m.find("ManualVSwitchId") != m.end() && !m["ManualVSwitchId"].empty()) {
      manualVSwitchId = make_shared<string>(boost::any_cast<string>(m["ManualVSwitchId"]));
    }
    if (m.find("NetworkInstanceId") != m.end() && !m["NetworkInstanceId"].empty()) {
      networkInstanceId = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceId"]));
    }
    if (m.find("NetworkInstanceName") != m.end() && !m["NetworkInstanceName"].empty()) {
      networkInstanceName = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceName"]));
    }
    if (m.find("NetworkInstanceType") != m.end() && !m["NetworkInstanceType"].empty()) {
      networkInstanceType = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RouteMode") != m.end() && !m["RouteMode"].empty()) {
      routeMode = make_shared<string>(boost::any_cast<string>(m["RouteMode"]));
    }
    if (m.find("SupportManualMode") != m.end() && !m["SupportManualMode"].empty()) {
      supportManualMode = make_shared<string>(boost::any_cast<string>(m["SupportManualMode"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("TransitRouterType") != m.end() && !m["TransitRouterType"].empty()) {
      transitRouterType = make_shared<string>(boost::any_cast<string>(m["TransitRouterType"]));
    }
    if (m.find("VpcCidrTableList") != m.end() && !m["VpcCidrTableList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcCidrTableList"].type()) {
        vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcCidrTableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcCidrTableList = make_shared<vector<DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcFirewallCenDetailResponseBodyLocalVpc() = default;
};
class DescribeVpcFirewallCenDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> connectType{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<DescribeVpcFirewallCenDetailResponseBodyFirewallVpc> firewallVpc{};
  shared_ptr<DescribeVpcFirewallCenDetailResponseBodyLocalVpc> localVpc{};
  shared_ptr<string> requestId{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};

  DescribeVpcFirewallCenDetailResponseBody() {}

  explicit DescribeVpcFirewallCenDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectType) {
      res["ConnectType"] = boost::any(*connectType);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (firewallVpc) {
      res["FirewallVpc"] = firewallVpc ? boost::any(firewallVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (localVpc) {
      res["LocalVpc"] = localVpc ? boost::any(localVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectType") != m.end() && !m["ConnectType"].empty()) {
      connectType = make_shared<string>(boost::any_cast<string>(m["ConnectType"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("FirewallVpc") != m.end() && !m["FirewallVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["FirewallVpc"].type()) {
        DescribeVpcFirewallCenDetailResponseBodyFirewallVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FirewallVpc"]));
        firewallVpc = make_shared<DescribeVpcFirewallCenDetailResponseBodyFirewallVpc>(model1);
      }
    }
    if (m.find("LocalVpc") != m.end() && !m["LocalVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["LocalVpc"].type()) {
        DescribeVpcFirewallCenDetailResponseBodyLocalVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LocalVpc"]));
        localVpc = make_shared<DescribeVpcFirewallCenDetailResponseBodyLocalVpc>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~DescribeVpcFirewallCenDetailResponseBody() = default;
};
class DescribeVpcFirewallCenDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallCenDetailResponseBody> body{};

  DescribeVpcFirewallCenDetailResponse() {}

  explicit DescribeVpcFirewallCenDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallCenDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallCenDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallCenDetailResponse() = default;
};
class DescribeVpcFirewallCenListRequest : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> networkInstanceId{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> routeMode{};
  shared_ptr<string> transitRouterType{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};

  DescribeVpcFirewallCenListRequest() {}

  explicit DescribeVpcFirewallCenListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (networkInstanceId) {
      res["NetworkInstanceId"] = boost::any(*networkInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (routeMode) {
      res["RouteMode"] = boost::any(*routeMode);
    }
    if (transitRouterType) {
      res["TransitRouterType"] = boost::any(*transitRouterType);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("NetworkInstanceId") != m.end() && !m["NetworkInstanceId"].empty()) {
      networkInstanceId = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RouteMode") != m.end() && !m["RouteMode"].empty()) {
      routeMode = make_shared<string>(boost::any_cast<string>(m["RouteMode"]));
    }
    if (m.find("TransitRouterType") != m.end() && !m["TransitRouterType"].empty()) {
      transitRouterType = make_shared<string>(boost::any_cast<string>(m["TransitRouterType"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~DescribeVpcFirewallCenListRequest() = default;
};
class DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig : public Darabonba::Model {
public:
  shared_ptr<long> strictMode{};

  DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig() {}

  explicit DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (strictMode) {
      res["StrictMode"] = boost::any(*strictMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StrictMode") != m.end() && !m["StrictMode"].empty()) {
      strictMode = make_shared<long>(boost::any_cast<long>(m["StrictMode"]));
    }
  }


  virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig() = default;
};
class DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig : public Darabonba::Model {
public:
  shared_ptr<long> basicRules{};
  shared_ptr<long> enableAllPatch{};
  shared_ptr<long> ruleClass{};
  shared_ptr<long> runMode{};

  DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig() {}

  explicit DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicRules) {
      res["BasicRules"] = boost::any(*basicRules);
    }
    if (enableAllPatch) {
      res["EnableAllPatch"] = boost::any(*enableAllPatch);
    }
    if (ruleClass) {
      res["RuleClass"] = boost::any(*ruleClass);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicRules") != m.end() && !m["BasicRules"].empty()) {
      basicRules = make_shared<long>(boost::any_cast<long>(m["BasicRules"]));
    }
    if (m.find("EnableAllPatch") != m.end() && !m["EnableAllPatch"].empty()) {
      enableAllPatch = make_shared<long>(boost::any_cast<long>(m["EnableAllPatch"]));
    }
    if (m.find("RuleClass") != m.end() && !m["RuleClass"].empty()) {
      ruleClass = make_shared<long>(boost::any_cast<long>(m["RuleClass"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<long>(boost::any_cast<long>(m["RunMode"]));
    }
  }


  virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig() = default;
};
class DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopInstanceId{};

  DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList() {}

  explicit DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
  }


  virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList() = default;
};
class DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList{};
  shared_ptr<string> routeTableId{};

  DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() {}

  explicit DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*routeEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteEntryList"] = boost::any(temp1);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteEntryList") != m.end() && !m["RouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteEntryList"].type()) {
        vector<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeEntryList = make_shared<vector<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>>(expect1);
      }
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() = default;
};
class DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc : public Darabonba::Model {
public:
  shared_ptr<string> authorizationStatus{};
  shared_ptr<vector<string>> defendCidrList{};
  shared_ptr<string> manualVSwitchId{};
  shared_ptr<string> networkInstanceId{};
  shared_ptr<string> networkInstanceName{};
  shared_ptr<string> networkInstanceType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> routeMode{};
  shared_ptr<string> supportManualMode{};
  shared_ptr<string> transitRouterType{};
  shared_ptr<vector<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList>> vpcCidrTableList{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc() {}

  explicit DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationStatus) {
      res["AuthorizationStatus"] = boost::any(*authorizationStatus);
    }
    if (defendCidrList) {
      res["DefendCidrList"] = boost::any(*defendCidrList);
    }
    if (manualVSwitchId) {
      res["ManualVSwitchId"] = boost::any(*manualVSwitchId);
    }
    if (networkInstanceId) {
      res["NetworkInstanceId"] = boost::any(*networkInstanceId);
    }
    if (networkInstanceName) {
      res["NetworkInstanceName"] = boost::any(*networkInstanceName);
    }
    if (networkInstanceType) {
      res["NetworkInstanceType"] = boost::any(*networkInstanceType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (routeMode) {
      res["RouteMode"] = boost::any(*routeMode);
    }
    if (supportManualMode) {
      res["SupportManualMode"] = boost::any(*supportManualMode);
    }
    if (transitRouterType) {
      res["TransitRouterType"] = boost::any(*transitRouterType);
    }
    if (vpcCidrTableList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcCidrTableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcCidrTableList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationStatus") != m.end() && !m["AuthorizationStatus"].empty()) {
      authorizationStatus = make_shared<string>(boost::any_cast<string>(m["AuthorizationStatus"]));
    }
    if (m.find("DefendCidrList") != m.end() && !m["DefendCidrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DefendCidrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DefendCidrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      defendCidrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ManualVSwitchId") != m.end() && !m["ManualVSwitchId"].empty()) {
      manualVSwitchId = make_shared<string>(boost::any_cast<string>(m["ManualVSwitchId"]));
    }
    if (m.find("NetworkInstanceId") != m.end() && !m["NetworkInstanceId"].empty()) {
      networkInstanceId = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceId"]));
    }
    if (m.find("NetworkInstanceName") != m.end() && !m["NetworkInstanceName"].empty()) {
      networkInstanceName = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceName"]));
    }
    if (m.find("NetworkInstanceType") != m.end() && !m["NetworkInstanceType"].empty()) {
      networkInstanceType = make_shared<string>(boost::any_cast<string>(m["NetworkInstanceType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RouteMode") != m.end() && !m["RouteMode"].empty()) {
      routeMode = make_shared<string>(boost::any_cast<string>(m["RouteMode"]));
    }
    if (m.find("SupportManualMode") != m.end() && !m["SupportManualMode"].empty()) {
      supportManualMode = make_shared<string>(boost::any_cast<string>(m["SupportManualMode"]));
    }
    if (m.find("TransitRouterType") != m.end() && !m["TransitRouterType"].empty()) {
      transitRouterType = make_shared<string>(boost::any_cast<string>(m["TransitRouterType"]));
    }
    if (m.find("VpcCidrTableList") != m.end() && !m["VpcCidrTableList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcCidrTableList"].type()) {
        vector<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcCidrTableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcCidrTableList = make_shared<vector<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc() = default;
};
class DescribeVpcFirewallCenListResponseBodyVpcFirewalls : public Darabonba::Model {
public:
  shared_ptr<DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig> aclConfig{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenName{};
  shared_ptr<string> connectType{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig> ipsConfig{};
  shared_ptr<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc> localVpc{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> precheckStatus{};
  shared_ptr<string> regionStatus{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};

  DescribeVpcFirewallCenListResponseBodyVpcFirewalls() {}

  explicit DescribeVpcFirewallCenListResponseBodyVpcFirewalls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclConfig) {
      res["AclConfig"] = aclConfig ? boost::any(aclConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenName) {
      res["CenName"] = boost::any(*cenName);
    }
    if (connectType) {
      res["ConnectType"] = boost::any(*connectType);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (ipsConfig) {
      res["IpsConfig"] = ipsConfig ? boost::any(ipsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (localVpc) {
      res["LocalVpc"] = localVpc ? boost::any(localVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (precheckStatus) {
      res["PrecheckStatus"] = boost::any(*precheckStatus);
    }
    if (regionStatus) {
      res["RegionStatus"] = boost::any(*regionStatus);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclConfig") != m.end() && !m["AclConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AclConfig"].type()) {
        DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AclConfig"]));
        aclConfig = make_shared<DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig>(model1);
      }
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenName") != m.end() && !m["CenName"].empty()) {
      cenName = make_shared<string>(boost::any_cast<string>(m["CenName"]));
    }
    if (m.find("ConnectType") != m.end() && !m["ConnectType"].empty()) {
      connectType = make_shared<string>(boost::any_cast<string>(m["ConnectType"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("IpsConfig") != m.end() && !m["IpsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpsConfig"].type()) {
        DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpsConfig"]));
        ipsConfig = make_shared<DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig>(model1);
      }
    }
    if (m.find("LocalVpc") != m.end() && !m["LocalVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["LocalVpc"].type()) {
        DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LocalVpc"]));
        localVpc = make_shared<DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc>(model1);
      }
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PrecheckStatus") != m.end() && !m["PrecheckStatus"].empty()) {
      precheckStatus = make_shared<string>(boost::any_cast<string>(m["PrecheckStatus"]));
    }
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      regionStatus = make_shared<string>(boost::any_cast<string>(m["RegionStatus"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewalls() = default;
};
class DescribeVpcFirewallCenListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeVpcFirewallCenListResponseBodyVpcFirewalls>> vpcFirewalls{};

  DescribeVpcFirewallCenListResponseBody() {}

  explicit DescribeVpcFirewallCenListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vpcFirewalls) {
      vector<boost::any> temp1;
      for(auto item1:*vpcFirewalls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcFirewalls"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VpcFirewalls") != m.end() && !m["VpcFirewalls"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcFirewalls"].type()) {
        vector<DescribeVpcFirewallCenListResponseBodyVpcFirewalls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcFirewalls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallCenListResponseBodyVpcFirewalls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcFirewalls = make_shared<vector<DescribeVpcFirewallCenListResponseBodyVpcFirewalls>>(expect1);
      }
    }
  }


  virtual ~DescribeVpcFirewallCenListResponseBody() = default;
};
class DescribeVpcFirewallCenListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallCenListResponseBody> body{};

  DescribeVpcFirewallCenListResponse() {}

  explicit DescribeVpcFirewallCenListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallCenListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallCenListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallCenListResponse() = default;
};
class DescribeVpcFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> description{};
  shared_ptr<string> destination{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<string> vpcFirewallId{};

  DescribeVpcFirewallControlPolicyRequest() {}

  explicit DescribeVpcFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~DescribeVpcFirewallControlPolicyRequest() = default;
};
class DescribeVpcFirewallControlPolicyResponseBodyPolicys : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> applicationName{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<vector<string>> destPortGroupPorts{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<vector<string>> destinationGroupCidrs{};
  shared_ptr<string> destinationGroupType{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<long> hitLastTime{};
  shared_ptr<long> hitTimes{};
  shared_ptr<string> memberUid{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> order{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<vector<string>> sourceGroupCidrs{};
  shared_ptr<string> sourceGroupType{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> spreadCnt{};
  shared_ptr<long> startTime{};

  DescribeVpcFirewallControlPolicyResponseBodyPolicys() {}

  explicit DescribeVpcFirewallControlPolicyResponseBodyPolicys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortGroupPorts) {
      res["DestPortGroupPorts"] = boost::any(*destPortGroupPorts);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationGroupCidrs) {
      res["DestinationGroupCidrs"] = boost::any(*destinationGroupCidrs);
    }
    if (destinationGroupType) {
      res["DestinationGroupType"] = boost::any(*destinationGroupType);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hitLastTime) {
      res["HitLastTime"] = boost::any(*hitLastTime);
    }
    if (hitTimes) {
      res["HitTimes"] = boost::any(*hitTimes);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceGroupCidrs) {
      res["SourceGroupCidrs"] = boost::any(*sourceGroupCidrs);
    }
    if (sourceGroupType) {
      res["SourceGroupType"] = boost::any(*sourceGroupType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (spreadCnt) {
      res["SpreadCnt"] = boost::any(*spreadCnt);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortGroupPorts") != m.end() && !m["DestPortGroupPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestPortGroupPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestPortGroupPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destPortGroupPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationGroupCidrs") != m.end() && !m["DestinationGroupCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationGroupCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationGroupCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationGroupCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationGroupType") != m.end() && !m["DestinationGroupType"].empty()) {
      destinationGroupType = make_shared<string>(boost::any_cast<string>(m["DestinationGroupType"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<string>(boost::any_cast<string>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("HitLastTime") != m.end() && !m["HitLastTime"].empty()) {
      hitLastTime = make_shared<long>(boost::any_cast<long>(m["HitLastTime"]));
    }
    if (m.find("HitTimes") != m.end() && !m["HitTimes"].empty()) {
      hitTimes = make_shared<long>(boost::any_cast<long>(m["HitTimes"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceGroupCidrs") != m.end() && !m["SourceGroupCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceGroupCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceGroupCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceGroupCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceGroupType") != m.end() && !m["SourceGroupType"].empty()) {
      sourceGroupType = make_shared<string>(boost::any_cast<string>(m["SourceGroupType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpreadCnt") != m.end() && !m["SpreadCnt"].empty()) {
      spreadCnt = make_shared<long>(boost::any_cast<long>(m["SpreadCnt"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeVpcFirewallControlPolicyResponseBodyPolicys() = default;
};
class DescribeVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys>> policys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeVpcFirewallControlPolicyResponseBody() {}

  explicit DescribeVpcFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policys) {
      vector<boost::any> temp1;
      for(auto item1:*policys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policys"] = boost::any(temp1);
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
    if (m.find("Policys") != m.end() && !m["Policys"].empty()) {
      if (typeid(vector<boost::any>) == m["Policys"].type()) {
        vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallControlPolicyResponseBodyPolicys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policys = make_shared<vector<DescribeVpcFirewallControlPolicyResponseBodyPolicys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeVpcFirewallControlPolicyResponseBody() = default;
};
class DescribeVpcFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallControlPolicyResponseBody> body{};

  DescribeVpcFirewallControlPolicyResponse() {}

  explicit DescribeVpcFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallControlPolicyResponse() = default;
};
class DescribeVpcFirewallDefaultIPSConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberUid{};
  shared_ptr<string> vpcFirewallId{};

  DescribeVpcFirewallDefaultIPSConfigRequest() {}

  explicit DescribeVpcFirewallDefaultIPSConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~DescribeVpcFirewallDefaultIPSConfigRequest() = default;
};
class DescribeVpcFirewallDefaultIPSConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> basicRules{};
  shared_ptr<long> enableAllPatch{};
  shared_ptr<string> requestId{};
  shared_ptr<long> ruleClass{};
  shared_ptr<long> runMode{};

  DescribeVpcFirewallDefaultIPSConfigResponseBody() {}

  explicit DescribeVpcFirewallDefaultIPSConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicRules) {
      res["BasicRules"] = boost::any(*basicRules);
    }
    if (enableAllPatch) {
      res["EnableAllPatch"] = boost::any(*enableAllPatch);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleClass) {
      res["RuleClass"] = boost::any(*ruleClass);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicRules") != m.end() && !m["BasicRules"].empty()) {
      basicRules = make_shared<long>(boost::any_cast<long>(m["BasicRules"]));
    }
    if (m.find("EnableAllPatch") != m.end() && !m["EnableAllPatch"].empty()) {
      enableAllPatch = make_shared<long>(boost::any_cast<long>(m["EnableAllPatch"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleClass") != m.end() && !m["RuleClass"].empty()) {
      ruleClass = make_shared<long>(boost::any_cast<long>(m["RuleClass"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<long>(boost::any_cast<long>(m["RunMode"]));
    }
  }


  virtual ~DescribeVpcFirewallDefaultIPSConfigResponseBody() = default;
};
class DescribeVpcFirewallDefaultIPSConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallDefaultIPSConfigResponseBody> body{};

  DescribeVpcFirewallDefaultIPSConfigResponse() {}

  explicit DescribeVpcFirewallDefaultIPSConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallDefaultIPSConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallDefaultIPSConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallDefaultIPSConfigResponse() = default;
};
class DescribeVpcFirewallDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> localVpcId{};
  shared_ptr<string> peerVpcId{};
  shared_ptr<string> vpcFirewallId{};

  DescribeVpcFirewallDetailRequest() {}

  explicit DescribeVpcFirewallDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (localVpcId) {
      res["LocalVpcId"] = boost::any(*localVpcId);
    }
    if (peerVpcId) {
      res["PeerVpcId"] = boost::any(*peerVpcId);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LocalVpcId") != m.end() && !m["LocalVpcId"].empty()) {
      localVpcId = make_shared<string>(boost::any_cast<string>(m["LocalVpcId"]));
    }
    if (m.find("PeerVpcId") != m.end() && !m["PeerVpcId"].empty()) {
      peerVpcId = make_shared<string>(boost::any_cast<string>(m["PeerVpcId"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailRequest() = default;
};
class DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopInstanceId{};

  DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList() {}

  explicit DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList() = default;
};
class DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList{};
  shared_ptr<string> routeTableId{};

  DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList() {}

  explicit DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*routeEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteEntryList"] = boost::any(temp1);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteEntryList") != m.end() && !m["RouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteEntryList"].type()) {
        vector<DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeEntryList = make_shared<vector<DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>>(expect1);
      }
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList() = default;
};
class DescribeVpcFirewallDetailResponseBodyLocalVpc : public Darabonba::Model {
public:
  shared_ptr<string> eniId{};
  shared_ptr<string> eniPrivateIpAddress{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> routerInterfaceId{};
  shared_ptr<vector<DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList>> vpcCidrTableList{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcFirewallDetailResponseBodyLocalVpc() {}

  explicit DescribeVpcFirewallDetailResponseBodyLocalVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (eniPrivateIpAddress) {
      res["EniPrivateIpAddress"] = boost::any(*eniPrivateIpAddress);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (routerInterfaceId) {
      res["RouterInterfaceId"] = boost::any(*routerInterfaceId);
    }
    if (vpcCidrTableList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcCidrTableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcCidrTableList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("EniPrivateIpAddress") != m.end() && !m["EniPrivateIpAddress"].empty()) {
      eniPrivateIpAddress = make_shared<string>(boost::any_cast<string>(m["EniPrivateIpAddress"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RouterInterfaceId") != m.end() && !m["RouterInterfaceId"].empty()) {
      routerInterfaceId = make_shared<string>(boost::any_cast<string>(m["RouterInterfaceId"]));
    }
    if (m.find("VpcCidrTableList") != m.end() && !m["VpcCidrTableList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcCidrTableList"].type()) {
        vector<DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcCidrTableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcCidrTableList = make_shared<vector<DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailResponseBodyLocalVpc() = default;
};
class DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopInstanceId{};

  DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList() {}

  explicit DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList() = default;
};
class DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList>> routeEntryList{};
  shared_ptr<string> routeTableId{};

  DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList() {}

  explicit DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*routeEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteEntryList"] = boost::any(temp1);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteEntryList") != m.end() && !m["RouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteEntryList"].type()) {
        vector<DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeEntryList = make_shared<vector<DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList>>(expect1);
      }
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList() = default;
};
class DescribeVpcFirewallDetailResponseBodyPeerVpc : public Darabonba::Model {
public:
  shared_ptr<string> eniId{};
  shared_ptr<string> eniPrivateIpAddress{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> routerInterfaceId{};
  shared_ptr<vector<DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList>> vpcCidrTableList{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcFirewallDetailResponseBodyPeerVpc() {}

  explicit DescribeVpcFirewallDetailResponseBodyPeerVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (eniPrivateIpAddress) {
      res["EniPrivateIpAddress"] = boost::any(*eniPrivateIpAddress);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (routerInterfaceId) {
      res["RouterInterfaceId"] = boost::any(*routerInterfaceId);
    }
    if (vpcCidrTableList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcCidrTableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcCidrTableList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("EniPrivateIpAddress") != m.end() && !m["EniPrivateIpAddress"].empty()) {
      eniPrivateIpAddress = make_shared<string>(boost::any_cast<string>(m["EniPrivateIpAddress"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RouterInterfaceId") != m.end() && !m["RouterInterfaceId"].empty()) {
      routerInterfaceId = make_shared<string>(boost::any_cast<string>(m["RouterInterfaceId"]));
    }
    if (m.find("VpcCidrTableList") != m.end() && !m["VpcCidrTableList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcCidrTableList"].type()) {
        vector<DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcCidrTableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcCidrTableList = make_shared<vector<DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailResponseBodyPeerVpc() = default;
};
class DescribeVpcFirewallDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> connectType{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<DescribeVpcFirewallDetailResponseBodyLocalVpc> localVpc{};
  shared_ptr<string> memberUid{};
  shared_ptr<DescribeVpcFirewallDetailResponseBodyPeerVpc> peerVpc{};
  shared_ptr<string> requestId{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};

  DescribeVpcFirewallDetailResponseBody() {}

  explicit DescribeVpcFirewallDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connectType) {
      res["ConnectType"] = boost::any(*connectType);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (localVpc) {
      res["LocalVpc"] = localVpc ? boost::any(localVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (peerVpc) {
      res["PeerVpc"] = peerVpc ? boost::any(peerVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ConnectType") != m.end() && !m["ConnectType"].empty()) {
      connectType = make_shared<string>(boost::any_cast<string>(m["ConnectType"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("LocalVpc") != m.end() && !m["LocalVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["LocalVpc"].type()) {
        DescribeVpcFirewallDetailResponseBodyLocalVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LocalVpc"]));
        localVpc = make_shared<DescribeVpcFirewallDetailResponseBodyLocalVpc>(model1);
      }
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PeerVpc") != m.end() && !m["PeerVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["PeerVpc"].type()) {
        DescribeVpcFirewallDetailResponseBodyPeerVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PeerVpc"]));
        peerVpc = make_shared<DescribeVpcFirewallDetailResponseBodyPeerVpc>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~DescribeVpcFirewallDetailResponseBody() = default;
};
class DescribeVpcFirewallDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallDetailResponseBody> body{};

  DescribeVpcFirewallDetailResponse() {}

  explicit DescribeVpcFirewallDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallDetailResponse() = default;
};
class DescribeVpcFirewallIPSWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> vpcFirewallId{};

  DescribeVpcFirewallIPSWhitelistRequest() {}

  explicit DescribeVpcFirewallIPSWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~DescribeVpcFirewallIPSWhitelistRequest() = default;
};
class DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists : public Darabonba::Model {
public:
  shared_ptr<long> listType{};
  shared_ptr<string> listValue{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<vector<string>> whiteListValue{};
  shared_ptr<long> whiteType{};

  DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists() {}

  explicit DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listType) {
      res["ListType"] = boost::any(*listType);
    }
    if (listValue) {
      res["ListValue"] = boost::any(*listValue);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (whiteListValue) {
      res["WhiteListValue"] = boost::any(*whiteListValue);
    }
    if (whiteType) {
      res["WhiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListType") != m.end() && !m["ListType"].empty()) {
      listType = make_shared<long>(boost::any_cast<long>(m["ListType"]));
    }
    if (m.find("ListValue") != m.end() && !m["ListValue"].empty()) {
      listValue = make_shared<string>(boost::any_cast<string>(m["ListValue"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("WhiteListValue") != m.end() && !m["WhiteListValue"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteListValue"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteListValue"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteListValue = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WhiteType") != m.end() && !m["WhiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["WhiteType"]));
    }
  }


  virtual ~DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists() = default;
};
class DescribeVpcFirewallIPSWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists>> whitelists{};

  DescribeVpcFirewallIPSWhitelistResponseBody() {}

  explicit DescribeVpcFirewallIPSWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (whitelists) {
      vector<boost::any> temp1;
      for(auto item1:*whitelists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Whitelists"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Whitelists") != m.end() && !m["Whitelists"].empty()) {
      if (typeid(vector<boost::any>) == m["Whitelists"].type()) {
        vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Whitelists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whitelists = make_shared<vector<DescribeVpcFirewallIPSWhitelistResponseBodyWhitelists>>(expect1);
      }
    }
  }


  virtual ~DescribeVpcFirewallIPSWhitelistResponseBody() = default;
};
class DescribeVpcFirewallIPSWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallIPSWhitelistResponseBody> body{};

  DescribeVpcFirewallIPSWhitelistResponse() {}

  explicit DescribeVpcFirewallIPSWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallIPSWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallIPSWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallIPSWhitelistResponse() = default;
};
class DescribeVpcFirewallListRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectSubType{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> peerUid{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};
  shared_ptr<string> vpcId{};

  DescribeVpcFirewallListRequest() {}

  explicit DescribeVpcFirewallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectSubType) {
      res["ConnectSubType"] = boost::any(*connectSubType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (peerUid) {
      res["PeerUid"] = boost::any(*peerUid);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectSubType") != m.end() && !m["ConnectSubType"].empty()) {
      connectSubType = make_shared<string>(boost::any_cast<string>(m["ConnectSubType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PeerUid") != m.end() && !m["PeerUid"].empty()) {
      peerUid = make_shared<string>(boost::any_cast<string>(m["PeerUid"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeVpcFirewallListRequest() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig : public Darabonba::Model {
public:
  shared_ptr<long> strictMode{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (strictMode) {
      res["StrictMode"] = boost::any(*strictMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StrictMode") != m.end() && !m["StrictMode"].empty()) {
      strictMode = make_shared<long>(boost::any_cast<long>(m["StrictMode"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig : public Darabonba::Model {
public:
  shared_ptr<long> basicRules{};
  shared_ptr<long> enableAllPatch{};
  shared_ptr<long> ruleClass{};
  shared_ptr<long> runMode{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicRules) {
      res["BasicRules"] = boost::any(*basicRules);
    }
    if (enableAllPatch) {
      res["EnableAllPatch"] = boost::any(*enableAllPatch);
    }
    if (ruleClass) {
      res["RuleClass"] = boost::any(*ruleClass);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicRules") != m.end() && !m["BasicRules"].empty()) {
      basicRules = make_shared<long>(boost::any_cast<long>(m["BasicRules"]));
    }
    if (m.find("EnableAllPatch") != m.end() && !m["EnableAllPatch"].empty()) {
      enableAllPatch = make_shared<long>(boost::any_cast<long>(m["EnableAllPatch"]));
    }
    if (m.find("RuleClass") != m.end() && !m["RuleClass"].empty()) {
      ruleClass = make_shared<long>(boost::any_cast<long>(m["RuleClass"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<long>(boost::any_cast<long>(m["RunMode"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopInstanceId{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList{};
  shared_ptr<string> routeTableId{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*routeEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteEntryList"] = boost::any(temp1);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteEntryList") != m.end() && !m["RouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteEntryList"].type()) {
        vector<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeEntryList = make_shared<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>>(expect1);
      }
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc : public Darabonba::Model {
public:
  shared_ptr<string> authorizationStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionNo{};
  shared_ptr<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList>> vpcCidrTableList{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationStatus) {
      res["AuthorizationStatus"] = boost::any(*authorizationStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (vpcCidrTableList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcCidrTableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcCidrTableList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationStatus") != m.end() && !m["AuthorizationStatus"].empty()) {
      authorizationStatus = make_shared<string>(boost::any_cast<string>(m["AuthorizationStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("VpcCidrTableList") != m.end() && !m["VpcCidrTableList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcCidrTableList"].type()) {
        vector<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcCidrTableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcCidrTableList = make_shared<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidr{};
  shared_ptr<string> nextHopInstanceId{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidr) {
      res["DestinationCidr"] = boost::any(*destinationCidr);
    }
    if (nextHopInstanceId) {
      res["NextHopInstanceId"] = boost::any(*nextHopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidr") != m.end() && !m["DestinationCidr"].empty()) {
      destinationCidr = make_shared<string>(boost::any_cast<string>(m["DestinationCidr"]));
    }
    if (m.find("NextHopInstanceId") != m.end() && !m["NextHopInstanceId"].empty()) {
      nextHopInstanceId = make_shared<string>(boost::any_cast<string>(m["NextHopInstanceId"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList>> routeEntryList{};
  shared_ptr<string> routeTableId{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*routeEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteEntryList"] = boost::any(temp1);
    }
    if (routeTableId) {
      res["RouteTableId"] = boost::any(*routeTableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RouteEntryList") != m.end() && !m["RouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteEntryList"].type()) {
        vector<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeEntryList = make_shared<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableListRouteEntryList>>(expect1);
      }
    }
    if (m.find("RouteTableId") != m.end() && !m["RouteTableId"].empty()) {
      routeTableId = make_shared<string>(boost::any_cast<string>(m["RouteTableId"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc : public Darabonba::Model {
public:
  shared_ptr<string> authorizationStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionNo{};
  shared_ptr<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList>> vpcCidrTableList{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationStatus) {
      res["AuthorizationStatus"] = boost::any(*authorizationStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (vpcCidrTableList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcCidrTableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcCidrTableList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationStatus") != m.end() && !m["AuthorizationStatus"].empty()) {
      authorizationStatus = make_shared<string>(boost::any_cast<string>(m["AuthorizationStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("VpcCidrTableList") != m.end() && !m["VpcCidrTableList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcCidrTableList"].type()) {
        vector<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcCidrTableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcCidrTableList = make_shared<vector<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc() = default;
};
class DescribeVpcFirewallListResponseBodyVpcFirewalls : public Darabonba::Model {
public:
  shared_ptr<DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig> aclConfig{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> connectSubType{};
  shared_ptr<string> connectType{};
  shared_ptr<string> firewallSwitchStatus{};
  shared_ptr<DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig> ipsConfig{};
  shared_ptr<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc> localVpc{};
  shared_ptr<string> memberUid{};
  shared_ptr<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc> peerVpc{};
  shared_ptr<string> regionStatus{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};

  DescribeVpcFirewallListResponseBodyVpcFirewalls() {}

  explicit DescribeVpcFirewallListResponseBodyVpcFirewalls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclConfig) {
      res["AclConfig"] = aclConfig ? boost::any(aclConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connectSubType) {
      res["ConnectSubType"] = boost::any(*connectSubType);
    }
    if (connectType) {
      res["ConnectType"] = boost::any(*connectType);
    }
    if (firewallSwitchStatus) {
      res["FirewallSwitchStatus"] = boost::any(*firewallSwitchStatus);
    }
    if (ipsConfig) {
      res["IpsConfig"] = ipsConfig ? boost::any(ipsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (localVpc) {
      res["LocalVpc"] = localVpc ? boost::any(localVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (peerVpc) {
      res["PeerVpc"] = peerVpc ? boost::any(peerVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionStatus) {
      res["RegionStatus"] = boost::any(*regionStatus);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclConfig") != m.end() && !m["AclConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AclConfig"].type()) {
        DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AclConfig"]));
        aclConfig = make_shared<DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig>(model1);
      }
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ConnectSubType") != m.end() && !m["ConnectSubType"].empty()) {
      connectSubType = make_shared<string>(boost::any_cast<string>(m["ConnectSubType"]));
    }
    if (m.find("ConnectType") != m.end() && !m["ConnectType"].empty()) {
      connectType = make_shared<string>(boost::any_cast<string>(m["ConnectType"]));
    }
    if (m.find("FirewallSwitchStatus") != m.end() && !m["FirewallSwitchStatus"].empty()) {
      firewallSwitchStatus = make_shared<string>(boost::any_cast<string>(m["FirewallSwitchStatus"]));
    }
    if (m.find("IpsConfig") != m.end() && !m["IpsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpsConfig"].type()) {
        DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpsConfig"]));
        ipsConfig = make_shared<DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig>(model1);
      }
    }
    if (m.find("LocalVpc") != m.end() && !m["LocalVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["LocalVpc"].type()) {
        DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LocalVpc"]));
        localVpc = make_shared<DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc>(model1);
      }
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PeerVpc") != m.end() && !m["PeerVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["PeerVpc"].type()) {
        DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PeerVpc"]));
        peerVpc = make_shared<DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc>(model1);
      }
    }
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      regionStatus = make_shared<string>(boost::any_cast<string>(m["RegionStatus"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~DescribeVpcFirewallListResponseBodyVpcFirewalls() = default;
};
class DescribeVpcFirewallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeVpcFirewallListResponseBodyVpcFirewalls>> vpcFirewalls{};

  DescribeVpcFirewallListResponseBody() {}

  explicit DescribeVpcFirewallListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vpcFirewalls) {
      vector<boost::any> temp1;
      for(auto item1:*vpcFirewalls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcFirewalls"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VpcFirewalls") != m.end() && !m["VpcFirewalls"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcFirewalls"].type()) {
        vector<DescribeVpcFirewallListResponseBodyVpcFirewalls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcFirewalls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcFirewallListResponseBodyVpcFirewalls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcFirewalls = make_shared<vector<DescribeVpcFirewallListResponseBodyVpcFirewalls>>(expect1);
      }
    }
  }


  virtual ~DescribeVpcFirewallListResponseBody() = default;
};
class DescribeVpcFirewallListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallListResponseBody> body{};

  DescribeVpcFirewallListResponse() {}

  explicit DescribeVpcFirewallListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallListResponse() = default;
};
class DescribeVpcFirewallPolicyPriorUsedRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> vpcFirewallId{};

  DescribeVpcFirewallPolicyPriorUsedRequest() {}

  explicit DescribeVpcFirewallPolicyPriorUsedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~DescribeVpcFirewallPolicyPriorUsedRequest() = default;
};
class DescribeVpcFirewallPolicyPriorUsedResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> end{};
  shared_ptr<string> requestId{};
  shared_ptr<long> start{};

  DescribeVpcFirewallPolicyPriorUsedResponseBody() {}

  explicit DescribeVpcFirewallPolicyPriorUsedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~DescribeVpcFirewallPolicyPriorUsedResponseBody() = default;
};
class DescribeVpcFirewallPolicyPriorUsedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcFirewallPolicyPriorUsedResponseBody> body{};

  DescribeVpcFirewallPolicyPriorUsedResponse() {}

  explicit DescribeVpcFirewallPolicyPriorUsedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcFirewallPolicyPriorUsedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcFirewallPolicyPriorUsedResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcFirewallPolicyPriorUsedResponse() = default;
};
class DescribeVpcListLiteRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcListLiteRequest() {}

  explicit DescribeVpcListLiteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcListLiteRequest() = default;
};
class DescribeVpcListLiteResponseBodyVpcList : public Darabonba::Model {
public:
  shared_ptr<string> regionNo{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcListLiteResponseBodyVpcList() {}

  explicit DescribeVpcListLiteResponseBodyVpcList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcListLiteResponseBodyVpcList() = default;
};
class DescribeVpcListLiteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVpcListLiteResponseBodyVpcList>> vpcList{};

  DescribeVpcListLiteResponseBody() {}

  explicit DescribeVpcListLiteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcList") != m.end() && !m["VpcList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcList"].type()) {
        vector<DescribeVpcListLiteResponseBodyVpcList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcListLiteResponseBodyVpcList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcList = make_shared<vector<DescribeVpcListLiteResponseBodyVpcList>>(expect1);
      }
    }
  }


  virtual ~DescribeVpcListLiteResponseBody() = default;
};
class DescribeVpcListLiteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcListLiteResponseBody> body{};

  DescribeVpcListLiteResponse() {}

  explicit DescribeVpcListLiteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcListLiteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcListLiteResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcListLiteResponse() = default;
};
class DescribeVpcZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> regionNo{};

  DescribeVpcZoneRequest() {}

  explicit DescribeVpcZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
  }


  virtual ~DescribeVpcZoneRequest() = default;
};
class DescribeVpcZoneResponseBodyZoneList : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneType{};

  DescribeVpcZoneResponseBodyZoneList() {}

  explicit DescribeVpcZoneResponseBodyZoneList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (zoneType) {
      res["ZoneType"] = boost::any(*zoneType);
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
    if (m.find("ZoneType") != m.end() && !m["ZoneType"].empty()) {
      zoneType = make_shared<string>(boost::any_cast<string>(m["ZoneType"]));
    }
  }


  virtual ~DescribeVpcZoneResponseBodyZoneList() = default;
};
class DescribeVpcZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVpcZoneResponseBodyZoneList>> zoneList{};

  DescribeVpcZoneResponseBody() {}

  explicit DescribeVpcZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zoneList) {
      vector<boost::any> temp1;
      for(auto item1:*zoneList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ZoneList") != m.end() && !m["ZoneList"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneList"].type()) {
        vector<DescribeVpcZoneResponseBodyZoneList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcZoneResponseBodyZoneList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneList = make_shared<vector<DescribeVpcZoneResponseBodyZoneList>>(expect1);
      }
    }
  }


  virtual ~DescribeVpcZoneResponseBody() = default;
};
class DescribeVpcZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcZoneResponseBody> body{};

  DescribeVpcZoneResponse() {}

  explicit DescribeVpcZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcZoneResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcZoneResponse() = default;
};
class DescribeVulnerabilityProtectedListRequest : public Darabonba::Model {
public:
  shared_ptr<string> attackType{};
  shared_ptr<long> buyVersion{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> order{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortKey{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startTime{};
  shared_ptr<string> userType{};
  shared_ptr<string> vulnCveName{};
  shared_ptr<string> vulnLevel{};
  shared_ptr<string> vulnResource{};
  shared_ptr<string> vulnStatus{};
  shared_ptr<string> vulnType{};

  DescribeVulnerabilityProtectedListRequest() {}

  explicit DescribeVulnerabilityProtectedListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackType) {
      res["AttackType"] = boost::any(*attackType);
    }
    if (buyVersion) {
      res["BuyVersion"] = boost::any(*buyVersion);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortKey) {
      res["SortKey"] = boost::any(*sortKey);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    if (vulnCveName) {
      res["VulnCveName"] = boost::any(*vulnCveName);
    }
    if (vulnLevel) {
      res["VulnLevel"] = boost::any(*vulnLevel);
    }
    if (vulnResource) {
      res["VulnResource"] = boost::any(*vulnResource);
    }
    if (vulnStatus) {
      res["VulnStatus"] = boost::any(*vulnStatus);
    }
    if (vulnType) {
      res["VulnType"] = boost::any(*vulnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackType") != m.end() && !m["AttackType"].empty()) {
      attackType = make_shared<string>(boost::any_cast<string>(m["AttackType"]));
    }
    if (m.find("BuyVersion") != m.end() && !m["BuyVersion"].empty()) {
      buyVersion = make_shared<long>(boost::any_cast<long>(m["BuyVersion"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SortKey") != m.end() && !m["SortKey"].empty()) {
      sortKey = make_shared<string>(boost::any_cast<string>(m["SortKey"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
    if (m.find("VulnCveName") != m.end() && !m["VulnCveName"].empty()) {
      vulnCveName = make_shared<string>(boost::any_cast<string>(m["VulnCveName"]));
    }
    if (m.find("VulnLevel") != m.end() && !m["VulnLevel"].empty()) {
      vulnLevel = make_shared<string>(boost::any_cast<string>(m["VulnLevel"]));
    }
    if (m.find("VulnResource") != m.end() && !m["VulnResource"].empty()) {
      vulnResource = make_shared<string>(boost::any_cast<string>(m["VulnResource"]));
    }
    if (m.find("VulnStatus") != m.end() && !m["VulnStatus"].empty()) {
      vulnStatus = make_shared<string>(boost::any_cast<string>(m["VulnStatus"]));
    }
    if (m.find("VulnType") != m.end() && !m["VulnType"].empty()) {
      vulnType = make_shared<string>(boost::any_cast<string>(m["VulnType"]));
    }
  }


  virtual ~DescribeVulnerabilityProtectedListRequest() = default;
};
class DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList : public Darabonba::Model {
public:
  shared_ptr<string> eip{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> vulnStatus{};

  DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList() {}

  explicit DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eip) {
      res["Eip"] = boost::any(*eip);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (vulnStatus) {
      res["VulnStatus"] = boost::any(*vulnStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Eip") != m.end() && !m["Eip"].empty()) {
      eip = make_shared<string>(boost::any_cast<string>(m["Eip"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("VulnStatus") != m.end() && !m["VulnStatus"].empty()) {
      vulnStatus = make_shared<string>(boost::any_cast<string>(m["VulnStatus"]));
    }
  }


  virtual ~DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList() = default;
};
class DescribeVulnerabilityProtectedListResponseBodyVulnList : public Darabonba::Model {
public:
  shared_ptr<long> attackCnt{};
  shared_ptr<long> attackType{};
  shared_ptr<string> basicRuleIds{};
  shared_ptr<string> cveId{};
  shared_ptr<long> firstTime{};
  shared_ptr<long> highlightTag{};
  shared_ptr<long> lastTime{};
  shared_ptr<string> memberUid{};
  shared_ptr<bool> needOpenBasicRule{};
  shared_ptr<string> needOpenBasicRuleUuids{};
  shared_ptr<bool> needOpenRunMode{};
  shared_ptr<bool> needOpenVirtualPatche{};
  shared_ptr<string> needOpenVirtualPatcheUuids{};
  shared_ptr<long> needRuleClass{};
  shared_ptr<long> resourceCnt{};
  shared_ptr<vector<DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList>> resourceList{};
  shared_ptr<string> virtualPatcheIds{};
  shared_ptr<string> vulnKey{};
  shared_ptr<string> vulnLevel{};
  shared_ptr<string> vulnName{};
  shared_ptr<string> vulnStatus{};
  shared_ptr<string> vulnType{};

  DescribeVulnerabilityProtectedListResponseBodyVulnList() {}

  explicit DescribeVulnerabilityProtectedListResponseBodyVulnList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackCnt) {
      res["AttackCnt"] = boost::any(*attackCnt);
    }
    if (attackType) {
      res["AttackType"] = boost::any(*attackType);
    }
    if (basicRuleIds) {
      res["BasicRuleIds"] = boost::any(*basicRuleIds);
    }
    if (cveId) {
      res["CveId"] = boost::any(*cveId);
    }
    if (firstTime) {
      res["FirstTime"] = boost::any(*firstTime);
    }
    if (highlightTag) {
      res["HighlightTag"] = boost::any(*highlightTag);
    }
    if (lastTime) {
      res["LastTime"] = boost::any(*lastTime);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (needOpenBasicRule) {
      res["NeedOpenBasicRule"] = boost::any(*needOpenBasicRule);
    }
    if (needOpenBasicRuleUuids) {
      res["NeedOpenBasicRuleUuids"] = boost::any(*needOpenBasicRuleUuids);
    }
    if (needOpenRunMode) {
      res["NeedOpenRunMode"] = boost::any(*needOpenRunMode);
    }
    if (needOpenVirtualPatche) {
      res["NeedOpenVirtualPatche"] = boost::any(*needOpenVirtualPatche);
    }
    if (needOpenVirtualPatcheUuids) {
      res["NeedOpenVirtualPatcheUuids"] = boost::any(*needOpenVirtualPatcheUuids);
    }
    if (needRuleClass) {
      res["NeedRuleClass"] = boost::any(*needRuleClass);
    }
    if (resourceCnt) {
      res["ResourceCnt"] = boost::any(*resourceCnt);
    }
    if (resourceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceList"] = boost::any(temp1);
    }
    if (virtualPatcheIds) {
      res["VirtualPatcheIds"] = boost::any(*virtualPatcheIds);
    }
    if (vulnKey) {
      res["VulnKey"] = boost::any(*vulnKey);
    }
    if (vulnLevel) {
      res["VulnLevel"] = boost::any(*vulnLevel);
    }
    if (vulnName) {
      res["VulnName"] = boost::any(*vulnName);
    }
    if (vulnStatus) {
      res["VulnStatus"] = boost::any(*vulnStatus);
    }
    if (vulnType) {
      res["VulnType"] = boost::any(*vulnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackCnt") != m.end() && !m["AttackCnt"].empty()) {
      attackCnt = make_shared<long>(boost::any_cast<long>(m["AttackCnt"]));
    }
    if (m.find("AttackType") != m.end() && !m["AttackType"].empty()) {
      attackType = make_shared<long>(boost::any_cast<long>(m["AttackType"]));
    }
    if (m.find("BasicRuleIds") != m.end() && !m["BasicRuleIds"].empty()) {
      basicRuleIds = make_shared<string>(boost::any_cast<string>(m["BasicRuleIds"]));
    }
    if (m.find("CveId") != m.end() && !m["CveId"].empty()) {
      cveId = make_shared<string>(boost::any_cast<string>(m["CveId"]));
    }
    if (m.find("FirstTime") != m.end() && !m["FirstTime"].empty()) {
      firstTime = make_shared<long>(boost::any_cast<long>(m["FirstTime"]));
    }
    if (m.find("HighlightTag") != m.end() && !m["HighlightTag"].empty()) {
      highlightTag = make_shared<long>(boost::any_cast<long>(m["HighlightTag"]));
    }
    if (m.find("LastTime") != m.end() && !m["LastTime"].empty()) {
      lastTime = make_shared<long>(boost::any_cast<long>(m["LastTime"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("NeedOpenBasicRule") != m.end() && !m["NeedOpenBasicRule"].empty()) {
      needOpenBasicRule = make_shared<bool>(boost::any_cast<bool>(m["NeedOpenBasicRule"]));
    }
    if (m.find("NeedOpenBasicRuleUuids") != m.end() && !m["NeedOpenBasicRuleUuids"].empty()) {
      needOpenBasicRuleUuids = make_shared<string>(boost::any_cast<string>(m["NeedOpenBasicRuleUuids"]));
    }
    if (m.find("NeedOpenRunMode") != m.end() && !m["NeedOpenRunMode"].empty()) {
      needOpenRunMode = make_shared<bool>(boost::any_cast<bool>(m["NeedOpenRunMode"]));
    }
    if (m.find("NeedOpenVirtualPatche") != m.end() && !m["NeedOpenVirtualPatche"].empty()) {
      needOpenVirtualPatche = make_shared<bool>(boost::any_cast<bool>(m["NeedOpenVirtualPatche"]));
    }
    if (m.find("NeedOpenVirtualPatcheUuids") != m.end() && !m["NeedOpenVirtualPatcheUuids"].empty()) {
      needOpenVirtualPatcheUuids = make_shared<string>(boost::any_cast<string>(m["NeedOpenVirtualPatcheUuids"]));
    }
    if (m.find("NeedRuleClass") != m.end() && !m["NeedRuleClass"].empty()) {
      needRuleClass = make_shared<long>(boost::any_cast<long>(m["NeedRuleClass"]));
    }
    if (m.find("ResourceCnt") != m.end() && !m["ResourceCnt"].empty()) {
      resourceCnt = make_shared<long>(boost::any_cast<long>(m["ResourceCnt"]));
    }
    if (m.find("ResourceList") != m.end() && !m["ResourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceList"].type()) {
        vector<DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceList = make_shared<vector<DescribeVulnerabilityProtectedListResponseBodyVulnListResourceList>>(expect1);
      }
    }
    if (m.find("VirtualPatcheIds") != m.end() && !m["VirtualPatcheIds"].empty()) {
      virtualPatcheIds = make_shared<string>(boost::any_cast<string>(m["VirtualPatcheIds"]));
    }
    if (m.find("VulnKey") != m.end() && !m["VulnKey"].empty()) {
      vulnKey = make_shared<string>(boost::any_cast<string>(m["VulnKey"]));
    }
    if (m.find("VulnLevel") != m.end() && !m["VulnLevel"].empty()) {
      vulnLevel = make_shared<string>(boost::any_cast<string>(m["VulnLevel"]));
    }
    if (m.find("VulnName") != m.end() && !m["VulnName"].empty()) {
      vulnName = make_shared<string>(boost::any_cast<string>(m["VulnName"]));
    }
    if (m.find("VulnStatus") != m.end() && !m["VulnStatus"].empty()) {
      vulnStatus = make_shared<string>(boost::any_cast<string>(m["VulnStatus"]));
    }
    if (m.find("VulnType") != m.end() && !m["VulnType"].empty()) {
      vulnType = make_shared<string>(boost::any_cast<string>(m["VulnType"]));
    }
  }


  virtual ~DescribeVulnerabilityProtectedListResponseBodyVulnList() = default;
};
class DescribeVulnerabilityProtectedListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeVulnerabilityProtectedListResponseBodyVulnList>> vulnList{};
  shared_ptr<long> zeroResourceCount{};

  DescribeVulnerabilityProtectedListResponseBody() {}

  explicit DescribeVulnerabilityProtectedListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vulnList) {
      vector<boost::any> temp1;
      for(auto item1:*vulnList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VulnList"] = boost::any(temp1);
    }
    if (zeroResourceCount) {
      res["ZeroResourceCount"] = boost::any(*zeroResourceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VulnList") != m.end() && !m["VulnList"].empty()) {
      if (typeid(vector<boost::any>) == m["VulnList"].type()) {
        vector<DescribeVulnerabilityProtectedListResponseBodyVulnList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VulnList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVulnerabilityProtectedListResponseBodyVulnList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vulnList = make_shared<vector<DescribeVulnerabilityProtectedListResponseBodyVulnList>>(expect1);
      }
    }
    if (m.find("ZeroResourceCount") != m.end() && !m["ZeroResourceCount"].empty()) {
      zeroResourceCount = make_shared<long>(boost::any_cast<long>(m["ZeroResourceCount"]));
    }
  }


  virtual ~DescribeVulnerabilityProtectedListResponseBody() = default;
};
class DescribeVulnerabilityProtectedListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVulnerabilityProtectedListResponseBody> body{};

  DescribeVulnerabilityProtectedListResponse() {}

  explicit DescribeVulnerabilityProtectedListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVulnerabilityProtectedListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVulnerabilityProtectedListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVulnerabilityProtectedListResponse() = default;
};
class ModifyAddressBookRequestTagList : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ModifyAddressBookRequestTagList() {}

  explicit ModifyAddressBookRequestTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAddressBookRequestTagList() = default;
};
class ModifyAddressBookRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressList{};
  shared_ptr<string> autoAddTagEcs{};
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupUuid{};
  shared_ptr<string> lang{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> sourceIp{};
  shared_ptr<vector<ModifyAddressBookRequestTagList>> tagList{};
  shared_ptr<string> tagRelation{};

  ModifyAddressBookRequest() {}

  explicit ModifyAddressBookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressList) {
      res["AddressList"] = boost::any(*addressList);
    }
    if (autoAddTagEcs) {
      res["AutoAddTagEcs"] = boost::any(*autoAddTagEcs);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupUuid) {
      res["GroupUuid"] = boost::any(*groupUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (tagRelation) {
      res["TagRelation"] = boost::any(*tagRelation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressList") != m.end() && !m["AddressList"].empty()) {
      addressList = make_shared<string>(boost::any_cast<string>(m["AddressList"]));
    }
    if (m.find("AutoAddTagEcs") != m.end() && !m["AutoAddTagEcs"].empty()) {
      autoAddTagEcs = make_shared<string>(boost::any_cast<string>(m["AutoAddTagEcs"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupUuid") != m.end() && !m["GroupUuid"].empty()) {
      groupUuid = make_shared<string>(boost::any_cast<string>(m["GroupUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<ModifyAddressBookRequestTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyAddressBookRequestTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<ModifyAddressBookRequestTagList>>(expect1);
      }
    }
    if (m.find("TagRelation") != m.end() && !m["TagRelation"].empty()) {
      tagRelation = make_shared<string>(boost::any_cast<string>(m["TagRelation"]));
    }
  }


  virtual ~ModifyAddressBookRequest() = default;
};
class ModifyAddressBookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAddressBookResponseBody() {}

  explicit ModifyAddressBookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAddressBookResponseBody() = default;
};
class ModifyAddressBookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAddressBookResponseBody> body{};

  ModifyAddressBookResponse() {}

  explicit ModifyAddressBookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAddressBookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAddressBookResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAddressBookResponse() = default;
};
class ModifyControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<string> applicationName{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> direction{};
  shared_ptr<string> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};

  ModifyControlPolicyRequest() {}

  explicit ModifyControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<string>(boost::any_cast<string>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ModifyControlPolicyRequest() = default;
};
class ModifyControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyControlPolicyResponseBody() {}

  explicit ModifyControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyControlPolicyResponseBody() = default;
};
class ModifyControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyControlPolicyResponseBody> body{};

  ModifyControlPolicyResponse() {}

  explicit ModifyControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyControlPolicyResponse() = default;
};
class ModifyControlPolicyPositionRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> lang{};
  shared_ptr<string> newOrder{};
  shared_ptr<string> oldOrder{};
  shared_ptr<string> sourceIp{};

  ModifyControlPolicyPositionRequest() {}

  explicit ModifyControlPolicyPositionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (newOrder) {
      res["NewOrder"] = boost::any(*newOrder);
    }
    if (oldOrder) {
      res["OldOrder"] = boost::any(*oldOrder);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NewOrder") != m.end() && !m["NewOrder"].empty()) {
      newOrder = make_shared<string>(boost::any_cast<string>(m["NewOrder"]));
    }
    if (m.find("OldOrder") != m.end() && !m["OldOrder"].empty()) {
      oldOrder = make_shared<string>(boost::any_cast<string>(m["OldOrder"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ModifyControlPolicyPositionRequest() = default;
};
class ModifyControlPolicyPositionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyControlPolicyPositionResponseBody() {}

  explicit ModifyControlPolicyPositionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyControlPolicyPositionResponseBody() = default;
};
class ModifyControlPolicyPositionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyControlPolicyPositionResponseBody> body{};

  ModifyControlPolicyPositionResponse() {}

  explicit ModifyControlPolicyPositionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyControlPolicyPositionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyControlPolicyPositionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyControlPolicyPositionResponse() = default;
};
class ModifyDefaultIPSConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> basicRules{};
  shared_ptr<long> ctiRules{};
  shared_ptr<string> lang{};
  shared_ptr<long> maxSdl{};
  shared_ptr<long> patchRules{};
  shared_ptr<long> ruleClass{};
  shared_ptr<long> runMode{};

  ModifyDefaultIPSConfigRequest() {}

  explicit ModifyDefaultIPSConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicRules) {
      res["BasicRules"] = boost::any(*basicRules);
    }
    if (ctiRules) {
      res["CtiRules"] = boost::any(*ctiRules);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (maxSdl) {
      res["MaxSdl"] = boost::any(*maxSdl);
    }
    if (patchRules) {
      res["PatchRules"] = boost::any(*patchRules);
    }
    if (ruleClass) {
      res["RuleClass"] = boost::any(*ruleClass);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicRules") != m.end() && !m["BasicRules"].empty()) {
      basicRules = make_shared<long>(boost::any_cast<long>(m["BasicRules"]));
    }
    if (m.find("CtiRules") != m.end() && !m["CtiRules"].empty()) {
      ctiRules = make_shared<long>(boost::any_cast<long>(m["CtiRules"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MaxSdl") != m.end() && !m["MaxSdl"].empty()) {
      maxSdl = make_shared<long>(boost::any_cast<long>(m["MaxSdl"]));
    }
    if (m.find("PatchRules") != m.end() && !m["PatchRules"].empty()) {
      patchRules = make_shared<long>(boost::any_cast<long>(m["PatchRules"]));
    }
    if (m.find("RuleClass") != m.end() && !m["RuleClass"].empty()) {
      ruleClass = make_shared<long>(boost::any_cast<long>(m["RuleClass"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<long>(boost::any_cast<long>(m["RunMode"]));
    }
  }


  virtual ~ModifyDefaultIPSConfigRequest() = default;
};
class ModifyDefaultIPSConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefaultIPSConfigResponseBody() {}

  explicit ModifyDefaultIPSConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefaultIPSConfigResponseBody() = default;
};
class ModifyDefaultIPSConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefaultIPSConfigResponseBody> body{};

  ModifyDefaultIPSConfigResponse() {}

  explicit ModifyDefaultIPSConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDefaultIPSConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefaultIPSConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefaultIPSConfigResponse() = default;
};
class ModifyFirewallV2RoutePolicySwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> shouldRecover{};
  shared_ptr<string> trFirewallRoutePolicyId{};
  shared_ptr<string> trFirewallRoutePolicySwitchStatus{};

  ModifyFirewallV2RoutePolicySwitchRequest() {}

  explicit ModifyFirewallV2RoutePolicySwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (shouldRecover) {
      res["ShouldRecover"] = boost::any(*shouldRecover);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    if (trFirewallRoutePolicySwitchStatus) {
      res["TrFirewallRoutePolicySwitchStatus"] = boost::any(*trFirewallRoutePolicySwitchStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ShouldRecover") != m.end() && !m["ShouldRecover"].empty()) {
      shouldRecover = make_shared<string>(boost::any_cast<string>(m["ShouldRecover"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
    if (m.find("TrFirewallRoutePolicySwitchStatus") != m.end() && !m["TrFirewallRoutePolicySwitchStatus"].empty()) {
      trFirewallRoutePolicySwitchStatus = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicySwitchStatus"]));
    }
  }


  virtual ~ModifyFirewallV2RoutePolicySwitchRequest() = default;
};
class ModifyFirewallV2RoutePolicySwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyFirewallV2RoutePolicySwitchResponseBody() {}

  explicit ModifyFirewallV2RoutePolicySwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyFirewallV2RoutePolicySwitchResponseBody() = default;
};
class ModifyFirewallV2RoutePolicySwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFirewallV2RoutePolicySwitchResponseBody> body{};

  ModifyFirewallV2RoutePolicySwitchResponse() {}

  explicit ModifyFirewallV2RoutePolicySwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyFirewallV2RoutePolicySwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFirewallV2RoutePolicySwitchResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFirewallV2RoutePolicySwitchResponse() = default;
};
class ModifyInstanceMemberAttributesRequestMembers : public Darabonba::Model {
public:
  shared_ptr<string> memberDesc{};
  shared_ptr<long> memberUid{};

  ModifyInstanceMemberAttributesRequestMembers() {}

  explicit ModifyInstanceMemberAttributesRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberDesc) {
      res["MemberDesc"] = boost::any(*memberDesc);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberDesc") != m.end() && !m["MemberDesc"].empty()) {
      memberDesc = make_shared<string>(boost::any_cast<string>(m["MemberDesc"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
  }


  virtual ~ModifyInstanceMemberAttributesRequestMembers() = default;
};
class ModifyInstanceMemberAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyInstanceMemberAttributesRequestMembers>> members{};

  ModifyInstanceMemberAttributesRequest() {}

  explicit ModifyInstanceMemberAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<ModifyInstanceMemberAttributesRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyInstanceMemberAttributesRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<ModifyInstanceMemberAttributesRequestMembers>>(expect1);
      }
    }
  }


  virtual ~ModifyInstanceMemberAttributesRequest() = default;
};
class ModifyInstanceMemberAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceMemberAttributesResponseBody() {}

  explicit ModifyInstanceMemberAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceMemberAttributesResponseBody() = default;
};
class ModifyInstanceMemberAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceMemberAttributesResponseBody> body{};

  ModifyInstanceMemberAttributesResponse() {}

  explicit ModifyInstanceMemberAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceMemberAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceMemberAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceMemberAttributesResponse() = default;
};
class ModifyNatFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> direction{};
  shared_ptr<string> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};

  ModifyNatFirewallControlPolicyRequest() {}

  explicit ModifyNatFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<string>(boost::any_cast<string>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ModifyNatFirewallControlPolicyRequest() = default;
};
class ModifyNatFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyNatFirewallControlPolicyResponseBody() {}

  explicit ModifyNatFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyNatFirewallControlPolicyResponseBody() = default;
};
class ModifyNatFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNatFirewallControlPolicyResponseBody> body{};

  ModifyNatFirewallControlPolicyResponse() {}

  explicit ModifyNatFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyNatFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNatFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNatFirewallControlPolicyResponse() = default;
};
class ModifyNatFirewallControlPolicyPositionRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> direction{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};
  shared_ptr<long> newOrder{};

  ModifyNatFirewallControlPolicyPositionRequest() {}

  explicit ModifyNatFirewallControlPolicyPositionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    if (newOrder) {
      res["NewOrder"] = boost::any(*newOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
    if (m.find("NewOrder") != m.end() && !m["NewOrder"].empty()) {
      newOrder = make_shared<long>(boost::any_cast<long>(m["NewOrder"]));
    }
  }


  virtual ~ModifyNatFirewallControlPolicyPositionRequest() = default;
};
class ModifyNatFirewallControlPolicyPositionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyNatFirewallControlPolicyPositionResponseBody() {}

  explicit ModifyNatFirewallControlPolicyPositionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyNatFirewallControlPolicyPositionResponseBody() = default;
};
class ModifyNatFirewallControlPolicyPositionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNatFirewallControlPolicyPositionResponseBody> body{};

  ModifyNatFirewallControlPolicyPositionResponse() {}

  explicit ModifyNatFirewallControlPolicyPositionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyNatFirewallControlPolicyPositionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNatFirewallControlPolicyPositionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNatFirewallControlPolicyPositionResponse() = default;
};
class ModifyObjectGroupOperationRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> direction{};
  shared_ptr<string> lang{};
  shared_ptr<vector<string>> objectList{};
  shared_ptr<string> objectOperation{};
  shared_ptr<string> objectType{};
  shared_ptr<string> sourceIp{};

  ModifyObjectGroupOperationRequest() {}

  explicit ModifyObjectGroupOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (objectList) {
      res["ObjectList"] = boost::any(*objectList);
    }
    if (objectOperation) {
      res["ObjectOperation"] = boost::any(*objectOperation);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ObjectList") != m.end() && !m["ObjectList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ObjectList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ObjectList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objectList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ObjectOperation") != m.end() && !m["ObjectOperation"].empty()) {
      objectOperation = make_shared<string>(boost::any_cast<string>(m["ObjectOperation"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ModifyObjectGroupOperationRequest() = default;
};
class ModifyObjectGroupOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyObjectGroupOperationResponseBody() {}

  explicit ModifyObjectGroupOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyObjectGroupOperationResponseBody() = default;
};
class ModifyObjectGroupOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyObjectGroupOperationResponseBody> body{};

  ModifyObjectGroupOperationResponse() {}

  explicit ModifyObjectGroupOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyObjectGroupOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyObjectGroupOperationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyObjectGroupOperationResponse() = default;
};
class ModifyPolicyAdvancedConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> eips{};
  shared_ptr<string> internetSwitch{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  ModifyPolicyAdvancedConfigRequest() {}

  explicit ModifyPolicyAdvancedConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eips) {
      res["Eips"] = boost::any(*eips);
    }
    if (internetSwitch) {
      res["InternetSwitch"] = boost::any(*internetSwitch);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Eips") != m.end() && !m["Eips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Eips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Eips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      eips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InternetSwitch") != m.end() && !m["InternetSwitch"].empty()) {
      internetSwitch = make_shared<string>(boost::any_cast<string>(m["InternetSwitch"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ModifyPolicyAdvancedConfigRequest() = default;
};
class ModifyPolicyAdvancedConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPolicyAdvancedConfigResponseBody() {}

  explicit ModifyPolicyAdvancedConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPolicyAdvancedConfigResponseBody() = default;
};
class ModifyPolicyAdvancedConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPolicyAdvancedConfigResponseBody> body{};

  ModifyPolicyAdvancedConfigResponse() {}

  explicit ModifyPolicyAdvancedConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyPolicyAdvancedConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPolicyAdvancedConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPolicyAdvancedConfigResponse() = default;
};
class ModifyTrFirewallV2ConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallId{};
  shared_ptr<string> firewallName{};
  shared_ptr<string> lang{};

  ModifyTrFirewallV2ConfigurationRequest() {}

  explicit ModifyTrFirewallV2ConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (firewallName) {
      res["FirewallName"] = boost::any(*firewallName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("FirewallName") != m.end() && !m["FirewallName"].empty()) {
      firewallName = make_shared<string>(boost::any_cast<string>(m["FirewallName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~ModifyTrFirewallV2ConfigurationRequest() = default;
};
class ModifyTrFirewallV2ConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyTrFirewallV2ConfigurationResponseBody() {}

  explicit ModifyTrFirewallV2ConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyTrFirewallV2ConfigurationResponseBody() = default;
};
class ModifyTrFirewallV2ConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTrFirewallV2ConfigurationResponseBody> body{};

  ModifyTrFirewallV2ConfigurationResponse() {}

  explicit ModifyTrFirewallV2ConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyTrFirewallV2ConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTrFirewallV2ConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTrFirewallV2ConfigurationResponse() = default;
};
class ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateType{};

  ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList() {}

  explicit ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
  }


  virtual ~ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList() = default;
};
class ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList : public Darabonba::Model {
public:
  shared_ptr<string> candidateId{};
  shared_ptr<string> candidateType{};

  ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList() {}

  explicit ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (candidateId) {
      res["CandidateId"] = boost::any(*candidateId);
    }
    if (candidateType) {
      res["CandidateType"] = boost::any(*candidateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CandidateId") != m.end() && !m["CandidateId"].empty()) {
      candidateId = make_shared<string>(boost::any_cast<string>(m["CandidateId"]));
    }
    if (m.find("CandidateType") != m.end() && !m["CandidateType"].empty()) {
      candidateType = make_shared<string>(boost::any_cast<string>(m["CandidateType"]));
    }
  }


  virtual ~ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList() = default;
};
class ModifyTrFirewallV2RoutePolicyScopeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList>> destCandidateList{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> shouldRecover{};
  shared_ptr<vector<ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList>> srcCandidateList{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  ModifyTrFirewallV2RoutePolicyScopeRequest() {}

  explicit ModifyTrFirewallV2RoutePolicyScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destCandidateList) {
      vector<boost::any> temp1;
      for(auto item1:*destCandidateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DestCandidateList"] = boost::any(temp1);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (shouldRecover) {
      res["ShouldRecover"] = boost::any(*shouldRecover);
    }
    if (srcCandidateList) {
      vector<boost::any> temp1;
      for(auto item1:*srcCandidateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SrcCandidateList"] = boost::any(temp1);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestCandidateList") != m.end() && !m["DestCandidateList"].empty()) {
      if (typeid(vector<boost::any>) == m["DestCandidateList"].type()) {
        vector<ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DestCandidateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        destCandidateList = make_shared<vector<ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList>>(expect1);
      }
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ShouldRecover") != m.end() && !m["ShouldRecover"].empty()) {
      shouldRecover = make_shared<string>(boost::any_cast<string>(m["ShouldRecover"]));
    }
    if (m.find("SrcCandidateList") != m.end() && !m["SrcCandidateList"].empty()) {
      if (typeid(vector<boost::any>) == m["SrcCandidateList"].type()) {
        vector<ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SrcCandidateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        srcCandidateList = make_shared<vector<ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList>>(expect1);
      }
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~ModifyTrFirewallV2RoutePolicyScopeRequest() = default;
};
class ModifyTrFirewallV2RoutePolicyScopeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> destCandidateListShrink{};
  shared_ptr<string> firewallId{};
  shared_ptr<string> lang{};
  shared_ptr<string> shouldRecover{};
  shared_ptr<string> srcCandidateListShrink{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  ModifyTrFirewallV2RoutePolicyScopeShrinkRequest() {}

  explicit ModifyTrFirewallV2RoutePolicyScopeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destCandidateListShrink) {
      res["DestCandidateList"] = boost::any(*destCandidateListShrink);
    }
    if (firewallId) {
      res["FirewallId"] = boost::any(*firewallId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (shouldRecover) {
      res["ShouldRecover"] = boost::any(*shouldRecover);
    }
    if (srcCandidateListShrink) {
      res["SrcCandidateList"] = boost::any(*srcCandidateListShrink);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestCandidateList") != m.end() && !m["DestCandidateList"].empty()) {
      destCandidateListShrink = make_shared<string>(boost::any_cast<string>(m["DestCandidateList"]));
    }
    if (m.find("FirewallId") != m.end() && !m["FirewallId"].empty()) {
      firewallId = make_shared<string>(boost::any_cast<string>(m["FirewallId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ShouldRecover") != m.end() && !m["ShouldRecover"].empty()) {
      shouldRecover = make_shared<string>(boost::any_cast<string>(m["ShouldRecover"]));
    }
    if (m.find("SrcCandidateList") != m.end() && !m["SrcCandidateList"].empty()) {
      srcCandidateListShrink = make_shared<string>(boost::any_cast<string>(m["SrcCandidateList"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~ModifyTrFirewallV2RoutePolicyScopeShrinkRequest() = default;
};
class ModifyTrFirewallV2RoutePolicyScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> trFirewallRoutePolicyId{};

  ModifyTrFirewallV2RoutePolicyScopeResponseBody() {}

  explicit ModifyTrFirewallV2RoutePolicyScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trFirewallRoutePolicyId) {
      res["TrFirewallRoutePolicyId"] = boost::any(*trFirewallRoutePolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrFirewallRoutePolicyId") != m.end() && !m["TrFirewallRoutePolicyId"].empty()) {
      trFirewallRoutePolicyId = make_shared<string>(boost::any_cast<string>(m["TrFirewallRoutePolicyId"]));
    }
  }


  virtual ~ModifyTrFirewallV2RoutePolicyScopeResponseBody() = default;
};
class ModifyTrFirewallV2RoutePolicyScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTrFirewallV2RoutePolicyScopeResponseBody> body{};

  ModifyTrFirewallV2RoutePolicyScopeResponse() {}

  explicit ModifyTrFirewallV2RoutePolicyScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyTrFirewallV2RoutePolicyScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTrFirewallV2RoutePolicyScopeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTrFirewallV2RoutePolicyScopeResponse() = default;
};
class ModifyUserIPSWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<long> direction{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> lang{};
  shared_ptr<long> listType{};
  shared_ptr<string> listValue{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> whiteType{};

  ModifyUserIPSWhitelistRequest() {}

  explicit ModifyUserIPSWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (listType) {
      res["ListType"] = boost::any(*listType);
    }
    if (listValue) {
      res["ListValue"] = boost::any(*listValue);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (whiteType) {
      res["WhiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<long>(boost::any_cast<long>(m["Direction"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ListType") != m.end() && !m["ListType"].empty()) {
      listType = make_shared<long>(boost::any_cast<long>(m["ListType"]));
    }
    if (m.find("ListValue") != m.end() && !m["ListValue"].empty()) {
      listValue = make_shared<string>(boost::any_cast<string>(m["ListValue"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("WhiteType") != m.end() && !m["WhiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["WhiteType"]));
    }
  }


  virtual ~ModifyUserIPSWhitelistRequest() = default;
};
class ModifyUserIPSWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserIPSWhitelistResponseBody() {}

  explicit ModifyUserIPSWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserIPSWhitelistResponseBody() = default;
};
class ModifyUserIPSWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUserIPSWhitelistResponseBody> body{};

  ModifyUserIPSWhitelistResponse() {}

  explicit ModifyUserIPSWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyUserIPSWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserIPSWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserIPSWhitelistResponse() = default;
};
class ModifyVpcFirewallCenConfigureRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};

  ModifyVpcFirewallCenConfigureRequest() {}

  explicit ModifyVpcFirewallCenConfigureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~ModifyVpcFirewallCenConfigureRequest() = default;
};
class ModifyVpcFirewallCenConfigureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallCenConfigureResponseBody() {}

  explicit ModifyVpcFirewallCenConfigureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallCenConfigureResponseBody() = default;
};
class ModifyVpcFirewallCenConfigureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallCenConfigureResponseBody> body{};

  ModifyVpcFirewallCenConfigureResponse() {}

  explicit ModifyVpcFirewallCenConfigureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallCenConfigureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallCenConfigureResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallCenConfigureResponse() = default;
};
class ModifyVpcFirewallCenSwitchStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallSwitch{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> vpcFirewallId{};

  ModifyVpcFirewallCenSwitchStatusRequest() {}

  explicit ModifyVpcFirewallCenSwitchStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallSwitch) {
      res["FirewallSwitch"] = boost::any(*firewallSwitch);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallSwitch") != m.end() && !m["FirewallSwitch"].empty()) {
      firewallSwitch = make_shared<string>(boost::any_cast<string>(m["FirewallSwitch"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~ModifyVpcFirewallCenSwitchStatusRequest() = default;
};
class ModifyVpcFirewallCenSwitchStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallCenSwitchStatusResponseBody() {}

  explicit ModifyVpcFirewallCenSwitchStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallCenSwitchStatusResponseBody() = default;
};
class ModifyVpcFirewallCenSwitchStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallCenSwitchStatusResponseBody> body{};

  ModifyVpcFirewallCenSwitchStatusResponse() {}

  explicit ModifyVpcFirewallCenSwitchStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallCenSwitchStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallCenSwitchStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallCenSwitchStatusResponse() = default;
};
class ModifyVpcFirewallConfigureRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> localVpcCidrTableList{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> peerVpcCidrTableList{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<string> vpcFirewallName{};

  ModifyVpcFirewallConfigureRequest() {}

  explicit ModifyVpcFirewallConfigureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (localVpcCidrTableList) {
      res["LocalVpcCidrTableList"] = boost::any(*localVpcCidrTableList);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (peerVpcCidrTableList) {
      res["PeerVpcCidrTableList"] = boost::any(*peerVpcCidrTableList);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (vpcFirewallName) {
      res["VpcFirewallName"] = boost::any(*vpcFirewallName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LocalVpcCidrTableList") != m.end() && !m["LocalVpcCidrTableList"].empty()) {
      localVpcCidrTableList = make_shared<string>(boost::any_cast<string>(m["LocalVpcCidrTableList"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("PeerVpcCidrTableList") != m.end() && !m["PeerVpcCidrTableList"].empty()) {
      peerVpcCidrTableList = make_shared<string>(boost::any_cast<string>(m["PeerVpcCidrTableList"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("VpcFirewallName") != m.end() && !m["VpcFirewallName"].empty()) {
      vpcFirewallName = make_shared<string>(boost::any_cast<string>(m["VpcFirewallName"]));
    }
  }


  virtual ~ModifyVpcFirewallConfigureRequest() = default;
};
class ModifyVpcFirewallConfigureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallConfigureResponseBody() {}

  explicit ModifyVpcFirewallConfigureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallConfigureResponseBody() = default;
};
class ModifyVpcFirewallConfigureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallConfigureResponseBody> body{};

  ModifyVpcFirewallConfigureResponse() {}

  explicit ModifyVpcFirewallConfigureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallConfigureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallConfigureResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallConfigureResponse() = default;
};
class ModifyVpcFirewallControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclAction{};
  shared_ptr<string> aclUuid{};
  shared_ptr<string> applicationName{};
  shared_ptr<vector<string>> applicationNameList{};
  shared_ptr<string> description{};
  shared_ptr<string> destPort{};
  shared_ptr<string> destPortGroup{};
  shared_ptr<string> destPortType{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> domainResolveType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> proto{};
  shared_ptr<string> release{};
  shared_ptr<vector<long>> repeatDays{};
  shared_ptr<string> repeatEndTime{};
  shared_ptr<string> repeatStartTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> vpcFirewallId{};

  ModifyVpcFirewallControlPolicyRequest() {}

  explicit ModifyVpcFirewallControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclAction) {
      res["AclAction"] = boost::any(*aclAction);
    }
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationNameList) {
      res["ApplicationNameList"] = boost::any(*applicationNameList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destPort) {
      res["DestPort"] = boost::any(*destPort);
    }
    if (destPortGroup) {
      res["DestPortGroup"] = boost::any(*destPortGroup);
    }
    if (destPortType) {
      res["DestPortType"] = boost::any(*destPortType);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (domainResolveType) {
      res["DomainResolveType"] = boost::any(*domainResolveType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (proto) {
      res["Proto"] = boost::any(*proto);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repeatDays) {
      res["RepeatDays"] = boost::any(*repeatDays);
    }
    if (repeatEndTime) {
      res["RepeatEndTime"] = boost::any(*repeatEndTime);
    }
    if (repeatStartTime) {
      res["RepeatStartTime"] = boost::any(*repeatStartTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclAction") != m.end() && !m["AclAction"].empty()) {
      aclAction = make_shared<string>(boost::any_cast<string>(m["AclAction"]));
    }
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationNameList") != m.end() && !m["ApplicationNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestPort") != m.end() && !m["DestPort"].empty()) {
      destPort = make_shared<string>(boost::any_cast<string>(m["DestPort"]));
    }
    if (m.find("DestPortGroup") != m.end() && !m["DestPortGroup"].empty()) {
      destPortGroup = make_shared<string>(boost::any_cast<string>(m["DestPortGroup"]));
    }
    if (m.find("DestPortType") != m.end() && !m["DestPortType"].empty()) {
      destPortType = make_shared<string>(boost::any_cast<string>(m["DestPortType"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DomainResolveType") != m.end() && !m["DomainResolveType"].empty()) {
      domainResolveType = make_shared<string>(boost::any_cast<string>(m["DomainResolveType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Proto") != m.end() && !m["Proto"].empty()) {
      proto = make_shared<string>(boost::any_cast<string>(m["Proto"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepeatDays") != m.end() && !m["RepeatDays"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatDays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatDays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatDays = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatEndTime") != m.end() && !m["RepeatEndTime"].empty()) {
      repeatEndTime = make_shared<string>(boost::any_cast<string>(m["RepeatEndTime"]));
    }
    if (m.find("RepeatStartTime") != m.end() && !m["RepeatStartTime"].empty()) {
      repeatStartTime = make_shared<string>(boost::any_cast<string>(m["RepeatStartTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~ModifyVpcFirewallControlPolicyRequest() = default;
};
class ModifyVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallControlPolicyResponseBody() {}

  explicit ModifyVpcFirewallControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallControlPolicyResponseBody() = default;
};
class ModifyVpcFirewallControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallControlPolicyResponseBody> body{};

  ModifyVpcFirewallControlPolicyResponse() {}

  explicit ModifyVpcFirewallControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallControlPolicyResponse() = default;
};
class ModifyVpcFirewallControlPolicyPositionRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> lang{};
  shared_ptr<string> newOrder{};
  shared_ptr<string> oldOrder{};
  shared_ptr<string> vpcFirewallId{};

  ModifyVpcFirewallControlPolicyPositionRequest() {}

  explicit ModifyVpcFirewallControlPolicyPositionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (newOrder) {
      res["NewOrder"] = boost::any(*newOrder);
    }
    if (oldOrder) {
      res["OldOrder"] = boost::any(*oldOrder);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NewOrder") != m.end() && !m["NewOrder"].empty()) {
      newOrder = make_shared<string>(boost::any_cast<string>(m["NewOrder"]));
    }
    if (m.find("OldOrder") != m.end() && !m["OldOrder"].empty()) {
      oldOrder = make_shared<string>(boost::any_cast<string>(m["OldOrder"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~ModifyVpcFirewallControlPolicyPositionRequest() = default;
};
class ModifyVpcFirewallControlPolicyPositionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallControlPolicyPositionResponseBody() {}

  explicit ModifyVpcFirewallControlPolicyPositionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallControlPolicyPositionResponseBody() = default;
};
class ModifyVpcFirewallControlPolicyPositionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallControlPolicyPositionResponseBody> body{};

  ModifyVpcFirewallControlPolicyPositionResponse() {}

  explicit ModifyVpcFirewallControlPolicyPositionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallControlPolicyPositionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallControlPolicyPositionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallControlPolicyPositionResponse() = default;
};
class ModifyVpcFirewallDefaultIPSConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> basicRules{};
  shared_ptr<string> enableAllPatch{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> ruleClass{};
  shared_ptr<string> runMode{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> vpcFirewallId{};

  ModifyVpcFirewallDefaultIPSConfigRequest() {}

  explicit ModifyVpcFirewallDefaultIPSConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicRules) {
      res["BasicRules"] = boost::any(*basicRules);
    }
    if (enableAllPatch) {
      res["EnableAllPatch"] = boost::any(*enableAllPatch);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (ruleClass) {
      res["RuleClass"] = boost::any(*ruleClass);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicRules") != m.end() && !m["BasicRules"].empty()) {
      basicRules = make_shared<string>(boost::any_cast<string>(m["BasicRules"]));
    }
    if (m.find("EnableAllPatch") != m.end() && !m["EnableAllPatch"].empty()) {
      enableAllPatch = make_shared<string>(boost::any_cast<string>(m["EnableAllPatch"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("RuleClass") != m.end() && !m["RuleClass"].empty()) {
      ruleClass = make_shared<string>(boost::any_cast<string>(m["RuleClass"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<string>(boost::any_cast<string>(m["RunMode"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~ModifyVpcFirewallDefaultIPSConfigRequest() = default;
};
class ModifyVpcFirewallDefaultIPSConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallDefaultIPSConfigResponseBody() {}

  explicit ModifyVpcFirewallDefaultIPSConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallDefaultIPSConfigResponseBody() = default;
};
class ModifyVpcFirewallDefaultIPSConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallDefaultIPSConfigResponseBody> body{};

  ModifyVpcFirewallDefaultIPSConfigResponse() {}

  explicit ModifyVpcFirewallDefaultIPSConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallDefaultIPSConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallDefaultIPSConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallDefaultIPSConfigResponse() = default;
};
class ModifyVpcFirewallIPSWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> listType{};
  shared_ptr<string> listValue{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> vpcFirewallId{};
  shared_ptr<long> whiteType{};

  ModifyVpcFirewallIPSWhitelistRequest() {}

  explicit ModifyVpcFirewallIPSWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (listType) {
      res["ListType"] = boost::any(*listType);
    }
    if (listValue) {
      res["ListValue"] = boost::any(*listValue);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    if (whiteType) {
      res["WhiteType"] = boost::any(*whiteType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ListType") != m.end() && !m["ListType"].empty()) {
      listType = make_shared<long>(boost::any_cast<long>(m["ListType"]));
    }
    if (m.find("ListValue") != m.end() && !m["ListValue"].empty()) {
      listValue = make_shared<string>(boost::any_cast<string>(m["ListValue"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
    if (m.find("WhiteType") != m.end() && !m["WhiteType"].empty()) {
      whiteType = make_shared<long>(boost::any_cast<long>(m["WhiteType"]));
    }
  }


  virtual ~ModifyVpcFirewallIPSWhitelistRequest() = default;
};
class ModifyVpcFirewallIPSWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallIPSWhitelistResponseBody() {}

  explicit ModifyVpcFirewallIPSWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallIPSWhitelistResponseBody() = default;
};
class ModifyVpcFirewallIPSWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallIPSWhitelistResponseBody> body{};

  ModifyVpcFirewallIPSWhitelistResponse() {}

  explicit ModifyVpcFirewallIPSWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallIPSWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallIPSWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallIPSWhitelistResponse() = default;
};
class ModifyVpcFirewallSwitchStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> firewallSwitch{};
  shared_ptr<string> lang{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> vpcFirewallId{};

  ModifyVpcFirewallSwitchStatusRequest() {}

  explicit ModifyVpcFirewallSwitchStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firewallSwitch) {
      res["FirewallSwitch"] = boost::any(*firewallSwitch);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (vpcFirewallId) {
      res["VpcFirewallId"] = boost::any(*vpcFirewallId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FirewallSwitch") != m.end() && !m["FirewallSwitch"].empty()) {
      firewallSwitch = make_shared<string>(boost::any_cast<string>(m["FirewallSwitch"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("VpcFirewallId") != m.end() && !m["VpcFirewallId"].empty()) {
      vpcFirewallId = make_shared<string>(boost::any_cast<string>(m["VpcFirewallId"]));
    }
  }


  virtual ~ModifyVpcFirewallSwitchStatusRequest() = default;
};
class ModifyVpcFirewallSwitchStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVpcFirewallSwitchStatusResponseBody() {}

  explicit ModifyVpcFirewallSwitchStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVpcFirewallSwitchStatusResponseBody() = default;
};
class ModifyVpcFirewallSwitchStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVpcFirewallSwitchStatusResponseBody> body{};

  ModifyVpcFirewallSwitchStatusResponse() {}

  explicit ModifyVpcFirewallSwitchStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVpcFirewallSwitchStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVpcFirewallSwitchStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVpcFirewallSwitchStatusResponse() = default;
};
class PutDisableAllFwSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  PutDisableAllFwSwitchRequest() {}

  explicit PutDisableAllFwSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~PutDisableAllFwSwitchRequest() = default;
};
class PutDisableAllFwSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PutDisableAllFwSwitchResponseBody() {}

  explicit PutDisableAllFwSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PutDisableAllFwSwitchResponseBody() = default;
};
class PutDisableAllFwSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutDisableAllFwSwitchResponseBody> body{};

  PutDisableAllFwSwitchResponse() {}

  explicit PutDisableAllFwSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PutDisableAllFwSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutDisableAllFwSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~PutDisableAllFwSwitchResponse() = default;
};
class PutDisableFwSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipaddrList{};
  shared_ptr<string> lang{};
  shared_ptr<vector<string>> regionList{};
  shared_ptr<vector<string>> resourceTypeList{};
  shared_ptr<string> sourceIp{};

  PutDisableFwSwitchRequest() {}

  explicit PutDisableFwSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipaddrList) {
      res["IpaddrList"] = boost::any(*ipaddrList);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionList) {
      res["RegionList"] = boost::any(*regionList);
    }
    if (resourceTypeList) {
      res["ResourceTypeList"] = boost::any(*resourceTypeList);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpaddrList") != m.end() && !m["IpaddrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpaddrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpaddrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipaddrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionList") != m.end() && !m["RegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceTypeList") != m.end() && !m["ResourceTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~PutDisableFwSwitchRequest() = default;
};
class PutDisableFwSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PutDisableFwSwitchResponseBody() {}

  explicit PutDisableFwSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PutDisableFwSwitchResponseBody() = default;
};
class PutDisableFwSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutDisableFwSwitchResponseBody> body{};

  PutDisableFwSwitchResponse() {}

  explicit PutDisableFwSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PutDisableFwSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutDisableFwSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~PutDisableFwSwitchResponse() = default;
};
class PutEnableAllFwSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  PutEnableAllFwSwitchRequest() {}

  explicit PutEnableAllFwSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~PutEnableAllFwSwitchRequest() = default;
};
class PutEnableAllFwSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PutEnableAllFwSwitchResponseBody() {}

  explicit PutEnableAllFwSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PutEnableAllFwSwitchResponseBody() = default;
};
class PutEnableAllFwSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutEnableAllFwSwitchResponseBody> body{};

  PutEnableAllFwSwitchResponse() {}

  explicit PutEnableAllFwSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PutEnableAllFwSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutEnableAllFwSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~PutEnableAllFwSwitchResponse() = default;
};
class PutEnableFwSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipaddrList{};
  shared_ptr<string> lang{};
  shared_ptr<vector<string>> regionList{};
  shared_ptr<vector<string>> resourceTypeList{};
  shared_ptr<string> sourceIp{};

  PutEnableFwSwitchRequest() {}

  explicit PutEnableFwSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipaddrList) {
      res["IpaddrList"] = boost::any(*ipaddrList);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionList) {
      res["RegionList"] = boost::any(*regionList);
    }
    if (resourceTypeList) {
      res["ResourceTypeList"] = boost::any(*resourceTypeList);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpaddrList") != m.end() && !m["IpaddrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpaddrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpaddrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipaddrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionList") != m.end() && !m["RegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceTypeList") != m.end() && !m["ResourceTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~PutEnableFwSwitchRequest() = default;
};
class PutEnableFwSwitchResponseBodyAbnormalResourceStatusList : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> resource{};
  shared_ptr<string> status{};

  PutEnableFwSwitchResponseBodyAbnormalResourceStatusList() {}

  explicit PutEnableFwSwitchResponseBodyAbnormalResourceStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PutEnableFwSwitchResponseBodyAbnormalResourceStatusList() = default;
};
class PutEnableFwSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList>> abnormalResourceStatusList{};
  shared_ptr<string> requestId{};

  PutEnableFwSwitchResponseBody() {}

  explicit PutEnableFwSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abnormalResourceStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*abnormalResourceStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AbnormalResourceStatusList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbnormalResourceStatusList") != m.end() && !m["AbnormalResourceStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["AbnormalResourceStatusList"].type()) {
        vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AbnormalResourceStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PutEnableFwSwitchResponseBodyAbnormalResourceStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        abnormalResourceStatusList = make_shared<vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutEnableFwSwitchResponseBody() = default;
};
class PutEnableFwSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutEnableFwSwitchResponseBody> body{};

  PutEnableFwSwitchResponse() {}

  explicit PutEnableFwSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PutEnableFwSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutEnableFwSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~PutEnableFwSwitchResponse() = default;
};
class ReleasePostInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ReleasePostInstanceRequest() {}

  explicit ReleasePostInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleasePostInstanceRequest() = default;
};
class ReleasePostInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> releaseStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleasePostInstanceResponseBody() {}

  explicit ReleasePostInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (releaseStatus) {
      res["ReleaseStatus"] = boost::any(*releaseStatus);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("ReleaseStatus") != m.end() && !m["ReleaseStatus"].empty()) {
      releaseStatus = make_shared<bool>(boost::any_cast<bool>(m["ReleaseStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReleasePostInstanceResponseBody() = default;
};
class ReleasePostInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleasePostInstanceResponseBody> body{};

  ReleasePostInstanceResponse() {}

  explicit ReleasePostInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleasePostInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleasePostInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleasePostInstanceResponse() = default;
};
class ResetNatFirewallRuleHitCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> lang{};
  shared_ptr<string> natGatewayId{};

  ResetNatFirewallRuleHitCountRequest() {}

  explicit ResetNatFirewallRuleHitCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (natGatewayId) {
      res["NatGatewayId"] = boost::any(*natGatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NatGatewayId") != m.end() && !m["NatGatewayId"].empty()) {
      natGatewayId = make_shared<string>(boost::any_cast<string>(m["NatGatewayId"]));
    }
  }


  virtual ~ResetNatFirewallRuleHitCountRequest() = default;
};
class ResetNatFirewallRuleHitCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetNatFirewallRuleHitCountResponseBody() {}

  explicit ResetNatFirewallRuleHitCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetNatFirewallRuleHitCountResponseBody() = default;
};
class ResetNatFirewallRuleHitCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetNatFirewallRuleHitCountResponseBody> body{};

  ResetNatFirewallRuleHitCountResponse() {}

  explicit ResetNatFirewallRuleHitCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetNatFirewallRuleHitCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetNatFirewallRuleHitCountResponseBody>(model1);
      }
    }
  }


  virtual ~ResetNatFirewallRuleHitCountResponse() = default;
};
class ResetVpcFirewallRuleHitCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclUuid{};
  shared_ptr<string> lang{};

  ResetVpcFirewallRuleHitCountRequest() {}

  explicit ResetVpcFirewallRuleHitCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUuid) {
      res["AclUuid"] = boost::any(*aclUuid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUuid") != m.end() && !m["AclUuid"].empty()) {
      aclUuid = make_shared<string>(boost::any_cast<string>(m["AclUuid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~ResetVpcFirewallRuleHitCountRequest() = default;
};
class ResetVpcFirewallRuleHitCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetVpcFirewallRuleHitCountResponseBody() {}

  explicit ResetVpcFirewallRuleHitCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetVpcFirewallRuleHitCountResponseBody() = default;
};
class ResetVpcFirewallRuleHitCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetVpcFirewallRuleHitCountResponseBody> body{};

  ResetVpcFirewallRuleHitCountResponse() {}

  explicit ResetVpcFirewallRuleHitCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetVpcFirewallRuleHitCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetVpcFirewallRuleHitCountResponseBody>(model1);
      }
    }
  }


  virtual ~ResetVpcFirewallRuleHitCountResponse() = default;
};
class SwitchSecurityProxyRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> proxyId{};
  shared_ptr<string> switch_{};

  SwitchSecurityProxyRequest() {}

  explicit SwitchSecurityProxyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (proxyId) {
      res["ProxyId"] = boost::any(*proxyId);
    }
    if (switch_) {
      res["Switch"] = boost::any(*switch_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ProxyId") != m.end() && !m["ProxyId"].empty()) {
      proxyId = make_shared<string>(boost::any_cast<string>(m["ProxyId"]));
    }
    if (m.find("Switch") != m.end() && !m["Switch"].empty()) {
      switch_ = make_shared<string>(boost::any_cast<string>(m["Switch"]));
    }
  }


  virtual ~SwitchSecurityProxyRequest() = default;
};
class SwitchSecurityProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchSecurityProxyResponseBody() {}

  explicit SwitchSecurityProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchSecurityProxyResponseBody() = default;
};
class SwitchSecurityProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchSecurityProxyResponseBody> body{};

  SwitchSecurityProxyResponse() {}

  explicit SwitchSecurityProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SwitchSecurityProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchSecurityProxyResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchSecurityProxyResponse() = default;
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
  AddAddressBookResponse addAddressBookWithOptions(shared_ptr<AddAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddAddressBookResponse addAddressBook(shared_ptr<AddAddressBookRequest> request);
  AddControlPolicyResponse addControlPolicyWithOptions(shared_ptr<AddControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddControlPolicyResponse addControlPolicy(shared_ptr<AddControlPolicyRequest> request);
  AddInstanceMembersResponse addInstanceMembersWithOptions(shared_ptr<AddInstanceMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddInstanceMembersResponse addInstanceMembers(shared_ptr<AddInstanceMembersRequest> request);
  BatchCopyVpcFirewallControlPolicyResponse batchCopyVpcFirewallControlPolicyWithOptions(shared_ptr<BatchCopyVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchCopyVpcFirewallControlPolicyResponse batchCopyVpcFirewallControlPolicy(shared_ptr<BatchCopyVpcFirewallControlPolicyRequest> request);
  BatchDeleteVpcFirewallControlPolicyResponse batchDeleteVpcFirewallControlPolicyWithOptions(shared_ptr<BatchDeleteVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteVpcFirewallControlPolicyResponse batchDeleteVpcFirewallControlPolicy(shared_ptr<BatchDeleteVpcFirewallControlPolicyRequest> request);
  CreateDownloadTaskResponse createDownloadTaskWithOptions(shared_ptr<CreateDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDownloadTaskResponse createDownloadTask(shared_ptr<CreateDownloadTaskRequest> request);
  CreateNatFirewallControlPolicyResponse createNatFirewallControlPolicyWithOptions(shared_ptr<CreateNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNatFirewallControlPolicyResponse createNatFirewallControlPolicy(shared_ptr<CreateNatFirewallControlPolicyRequest> request);
  CreateSecurityProxyResponse createSecurityProxyWithOptions(shared_ptr<CreateSecurityProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecurityProxyResponse createSecurityProxy(shared_ptr<CreateSecurityProxyRequest> request);
  CreateSlsLogDispatchResponse createSlsLogDispatchWithOptions(shared_ptr<CreateSlsLogDispatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSlsLogDispatchResponse createSlsLogDispatch(shared_ptr<CreateSlsLogDispatchRequest> request);
  CreateTrFirewallV2Response createTrFirewallV2WithOptions(shared_ptr<CreateTrFirewallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrFirewallV2Response createTrFirewallV2(shared_ptr<CreateTrFirewallV2Request> request);
  CreateTrFirewallV2RoutePolicyResponse createTrFirewallV2RoutePolicyWithOptions(shared_ptr<CreateTrFirewallV2RoutePolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrFirewallV2RoutePolicyResponse createTrFirewallV2RoutePolicy(shared_ptr<CreateTrFirewallV2RoutePolicyRequest> request);
  CreateVpcFirewallCenConfigureResponse createVpcFirewallCenConfigureWithOptions(shared_ptr<CreateVpcFirewallCenConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpcFirewallCenConfigureResponse createVpcFirewallCenConfigure(shared_ptr<CreateVpcFirewallCenConfigureRequest> request);
  CreateVpcFirewallConfigureResponse createVpcFirewallConfigureWithOptions(shared_ptr<CreateVpcFirewallConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpcFirewallConfigureResponse createVpcFirewallConfigure(shared_ptr<CreateVpcFirewallConfigureRequest> request);
  CreateVpcFirewallControlPolicyResponse createVpcFirewallControlPolicyWithOptions(shared_ptr<CreateVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpcFirewallControlPolicyResponse createVpcFirewallControlPolicy(shared_ptr<CreateVpcFirewallControlPolicyRequest> request);
  DeleteAddressBookResponse deleteAddressBookWithOptions(shared_ptr<DeleteAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAddressBookResponse deleteAddressBook(shared_ptr<DeleteAddressBookRequest> request);
  DeleteControlPolicyResponse deleteControlPolicyWithOptions(shared_ptr<DeleteControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteControlPolicyResponse deleteControlPolicy(shared_ptr<DeleteControlPolicyRequest> request);
  DeleteControlPolicyTemplateResponse deleteControlPolicyTemplateWithOptions(shared_ptr<DeleteControlPolicyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteControlPolicyTemplateResponse deleteControlPolicyTemplate(shared_ptr<DeleteControlPolicyTemplateRequest> request);
  DeleteDownloadTaskResponse deleteDownloadTaskWithOptions(shared_ptr<DeleteDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDownloadTaskResponse deleteDownloadTask(shared_ptr<DeleteDownloadTaskRequest> request);
  DeleteFirewallV2RoutePoliciesResponse deleteFirewallV2RoutePoliciesWithOptions(shared_ptr<DeleteFirewallV2RoutePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFirewallV2RoutePoliciesResponse deleteFirewallV2RoutePolicies(shared_ptr<DeleteFirewallV2RoutePoliciesRequest> request);
  DeleteInstanceMembersResponse deleteInstanceMembersWithOptions(shared_ptr<DeleteInstanceMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceMembersResponse deleteInstanceMembers(shared_ptr<DeleteInstanceMembersRequest> request);
  DeleteNatFirewallControlPolicyResponse deleteNatFirewallControlPolicyWithOptions(shared_ptr<DeleteNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNatFirewallControlPolicyResponse deleteNatFirewallControlPolicy(shared_ptr<DeleteNatFirewallControlPolicyRequest> request);
  DeleteNatFirewallControlPolicyBatchResponse deleteNatFirewallControlPolicyBatchWithOptions(shared_ptr<DeleteNatFirewallControlPolicyBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNatFirewallControlPolicyBatchResponse deleteNatFirewallControlPolicyBatch(shared_ptr<DeleteNatFirewallControlPolicyBatchRequest> request);
  DeleteSecurityProxyResponse deleteSecurityProxyWithOptions(shared_ptr<DeleteSecurityProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecurityProxyResponse deleteSecurityProxy(shared_ptr<DeleteSecurityProxyRequest> request);
  DeleteTrFirewallV2Response deleteTrFirewallV2WithOptions(shared_ptr<DeleteTrFirewallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTrFirewallV2Response deleteTrFirewallV2(shared_ptr<DeleteTrFirewallV2Request> request);
  DeleteVpcFirewallCenConfigureResponse deleteVpcFirewallCenConfigureWithOptions(shared_ptr<DeleteVpcFirewallCenConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpcFirewallCenConfigureResponse deleteVpcFirewallCenConfigure(shared_ptr<DeleteVpcFirewallCenConfigureRequest> request);
  DeleteVpcFirewallConfigureResponse deleteVpcFirewallConfigureWithOptions(shared_ptr<DeleteVpcFirewallConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpcFirewallConfigureResponse deleteVpcFirewallConfigure(shared_ptr<DeleteVpcFirewallConfigureRequest> request);
  DeleteVpcFirewallControlPolicyResponse deleteVpcFirewallControlPolicyWithOptions(shared_ptr<DeleteVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpcFirewallControlPolicyResponse deleteVpcFirewallControlPolicy(shared_ptr<DeleteVpcFirewallControlPolicyRequest> request);
  DescribeACLProtectTrendResponse describeACLProtectTrendWithOptions(shared_ptr<DescribeACLProtectTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeACLProtectTrendResponse describeACLProtectTrend(shared_ptr<DescribeACLProtectTrendRequest> request);
  DescribeAddressBookResponse describeAddressBookWithOptions(shared_ptr<DescribeAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAddressBookResponse describeAddressBook(shared_ptr<DescribeAddressBookRequest> request);
  DescribeAssetListResponse describeAssetListWithOptions(shared_ptr<DescribeAssetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAssetListResponse describeAssetList(shared_ptr<DescribeAssetListRequest> request);
  DescribeAssetRiskListResponse describeAssetRiskListWithOptions(shared_ptr<DescribeAssetRiskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAssetRiskListResponse describeAssetRiskList(shared_ptr<DescribeAssetRiskListRequest> request);
  DescribeAssetStatisticResponse describeAssetStatisticWithOptions(shared_ptr<DescribeAssetStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAssetStatisticResponse describeAssetStatistic(shared_ptr<DescribeAssetStatisticRequest> request);
  DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummaryWithOptions(shared_ptr<DescribeCfwRiskLevelSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummary(shared_ptr<DescribeCfwRiskLevelSummaryRequest> request);
  DescribeControlPolicyResponse describeControlPolicyWithOptions(shared_ptr<DescribeControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeControlPolicyResponse describeControlPolicy(shared_ptr<DescribeControlPolicyRequest> request);
  DescribeDefaultIPSConfigResponse describeDefaultIPSConfigWithOptions(shared_ptr<DescribeDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefaultIPSConfigResponse describeDefaultIPSConfig(shared_ptr<DescribeDefaultIPSConfigRequest> request);
  DescribeDomainResolveResponse describeDomainResolveWithOptions(shared_ptr<DescribeDomainResolveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainResolveResponse describeDomainResolve(shared_ptr<DescribeDomainResolveRequest> request);
  DescribeDownloadTaskResponse describeDownloadTaskWithOptions(shared_ptr<DescribeDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadTaskResponse describeDownloadTask(shared_ptr<DescribeDownloadTaskRequest> request);
  DescribeDownloadTaskTypeResponse describeDownloadTaskTypeWithOptions(shared_ptr<DescribeDownloadTaskTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadTaskTypeResponse describeDownloadTaskType(shared_ptr<DescribeDownloadTaskTypeRequest> request);
  DescribeInstanceMembersResponse describeInstanceMembersWithOptions(shared_ptr<DescribeInstanceMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceMembersResponse describeInstanceMembers(shared_ptr<DescribeInstanceMembersRequest> request);
  DescribeInstanceRiskLevelsResponse describeInstanceRiskLevelsWithOptions(shared_ptr<DescribeInstanceRiskLevelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceRiskLevelsResponse describeInstanceRiskLevels(shared_ptr<DescribeInstanceRiskLevelsRequest> request);
  DescribeInternetOpenIpResponse describeInternetOpenIpWithOptions(shared_ptr<DescribeInternetOpenIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInternetOpenIpResponse describeInternetOpenIp(shared_ptr<DescribeInternetOpenIpRequest> request);
  DescribeInternetTrafficTrendResponse describeInternetTrafficTrendWithOptions(shared_ptr<DescribeInternetTrafficTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInternetTrafficTrendResponse describeInternetTrafficTrend(shared_ptr<DescribeInternetTrafficTrendRequest> request);
  DescribeInvadeEventListResponse describeInvadeEventListWithOptions(shared_ptr<DescribeInvadeEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInvadeEventListResponse describeInvadeEventList(shared_ptr<DescribeInvadeEventListRequest> request);
  DescribeNatAclPageStatusResponse describeNatAclPageStatusWithOptions(shared_ptr<DescribeNatAclPageStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNatAclPageStatusResponse describeNatAclPageStatus(shared_ptr<DescribeNatAclPageStatusRequest> request);
  DescribeNatFirewallControlPolicyResponse describeNatFirewallControlPolicyWithOptions(shared_ptr<DescribeNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNatFirewallControlPolicyResponse describeNatFirewallControlPolicy(shared_ptr<DescribeNatFirewallControlPolicyRequest> request);
  DescribeNatFirewallListResponse describeNatFirewallListWithOptions(shared_ptr<DescribeNatFirewallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNatFirewallListResponse describeNatFirewallList(shared_ptr<DescribeNatFirewallListRequest> request);
  DescribeNatFirewallPolicyPriorUsedResponse describeNatFirewallPolicyPriorUsedWithOptions(shared_ptr<DescribeNatFirewallPolicyPriorUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNatFirewallPolicyPriorUsedResponse describeNatFirewallPolicyPriorUsed(shared_ptr<DescribeNatFirewallPolicyPriorUsedRequest> request);
  DescribeOutgoingDestinationIPResponse describeOutgoingDestinationIPWithOptions(shared_ptr<DescribeOutgoingDestinationIPRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOutgoingDestinationIPResponse describeOutgoingDestinationIP(shared_ptr<DescribeOutgoingDestinationIPRequest> request);
  DescribeOutgoingDomainResponse describeOutgoingDomainWithOptions(shared_ptr<DescribeOutgoingDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOutgoingDomainResponse describeOutgoingDomain(shared_ptr<DescribeOutgoingDomainRequest> request);
  DescribePolicyAdvancedConfigResponse describePolicyAdvancedConfigWithOptions(shared_ptr<DescribePolicyAdvancedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyAdvancedConfigResponse describePolicyAdvancedConfig(shared_ptr<DescribePolicyAdvancedConfigRequest> request);
  DescribePolicyPriorUsedResponse describePolicyPriorUsedWithOptions(shared_ptr<DescribePolicyPriorUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyPriorUsedResponse describePolicyPriorUsed(shared_ptr<DescribePolicyPriorUsedRequest> request);
  DescribePostpayTrafficDetailResponse describePostpayTrafficDetailWithOptions(shared_ptr<DescribePostpayTrafficDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePostpayTrafficDetailResponse describePostpayTrafficDetail(shared_ptr<DescribePostpayTrafficDetailRequest> request);
  DescribePostpayTrafficTotalResponse describePostpayTrafficTotalWithOptions(shared_ptr<DescribePostpayTrafficTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePostpayTrafficTotalResponse describePostpayTrafficTotal(shared_ptr<DescribePostpayTrafficTotalRequest> request);
  DescribePrefixListsResponse describePrefixListsWithOptions(shared_ptr<DescribePrefixListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePrefixListsResponse describePrefixLists(shared_ptr<DescribePrefixListsRequest> request);
  DescribeRiskEventGroupResponse describeRiskEventGroupWithOptions(shared_ptr<DescribeRiskEventGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRiskEventGroupResponse describeRiskEventGroup(shared_ptr<DescribeRiskEventGroupRequest> request);
  DescribeRiskEventPayloadResponse describeRiskEventPayloadWithOptions(shared_ptr<DescribeRiskEventPayloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRiskEventPayloadResponse describeRiskEventPayload(shared_ptr<DescribeRiskEventPayloadRequest> request);
  DescribeSignatureLibVersionResponse describeSignatureLibVersionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSignatureLibVersionResponse describeSignatureLibVersion();
  DescribeTrFirewallPolicyBackUpAssociationListResponse describeTrFirewallPolicyBackUpAssociationListWithOptions(shared_ptr<DescribeTrFirewallPolicyBackUpAssociationListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrFirewallPolicyBackUpAssociationListResponse describeTrFirewallPolicyBackUpAssociationList(shared_ptr<DescribeTrFirewallPolicyBackUpAssociationListRequest> request);
  DescribeTrFirewallV2RoutePolicyListResponse describeTrFirewallV2RoutePolicyListWithOptions(shared_ptr<DescribeTrFirewallV2RoutePolicyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrFirewallV2RoutePolicyListResponse describeTrFirewallV2RoutePolicyList(shared_ptr<DescribeTrFirewallV2RoutePolicyListRequest> request);
  DescribeTrFirewallsV2DetailResponse describeTrFirewallsV2DetailWithOptions(shared_ptr<DescribeTrFirewallsV2DetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrFirewallsV2DetailResponse describeTrFirewallsV2Detail(shared_ptr<DescribeTrFirewallsV2DetailRequest> request);
  DescribeTrFirewallsV2ListResponse describeTrFirewallsV2ListWithOptions(shared_ptr<DescribeTrFirewallsV2ListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrFirewallsV2ListResponse describeTrFirewallsV2List(shared_ptr<DescribeTrFirewallsV2ListRequest> request);
  DescribeTrFirewallsV2RouteListResponse describeTrFirewallsV2RouteListWithOptions(shared_ptr<DescribeTrFirewallsV2RouteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrFirewallsV2RouteListResponse describeTrFirewallsV2RouteList(shared_ptr<DescribeTrFirewallsV2RouteListRequest> request);
  DescribeUserAssetIPTrafficInfoResponse describeUserAssetIPTrafficInfoWithOptions(shared_ptr<DescribeUserAssetIPTrafficInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserAssetIPTrafficInfoResponse describeUserAssetIPTrafficInfo(shared_ptr<DescribeUserAssetIPTrafficInfoRequest> request);
  DescribeUserBuyVersionResponse describeUserBuyVersionWithOptions(shared_ptr<DescribeUserBuyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserBuyVersionResponse describeUserBuyVersion(shared_ptr<DescribeUserBuyVersionRequest> request);
  DescribeUserIPSWhitelistResponse describeUserIPSWhitelistWithOptions(shared_ptr<DescribeUserIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserIPSWhitelistResponse describeUserIPSWhitelist(shared_ptr<DescribeUserIPSWhitelistRequest> request);
  DescribeVpcFirewallAclGroupListResponse describeVpcFirewallAclGroupListWithOptions(shared_ptr<DescribeVpcFirewallAclGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallAclGroupListResponse describeVpcFirewallAclGroupList(shared_ptr<DescribeVpcFirewallAclGroupListRequest> request);
  DescribeVpcFirewallCenDetailResponse describeVpcFirewallCenDetailWithOptions(shared_ptr<DescribeVpcFirewallCenDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallCenDetailResponse describeVpcFirewallCenDetail(shared_ptr<DescribeVpcFirewallCenDetailRequest> request);
  DescribeVpcFirewallCenListResponse describeVpcFirewallCenListWithOptions(shared_ptr<DescribeVpcFirewallCenListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallCenListResponse describeVpcFirewallCenList(shared_ptr<DescribeVpcFirewallCenListRequest> request);
  DescribeVpcFirewallControlPolicyResponse describeVpcFirewallControlPolicyWithOptions(shared_ptr<DescribeVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallControlPolicyResponse describeVpcFirewallControlPolicy(shared_ptr<DescribeVpcFirewallControlPolicyRequest> request);
  DescribeVpcFirewallDefaultIPSConfigResponse describeVpcFirewallDefaultIPSConfigWithOptions(shared_ptr<DescribeVpcFirewallDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallDefaultIPSConfigResponse describeVpcFirewallDefaultIPSConfig(shared_ptr<DescribeVpcFirewallDefaultIPSConfigRequest> request);
  DescribeVpcFirewallDetailResponse describeVpcFirewallDetailWithOptions(shared_ptr<DescribeVpcFirewallDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallDetailResponse describeVpcFirewallDetail(shared_ptr<DescribeVpcFirewallDetailRequest> request);
  DescribeVpcFirewallIPSWhitelistResponse describeVpcFirewallIPSWhitelistWithOptions(shared_ptr<DescribeVpcFirewallIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallIPSWhitelistResponse describeVpcFirewallIPSWhitelist(shared_ptr<DescribeVpcFirewallIPSWhitelistRequest> request);
  DescribeVpcFirewallListResponse describeVpcFirewallListWithOptions(shared_ptr<DescribeVpcFirewallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallListResponse describeVpcFirewallList(shared_ptr<DescribeVpcFirewallListRequest> request);
  DescribeVpcFirewallPolicyPriorUsedResponse describeVpcFirewallPolicyPriorUsedWithOptions(shared_ptr<DescribeVpcFirewallPolicyPriorUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcFirewallPolicyPriorUsedResponse describeVpcFirewallPolicyPriorUsed(shared_ptr<DescribeVpcFirewallPolicyPriorUsedRequest> request);
  DescribeVpcListLiteResponse describeVpcListLiteWithOptions(shared_ptr<DescribeVpcListLiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcListLiteResponse describeVpcListLite(shared_ptr<DescribeVpcListLiteRequest> request);
  DescribeVpcZoneResponse describeVpcZoneWithOptions(shared_ptr<DescribeVpcZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcZoneResponse describeVpcZone(shared_ptr<DescribeVpcZoneRequest> request);
  DescribeVulnerabilityProtectedListResponse describeVulnerabilityProtectedListWithOptions(shared_ptr<DescribeVulnerabilityProtectedListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVulnerabilityProtectedListResponse describeVulnerabilityProtectedList(shared_ptr<DescribeVulnerabilityProtectedListRequest> request);
  ModifyAddressBookResponse modifyAddressBookWithOptions(shared_ptr<ModifyAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAddressBookResponse modifyAddressBook(shared_ptr<ModifyAddressBookRequest> request);
  ModifyControlPolicyResponse modifyControlPolicyWithOptions(shared_ptr<ModifyControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyControlPolicyResponse modifyControlPolicy(shared_ptr<ModifyControlPolicyRequest> request);
  ModifyControlPolicyPositionResponse modifyControlPolicyPositionWithOptions(shared_ptr<ModifyControlPolicyPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyControlPolicyPositionResponse modifyControlPolicyPosition(shared_ptr<ModifyControlPolicyPositionRequest> request);
  ModifyDefaultIPSConfigResponse modifyDefaultIPSConfigWithOptions(shared_ptr<ModifyDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefaultIPSConfigResponse modifyDefaultIPSConfig(shared_ptr<ModifyDefaultIPSConfigRequest> request);
  ModifyFirewallV2RoutePolicySwitchResponse modifyFirewallV2RoutePolicySwitchWithOptions(shared_ptr<ModifyFirewallV2RoutePolicySwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFirewallV2RoutePolicySwitchResponse modifyFirewallV2RoutePolicySwitch(shared_ptr<ModifyFirewallV2RoutePolicySwitchRequest> request);
  ModifyInstanceMemberAttributesResponse modifyInstanceMemberAttributesWithOptions(shared_ptr<ModifyInstanceMemberAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceMemberAttributesResponse modifyInstanceMemberAttributes(shared_ptr<ModifyInstanceMemberAttributesRequest> request);
  ModifyNatFirewallControlPolicyResponse modifyNatFirewallControlPolicyWithOptions(shared_ptr<ModifyNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNatFirewallControlPolicyResponse modifyNatFirewallControlPolicy(shared_ptr<ModifyNatFirewallControlPolicyRequest> request);
  ModifyNatFirewallControlPolicyPositionResponse modifyNatFirewallControlPolicyPositionWithOptions(shared_ptr<ModifyNatFirewallControlPolicyPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNatFirewallControlPolicyPositionResponse modifyNatFirewallControlPolicyPosition(shared_ptr<ModifyNatFirewallControlPolicyPositionRequest> request);
  ModifyObjectGroupOperationResponse modifyObjectGroupOperationWithOptions(shared_ptr<ModifyObjectGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyObjectGroupOperationResponse modifyObjectGroupOperation(shared_ptr<ModifyObjectGroupOperationRequest> request);
  ModifyPolicyAdvancedConfigResponse modifyPolicyAdvancedConfigWithOptions(shared_ptr<ModifyPolicyAdvancedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyAdvancedConfigResponse modifyPolicyAdvancedConfig(shared_ptr<ModifyPolicyAdvancedConfigRequest> request);
  ModifyTrFirewallV2ConfigurationResponse modifyTrFirewallV2ConfigurationWithOptions(shared_ptr<ModifyTrFirewallV2ConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTrFirewallV2ConfigurationResponse modifyTrFirewallV2Configuration(shared_ptr<ModifyTrFirewallV2ConfigurationRequest> request);
  ModifyTrFirewallV2RoutePolicyScopeResponse modifyTrFirewallV2RoutePolicyScopeWithOptions(shared_ptr<ModifyTrFirewallV2RoutePolicyScopeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTrFirewallV2RoutePolicyScopeResponse modifyTrFirewallV2RoutePolicyScope(shared_ptr<ModifyTrFirewallV2RoutePolicyScopeRequest> request);
  ModifyUserIPSWhitelistResponse modifyUserIPSWhitelistWithOptions(shared_ptr<ModifyUserIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserIPSWhitelistResponse modifyUserIPSWhitelist(shared_ptr<ModifyUserIPSWhitelistRequest> request);
  ModifyVpcFirewallCenConfigureResponse modifyVpcFirewallCenConfigureWithOptions(shared_ptr<ModifyVpcFirewallCenConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallCenConfigureResponse modifyVpcFirewallCenConfigure(shared_ptr<ModifyVpcFirewallCenConfigureRequest> request);
  ModifyVpcFirewallCenSwitchStatusResponse modifyVpcFirewallCenSwitchStatusWithOptions(shared_ptr<ModifyVpcFirewallCenSwitchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallCenSwitchStatusResponse modifyVpcFirewallCenSwitchStatus(shared_ptr<ModifyVpcFirewallCenSwitchStatusRequest> request);
  ModifyVpcFirewallConfigureResponse modifyVpcFirewallConfigureWithOptions(shared_ptr<ModifyVpcFirewallConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallConfigureResponse modifyVpcFirewallConfigure(shared_ptr<ModifyVpcFirewallConfigureRequest> request);
  ModifyVpcFirewallControlPolicyResponse modifyVpcFirewallControlPolicyWithOptions(shared_ptr<ModifyVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallControlPolicyResponse modifyVpcFirewallControlPolicy(shared_ptr<ModifyVpcFirewallControlPolicyRequest> request);
  ModifyVpcFirewallControlPolicyPositionResponse modifyVpcFirewallControlPolicyPositionWithOptions(shared_ptr<ModifyVpcFirewallControlPolicyPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallControlPolicyPositionResponse modifyVpcFirewallControlPolicyPosition(shared_ptr<ModifyVpcFirewallControlPolicyPositionRequest> request);
  ModifyVpcFirewallDefaultIPSConfigResponse modifyVpcFirewallDefaultIPSConfigWithOptions(shared_ptr<ModifyVpcFirewallDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallDefaultIPSConfigResponse modifyVpcFirewallDefaultIPSConfig(shared_ptr<ModifyVpcFirewallDefaultIPSConfigRequest> request);
  ModifyVpcFirewallIPSWhitelistResponse modifyVpcFirewallIPSWhitelistWithOptions(shared_ptr<ModifyVpcFirewallIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallIPSWhitelistResponse modifyVpcFirewallIPSWhitelist(shared_ptr<ModifyVpcFirewallIPSWhitelistRequest> request);
  ModifyVpcFirewallSwitchStatusResponse modifyVpcFirewallSwitchStatusWithOptions(shared_ptr<ModifyVpcFirewallSwitchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVpcFirewallSwitchStatusResponse modifyVpcFirewallSwitchStatus(shared_ptr<ModifyVpcFirewallSwitchStatusRequest> request);
  PutDisableAllFwSwitchResponse putDisableAllFwSwitchWithOptions(shared_ptr<PutDisableAllFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutDisableAllFwSwitchResponse putDisableAllFwSwitch(shared_ptr<PutDisableAllFwSwitchRequest> request);
  PutDisableFwSwitchResponse putDisableFwSwitchWithOptions(shared_ptr<PutDisableFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutDisableFwSwitchResponse putDisableFwSwitch(shared_ptr<PutDisableFwSwitchRequest> request);
  PutEnableAllFwSwitchResponse putEnableAllFwSwitchWithOptions(shared_ptr<PutEnableAllFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEnableAllFwSwitchResponse putEnableAllFwSwitch(shared_ptr<PutEnableAllFwSwitchRequest> request);
  PutEnableFwSwitchResponse putEnableFwSwitchWithOptions(shared_ptr<PutEnableFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEnableFwSwitchResponse putEnableFwSwitch(shared_ptr<PutEnableFwSwitchRequest> request);
  ReleasePostInstanceResponse releasePostInstanceWithOptions(shared_ptr<ReleasePostInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleasePostInstanceResponse releasePostInstance(shared_ptr<ReleasePostInstanceRequest> request);
  ResetNatFirewallRuleHitCountResponse resetNatFirewallRuleHitCountWithOptions(shared_ptr<ResetNatFirewallRuleHitCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetNatFirewallRuleHitCountResponse resetNatFirewallRuleHitCount(shared_ptr<ResetNatFirewallRuleHitCountRequest> request);
  ResetVpcFirewallRuleHitCountResponse resetVpcFirewallRuleHitCountWithOptions(shared_ptr<ResetVpcFirewallRuleHitCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetVpcFirewallRuleHitCountResponse resetVpcFirewallRuleHitCount(shared_ptr<ResetVpcFirewallRuleHitCountRequest> request);
  SwitchSecurityProxyResponse switchSecurityProxyWithOptions(shared_ptr<SwitchSecurityProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchSecurityProxyResponse switchSecurityProxy(shared_ptr<SwitchSecurityProxyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudfw20171207

#endif
