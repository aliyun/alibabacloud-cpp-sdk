// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAMS20200606_H_
#define ALIBABACLOUD_CAMS20200606_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cams20200606 {
class AddChatGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> description{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subject{};

  AddChatGroupRequest() {}

  explicit AddChatGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~AddChatGroupRequest() = default;
};
class AddChatGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> uniqueCode{};

  AddChatGroupResponseBody() {}

  explicit AddChatGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~AddChatGroupResponseBody() = default;
};
class AddChatGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddChatGroupResponseBody> body{};

  AddChatGroupResponse() {}

  explicit AddChatGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddChatGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddChatGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddChatGroupResponse() = default;
};
class AddChatGroupInviteLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AddChatGroupInviteLinkRequest() {}

  explicit AddChatGroupInviteLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
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
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
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


  virtual ~AddChatGroupInviteLinkRequest() = default;
};
class AddChatGroupInviteLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> inviteLink{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddChatGroupInviteLinkResponseBody() {}

  explicit AddChatGroupInviteLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (inviteLink) {
      res["InviteLink"] = boost::any(*inviteLink);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InviteLink") != m.end() && !m["InviteLink"].empty()) {
      inviteLink = make_shared<string>(boost::any_cast<string>(m["InviteLink"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddChatGroupInviteLinkResponseBody() = default;
};
class AddChatGroupInviteLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddChatGroupInviteLinkResponseBody> body{};

  AddChatGroupInviteLinkResponse() {}

  explicit AddChatGroupInviteLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddChatGroupInviteLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddChatGroupInviteLinkResponseBody>(model1);
      }
    }
  }


  virtual ~AddChatGroupInviteLinkResponse() = default;
};
class AddChatappPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> cc{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> preValidateId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> verifiedName{};

  AddChatappPhoneNumberRequest() {}

  explicit AddChatappPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cc) {
      res["Cc"] = boost::any(*cc);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (preValidateId) {
      res["PreValidateId"] = boost::any(*preValidateId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (verifiedName) {
      res["VerifiedName"] = boost::any(*verifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cc") != m.end() && !m["Cc"].empty()) {
      cc = make_shared<string>(boost::any_cast<string>(m["Cc"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PreValidateId") != m.end() && !m["PreValidateId"].empty()) {
      preValidateId = make_shared<string>(boost::any_cast<string>(m["PreValidateId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VerifiedName") != m.end() && !m["VerifiedName"].empty()) {
      verifiedName = make_shared<string>(boost::any_cast<string>(m["VerifiedName"]));
    }
  }


  virtual ~AddChatappPhoneNumberRequest() = default;
};
class AddChatappPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddChatappPhoneNumberResponseBody() {}

  explicit AddChatappPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddChatappPhoneNumberResponseBody() = default;
};
class AddChatappPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddChatappPhoneNumberResponseBody> body{};

  AddChatappPhoneNumberResponse() {}

  explicit AddChatappPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddChatappPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddChatappPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~AddChatappPhoneNumberResponse() = default;
};
class ChatappBindWabaRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  ChatappBindWabaRequest() {}

  explicit ChatappBindWabaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
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
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~ChatappBindWabaRequest() = default;
};
class ChatappBindWabaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> wabaId{};

  ChatappBindWabaResponseBodyData() {}

  explicit ChatappBindWabaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~ChatappBindWabaResponseBodyData() = default;
};
class ChatappBindWabaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ChatappBindWabaResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChatappBindWabaResponseBody() {}

  explicit ChatappBindWabaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ChatappBindWabaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChatappBindWabaResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChatappBindWabaResponseBody() = default;
};
class ChatappBindWabaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappBindWabaResponseBody> body{};

  ChatappBindWabaResponse() {}

  explicit ChatappBindWabaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappBindWabaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappBindWabaResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappBindWabaResponse() = default;
};
class ChatappEmbedSignUpRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ChatappEmbedSignUpRequest() {}

  explicit ChatappEmbedSignUpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputToken) {
      res["InputToken"] = boost::any(*inputToken);
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
    if (m.find("InputToken") != m.end() && !m["InputToken"].empty()) {
      inputToken = make_shared<string>(boost::any_cast<string>(m["InputToken"]));
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


  virtual ~ChatappEmbedSignUpRequest() = default;
};
class ChatappEmbedSignUpResponseBodyWabas : public Darabonba::Model {
public:
  shared_ptr<string> accountReviewStatus{};
  shared_ptr<string> currency{};
  shared_ptr<string> id{};
  shared_ptr<string> messageTemplateNamespace{};
  shared_ptr<string> name{};

  ChatappEmbedSignUpResponseBodyWabas() {}

  explicit ChatappEmbedSignUpResponseBodyWabas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountReviewStatus) {
      res["AccountReviewStatus"] = boost::any(*accountReviewStatus);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (messageTemplateNamespace) {
      res["MessageTemplateNamespace"] = boost::any(*messageTemplateNamespace);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountReviewStatus") != m.end() && !m["AccountReviewStatus"].empty()) {
      accountReviewStatus = make_shared<string>(boost::any_cast<string>(m["AccountReviewStatus"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MessageTemplateNamespace") != m.end() && !m["MessageTemplateNamespace"].empty()) {
      messageTemplateNamespace = make_shared<string>(boost::any_cast<string>(m["MessageTemplateNamespace"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ChatappEmbedSignUpResponseBodyWabas() = default;
};
class ChatappEmbedSignUpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ChatappEmbedSignUpResponseBodyWabas>> wabas{};

  ChatappEmbedSignUpResponseBody() {}

  explicit ChatappEmbedSignUpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (wabas) {
      vector<boost::any> temp1;
      for(auto item1:*wabas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Wabas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Wabas") != m.end() && !m["Wabas"].empty()) {
      if (typeid(vector<boost::any>) == m["Wabas"].type()) {
        vector<ChatappEmbedSignUpResponseBodyWabas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Wabas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatappEmbedSignUpResponseBodyWabas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wabas = make_shared<vector<ChatappEmbedSignUpResponseBodyWabas>>(expect1);
      }
    }
  }


  virtual ~ChatappEmbedSignUpResponseBody() = default;
};
class ChatappEmbedSignUpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappEmbedSignUpResponseBody> body{};

  ChatappEmbedSignUpResponse() {}

  explicit ChatappEmbedSignUpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappEmbedSignUpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappEmbedSignUpResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappEmbedSignUpResponse() = default;
};
class ChatappMigrationRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ChatappMigrationRegisterRequest() {}

  explicit ChatappMigrationRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ChatappMigrationRegisterRequest() = default;
};
class ChatappMigrationRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappMigrationRegisterResponseBody() {}

  explicit ChatappMigrationRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChatappMigrationRegisterResponseBody() = default;
};
class ChatappMigrationRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappMigrationRegisterResponseBody> body{};

  ChatappMigrationRegisterResponse() {}

  explicit ChatappMigrationRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappMigrationRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappMigrationRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappMigrationRegisterResponse() = default;
};
class ChatappMigrationVerifiedRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> verifyCode{};

  ChatappMigrationVerifiedRequest() {}

  explicit ChatappMigrationVerifiedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~ChatappMigrationVerifiedRequest() = default;
};
class ChatappMigrationVerifiedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};

  ChatappMigrationVerifiedResponseBodyData() {}

  explicit ChatappMigrationVerifiedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~ChatappMigrationVerifiedResponseBodyData() = default;
};
class ChatappMigrationVerifiedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ChatappMigrationVerifiedResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappMigrationVerifiedResponseBody() {}

  explicit ChatappMigrationVerifiedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ChatappMigrationVerifiedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChatappMigrationVerifiedResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChatappMigrationVerifiedResponseBody() = default;
};
class ChatappMigrationVerifiedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappMigrationVerifiedResponseBody> body{};

  ChatappMigrationVerifiedResponse() {}

  explicit ChatappMigrationVerifiedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappMigrationVerifiedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappMigrationVerifiedResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappMigrationVerifiedResponse() = default;
};
class ChatappPhoneNumberDeregisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ChatappPhoneNumberDeregisterRequest() {}

  explicit ChatappPhoneNumberDeregisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ChatappPhoneNumberDeregisterRequest() = default;
};
class ChatappPhoneNumberDeregisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappPhoneNumberDeregisterResponseBody() {}

  explicit ChatappPhoneNumberDeregisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChatappPhoneNumberDeregisterResponseBody() = default;
};
class ChatappPhoneNumberDeregisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappPhoneNumberDeregisterResponseBody> body{};

  ChatappPhoneNumberDeregisterResponse() {}

  explicit ChatappPhoneNumberDeregisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappPhoneNumberDeregisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappPhoneNumberDeregisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappPhoneNumberDeregisterResponse() = default;
};
class ChatappPhoneNumberRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ChatappPhoneNumberRegisterRequest() {}

  explicit ChatappPhoneNumberRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ChatappPhoneNumberRegisterRequest() = default;
};
class ChatappPhoneNumberRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChatappPhoneNumberRegisterResponseBody() {}

  explicit ChatappPhoneNumberRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChatappPhoneNumberRegisterResponseBody() = default;
};
class ChatappPhoneNumberRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappPhoneNumberRegisterResponseBody> body{};

  ChatappPhoneNumberRegisterResponse() {}

  explicit ChatappPhoneNumberRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappPhoneNumberRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappPhoneNumberRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappPhoneNumberRegisterResponse() = default;
};
class ChatappSyncPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ChatappSyncPhoneNumberRequest() {}

  explicit ChatappSyncPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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


  virtual ~ChatappSyncPhoneNumberRequest() = default;
};
class ChatappSyncPhoneNumberResponseBodyPhoneNumbers : public Darabonba::Model {
public:
  shared_ptr<string> codeVerificationStatus{};
  shared_ptr<string> isOfficial{};
  shared_ptr<string> messagingLimitTier{};
  shared_ptr<string> nameStatus{};
  shared_ptr<string> newNameStatus{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qualityRating{};
  shared_ptr<string> status{};
  shared_ptr<string> statusCallbackUrl{};
  shared_ptr<string> statusQueue{};
  shared_ptr<string> upCallbackUrl{};
  shared_ptr<string> upQueue{};
  shared_ptr<string> verifiedName{};

  ChatappSyncPhoneNumberResponseBodyPhoneNumbers() {}

  explicit ChatappSyncPhoneNumberResponseBodyPhoneNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVerificationStatus) {
      res["CodeVerificationStatus"] = boost::any(*codeVerificationStatus);
    }
    if (isOfficial) {
      res["IsOfficial"] = boost::any(*isOfficial);
    }
    if (messagingLimitTier) {
      res["MessagingLimitTier"] = boost::any(*messagingLimitTier);
    }
    if (nameStatus) {
      res["NameStatus"] = boost::any(*nameStatus);
    }
    if (newNameStatus) {
      res["NewNameStatus"] = boost::any(*newNameStatus);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qualityRating) {
      res["QualityRating"] = boost::any(*qualityRating);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    if (statusQueue) {
      res["StatusQueue"] = boost::any(*statusQueue);
    }
    if (upCallbackUrl) {
      res["UpCallbackUrl"] = boost::any(*upCallbackUrl);
    }
    if (upQueue) {
      res["UpQueue"] = boost::any(*upQueue);
    }
    if (verifiedName) {
      res["VerifiedName"] = boost::any(*verifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeVerificationStatus") != m.end() && !m["CodeVerificationStatus"].empty()) {
      codeVerificationStatus = make_shared<string>(boost::any_cast<string>(m["CodeVerificationStatus"]));
    }
    if (m.find("IsOfficial") != m.end() && !m["IsOfficial"].empty()) {
      isOfficial = make_shared<string>(boost::any_cast<string>(m["IsOfficial"]));
    }
    if (m.find("MessagingLimitTier") != m.end() && !m["MessagingLimitTier"].empty()) {
      messagingLimitTier = make_shared<string>(boost::any_cast<string>(m["MessagingLimitTier"]));
    }
    if (m.find("NameStatus") != m.end() && !m["NameStatus"].empty()) {
      nameStatus = make_shared<string>(boost::any_cast<string>(m["NameStatus"]));
    }
    if (m.find("NewNameStatus") != m.end() && !m["NewNameStatus"].empty()) {
      newNameStatus = make_shared<string>(boost::any_cast<string>(m["NewNameStatus"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QualityRating") != m.end() && !m["QualityRating"].empty()) {
      qualityRating = make_shared<string>(boost::any_cast<string>(m["QualityRating"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
    if (m.find("StatusQueue") != m.end() && !m["StatusQueue"].empty()) {
      statusQueue = make_shared<string>(boost::any_cast<string>(m["StatusQueue"]));
    }
    if (m.find("UpCallbackUrl") != m.end() && !m["UpCallbackUrl"].empty()) {
      upCallbackUrl = make_shared<string>(boost::any_cast<string>(m["UpCallbackUrl"]));
    }
    if (m.find("UpQueue") != m.end() && !m["UpQueue"].empty()) {
      upQueue = make_shared<string>(boost::any_cast<string>(m["UpQueue"]));
    }
    if (m.find("VerifiedName") != m.end() && !m["VerifiedName"].empty()) {
      verifiedName = make_shared<string>(boost::any_cast<string>(m["VerifiedName"]));
    }
  }


  virtual ~ChatappSyncPhoneNumberResponseBodyPhoneNumbers() = default;
};
class ChatappSyncPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<ChatappSyncPhoneNumberResponseBodyPhoneNumbers>> phoneNumbers{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChatappSyncPhoneNumberResponseBody() {}

  explicit ChatappSyncPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*phoneNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PhoneNumbers"] = boost::any(temp1);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<ChatappSyncPhoneNumberResponseBodyPhoneNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PhoneNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatappSyncPhoneNumberResponseBodyPhoneNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        phoneNumbers = make_shared<vector<ChatappSyncPhoneNumberResponseBodyPhoneNumbers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChatappSyncPhoneNumberResponseBody() = default;
};
class ChatappSyncPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappSyncPhoneNumberResponseBody> body{};

  ChatappSyncPhoneNumberResponse() {}

  explicit ChatappSyncPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappSyncPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappSyncPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappSyncPhoneNumberResponse() = default;
};
class ChatappVerifyAndRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> verifyCode{};

  ChatappVerifyAndRegisterRequest() {}

  explicit ChatappVerifyAndRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~ChatappVerifyAndRegisterRequest() = default;
};
class ChatappVerifyAndRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChatappVerifyAndRegisterResponseBody() {}

  explicit ChatappVerifyAndRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChatappVerifyAndRegisterResponseBody() = default;
};
class ChatappVerifyAndRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappVerifyAndRegisterResponseBody> body{};

  ChatappVerifyAndRegisterResponse() {}

  explicit ChatappVerifyAndRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChatappVerifyAndRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappVerifyAndRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappVerifyAndRegisterResponse() = default;
};
class CreateChatFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowTriggerType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> title{};

  CreateChatFlowRequest() {}

  explicit CreateChatFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowTriggerType) {
      res["FlowTriggerType"] = boost::any(*flowTriggerType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowTriggerType") != m.end() && !m["FlowTriggerType"].empty()) {
      flowTriggerType = make_shared<string>(boost::any_cast<string>(m["FlowTriggerType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateChatFlowRequest() = default;
};
class CreateChatFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowTriggerType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> title{};

  CreateChatFlowShrinkRequest() {}

  explicit CreateChatFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowTriggerType) {
      res["FlowTriggerType"] = boost::any(*flowTriggerType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowTriggerType") != m.end() && !m["FlowTriggerType"].empty()) {
      flowTriggerType = make_shared<string>(boost::any_cast<string>(m["FlowTriggerType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateChatFlowShrinkRequest() = default;
};
class CreateChatFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  CreateChatFlowResponseBody() {}

  explicit CreateChatFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateChatFlowResponseBody() = default;
};
class CreateChatFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatFlowResponseBody> body{};

  CreateChatFlowResponse() {}

  explicit CreateChatFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateChatFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatFlowResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatFlowResponse() = default;
};
class CreateChatFlowByImportRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowViewModel{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> title{};

  CreateChatFlowByImportRequest() {}

  explicit CreateChatFlowByImportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowViewModel) {
      res["FlowViewModel"] = boost::any(*flowViewModel);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowViewModel") != m.end() && !m["FlowViewModel"].empty()) {
      flowViewModel = make_shared<string>(boost::any_cast<string>(m["FlowViewModel"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateChatFlowByImportRequest() = default;
};
class CreateChatFlowByImportShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowViewModel{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> title{};

  CreateChatFlowByImportShrinkRequest() {}

  explicit CreateChatFlowByImportShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowViewModel) {
      res["FlowViewModel"] = boost::any(*flowViewModel);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowViewModel") != m.end() && !m["FlowViewModel"].empty()) {
      flowViewModel = make_shared<string>(boost::any_cast<string>(m["FlowViewModel"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateChatFlowByImportShrinkRequest() = default;
};
class CreateChatFlowByImportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateChatFlowByImportResponseBody() {}

  explicit CreateChatFlowByImportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateChatFlowByImportResponseBody() = default;
};
class CreateChatFlowByImportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatFlowByImportResponseBody> body{};

  CreateChatFlowByImportResponse() {}

  explicit CreateChatFlowByImportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateChatFlowByImportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatFlowByImportResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatFlowByImportResponse() = default;
};
class CreateChatFlowLogSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateChatFlowLogSettingRequest() {}

  explicit CreateChatFlowLogSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
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
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
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


  virtual ~CreateChatFlowLogSettingRequest() = default;
};
class CreateChatFlowLogSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateChatFlowLogSettingResponseBody() {}

  explicit CreateChatFlowLogSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateChatFlowLogSettingResponseBody() = default;
};
class CreateChatFlowLogSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatFlowLogSettingResponseBody> body{};

  CreateChatFlowLogSettingResponse() {}

  explicit CreateChatFlowLogSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateChatFlowLogSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatFlowLogSettingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatFlowLogSettingResponse() = default;
};
class CreateChatappMigrationInitiateRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryCode{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> mobileNumber{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateChatappMigrationInitiateRequest() {}

  explicit CreateChatappMigrationInitiateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (mobileNumber) {
      res["MobileNumber"] = boost::any(*mobileNumber);
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
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("MobileNumber") != m.end() && !m["MobileNumber"].empty()) {
      mobileNumber = make_shared<string>(boost::any_cast<string>(m["MobileNumber"]));
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


  virtual ~CreateChatappMigrationInitiateRequest() = default;
};
class CreateChatappMigrationInitiateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> status{};

  CreateChatappMigrationInitiateResponseBodyData() {}

  explicit CreateChatappMigrationInitiateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateChatappMigrationInitiateResponseBodyData() = default;
};
class CreateChatappMigrationInitiateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CreateChatappMigrationInitiateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateChatappMigrationInitiateResponseBody() {}

  explicit CreateChatappMigrationInitiateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateChatappMigrationInitiateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateChatappMigrationInitiateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChatappMigrationInitiateResponseBody() = default;
};
class CreateChatappMigrationInitiateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatappMigrationInitiateResponseBody> body{};

  CreateChatappMigrationInitiateResponse() {}

  explicit CreateChatappMigrationInitiateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateChatappMigrationInitiateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatappMigrationInitiateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatappMigrationInitiateResponse() = default;
};
class CreateChatappTemplateRequestComponentsButtonsSupportedApps : public Darabonba::Model {
public:
  shared_ptr<string> packageName{};
  shared_ptr<string> signatureHash{};

  CreateChatappTemplateRequestComponentsButtonsSupportedApps() {}

  explicit CreateChatappTemplateRequestComponentsButtonsSupportedApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponentsButtonsSupportedApps() = default;
};
class CreateChatappTemplateRequestComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> autofillText{};
  shared_ptr<string> couponCode{};
  shared_ptr<string> flowAction{};
  shared_ptr<string> flowId{};
  shared_ptr<bool> isOptOut{};
  shared_ptr<string> navigateScreen{};
  shared_ptr<string> packageName{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> signatureHash{};
  shared_ptr<vector<CreateChatappTemplateRequestComponentsButtonsSupportedApps>> supportedApps{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  CreateChatappTemplateRequestComponentsButtons() {}

  explicit CreateChatappTemplateRequestComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autofillText) {
      res["AutofillText"] = boost::any(*autofillText);
    }
    if (couponCode) {
      res["CouponCode"] = boost::any(*couponCode);
    }
    if (flowAction) {
      res["FlowAction"] = boost::any(*flowAction);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (isOptOut) {
      res["IsOptOut"] = boost::any(*isOptOut);
    }
    if (navigateScreen) {
      res["NavigateScreen"] = boost::any(*navigateScreen);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
    }
    if (supportedApps) {
      vector<boost::any> temp1;
      for(auto item1:*supportedApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedApps"] = boost::any(temp1);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutofillText") != m.end() && !m["AutofillText"].empty()) {
      autofillText = make_shared<string>(boost::any_cast<string>(m["AutofillText"]));
    }
    if (m.find("CouponCode") != m.end() && !m["CouponCode"].empty()) {
      couponCode = make_shared<string>(boost::any_cast<string>(m["CouponCode"]));
    }
    if (m.find("FlowAction") != m.end() && !m["FlowAction"].empty()) {
      flowAction = make_shared<string>(boost::any_cast<string>(m["FlowAction"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("IsOptOut") != m.end() && !m["IsOptOut"].empty()) {
      isOptOut = make_shared<bool>(boost::any_cast<bool>(m["IsOptOut"]));
    }
    if (m.find("NavigateScreen") != m.end() && !m["NavigateScreen"].empty()) {
      navigateScreen = make_shared<string>(boost::any_cast<string>(m["NavigateScreen"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
    }
    if (m.find("SupportedApps") != m.end() && !m["SupportedApps"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedApps"].type()) {
        vector<CreateChatappTemplateRequestComponentsButtonsSupportedApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponentsButtonsSupportedApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedApps = make_shared<vector<CreateChatappTemplateRequestComponentsButtonsSupportedApps>>(expect1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponentsButtons() = default;
};
class CreateChatappTemplateRequestComponentsCardsCardComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  CreateChatappTemplateRequestComponentsCardsCardComponentsButtons() {}

  explicit CreateChatappTemplateRequestComponentsCardsCardComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponentsCardsCardComponentsButtons() = default;
};
class CreateChatappTemplateRequestComponentsCardsCardComponents : public Darabonba::Model {
public:
  shared_ptr<vector<CreateChatappTemplateRequestComponentsCardsCardComponentsButtons>> buttons{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  CreateChatappTemplateRequestComponentsCardsCardComponents() {}

  explicit CreateChatappTemplateRequestComponentsCardsCardComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<CreateChatappTemplateRequestComponentsCardsCardComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponentsCardsCardComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<CreateChatappTemplateRequestComponentsCardsCardComponentsButtons>>(expect1);
      }
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponentsCardsCardComponents() = default;
};
class CreateChatappTemplateRequestComponentsCards : public Darabonba::Model {
public:
  shared_ptr<vector<CreateChatappTemplateRequestComponentsCardsCardComponents>> cardComponents{};

  CreateChatappTemplateRequestComponentsCards() {}

  explicit CreateChatappTemplateRequestComponentsCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardComponents) {
      vector<boost::any> temp1;
      for(auto item1:*cardComponents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardComponents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardComponents") != m.end() && !m["CardComponents"].empty()) {
      if (typeid(vector<boost::any>) == m["CardComponents"].type()) {
        vector<CreateChatappTemplateRequestComponentsCardsCardComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardComponents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponentsCardsCardComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardComponents = make_shared<vector<CreateChatappTemplateRequestComponentsCardsCardComponents>>(expect1);
      }
    }
  }


  virtual ~CreateChatappTemplateRequestComponentsCards() = default;
};
class CreateChatappTemplateRequestComponents : public Darabonba::Model {
public:
  shared_ptr<bool> addSecretRecommendation{};
  shared_ptr<vector<CreateChatappTemplateRequestComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<vector<CreateChatappTemplateRequestComponentsCards>> cards{};
  shared_ptr<long> codeExpirationMinutes{};
  shared_ptr<long> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> format{};
  shared_ptr<bool> hasExpiration{};
  shared_ptr<string> text{};
  shared_ptr<string> thumbUrl{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  CreateChatappTemplateRequestComponents() {}

  explicit CreateChatappTemplateRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSecretRecommendation) {
      res["AddSecretRecommendation"] = boost::any(*addSecretRecommendation);
    }
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (cards) {
      vector<boost::any> temp1;
      for(auto item1:*cards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cards"] = boost::any(temp1);
    }
    if (codeExpirationMinutes) {
      res["CodeExpirationMinutes"] = boost::any(*codeExpirationMinutes);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (hasExpiration) {
      res["HasExpiration"] = boost::any(*hasExpiration);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddSecretRecommendation") != m.end() && !m["AddSecretRecommendation"].empty()) {
      addSecretRecommendation = make_shared<bool>(boost::any_cast<bool>(m["AddSecretRecommendation"]));
    }
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<CreateChatappTemplateRequestComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<CreateChatappTemplateRequestComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("Cards") != m.end() && !m["Cards"].empty()) {
      if (typeid(vector<boost::any>) == m["Cards"].type()) {
        vector<CreateChatappTemplateRequestComponentsCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponentsCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cards = make_shared<vector<CreateChatappTemplateRequestComponentsCards>>(expect1);
      }
    }
    if (m.find("CodeExpirationMinutes") != m.end() && !m["CodeExpirationMinutes"].empty()) {
      codeExpirationMinutes = make_shared<long>(boost::any_cast<long>(m["CodeExpirationMinutes"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("HasExpiration") != m.end() && !m["HasExpiration"].empty()) {
      hasExpiration = make_shared<bool>(boost::any_cast<bool>(m["HasExpiration"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponents() = default;
};
class CreateChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowCategoryChange{};
  shared_ptr<string> category{};
  shared_ptr<bool> categoryChangePaused{};
  shared_ptr<vector<CreateChatappTemplateRequestComponents>> components{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateRequest() {}

  explicit CreateChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCategoryChange) {
      res["AllowCategoryChange"] = boost::any(*allowCategoryChange);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryChangePaused) {
      res["CategoryChangePaused"] = boost::any(*categoryChangePaused);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowCategoryChange") != m.end() && !m["AllowCategoryChange"].empty()) {
      allowCategoryChange = make_shared<bool>(boost::any_cast<bool>(m["AllowCategoryChange"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CategoryChangePaused") != m.end() && !m["CategoryChangePaused"].empty()) {
      categoryChangePaused = make_shared<bool>(boost::any_cast<bool>(m["CategoryChangePaused"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<CreateChatappTemplateRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CreateChatappTemplateRequestComponents>>(expect1);
      }
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateChatappTemplateRequest() = default;
};
class CreateChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowCategoryChange{};
  shared_ptr<string> category{};
  shared_ptr<bool> categoryChangePaused{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> exampleShrink{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateShrinkRequest() {}

  explicit CreateChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCategoryChange) {
      res["AllowCategoryChange"] = boost::any(*allowCategoryChange);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryChangePaused) {
      res["CategoryChangePaused"] = boost::any(*categoryChangePaused);
    }
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (exampleShrink) {
      res["Example"] = boost::any(*exampleShrink);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowCategoryChange") != m.end() && !m["AllowCategoryChange"].empty()) {
      allowCategoryChange = make_shared<bool>(boost::any_cast<bool>(m["AllowCategoryChange"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CategoryChangePaused") != m.end() && !m["CategoryChangePaused"].empty()) {
      categoryChangePaused = make_shared<bool>(boost::any_cast<bool>(m["CategoryChangePaused"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      exampleShrink = make_shared<string>(boost::any_cast<string>(m["Example"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateChatappTemplateShrinkRequest() = default;
};
class CreateChatappTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  CreateChatappTemplateResponseBodyData() {}

  explicit CreateChatappTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateChatappTemplateResponseBodyData() = default;
};
class CreateChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CreateChatappTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateChatappTemplateResponseBody() {}

  explicit CreateChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateChatappTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateChatappTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChatappTemplateResponseBody() = default;
};
class CreateChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatappTemplateResponseBody> body{};

  CreateChatappTemplateResponse() {}

  explicit CreateChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatappTemplateResponse() = default;
};
class CreateFlowRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateFlowRequest() {}

  explicit CreateFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
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
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
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


  virtual ~CreateFlowRequest() = default;
};
class CreateFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoriesShrink{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateFlowShrinkRequest() {}

  explicit CreateFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoriesShrink) {
      res["Categories"] = boost::any(*categoriesShrink);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
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
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categoriesShrink = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
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


  virtual ~CreateFlowShrinkRequest() = default;
};
class CreateFlowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};

  CreateFlowResponseBodyData() {}

  explicit CreateFlowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~CreateFlowResponseBodyData() = default;
};
class CreateFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CreateFlowResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateFlowResponseBody() {}

  explicit CreateFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateFlowResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateFlowResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFlowResponseBody() = default;
};
class CreateFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFlowResponseBody> body{};

  CreateFlowResponse() {}

  explicit CreateFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowResponse() = default;
};
class CreateFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersionCopyFrom{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateFlowVersionRequest() {}

  explicit CreateFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersionCopyFrom) {
      res["FlowVersionCopyFrom"] = boost::any(*flowVersionCopyFrom);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersionCopyFrom") != m.end() && !m["FlowVersionCopyFrom"].empty()) {
      flowVersionCopyFrom = make_shared<string>(boost::any_cast<string>(m["FlowVersionCopyFrom"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateFlowVersionRequest() = default;
};
class CreateFlowVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersionCopyFrom{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateFlowVersionShrinkRequest() {}

  explicit CreateFlowVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersionCopyFrom) {
      res["FlowVersionCopyFrom"] = boost::any(*flowVersionCopyFrom);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersionCopyFrom") != m.end() && !m["FlowVersionCopyFrom"].empty()) {
      flowVersionCopyFrom = make_shared<string>(boost::any_cast<string>(m["FlowVersionCopyFrom"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateFlowVersionShrinkRequest() = default;
};
class CreateFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  CreateFlowVersionResponseBody() {}

  explicit CreateFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateFlowVersionResponseBody() = default;
};
class CreateFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFlowVersionResponseBody> body{};

  CreateFlowVersionResponse() {}

  explicit CreateFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowVersionResponse() = default;
};
class CreatePhoneMessageQrdlRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> generateQrImage{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> prefilledMessage{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreatePhoneMessageQrdlRequest() {}

  explicit CreatePhoneMessageQrdlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (generateQrImage) {
      res["GenerateQrImage"] = boost::any(*generateQrImage);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prefilledMessage) {
      res["PrefilledMessage"] = boost::any(*prefilledMessage);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GenerateQrImage") != m.end() && !m["GenerateQrImage"].empty()) {
      generateQrImage = make_shared<string>(boost::any_cast<string>(m["GenerateQrImage"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PrefilledMessage") != m.end() && !m["PrefilledMessage"].empty()) {
      prefilledMessage = make_shared<string>(boost::any_cast<string>(m["PrefilledMessage"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreatePhoneMessageQrdlRequest() = default;
};
class CreatePhoneMessageQrdlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deepLinkUrl{};
  shared_ptr<string> generateQrImage{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> prefilledMessage{};
  shared_ptr<string> qrImageUrl{};
  shared_ptr<string> qrdlCode{};

  CreatePhoneMessageQrdlResponseBodyData() {}

  explicit CreatePhoneMessageQrdlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deepLinkUrl) {
      res["DeepLinkUrl"] = boost::any(*deepLinkUrl);
    }
    if (generateQrImage) {
      res["GenerateQrImage"] = boost::any(*generateQrImage);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prefilledMessage) {
      res["PrefilledMessage"] = boost::any(*prefilledMessage);
    }
    if (qrImageUrl) {
      res["QrImageUrl"] = boost::any(*qrImageUrl);
    }
    if (qrdlCode) {
      res["QrdlCode"] = boost::any(*qrdlCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeepLinkUrl") != m.end() && !m["DeepLinkUrl"].empty()) {
      deepLinkUrl = make_shared<string>(boost::any_cast<string>(m["DeepLinkUrl"]));
    }
    if (m.find("GenerateQrImage") != m.end() && !m["GenerateQrImage"].empty()) {
      generateQrImage = make_shared<string>(boost::any_cast<string>(m["GenerateQrImage"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PrefilledMessage") != m.end() && !m["PrefilledMessage"].empty()) {
      prefilledMessage = make_shared<string>(boost::any_cast<string>(m["PrefilledMessage"]));
    }
    if (m.find("QrImageUrl") != m.end() && !m["QrImageUrl"].empty()) {
      qrImageUrl = make_shared<string>(boost::any_cast<string>(m["QrImageUrl"]));
    }
    if (m.find("QrdlCode") != m.end() && !m["QrdlCode"].empty()) {
      qrdlCode = make_shared<string>(boost::any_cast<string>(m["QrdlCode"]));
    }
  }


  virtual ~CreatePhoneMessageQrdlResponseBodyData() = default;
};
class CreatePhoneMessageQrdlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CreatePhoneMessageQrdlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreatePhoneMessageQrdlResponseBody() {}

  explicit CreatePhoneMessageQrdlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreatePhoneMessageQrdlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePhoneMessageQrdlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePhoneMessageQrdlResponseBody() = default;
};
class CreatePhoneMessageQrdlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePhoneMessageQrdlResponseBody> body{};

  CreatePhoneMessageQrdlResponse() {}

  explicit CreatePhoneMessageQrdlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePhoneMessageQrdlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePhoneMessageQrdlResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePhoneMessageQrdlResponse() = default;
};
class DeleteChatFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteChatFlowRequest() {}

  explicit DeleteChatFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
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


  virtual ~DeleteChatFlowRequest() = default;
};
class DeleteChatFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteChatFlowShrinkRequest() {}

  explicit DeleteChatFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
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


  virtual ~DeleteChatFlowShrinkRequest() = default;
};
class DeleteChatFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  DeleteChatFlowResponseBody() {}

  explicit DeleteChatFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteChatFlowResponseBody() = default;
};
class DeleteChatFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChatFlowResponseBody> body{};

  DeleteChatFlowResponse() {}

  explicit DeleteChatFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteChatFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChatFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChatFlowResponse() = default;
};
class DeleteChatGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteChatGroupRequest() {}

  explicit DeleteChatGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
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
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
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


  virtual ~DeleteChatGroupRequest() = default;
};
class DeleteChatGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  DeleteChatGroupResponseBody() {}

  explicit DeleteChatGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteChatGroupResponseBody() = default;
};
class DeleteChatGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChatGroupResponseBody> body{};

  DeleteChatGroupResponse() {}

  explicit DeleteChatGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteChatGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChatGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChatGroupResponse() = default;
};
class DeleteChatGroupInviteLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteChatGroupInviteLinkRequest() {}

  explicit DeleteChatGroupInviteLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
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
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
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


  virtual ~DeleteChatGroupInviteLinkRequest() = default;
};
class DeleteChatGroupInviteLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  DeleteChatGroupInviteLinkResponseBody() {}

  explicit DeleteChatGroupInviteLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteChatGroupInviteLinkResponseBody() = default;
};
class DeleteChatGroupInviteLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChatGroupInviteLinkResponseBody> body{};

  DeleteChatGroupInviteLinkResponse() {}

  explicit DeleteChatGroupInviteLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteChatGroupInviteLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChatGroupInviteLinkResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChatGroupInviteLinkResponse() = default;
};
class DeleteChatGroupParticipantsRequestList : public Darabonba::Model {
public:
  shared_ptr<string> participantNumber{};

  DeleteChatGroupParticipantsRequestList() {}

  explicit DeleteChatGroupParticipantsRequestList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (participantNumber) {
      res["ParticipantNumber"] = boost::any(*participantNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParticipantNumber") != m.end() && !m["ParticipantNumber"].empty()) {
      participantNumber = make_shared<string>(boost::any_cast<string>(m["ParticipantNumber"]));
    }
  }


  virtual ~DeleteChatGroupParticipantsRequestList() = default;
};
class DeleteChatGroupParticipantsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<vector<DeleteChatGroupParticipantsRequestList>> list{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteChatGroupParticipantsRequest() {}

  explicit DeleteChatGroupParticipantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
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
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DeleteChatGroupParticipantsRequestList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteChatGroupParticipantsRequestList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DeleteChatGroupParticipantsRequestList>>(expect1);
      }
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


  virtual ~DeleteChatGroupParticipantsRequest() = default;
};
class DeleteChatGroupParticipantsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> listShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteChatGroupParticipantsShrinkRequest() {}

  explicit DeleteChatGroupParticipantsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (listShrink) {
      res["List"] = boost::any(*listShrink);
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
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      listShrink = make_shared<string>(boost::any_cast<string>(m["List"]));
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


  virtual ~DeleteChatGroupParticipantsShrinkRequest() = default;
};
class DeleteChatGroupParticipantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  DeleteChatGroupParticipantsResponseBody() {}

  explicit DeleteChatGroupParticipantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteChatGroupParticipantsResponseBody() = default;
};
class DeleteChatGroupParticipantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChatGroupParticipantsResponseBody> body{};

  DeleteChatGroupParticipantsResponse() {}

  explicit DeleteChatGroupParticipantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteChatGroupParticipantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChatGroupParticipantsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChatGroupParticipantsResponse() = default;
};
class DeleteChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  DeleteChatappTemplateRequest() {}

  explicit DeleteChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
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
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~DeleteChatappTemplateRequest() = default;
};
class DeleteChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteChatappTemplateResponseBody() {}

  explicit DeleteChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteChatappTemplateResponseBody() = default;
};
class DeleteChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChatappTemplateResponseBody> body{};

  DeleteChatappTemplateResponse() {}

  explicit DeleteChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChatappTemplateResponse() = default;
};
class DeleteFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteFlowRequest() {}

  explicit DeleteFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
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


  virtual ~DeleteFlowRequest() = default;
};
class DeleteFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteFlowResponseBody() {}

  explicit DeleteFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteFlowResponseBody() = default;
};
class DeleteFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFlowResponseBody> body{};

  DeleteFlowResponse() {}

  explicit DeleteFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowResponse() = default;
};
class DeleteFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteFlowVersionRequest() {}

  explicit DeleteFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
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


  virtual ~DeleteFlowVersionRequest() = default;
};
class DeleteFlowVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteFlowVersionShrinkRequest() {}

  explicit DeleteFlowVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
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


  virtual ~DeleteFlowVersionShrinkRequest() = default;
};
class DeleteFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  DeleteFlowVersionResponseBody() {}

  explicit DeleteFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFlowVersionResponseBody() = default;
};
class DeleteFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFlowVersionResponseBody> body{};

  DeleteFlowVersionResponse() {}

  explicit DeleteFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowVersionResponse() = default;
};
class DeletePhoneMessageQrdlRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qrdlCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeletePhoneMessageQrdlRequest() {}

  explicit DeletePhoneMessageQrdlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qrdlCode) {
      res["QrdlCode"] = boost::any(*qrdlCode);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QrdlCode") != m.end() && !m["QrdlCode"].empty()) {
      qrdlCode = make_shared<string>(boost::any_cast<string>(m["QrdlCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeletePhoneMessageQrdlRequest() = default;
};
class DeletePhoneMessageQrdlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeletePhoneMessageQrdlResponseBody() {}

  explicit DeletePhoneMessageQrdlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePhoneMessageQrdlResponseBody() = default;
};
class DeletePhoneMessageQrdlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePhoneMessageQrdlResponseBody> body{};

  DeletePhoneMessageQrdlResponse() {}

  explicit DeletePhoneMessageQrdlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePhoneMessageQrdlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePhoneMessageQrdlResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePhoneMessageQrdlResponse() = default;
};
class DeprecateFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeprecateFlowRequest() {}

  explicit DeprecateFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
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


  virtual ~DeprecateFlowRequest() = default;
};
class DeprecateFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeprecateFlowResponseBody() {}

  explicit DeprecateFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeprecateFlowResponseBody() = default;
};
class DeprecateFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeprecateFlowResponseBody> body{};

  DeprecateFlowResponse() {}

  explicit DeprecateFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeprecateFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeprecateFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DeprecateFlowResponse() = default;
};
class EnableWhatsappROIMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  EnableWhatsappROIMetricRequest() {}

  explicit EnableWhatsappROIMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
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


  virtual ~EnableWhatsappROIMetricRequest() = default;
};
class EnableWhatsappROIMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EnableWhatsappROIMetricResponseBody() {}

  explicit EnableWhatsappROIMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableWhatsappROIMetricResponseBody() = default;
};
class EnableWhatsappROIMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableWhatsappROIMetricResponseBody> body{};

  EnableWhatsappROIMetricResponse() {}

  explicit EnableWhatsappROIMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableWhatsappROIMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableWhatsappROIMetricResponseBody>(model1);
      }
    }
  }


  virtual ~EnableWhatsappROIMetricResponse() = default;
};
class FlowBindPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelCode{};
  shared_ptr<string> channelType{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  FlowBindPhoneRequest() {}

  explicit FlowBindPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~FlowBindPhoneRequest() = default;
};
class FlowBindPhoneShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelCode{};
  shared_ptr<string> channelType{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumbersShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  FlowBindPhoneShrinkRequest() {}

  explicit FlowBindPhoneShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumbersShrink) {
      res["PhoneNumbers"] = boost::any(*phoneNumbersShrink);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      phoneNumbersShrink = make_shared<string>(boost::any_cast<string>(m["PhoneNumbers"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~FlowBindPhoneShrinkRequest() = default;
};
class FlowBindPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FlowBindPhoneResponseBody() {}

  explicit FlowBindPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<bool>(boost::any_cast<bool>(m["Model"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FlowBindPhoneResponseBody() = default;
};
class FlowBindPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlowBindPhoneResponseBody> body{};

  FlowBindPhoneResponse() {}

  explicit FlowBindPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FlowBindPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlowBindPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~FlowBindPhoneResponse() = default;
};
class FlowRebindPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelCode{};
  shared_ptr<string> channelType{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  FlowRebindPhoneRequest() {}

  explicit FlowRebindPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~FlowRebindPhoneRequest() = default;
};
class FlowRebindPhoneShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelCode{};
  shared_ptr<string> channelType{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumbersShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  FlowRebindPhoneShrinkRequest() {}

  explicit FlowRebindPhoneShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumbersShrink) {
      res["PhoneNumbers"] = boost::any(*phoneNumbersShrink);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      phoneNumbersShrink = make_shared<string>(boost::any_cast<string>(m["PhoneNumbers"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~FlowRebindPhoneShrinkRequest() = default;
};
class FlowRebindPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FlowRebindPhoneResponseBody() {}

  explicit FlowRebindPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<bool>(boost::any_cast<bool>(m["Model"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FlowRebindPhoneResponseBody() = default;
};
class FlowRebindPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlowRebindPhoneResponseBody> body{};

  FlowRebindPhoneResponse() {}

  explicit FlowRebindPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FlowRebindPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlowRebindPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~FlowRebindPhoneResponse() = default;
};
class FlowUnbindPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  FlowUnbindPhoneRequest() {}

  explicit FlowUnbindPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
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
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~FlowUnbindPhoneRequest() = default;
};
class FlowUnbindPhoneShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumbersShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  FlowUnbindPhoneShrinkRequest() {}

  explicit FlowUnbindPhoneShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumbersShrink) {
      res["PhoneNumbers"] = boost::any(*phoneNumbersShrink);
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
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      phoneNumbersShrink = make_shared<string>(boost::any_cast<string>(m["PhoneNumbers"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~FlowUnbindPhoneShrinkRequest() = default;
};
class FlowUnbindPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> model{};
  shared_ptr<bool> success{};

  FlowUnbindPhoneResponseBody() {}

  explicit FlowUnbindPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<bool>(boost::any_cast<bool>(m["Model"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FlowUnbindPhoneResponseBody() = default;
};
class FlowUnbindPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FlowUnbindPhoneResponseBody> body{};

  FlowUnbindPhoneResponse() {}

  explicit FlowUnbindPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FlowUnbindPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlowUnbindPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~FlowUnbindPhoneResponse() = default;
};
class GetChatFlowMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> from{};
  shared_ptr<string> metricName{};
  shared_ptr<map<string, boost::any>> metricParam{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> to{};

  GetChatFlowMetricRequest() {}

  explicit GetChatFlowMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (metricParam) {
      res["MetricParam"] = boost::any(*metricParam);
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
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("MetricParam") != m.end() && !m["MetricParam"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["MetricParam"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metricParam = make_shared<map<string, boost::any>>(toMap1);
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
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetChatFlowMetricRequest() = default;
};
class GetChatFlowMetricShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> from{};
  shared_ptr<string> metricName{};
  shared_ptr<string> metricParamShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> to{};

  GetChatFlowMetricShrinkRequest() {}

  explicit GetChatFlowMetricShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (metricParamShrink) {
      res["MetricParam"] = boost::any(*metricParamShrink);
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
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("MetricParam") != m.end() && !m["MetricParam"].empty()) {
      metricParamShrink = make_shared<string>(boost::any_cast<string>(m["MetricParam"]));
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
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetChatFlowMetricShrinkRequest() = default;
};
class GetChatFlowMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetChatFlowMetricResponseBody() {}

  explicit GetChatFlowMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetChatFlowMetricResponseBody() = default;
};
class GetChatFlowMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatFlowMetricResponseBody> body{};

  GetChatFlowMetricResponse() {}

  explicit GetChatFlowMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetChatFlowMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatFlowMetricResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatFlowMetricResponse() = default;
};
class GetChatFlowTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<long> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetChatFlowTemplateRequest() {}

  explicit GetChatFlowTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
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


  virtual ~GetChatFlowTemplateRequest() = default;
};
class GetChatFlowTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> response{};

  GetChatFlowTemplateResponseBodyData() {}

  explicit GetChatFlowTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (response) {
      res["Response"] = boost::any(*response);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetChatFlowTemplateResponseBodyData() = default;
};
class GetChatFlowTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetChatFlowTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetChatFlowTemplateResponseBody() {}

  explicit GetChatFlowTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetChatFlowTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetChatFlowTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetChatFlowTemplateResponseBody() = default;
};
class GetChatFlowTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatFlowTemplateResponseBody> body{};

  GetChatFlowTemplateResponse() {}

  explicit GetChatFlowTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetChatFlowTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatFlowTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatFlowTemplateResponse() = default;
};
class GetChatappPhoneNumberMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> end{};
  shared_ptr<string> granularity{};
  shared_ptr<string> isvCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> start{};

  GetChatappPhoneNumberMetricRequest() {}

  explicit GetChatappPhoneNumberMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~GetChatappPhoneNumberMetricRequest() = default;
};
class GetChatappPhoneNumberMetricResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> deliveredCount{};
  shared_ptr<long> end{};
  shared_ptr<string> granularity{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<long> sentCount{};
  shared_ptr<long> start{};

  GetChatappPhoneNumberMetricResponseBodyData() {}

  explicit GetChatappPhoneNumberMetricResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveredCount) {
      res["DeliveredCount"] = boost::any(*deliveredCount);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (sentCount) {
      res["SentCount"] = boost::any(*sentCount);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveredCount") != m.end() && !m["DeliveredCount"].empty()) {
      deliveredCount = make_shared<long>(boost::any_cast<long>(m["DeliveredCount"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SentCount") != m.end() && !m["SentCount"].empty()) {
      sentCount = make_shared<long>(boost::any_cast<long>(m["SentCount"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~GetChatappPhoneNumberMetricResponseBodyData() = default;
};
class GetChatappPhoneNumberMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetChatappPhoneNumberMetricResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappPhoneNumberMetricResponseBody() {}

  explicit GetChatappPhoneNumberMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetChatappPhoneNumberMetricResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappPhoneNumberMetricResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetChatappPhoneNumberMetricResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappPhoneNumberMetricResponseBody() = default;
};
class GetChatappPhoneNumberMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappPhoneNumberMetricResponseBody> body{};

  GetChatappPhoneNumberMetricResponse() {}

  explicit GetChatappPhoneNumberMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetChatappPhoneNumberMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappPhoneNumberMetricResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappPhoneNumberMetricResponse() = default;
};
class GetChatappTemplateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  GetChatappTemplateDetailRequest() {}

  explicit GetChatappTemplateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~GetChatappTemplateDetailRequest() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> intentCode{};
  shared_ptr<string> nextLanguageCode{};
  shared_ptr<string> nextTemplateCode{};
  shared_ptr<string> nextTemplateName{};

  GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (intentCode) {
      res["IntentCode"] = boost::any(*intentCode);
    }
    if (nextLanguageCode) {
      res["NextLanguageCode"] = boost::any(*nextLanguageCode);
    }
    if (nextTemplateCode) {
      res["NextTemplateCode"] = boost::any(*nextTemplateCode);
    }
    if (nextTemplateName) {
      res["NextTemplateName"] = boost::any(*nextTemplateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("IntentCode") != m.end() && !m["IntentCode"].empty()) {
      intentCode = make_shared<string>(boost::any_cast<string>(m["IntentCode"]));
    }
    if (m.find("NextLanguageCode") != m.end() && !m["NextLanguageCode"].empty()) {
      nextLanguageCode = make_shared<string>(boost::any_cast<string>(m["NextLanguageCode"]));
    }
    if (m.find("NextTemplateCode") != m.end() && !m["NextTemplateCode"].empty()) {
      nextTemplateCode = make_shared<string>(boost::any_cast<string>(m["NextTemplateCode"]));
    }
    if (m.find("NextTemplateName") != m.end() && !m["NextTemplateName"].empty()) {
      nextTemplateName = make_shared<string>(boost::any_cast<string>(m["NextTemplateName"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps : public Darabonba::Model {
public:
  shared_ptr<string> packageName{};
  shared_ptr<string> signatureHash{};

  GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> autofillText{};
  shared_ptr<string> couponCode{};
  shared_ptr<GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs> extendAttrs{};
  shared_ptr<string> flowAction{};
  shared_ptr<string> flowId{};
  shared_ptr<bool> isOptOut{};
  shared_ptr<string> navigateScreen{};
  shared_ptr<string> packageName{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> signatureHash{};
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps>> supportedApps{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  GetChatappTemplateDetailResponseBodyDataComponentsButtons() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autofillText) {
      res["AutofillText"] = boost::any(*autofillText);
    }
    if (couponCode) {
      res["CouponCode"] = boost::any(*couponCode);
    }
    if (extendAttrs) {
      res["ExtendAttrs"] = extendAttrs ? boost::any(extendAttrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flowAction) {
      res["FlowAction"] = boost::any(*flowAction);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (isOptOut) {
      res["IsOptOut"] = boost::any(*isOptOut);
    }
    if (navigateScreen) {
      res["NavigateScreen"] = boost::any(*navigateScreen);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
    }
    if (supportedApps) {
      vector<boost::any> temp1;
      for(auto item1:*supportedApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedApps"] = boost::any(temp1);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutofillText") != m.end() && !m["AutofillText"].empty()) {
      autofillText = make_shared<string>(boost::any_cast<string>(m["AutofillText"]));
    }
    if (m.find("CouponCode") != m.end() && !m["CouponCode"].empty()) {
      couponCode = make_shared<string>(boost::any_cast<string>(m["CouponCode"]));
    }
    if (m.find("ExtendAttrs") != m.end() && !m["ExtendAttrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendAttrs"].type()) {
        GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendAttrs"]));
        extendAttrs = make_shared<GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs>(model1);
      }
    }
    if (m.find("FlowAction") != m.end() && !m["FlowAction"].empty()) {
      flowAction = make_shared<string>(boost::any_cast<string>(m["FlowAction"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("IsOptOut") != m.end() && !m["IsOptOut"].empty()) {
      isOptOut = make_shared<bool>(boost::any_cast<bool>(m["IsOptOut"]));
    }
    if (m.find("NavigateScreen") != m.end() && !m["NavigateScreen"].empty()) {
      navigateScreen = make_shared<string>(boost::any_cast<string>(m["NavigateScreen"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
    }
    if (m.find("SupportedApps") != m.end() && !m["SupportedApps"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedApps"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedApps = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtonsSupportedApps>>(expect1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsButtons() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents : public Darabonba::Model {
public:
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons>> buttons{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponentsButtons>>(expect1);
      }
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsCards : public Darabonba::Model {
public:
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents>> cardComponents{};

  GetChatappTemplateDetailResponseBodyDataComponentsCards() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardComponents) {
      vector<boost::any> temp1;
      for(auto item1:*cardComponents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardComponents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardComponents") != m.end() && !m["CardComponents"].empty()) {
      if (typeid(vector<boost::any>) == m["CardComponents"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardComponents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardComponents = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponentsCardsCardComponents>>(expect1);
      }
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsCards() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponents : public Darabonba::Model {
public:
  shared_ptr<bool> addSecretRecommendation{};
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsCards>> cards{};
  shared_ptr<long> codeExpirationMinutes{};
  shared_ptr<long> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> format{};
  shared_ptr<string> latitude{};
  shared_ptr<string> locationAddress{};
  shared_ptr<string> locationName{};
  shared_ptr<string> longitude{};
  shared_ptr<string> offerExpirationTimeMs{};
  shared_ptr<string> text{};
  shared_ptr<string> thumbUrl{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<bool> hasExpiration{};

  GetChatappTemplateDetailResponseBodyDataComponents() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSecretRecommendation) {
      res["AddSecretRecommendation"] = boost::any(*addSecretRecommendation);
    }
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (cards) {
      vector<boost::any> temp1;
      for(auto item1:*cards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cards"] = boost::any(temp1);
    }
    if (codeExpirationMinutes) {
      res["CodeExpirationMinutes"] = boost::any(*codeExpirationMinutes);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (locationAddress) {
      res["LocationAddress"] = boost::any(*locationAddress);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (offerExpirationTimeMs) {
      res["OfferExpirationTimeMs"] = boost::any(*offerExpirationTimeMs);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (hasExpiration) {
      res["hasExpiration"] = boost::any(*hasExpiration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddSecretRecommendation") != m.end() && !m["AddSecretRecommendation"].empty()) {
      addSecretRecommendation = make_shared<bool>(boost::any_cast<bool>(m["AddSecretRecommendation"]));
    }
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("Cards") != m.end() && !m["Cards"].empty()) {
      if (typeid(vector<boost::any>) == m["Cards"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponentsCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponentsCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cards = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponentsCards>>(expect1);
      }
    }
    if (m.find("CodeExpirationMinutes") != m.end() && !m["CodeExpirationMinutes"].empty()) {
      codeExpirationMinutes = make_shared<long>(boost::any_cast<long>(m["CodeExpirationMinutes"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("LocationAddress") != m.end() && !m["LocationAddress"].empty()) {
      locationAddress = make_shared<string>(boost::any_cast<string>(m["LocationAddress"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("OfferExpirationTimeMs") != m.end() && !m["OfferExpirationTimeMs"].empty()) {
      offerExpirationTimeMs = make_shared<string>(boost::any_cast<string>(m["OfferExpirationTimeMs"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("hasExpiration") != m.end() && !m["hasExpiration"].empty()) {
      hasExpiration = make_shared<bool>(boost::any_cast<bool>(m["hasExpiration"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponents() = default;
};
class GetChatappTemplateDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> allowSend{};
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<bool> categoryChangePaused{};
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponents>> components{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> name{};
  shared_ptr<string> qualityScore{};
  shared_ptr<string> reason{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

  GetChatappTemplateDetailResponseBodyData() {}

  explicit GetChatappTemplateDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowSend) {
      res["AllowSend"] = boost::any(*allowSend);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryChangePaused) {
      res["CategoryChangePaused"] = boost::any(*categoryChangePaused);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowSend") != m.end() && !m["AllowSend"].empty()) {
      allowSend = make_shared<bool>(boost::any_cast<bool>(m["AllowSend"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CategoryChangePaused") != m.end() && !m["CategoryChangePaused"].empty()) {
      categoryChangePaused = make_shared<bool>(boost::any_cast<bool>(m["CategoryChangePaused"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponents>>(expect1);
      }
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<string>(boost::any_cast<string>(m["QualityScore"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyData() = default;
};
class GetChatappTemplateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetChatappTemplateDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappTemplateDetailResponseBody() {}

  explicit GetChatappTemplateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetChatappTemplateDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetChatappTemplateDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBody() = default;
};
class GetChatappTemplateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappTemplateDetailResponseBody> body{};

  GetChatappTemplateDetailResponse() {}

  explicit GetChatappTemplateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetChatappTemplateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappTemplateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappTemplateDetailResponse() = default;
};
class GetChatappTemplateMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> end{};
  shared_ptr<string> granularity{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> start{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

  GetChatappTemplateMetricRequest() {}

  explicit GetChatappTemplateMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
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
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~GetChatappTemplateMetricRequest() = default;
};
class GetChatappTemplateMetricResponseBodyDataCliented : public Darabonba::Model {
public:
  shared_ptr<string> buttonContent{};
  shared_ptr<long> count{};
  shared_ptr<string> type{};

  GetChatappTemplateMetricResponseBodyDataCliented() {}

  explicit GetChatappTemplateMetricResponseBodyDataCliented(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttonContent) {
      res["ButtonContent"] = boost::any(*buttonContent);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ButtonContent") != m.end() && !m["ButtonContent"].empty()) {
      buttonContent = make_shared<string>(boost::any_cast<string>(m["ButtonContent"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetChatappTemplateMetricResponseBodyDataCliented() = default;
};
class GetChatappTemplateMetricResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetChatappTemplateMetricResponseBodyDataCliented>> cliented{};
  shared_ptr<long> deliveredCount{};
  shared_ptr<long> end{};
  shared_ptr<string> language{};
  shared_ptr<long> readCount{};
  shared_ptr<long> sentCount{};
  shared_ptr<long> start{};
  shared_ptr<string> templateCode{};

  GetChatappTemplateMetricResponseBodyData() {}

  explicit GetChatappTemplateMetricResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cliented) {
      vector<boost::any> temp1;
      for(auto item1:*cliented){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cliented"] = boost::any(temp1);
    }
    if (deliveredCount) {
      res["DeliveredCount"] = boost::any(*deliveredCount);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (readCount) {
      res["ReadCount"] = boost::any(*readCount);
    }
    if (sentCount) {
      res["SentCount"] = boost::any(*sentCount);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cliented") != m.end() && !m["Cliented"].empty()) {
      if (typeid(vector<boost::any>) == m["Cliented"].type()) {
        vector<GetChatappTemplateMetricResponseBodyDataCliented> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cliented"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateMetricResponseBodyDataCliented model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cliented = make_shared<vector<GetChatappTemplateMetricResponseBodyDataCliented>>(expect1);
      }
    }
    if (m.find("DeliveredCount") != m.end() && !m["DeliveredCount"].empty()) {
      deliveredCount = make_shared<long>(boost::any_cast<long>(m["DeliveredCount"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ReadCount") != m.end() && !m["ReadCount"].empty()) {
      readCount = make_shared<long>(boost::any_cast<long>(m["ReadCount"]));
    }
    if (m.find("SentCount") != m.end() && !m["SentCount"].empty()) {
      sentCount = make_shared<long>(boost::any_cast<long>(m["SentCount"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~GetChatappTemplateMetricResponseBodyData() = default;
};
class GetChatappTemplateMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetChatappTemplateMetricResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappTemplateMetricResponseBody() {}

  explicit GetChatappTemplateMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetChatappTemplateMetricResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateMetricResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetChatappTemplateMetricResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappTemplateMetricResponseBody() = default;
};
class GetChatappTemplateMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappTemplateMetricResponseBody> body{};

  GetChatappTemplateMetricResponse() {}

  explicit GetChatappTemplateMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetChatappTemplateMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappTemplateMetricResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappTemplateMetricResponse() = default;
};
class GetChatappUploadAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetChatappUploadAuthorizationRequest() {}

  explicit GetChatappUploadAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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


  virtual ~GetChatappUploadAuthorizationRequest() = default;
};
class GetChatappUploadAuthorizationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> dir{};
  shared_ptr<string> endPoint{};
  shared_ptr<long> expire{};
  shared_ptr<string> securityToken{};

  GetChatappUploadAuthorizationResponseBodyData() {}

  explicit GetChatappUploadAuthorizationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetChatappUploadAuthorizationResponseBodyData() = default;
};
class GetChatappUploadAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetChatappUploadAuthorizationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappUploadAuthorizationResponseBody() {}

  explicit GetChatappUploadAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetChatappUploadAuthorizationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetChatappUploadAuthorizationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappUploadAuthorizationResponseBody() = default;
};
class GetChatappUploadAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappUploadAuthorizationResponseBody> body{};

  GetChatappUploadAuthorizationResponse() {}

  explicit GetChatappUploadAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetChatappUploadAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappUploadAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappUploadAuthorizationResponse() = default;
};
class GetChatappVerifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> locale{};
  shared_ptr<string> method{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetChatappVerifyCodeRequest() {}

  explicit GetChatappVerifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetChatappVerifyCodeRequest() = default;
};
class GetChatappVerifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetChatappVerifyCodeResponseBody() {}

  explicit GetChatappVerifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetChatappVerifyCodeResponseBody() = default;
};
class GetChatappVerifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappVerifyCodeResponseBody> body{};

  GetChatappVerifyCodeResponse() {}

  explicit GetChatappVerifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetChatappVerifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappVerifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappVerifyCodeResponse() = default;
};
class GetCommerceSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetCommerceSettingRequest() {}

  explicit GetCommerceSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetCommerceSettingRequest() = default;
};
class GetCommerceSettingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> cartEnable{};
  shared_ptr<bool> catalogVisible{};

  GetCommerceSettingResponseBodyData() {}

  explicit GetCommerceSettingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cartEnable) {
      res["CartEnable"] = boost::any(*cartEnable);
    }
    if (catalogVisible) {
      res["CatalogVisible"] = boost::any(*catalogVisible);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CartEnable") != m.end() && !m["CartEnable"].empty()) {
      cartEnable = make_shared<bool>(boost::any_cast<bool>(m["CartEnable"]));
    }
    if (m.find("CatalogVisible") != m.end() && !m["CatalogVisible"].empty()) {
      catalogVisible = make_shared<bool>(boost::any_cast<bool>(m["CatalogVisible"]));
    }
  }


  virtual ~GetCommerceSettingResponseBodyData() = default;
};
class GetCommerceSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetCommerceSettingResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCommerceSettingResponseBody() {}

  explicit GetCommerceSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCommerceSettingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCommerceSettingResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCommerceSettingResponseBody() = default;
};
class GetCommerceSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCommerceSettingResponseBody> body{};

  GetCommerceSettingResponse() {}

  explicit GetCommerceSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCommerceSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCommerceSettingResponseBody>(model1);
      }
    }
  }


  virtual ~GetCommerceSettingResponse() = default;
};
class GetConversationalAutomationRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetConversationalAutomationRequest() {}

  explicit GetConversationalAutomationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetConversationalAutomationRequest() = default;
};
class GetConversationalAutomationResponseBodyDataCommands : public Darabonba::Model {
public:
  shared_ptr<string> commandDescription{};
  shared_ptr<string> commandName{};

  GetConversationalAutomationResponseBodyDataCommands() {}

  explicit GetConversationalAutomationResponseBodyDataCommands(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandDescription) {
      res["CommandDescription"] = boost::any(*commandDescription);
    }
    if (commandName) {
      res["CommandName"] = boost::any(*commandName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandDescription") != m.end() && !m["CommandDescription"].empty()) {
      commandDescription = make_shared<string>(boost::any_cast<string>(m["CommandDescription"]));
    }
    if (m.find("CommandName") != m.end() && !m["CommandName"].empty()) {
      commandName = make_shared<string>(boost::any_cast<string>(m["CommandName"]));
    }
  }


  virtual ~GetConversationalAutomationResponseBodyDataCommands() = default;
};
class GetConversationalAutomationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetConversationalAutomationResponseBodyDataCommands>> commands{};
  shared_ptr<bool> enableWelcomeMessage{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<vector<string>> prompts{};

  GetConversationalAutomationResponseBodyData() {}

  explicit GetConversationalAutomationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commands) {
      vector<boost::any> temp1;
      for(auto item1:*commands){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Commands"] = boost::any(temp1);
    }
    if (enableWelcomeMessage) {
      res["EnableWelcomeMessage"] = boost::any(*enableWelcomeMessage);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prompts) {
      res["Prompts"] = boost::any(*prompts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commands") != m.end() && !m["Commands"].empty()) {
      if (typeid(vector<boost::any>) == m["Commands"].type()) {
        vector<GetConversationalAutomationResponseBodyDataCommands> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Commands"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConversationalAutomationResponseBodyDataCommands model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commands = make_shared<vector<GetConversationalAutomationResponseBodyDataCommands>>(expect1);
      }
    }
    if (m.find("EnableWelcomeMessage") != m.end() && !m["EnableWelcomeMessage"].empty()) {
      enableWelcomeMessage = make_shared<bool>(boost::any_cast<bool>(m["EnableWelcomeMessage"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Prompts") != m.end() && !m["Prompts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Prompts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Prompts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      prompts = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetConversationalAutomationResponseBodyData() = default;
};
class GetConversationalAutomationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetConversationalAutomationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConversationalAutomationResponseBody() {}

  explicit GetConversationalAutomationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetConversationalAutomationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetConversationalAutomationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetConversationalAutomationResponseBody() = default;
};
class GetConversationalAutomationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConversationalAutomationResponseBody> body{};

  GetConversationalAutomationResponse() {}

  explicit GetConversationalAutomationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetConversationalAutomationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConversationalAutomationResponseBody>(model1);
      }
    }
  }


  virtual ~GetConversationalAutomationResponse() = default;
};
class GetFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetFlowRequest() {}

  explicit GetFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
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


  virtual ~GetFlowRequest() = default;
};
class GetFlowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> dataApiVersion{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};
  shared_ptr<string> JSONVersion{};
  shared_ptr<string> previewUrl{};
  shared_ptr<long> previewUrlExpires{};
  shared_ptr<string> status{};

  GetFlowResponseBodyData() {}

  explicit GetFlowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (dataApiVersion) {
      res["DataApiVersion"] = boost::any(*dataApiVersion);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (JSONVersion) {
      res["JSONVersion"] = boost::any(*JSONVersion);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (previewUrlExpires) {
      res["PreviewUrlExpires"] = boost::any(*previewUrlExpires);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DataApiVersion") != m.end() && !m["DataApiVersion"].empty()) {
      dataApiVersion = make_shared<string>(boost::any_cast<string>(m["DataApiVersion"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("JSONVersion") != m.end() && !m["JSONVersion"].empty()) {
      JSONVersion = make_shared<string>(boost::any_cast<string>(m["JSONVersion"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("PreviewUrlExpires") != m.end() && !m["PreviewUrlExpires"].empty()) {
      previewUrlExpires = make_shared<long>(boost::any_cast<long>(m["PreviewUrlExpires"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFlowResponseBodyData() = default;
};
class GetFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetFlowResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetFlowResponseBody() {}

  explicit GetFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFlowResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFlowResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFlowResponseBody() = default;
};
class GetFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFlowResponseBody> body{};

  GetFlowResponse() {}

  explicit GetFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFlowResponseBody>(model1);
      }
    }
  }


  virtual ~GetFlowResponse() = default;
};
class GetFlowJSONAssestRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetFlowJSONAssestRequest() {}

  explicit GetFlowJSONAssestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
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


  virtual ~GetFlowJSONAssestRequest() = default;
};
class GetFlowJSONAssestResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> flowId{};

  GetFlowJSONAssestResponseBodyData() {}

  explicit GetFlowJSONAssestResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
  }


  virtual ~GetFlowJSONAssestResponseBodyData() = default;
};
class GetFlowJSONAssestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetFlowJSONAssestResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetFlowJSONAssestResponseBody() {}

  explicit GetFlowJSONAssestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFlowJSONAssestResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFlowJSONAssestResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFlowJSONAssestResponseBody() = default;
};
class GetFlowJSONAssestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFlowJSONAssestResponseBody> body{};

  GetFlowJSONAssestResponse() {}

  explicit GetFlowJSONAssestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFlowJSONAssestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFlowJSONAssestResponseBody>(model1);
      }
    }
  }


  virtual ~GetFlowJSONAssestResponse() = default;
};
class GetFlowPreviewUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetFlowPreviewUrlRequest() {}

  explicit GetFlowPreviewUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
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


  virtual ~GetFlowPreviewUrlRequest() = default;
};
class GetFlowPreviewUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};
  shared_ptr<string> previewUrl{};
  shared_ptr<long> previewUrlExpires{};

  GetFlowPreviewUrlResponseBodyData() {}

  explicit GetFlowPreviewUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (previewUrlExpires) {
      res["PreviewUrlExpires"] = boost::any(*previewUrlExpires);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("PreviewUrlExpires") != m.end() && !m["PreviewUrlExpires"].empty()) {
      previewUrlExpires = make_shared<long>(boost::any_cast<long>(m["PreviewUrlExpires"]));
    }
  }


  virtual ~GetFlowPreviewUrlResponseBodyData() = default;
};
class GetFlowPreviewUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetFlowPreviewUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetFlowPreviewUrlResponseBody() {}

  explicit GetFlowPreviewUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFlowPreviewUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFlowPreviewUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFlowPreviewUrlResponseBody() = default;
};
class GetFlowPreviewUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFlowPreviewUrlResponseBody> body{};

  GetFlowPreviewUrlResponse() {}

  explicit GetFlowPreviewUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFlowPreviewUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFlowPreviewUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetFlowPreviewUrlResponse() = default;
};
class GetMigrationVerifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> locale{};
  shared_ptr<string> method{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetMigrationVerifyCodeRequest() {}

  explicit GetMigrationVerifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetMigrationVerifyCodeRequest() = default;
};
class GetMigrationVerifyCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};

  GetMigrationVerifyCodeResponseBodyData() {}

  explicit GetMigrationVerifyCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetMigrationVerifyCodeResponseBodyData() = default;
};
class GetMigrationVerifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetMigrationVerifyCodeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetMigrationVerifyCodeResponseBody() {}

  explicit GetMigrationVerifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMigrationVerifyCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMigrationVerifyCodeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMigrationVerifyCodeResponseBody() = default;
};
class GetMigrationVerifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMigrationVerifyCodeResponseBody> body{};

  GetMigrationVerifyCodeResponse() {}

  explicit GetMigrationVerifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMigrationVerifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMigrationVerifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetMigrationVerifyCodeResponse() = default;
};
class GetPermissionByCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> permissions{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetPermissionByCodeRequest() {}

  explicit GetPermissionByCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetPermissionByCodeRequest() = default;
};
class GetPermissionByCodeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> permissionsShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetPermissionByCodeShrinkRequest() {}

  explicit GetPermissionByCodeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (permissionsShrink) {
      res["Permissions"] = boost::any(*permissionsShrink);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      permissionsShrink = make_shared<string>(boost::any_cast<string>(m["Permissions"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetPermissionByCodeShrinkRequest() = default;
};
class GetPermissionByCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPermissionByCodeResponseBody() {}

  explicit GetPermissionByCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPermissionByCodeResponseBody() = default;
};
class GetPermissionByCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPermissionByCodeResponseBody> body{};

  GetPermissionByCodeResponse() {}

  explicit GetPermissionByCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPermissionByCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPermissionByCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetPermissionByCodeResponse() = default;
};
class GetPhoneEncryptionPublicKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetPhoneEncryptionPublicKeyRequest() {}

  explicit GetPhoneEncryptionPublicKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetPhoneEncryptionPublicKeyRequest() = default;
};
class GetPhoneEncryptionPublicKeyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> encryptionPublicKey{};
  shared_ptr<string> encryptionPublicKeyStatus{};
  shared_ptr<string> phoneNumber{};

  GetPhoneEncryptionPublicKeyResponseBodyData() {}

  explicit GetPhoneEncryptionPublicKeyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptionPublicKey) {
      res["EncryptionPublicKey"] = boost::any(*encryptionPublicKey);
    }
    if (encryptionPublicKeyStatus) {
      res["EncryptionPublicKeyStatus"] = boost::any(*encryptionPublicKeyStatus);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptionPublicKey") != m.end() && !m["EncryptionPublicKey"].empty()) {
      encryptionPublicKey = make_shared<string>(boost::any_cast<string>(m["EncryptionPublicKey"]));
    }
    if (m.find("EncryptionPublicKeyStatus") != m.end() && !m["EncryptionPublicKeyStatus"].empty()) {
      encryptionPublicKeyStatus = make_shared<string>(boost::any_cast<string>(m["EncryptionPublicKeyStatus"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetPhoneEncryptionPublicKeyResponseBodyData() = default;
};
class GetPhoneEncryptionPublicKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetPhoneEncryptionPublicKeyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPhoneEncryptionPublicKeyResponseBody() {}

  explicit GetPhoneEncryptionPublicKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPhoneEncryptionPublicKeyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPhoneEncryptionPublicKeyResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPhoneEncryptionPublicKeyResponseBody() = default;
};
class GetPhoneEncryptionPublicKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhoneEncryptionPublicKeyResponseBody> body{};

  GetPhoneEncryptionPublicKeyResponse() {}

  explicit GetPhoneEncryptionPublicKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhoneEncryptionPublicKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhoneEncryptionPublicKeyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhoneEncryptionPublicKeyResponse() = default;
};
class GetPhoneNumberVerificationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetPhoneNumberVerificationStatusRequest() {}

  explicit GetPhoneNumberVerificationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetPhoneNumberVerificationStatusRequest() = default;
};
class GetPhoneNumberVerificationStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> codeVerificationStatus{};
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};

  GetPhoneNumberVerificationStatusResponseBodyData() {}

  explicit GetPhoneNumberVerificationStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVerificationStatus) {
      res["CodeVerificationStatus"] = boost::any(*codeVerificationStatus);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeVerificationStatus") != m.end() && !m["CodeVerificationStatus"].empty()) {
      codeVerificationStatus = make_shared<string>(boost::any_cast<string>(m["CodeVerificationStatus"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetPhoneNumberVerificationStatusResponseBodyData() = default;
};
class GetPhoneNumberVerificationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetPhoneNumberVerificationStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPhoneNumberVerificationStatusResponseBody() {}

  explicit GetPhoneNumberVerificationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPhoneNumberVerificationStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPhoneNumberVerificationStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPhoneNumberVerificationStatusResponseBody() = default;
};
class GetPhoneNumberVerificationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhoneNumberVerificationStatusResponseBody> body{};

  GetPhoneNumberVerificationStatusResponse() {}

  explicit GetPhoneNumberVerificationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhoneNumberVerificationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhoneNumberVerificationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhoneNumberVerificationStatusResponse() = default;
};
class GetPreValidatePhoneIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> verifyCode{};

  GetPreValidatePhoneIdRequest() {}

  explicit GetPreValidatePhoneIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~GetPreValidatePhoneIdRequest() = default;
};
class GetPreValidatePhoneIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> phoneNumberId{};

  GetPreValidatePhoneIdResponseBodyData() {}

  explicit GetPreValidatePhoneIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberId) {
      res["PhoneNumberId"] = boost::any(*phoneNumberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberId") != m.end() && !m["PhoneNumberId"].empty()) {
      phoneNumberId = make_shared<string>(boost::any_cast<string>(m["PhoneNumberId"]));
    }
  }


  virtual ~GetPreValidatePhoneIdResponseBodyData() = default;
};
class GetPreValidatePhoneIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPreValidatePhoneIdResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPreValidatePhoneIdResponseBody() {}

  explicit GetPreValidatePhoneIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPreValidatePhoneIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPreValidatePhoneIdResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPreValidatePhoneIdResponseBody() = default;
};
class GetPreValidatePhoneIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPreValidatePhoneIdResponseBody> body{};

  GetPreValidatePhoneIdResponse() {}

  explicit GetPreValidatePhoneIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPreValidatePhoneIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPreValidatePhoneIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetPreValidatePhoneIdResponse() = default;
};
class GetWhatsappConnectionCatalogRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  GetWhatsappConnectionCatalogRequest() {}

  explicit GetWhatsappConnectionCatalogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~GetWhatsappConnectionCatalogRequest() = default;
};
class GetWhatsappConnectionCatalogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWhatsappConnectionCatalogResponseBody() {}

  explicit GetWhatsappConnectionCatalogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Model"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      model = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetWhatsappConnectionCatalogResponseBody() = default;
};
class GetWhatsappConnectionCatalogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWhatsappConnectionCatalogResponseBody> body{};

  GetWhatsappConnectionCatalogResponse() {}

  explicit GetWhatsappConnectionCatalogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWhatsappConnectionCatalogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWhatsappConnectionCatalogResponseBody>(model1);
      }
    }
  }


  virtual ~GetWhatsappConnectionCatalogResponse() = default;
};
class GetWhatsappHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> language{};
  shared_ptr<string> nodeType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> wabaId{};

  GetWhatsappHealthStatusRequest() {}

  explicit GetWhatsappHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~GetWhatsappHealthStatusRequest() = default;
};
class GetWhatsappHealthStatusResponseBodyDataEntitiesErrors : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorDescription{};
  shared_ptr<string> possibleSolution{};

  GetWhatsappHealthStatusResponseBodyDataEntitiesErrors() {}

  explicit GetWhatsappHealthStatusResponseBodyDataEntitiesErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorDescription) {
      res["ErrorDescription"] = boost::any(*errorDescription);
    }
    if (possibleSolution) {
      res["PossibleSolution"] = boost::any(*possibleSolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorDescription") != m.end() && !m["ErrorDescription"].empty()) {
      errorDescription = make_shared<string>(boost::any_cast<string>(m["ErrorDescription"]));
    }
    if (m.find("PossibleSolution") != m.end() && !m["PossibleSolution"].empty()) {
      possibleSolution = make_shared<string>(boost::any_cast<string>(m["PossibleSolution"]));
    }
  }


  virtual ~GetWhatsappHealthStatusResponseBodyDataEntitiesErrors() = default;
};
class GetWhatsappHealthStatusResponseBodyDataEntities : public Darabonba::Model {
public:
  shared_ptr<string> businessId{};
  shared_ptr<string> canSendMessage{};
  shared_ptr<string> entityType{};
  shared_ptr<vector<GetWhatsappHealthStatusResponseBodyDataEntitiesErrors>> errors{};
  shared_ptr<string> language{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> wabaId{};

  GetWhatsappHealthStatusResponseBodyDataEntities() {}

  explicit GetWhatsappHealthStatusResponseBodyDataEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (canSendMessage) {
      res["CanSendMessage"] = boost::any(*canSendMessage);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("CanSendMessage") != m.end() && !m["CanSendMessage"].empty()) {
      canSendMessage = make_shared<string>(boost::any_cast<string>(m["CanSendMessage"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<GetWhatsappHealthStatusResponseBodyDataEntitiesErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWhatsappHealthStatusResponseBodyDataEntitiesErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetWhatsappHealthStatusResponseBodyDataEntitiesErrors>>(expect1);
      }
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~GetWhatsappHealthStatusResponseBodyDataEntities() = default;
};
class GetWhatsappHealthStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> canSendMessage{};
  shared_ptr<vector<GetWhatsappHealthStatusResponseBodyDataEntities>> entities{};

  GetWhatsappHealthStatusResponseBodyData() {}

  explicit GetWhatsappHealthStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSendMessage) {
      res["CanSendMessage"] = boost::any(*canSendMessage);
    }
    if (entities) {
      vector<boost::any> temp1;
      for(auto item1:*entities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanSendMessage") != m.end() && !m["CanSendMessage"].empty()) {
      canSendMessage = make_shared<string>(boost::any_cast<string>(m["CanSendMessage"]));
    }
    if (m.find("Entities") != m.end() && !m["Entities"].empty()) {
      if (typeid(vector<boost::any>) == m["Entities"].type()) {
        vector<GetWhatsappHealthStatusResponseBodyDataEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWhatsappHealthStatusResponseBodyDataEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entities = make_shared<vector<GetWhatsappHealthStatusResponseBodyDataEntities>>(expect1);
      }
    }
  }


  virtual ~GetWhatsappHealthStatusResponseBodyData() = default;
};
class GetWhatsappHealthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetWhatsappHealthStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWhatsappHealthStatusResponseBody() {}

  explicit GetWhatsappHealthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetWhatsappHealthStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWhatsappHealthStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetWhatsappHealthStatusResponseBody() = default;
};
class GetWhatsappHealthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWhatsappHealthStatusResponseBody> body{};

  GetWhatsappHealthStatusResponse() {}

  explicit GetWhatsappHealthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWhatsappHealthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWhatsappHealthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetWhatsappHealthStatusResponse() = default;
};
class IsvGetAppIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> intlVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> permissions{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> type{};

  IsvGetAppIdRequest() {}

  explicit IsvGetAppIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intlVersion) {
      res["IntlVersion"] = boost::any(*intlVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntlVersion") != m.end() && !m["IntlVersion"].empty()) {
      intlVersion = make_shared<string>(boost::any_cast<string>(m["IntlVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      permissions = make_shared<string>(boost::any_cast<string>(m["Permissions"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~IsvGetAppIdRequest() = default;
};
class IsvGetAppIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> appId{};
  shared_ptr<string> code{};
  shared_ptr<string> configId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  IsvGetAppIdResponseBody() {}

  explicit IsvGetAppIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IsvGetAppIdResponseBody() = default;
};
class IsvGetAppIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IsvGetAppIdResponseBody> body{};

  IsvGetAppIdResponse() {}

  explicit IsvGetAppIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        IsvGetAppIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IsvGetAppIdResponseBody>(model1);
      }
    }
  }


  virtual ~IsvGetAppIdResponse() = default;
};
class ListBindingRelationsForFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListBindingRelationsForFlowVersionRequest() {}

  explicit ListBindingRelationsForFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
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
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
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


  virtual ~ListBindingRelationsForFlowVersionRequest() = default;
};
class ListBindingRelationsForFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListBindingRelationsForFlowVersionResponseBody() {}

  explicit ListBindingRelationsForFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListBindingRelationsForFlowVersionResponseBody() = default;
};
class ListBindingRelationsForFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBindingRelationsForFlowVersionResponseBody> body{};

  ListBindingRelationsForFlowVersionResponse() {}

  explicit ListBindingRelationsForFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListBindingRelationsForFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBindingRelationsForFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ListBindingRelationsForFlowVersionResponse() = default;
};
class ListChatFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowTriggerType{};
  shared_ptr<string> keyword{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> returnWithOnlineVersion{};
  shared_ptr<string> status{};

  ListChatFlowRequest() {}

  explicit ListChatFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowTriggerType) {
      res["FlowTriggerType"] = boost::any(*flowTriggerType);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (returnWithOnlineVersion) {
      res["ReturnWithOnlineVersion"] = boost::any(*returnWithOnlineVersion);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowTriggerType") != m.end() && !m["FlowTriggerType"].empty()) {
      flowTriggerType = make_shared<string>(boost::any_cast<string>(m["FlowTriggerType"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("ReturnWithOnlineVersion") != m.end() && !m["ReturnWithOnlineVersion"].empty()) {
      returnWithOnlineVersion = make_shared<bool>(boost::any_cast<bool>(m["ReturnWithOnlineVersion"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListChatFlowRequest() = default;
};
class ListChatFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowTriggerType{};
  shared_ptr<string> keyword{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> returnWithOnlineVersion{};
  shared_ptr<string> status{};

  ListChatFlowShrinkRequest() {}

  explicit ListChatFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowTriggerType) {
      res["FlowTriggerType"] = boost::any(*flowTriggerType);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (returnWithOnlineVersion) {
      res["ReturnWithOnlineVersion"] = boost::any(*returnWithOnlineVersion);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowTriggerType") != m.end() && !m["FlowTriggerType"].empty()) {
      flowTriggerType = make_shared<string>(boost::any_cast<string>(m["FlowTriggerType"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("ReturnWithOnlineVersion") != m.end() && !m["ReturnWithOnlineVersion"].empty()) {
      returnWithOnlineVersion = make_shared<bool>(boost::any_cast<bool>(m["ReturnWithOnlineVersion"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListChatFlowShrinkRequest() = default;
};
class ListChatFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  ListChatFlowResponseBody() {}

  explicit ListChatFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListChatFlowResponseBody() = default;
};
class ListChatFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatFlowResponseBody> body{};

  ListChatFlowResponse() {}

  explicit ListChatFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListChatFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatFlowResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatFlowResponse() = default;
};
class ListChatFlowTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> keyword{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> triggerType{};

  ListChatFlowTemplateRequest() {}

  explicit ListChatFlowTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
  }


  virtual ~ListChatFlowTemplateRequest() = default;
};
class ListChatFlowTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> response{};

  ListChatFlowTemplateResponseBodyData() {}

  explicit ListChatFlowTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (response) {
      res["Response"] = boost::any(*response);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListChatFlowTemplateResponseBodyData() = default;
};
class ListChatFlowTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListChatFlowTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListChatFlowTemplateResponseBody() {}

  explicit ListChatFlowTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListChatFlowTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListChatFlowTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListChatFlowTemplateResponseBody() = default;
};
class ListChatFlowTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatFlowTemplateResponseBody> body{};

  ListChatFlowTemplateResponse() {}

  explicit ListChatFlowTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListChatFlowTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatFlowTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatFlowTemplateResponse() = default;
};
class ListChatGroupRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> size{};

  ListChatGroupRequestPage() {}

  explicit ListChatGroupRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListChatGroupRequestPage() = default;
};
class ListChatGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<ListChatGroupRequestPage> page{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subject{};

  ListChatGroupRequest() {}

  explicit ListChatGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupStatus) {
      res["GroupStatus"] = boost::any(*groupStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupStatus") != m.end() && !m["GroupStatus"].empty()) {
      groupStatus = make_shared<string>(boost::any_cast<string>(m["GroupStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListChatGroupRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListChatGroupRequestPage>(model1);
      }
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~ListChatGroupRequest() = default;
};
class ListChatGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subject{};

  ListChatGroupShrinkRequest() {}

  explicit ListChatGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupStatus) {
      res["GroupStatus"] = boost::any(*groupStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupStatus") != m.end() && !m["GroupStatus"].empty()) {
      groupStatus = make_shared<string>(boost::any_cast<string>(m["GroupStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~ListChatGroupShrinkRequest() = default;
};
class ListChatGroupResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupStatus{};
  shared_ptr<string> inviteLink{};
  shared_ptr<string> profilePictureFile{};
  shared_ptr<string> subject{};

  ListChatGroupResponseBodyDataList() {}

  explicit ListChatGroupResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupStatus) {
      res["GroupStatus"] = boost::any(*groupStatus);
    }
    if (inviteLink) {
      res["InviteLink"] = boost::any(*inviteLink);
    }
    if (profilePictureFile) {
      res["ProfilePictureFile"] = boost::any(*profilePictureFile);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupStatus") != m.end() && !m["GroupStatus"].empty()) {
      groupStatus = make_shared<string>(boost::any_cast<string>(m["GroupStatus"]));
    }
    if (m.find("InviteLink") != m.end() && !m["InviteLink"].empty()) {
      inviteLink = make_shared<string>(boost::any_cast<string>(m["InviteLink"]));
    }
    if (m.find("ProfilePictureFile") != m.end() && !m["ProfilePictureFile"].empty()) {
      profilePictureFile = make_shared<string>(boost::any_cast<string>(m["ProfilePictureFile"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~ListChatGroupResponseBodyDataList() = default;
};
class ListChatGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListChatGroupResponseBodyDataList>> list{};
  shared_ptr<long> total{};

  ListChatGroupResponseBodyData() {}

  explicit ListChatGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListChatGroupResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatGroupResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListChatGroupResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListChatGroupResponseBodyData() = default;
};
class ListChatGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListChatGroupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListChatGroupResponseBody() {}

  explicit ListChatGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListChatGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListChatGroupResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListChatGroupResponseBody() = default;
};
class ListChatGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatGroupResponseBody> body{};

  ListChatGroupResponse() {}

  explicit ListChatGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListChatGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatGroupResponse() = default;
};
class ListChatGroupParticipantsRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> size{};

  ListChatGroupParticipantsRequestPage() {}

  explicit ListChatGroupParticipantsRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListChatGroupParticipantsRequestPage() = default;
};
class ListChatGroupParticipantsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<ListChatGroupParticipantsRequestPage> page{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListChatGroupParticipantsRequest() {}

  explicit ListChatGroupParticipantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListChatGroupParticipantsRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListChatGroupParticipantsRequestPage>(model1);
      }
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListChatGroupParticipantsRequest() = default;
};
class ListChatGroupParticipantsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListChatGroupParticipantsShrinkRequest() {}

  explicit ListChatGroupParticipantsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
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
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListChatGroupParticipantsShrinkRequest() = default;
};
class ListChatGroupParticipantsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> participantNumber{};

  ListChatGroupParticipantsResponseBodyDataList() {}

  explicit ListChatGroupParticipantsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (participantNumber) {
      res["ParticipantNumber"] = boost::any(*participantNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParticipantNumber") != m.end() && !m["ParticipantNumber"].empty()) {
      participantNumber = make_shared<string>(boost::any_cast<string>(m["ParticipantNumber"]));
    }
  }


  virtual ~ListChatGroupParticipantsResponseBodyDataList() = default;
};
class ListChatGroupParticipantsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListChatGroupParticipantsResponseBodyDataList>> list{};
  shared_ptr<long> total{};

  ListChatGroupParticipantsResponseBodyData() {}

  explicit ListChatGroupParticipantsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListChatGroupParticipantsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatGroupParticipantsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListChatGroupParticipantsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListChatGroupParticipantsResponseBodyData() = default;
};
class ListChatGroupParticipantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListChatGroupParticipantsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListChatGroupParticipantsResponseBody() {}

  explicit ListChatGroupParticipantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListChatGroupParticipantsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListChatGroupParticipantsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListChatGroupParticipantsResponseBody() = default;
};
class ListChatGroupParticipantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatGroupParticipantsResponseBody> body{};

  ListChatGroupParticipantsResponse() {}

  explicit ListChatGroupParticipantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListChatGroupParticipantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatGroupParticipantsResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatGroupParticipantsResponse() = default;
};
class ListChatappMessageRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> size{};

  ListChatappMessageRequestPage() {}

  explicit ListChatappMessageRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListChatappMessageRequestPage() = default;
};
class ListChatappMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> clientAcceptStatus{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> eventAction{};
  shared_ptr<string> groupMessageId{};
  shared_ptr<string> messageStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<ListChatappMessageRequestPage> page{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> userNumber{};

  ListChatappMessageRequest() {}

  explicit ListChatappMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (clientAcceptStatus) {
      res["ClientAcceptStatus"] = boost::any(*clientAcceptStatus);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventAction) {
      res["EventAction"] = boost::any(*eventAction);
    }
    if (groupMessageId) {
      res["GroupMessageId"] = boost::any(*groupMessageId);
    }
    if (messageStatus) {
      res["MessageStatus"] = boost::any(*messageStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (userNumber) {
      res["UserNumber"] = boost::any(*userNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("ClientAcceptStatus") != m.end() && !m["ClientAcceptStatus"].empty()) {
      clientAcceptStatus = make_shared<string>(boost::any_cast<string>(m["ClientAcceptStatus"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventAction") != m.end() && !m["EventAction"].empty()) {
      eventAction = make_shared<string>(boost::any_cast<string>(m["EventAction"]));
    }
    if (m.find("GroupMessageId") != m.end() && !m["GroupMessageId"].empty()) {
      groupMessageId = make_shared<string>(boost::any_cast<string>(m["GroupMessageId"]));
    }
    if (m.find("MessageStatus") != m.end() && !m["MessageStatus"].empty()) {
      messageStatus = make_shared<string>(boost::any_cast<string>(m["MessageStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListChatappMessageRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListChatappMessageRequestPage>(model1);
      }
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("UserNumber") != m.end() && !m["UserNumber"].empty()) {
      userNumber = make_shared<string>(boost::any_cast<string>(m["UserNumber"]));
    }
  }


  virtual ~ListChatappMessageRequest() = default;
};
class ListChatappMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> clientAcceptStatus{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> eventAction{};
  shared_ptr<string> groupMessageId{};
  shared_ptr<string> messageStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> userNumber{};

  ListChatappMessageShrinkRequest() {}

  explicit ListChatappMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (clientAcceptStatus) {
      res["ClientAcceptStatus"] = boost::any(*clientAcceptStatus);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventAction) {
      res["EventAction"] = boost::any(*eventAction);
    }
    if (groupMessageId) {
      res["GroupMessageId"] = boost::any(*groupMessageId);
    }
    if (messageStatus) {
      res["MessageStatus"] = boost::any(*messageStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (userNumber) {
      res["UserNumber"] = boost::any(*userNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("ClientAcceptStatus") != m.end() && !m["ClientAcceptStatus"].empty()) {
      clientAcceptStatus = make_shared<string>(boost::any_cast<string>(m["ClientAcceptStatus"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventAction") != m.end() && !m["EventAction"].empty()) {
      eventAction = make_shared<string>(boost::any_cast<string>(m["EventAction"]));
    }
    if (m.find("GroupMessageId") != m.end() && !m["GroupMessageId"].empty()) {
      groupMessageId = make_shared<string>(boost::any_cast<string>(m["GroupMessageId"]));
    }
    if (m.find("MessageStatus") != m.end() && !m["MessageStatus"].empty()) {
      messageStatus = make_shared<string>(boost::any_cast<string>(m["MessageStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("UserNumber") != m.end() && !m["UserNumber"].empty()) {
      userNumber = make_shared<string>(boost::any_cast<string>(m["UserNumber"]));
    }
  }


  virtual ~ListChatappMessageShrinkRequest() = default;
};
class ListChatappMessageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> clientAcceptStatusName{};
  shared_ptr<string> clientReadStatus{};
  shared_ptr<string> clientReadStatusName{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> eventAction{};
  shared_ptr<string> eventActionName{};
  shared_ptr<string> failBackContent{};
  shared_ptr<string> failBackFlag{};
  shared_ptr<string> failReason{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> message{};
  shared_ptr<string> messageId{};
  shared_ptr<string> messageSource{};
  shared_ptr<string> messageStatus{};
  shared_ptr<string> messageStatusName{};
  shared_ptr<string> messageType{};
  shared_ptr<string> messageTypeName{};
  shared_ptr<string> month{};
  shared_ptr<string> sendTime{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> type{};
  shared_ptr<string> uniqueMessageId{};
  shared_ptr<string> userNumber{};

  ListChatappMessageResponseBodyData() {}

  explicit ListChatappMessageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (clientAcceptStatusName) {
      res["ClientAcceptStatusName"] = boost::any(*clientAcceptStatusName);
    }
    if (clientReadStatus) {
      res["ClientReadStatus"] = boost::any(*clientReadStatus);
    }
    if (clientReadStatusName) {
      res["ClientReadStatusName"] = boost::any(*clientReadStatusName);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (eventAction) {
      res["EventAction"] = boost::any(*eventAction);
    }
    if (eventActionName) {
      res["EventActionName"] = boost::any(*eventActionName);
    }
    if (failBackContent) {
      res["FailBackContent"] = boost::any(*failBackContent);
    }
    if (failBackFlag) {
      res["FailBackFlag"] = boost::any(*failBackFlag);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (messageSource) {
      res["MessageSource"] = boost::any(*messageSource);
    }
    if (messageStatus) {
      res["MessageStatus"] = boost::any(*messageStatus);
    }
    if (messageStatusName) {
      res["MessageStatusName"] = boost::any(*messageStatusName);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (messageTypeName) {
      res["MessageTypeName"] = boost::any(*messageTypeName);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (sendTime) {
      res["SendTime"] = boost::any(*sendTime);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uniqueMessageId) {
      res["UniqueMessageId"] = boost::any(*uniqueMessageId);
    }
    if (userNumber) {
      res["UserNumber"] = boost::any(*userNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("ClientAcceptStatusName") != m.end() && !m["ClientAcceptStatusName"].empty()) {
      clientAcceptStatusName = make_shared<string>(boost::any_cast<string>(m["ClientAcceptStatusName"]));
    }
    if (m.find("ClientReadStatus") != m.end() && !m["ClientReadStatus"].empty()) {
      clientReadStatus = make_shared<string>(boost::any_cast<string>(m["ClientReadStatus"]));
    }
    if (m.find("ClientReadStatusName") != m.end() && !m["ClientReadStatusName"].empty()) {
      clientReadStatusName = make_shared<string>(boost::any_cast<string>(m["ClientReadStatusName"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("EventAction") != m.end() && !m["EventAction"].empty()) {
      eventAction = make_shared<string>(boost::any_cast<string>(m["EventAction"]));
    }
    if (m.find("EventActionName") != m.end() && !m["EventActionName"].empty()) {
      eventActionName = make_shared<string>(boost::any_cast<string>(m["EventActionName"]));
    }
    if (m.find("FailBackContent") != m.end() && !m["FailBackContent"].empty()) {
      failBackContent = make_shared<string>(boost::any_cast<string>(m["FailBackContent"]));
    }
    if (m.find("FailBackFlag") != m.end() && !m["FailBackFlag"].empty()) {
      failBackFlag = make_shared<string>(boost::any_cast<string>(m["FailBackFlag"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("MessageSource") != m.end() && !m["MessageSource"].empty()) {
      messageSource = make_shared<string>(boost::any_cast<string>(m["MessageSource"]));
    }
    if (m.find("MessageStatus") != m.end() && !m["MessageStatus"].empty()) {
      messageStatus = make_shared<string>(boost::any_cast<string>(m["MessageStatus"]));
    }
    if (m.find("MessageStatusName") != m.end() && !m["MessageStatusName"].empty()) {
      messageStatusName = make_shared<string>(boost::any_cast<string>(m["MessageStatusName"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("MessageTypeName") != m.end() && !m["MessageTypeName"].empty()) {
      messageTypeName = make_shared<string>(boost::any_cast<string>(m["MessageTypeName"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["Month"]));
    }
    if (m.find("SendTime") != m.end() && !m["SendTime"].empty()) {
      sendTime = make_shared<string>(boost::any_cast<string>(m["SendTime"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UniqueMessageId") != m.end() && !m["UniqueMessageId"].empty()) {
      uniqueMessageId = make_shared<string>(boost::any_cast<string>(m["UniqueMessageId"]));
    }
    if (m.find("UserNumber") != m.end() && !m["UserNumber"].empty()) {
      userNumber = make_shared<string>(boost::any_cast<string>(m["UserNumber"]));
    }
  }


  virtual ~ListChatappMessageResponseBodyData() = default;
};
class ListChatappMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListChatappMessageResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListChatappMessageResponseBody() {}

  explicit ListChatappMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListChatappMessageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatappMessageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListChatappMessageResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListChatappMessageResponseBody() = default;
};
class ListChatappMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatappMessageResponseBody> body{};

  ListChatappMessageResponse() {}

  explicit ListChatappMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListChatappMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatappMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatappMessageResponse() = default;
};
class ListChatappTemplateRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> size{};

  ListChatappTemplateRequestPage() {}

  explicit ListChatappTemplateRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListChatappTemplateRequestPage() = default;
};
class ListChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<ListChatappTemplateRequestPage> page{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateType{};

  ListChatappTemplateRequest() {}

  explicit ListChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListChatappTemplateRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListChatappTemplateRequestPage>(model1);
      }
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListChatappTemplateRequest() = default;
};
class ListChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateType{};

  ListChatappTemplateShrinkRequest() {}

  explicit ListChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListChatappTemplateShrinkRequest() = default;
};
class ListChatappTemplateResponseBodyListTemplate : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<string> language{};
  shared_ptr<long> lastUpdateTime{};
  shared_ptr<string> reason{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  ListChatappTemplateResponseBodyListTemplate() {}

  explicit ListChatappTemplateResponseBodyListTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<long>(boost::any_cast<long>(m["LastUpdateTime"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListChatappTemplateResponseBodyListTemplate() = default;
};
class ListChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListChatappTemplateResponseBodyListTemplate>> listTemplate{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListChatappTemplateResponseBody() {}

  explicit ListChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (listTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*listTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListTemplate"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ListTemplate") != m.end() && !m["ListTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ListTemplate"].type()) {
        vector<ListChatappTemplateResponseBodyListTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatappTemplateResponseBodyListTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listTemplate = make_shared<vector<ListChatappTemplateResponseBodyListTemplate>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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


  virtual ~ListChatappTemplateResponseBody() = default;
};
class ListChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatappTemplateResponseBody> body{};

  ListChatappTemplateResponse() {}

  explicit ListChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatappTemplateResponse() = default;
};
class ListFlowRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> size{};

  ListFlowRequestPage() {}

  explicit ListFlowRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListFlowRequestPage() = default;
};
class ListFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowName{};
  shared_ptr<long> ownerId{};
  shared_ptr<ListFlowRequestPage> page{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListFlowRequest() {}

  explicit ListFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListFlowRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListFlowRequestPage>(model1);
      }
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListFlowRequest() = default;
};
class ListFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListFlowShrinkRequest() {}

  explicit ListFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListFlowShrinkRequest() = default;
};
class ListFlowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};

  ListFlowResponseBodyData() {}

  explicit ListFlowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~ListFlowResponseBodyData() = default;
};
class ListFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListFlowResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListFlowResponseBody() {}

  explicit ListFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListFlowResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListFlowResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFlowResponseBody() = default;
};
class ListFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowResponseBody> body{};

  ListFlowResponse() {}

  explicit ListFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowResponse() = default;
};
class ListFlowNodePrototypeV2Request : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> groupCode{};
  shared_ptr<string> keyword{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListFlowNodePrototypeV2Request() {}

  explicit ListFlowNodePrototypeV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (groupCode) {
      res["GroupCode"] = boost::any(*groupCode);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("GroupCode") != m.end() && !m["GroupCode"].empty()) {
      groupCode = make_shared<string>(boost::any_cast<string>(m["GroupCode"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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


  virtual ~ListFlowNodePrototypeV2Request() = default;
};
class ListFlowNodePrototypeV2ResponseBodyDataModel : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> groupCode{};
  shared_ptr<string> publicExtend{};
  shared_ptr<string> status{};

  ListFlowNodePrototypeV2ResponseBodyDataModel() {}

  explicit ListFlowNodePrototypeV2ResponseBodyDataModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (groupCode) {
      res["GroupCode"] = boost::any(*groupCode);
    }
    if (publicExtend) {
      res["PublicExtend"] = boost::any(*publicExtend);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GroupCode") != m.end() && !m["GroupCode"].empty()) {
      groupCode = make_shared<string>(boost::any_cast<string>(m["GroupCode"]));
    }
    if (m.find("PublicExtend") != m.end() && !m["PublicExtend"].empty()) {
      publicExtend = make_shared<string>(boost::any_cast<string>(m["PublicExtend"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFlowNodePrototypeV2ResponseBodyDataModel() = default;
};
class ListFlowNodePrototypeV2ResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowNodePrototypeV2ResponseBodyDataModel>> model{};

  ListFlowNodePrototypeV2ResponseBodyData() {}

  explicit ListFlowNodePrototypeV2ResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<ListFlowNodePrototypeV2ResponseBodyDataModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowNodePrototypeV2ResponseBodyDataModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<ListFlowNodePrototypeV2ResponseBodyDataModel>>(expect1);
      }
    }
  }


  virtual ~ListFlowNodePrototypeV2ResponseBodyData() = default;
};
class ListFlowNodePrototypeV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListFlowNodePrototypeV2ResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListFlowNodePrototypeV2ResponseBody() {}

  explicit ListFlowNodePrototypeV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListFlowNodePrototypeV2ResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListFlowNodePrototypeV2ResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListFlowNodePrototypeV2ResponseBody() = default;
};
class ListFlowNodePrototypeV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowNodePrototypeV2ResponseBody> body{};

  ListFlowNodePrototypeV2Response() {}

  explicit ListFlowNodePrototypeV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFlowNodePrototypeV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowNodePrototypeV2ResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowNodePrototypeV2Response() = default;
};
class ListFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  ListFlowVersionRequest() {}

  explicit ListFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFlowVersionRequest() = default;
};
class ListFlowVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  ListFlowVersionShrinkRequest() {}

  explicit ListFlowVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFlowVersionShrinkRequest() = default;
};
class ListFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  ListFlowVersionResponseBody() {}

  explicit ListFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListFlowVersionResponseBody() = default;
};
class ListFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFlowVersionResponseBody> body{};

  ListFlowVersionResponse() {}

  explicit ListFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowVersionResponse() = default;
};
class ListPhoneMessageQrdlRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListPhoneMessageQrdlRequest() {}

  explicit ListPhoneMessageQrdlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListPhoneMessageQrdlRequest() = default;
};
class ListPhoneMessageQrdlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deepLinkUrl{};
  shared_ptr<string> generateQrImage{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> prefilledMessage{};
  shared_ptr<string> qrImageUrl{};
  shared_ptr<string> qrdlCode{};

  ListPhoneMessageQrdlResponseBodyData() {}

  explicit ListPhoneMessageQrdlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deepLinkUrl) {
      res["DeepLinkUrl"] = boost::any(*deepLinkUrl);
    }
    if (generateQrImage) {
      res["GenerateQrImage"] = boost::any(*generateQrImage);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prefilledMessage) {
      res["PrefilledMessage"] = boost::any(*prefilledMessage);
    }
    if (qrImageUrl) {
      res["QrImageUrl"] = boost::any(*qrImageUrl);
    }
    if (qrdlCode) {
      res["QrdlCode"] = boost::any(*qrdlCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeepLinkUrl") != m.end() && !m["DeepLinkUrl"].empty()) {
      deepLinkUrl = make_shared<string>(boost::any_cast<string>(m["DeepLinkUrl"]));
    }
    if (m.find("GenerateQrImage") != m.end() && !m["GenerateQrImage"].empty()) {
      generateQrImage = make_shared<string>(boost::any_cast<string>(m["GenerateQrImage"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PrefilledMessage") != m.end() && !m["PrefilledMessage"].empty()) {
      prefilledMessage = make_shared<string>(boost::any_cast<string>(m["PrefilledMessage"]));
    }
    if (m.find("QrImageUrl") != m.end() && !m["QrImageUrl"].empty()) {
      qrImageUrl = make_shared<string>(boost::any_cast<string>(m["QrImageUrl"]));
    }
    if (m.find("QrdlCode") != m.end() && !m["QrdlCode"].empty()) {
      qrdlCode = make_shared<string>(boost::any_cast<string>(m["QrdlCode"]));
    }
  }


  virtual ~ListPhoneMessageQrdlResponseBodyData() = default;
};
class ListPhoneMessageQrdlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListPhoneMessageQrdlResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListPhoneMessageQrdlResponseBody() {}

  explicit ListPhoneMessageQrdlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListPhoneMessageQrdlResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPhoneMessageQrdlResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListPhoneMessageQrdlResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPhoneMessageQrdlResponseBody() = default;
};
class ListPhoneMessageQrdlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPhoneMessageQrdlResponseBody> body{};

  ListPhoneMessageQrdlResponse() {}

  explicit ListPhoneMessageQrdlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPhoneMessageQrdlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPhoneMessageQrdlResponseBody>(model1);
      }
    }
  }


  virtual ~ListPhoneMessageQrdlResponse() = default;
};
class ListProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};
  shared_ptr<string> catalogId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> fields{};
  shared_ptr<long> limit{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  ListProductRequest() {}

  explicit ListProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    if (catalogId) {
      res["CatalogId"] = boost::any(*catalogId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
    if (m.find("CatalogId") != m.end() && !m["CatalogId"].empty()) {
      catalogId = make_shared<string>(boost::any_cast<string>(m["CatalogId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~ListProductRequest() = default;
};
class ListProductResponseBodyModelPagingCursors : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};

  ListProductResponseBodyModelPagingCursors() {}

  explicit ListProductResponseBodyModelPagingCursors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
  }


  virtual ~ListProductResponseBodyModelPagingCursors() = default;
};
class ListProductResponseBodyModelPaging : public Darabonba::Model {
public:
  shared_ptr<ListProductResponseBodyModelPagingCursors> cursors{};

  ListProductResponseBodyModelPaging() {}

  explicit ListProductResponseBodyModelPaging(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursors) {
      res["Cursors"] = cursors ? boost::any(cursors->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cursors") != m.end() && !m["Cursors"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cursors"].type()) {
        ListProductResponseBodyModelPagingCursors model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cursors"]));
        cursors = make_shared<ListProductResponseBodyModelPagingCursors>(model1);
      }
    }
  }


  virtual ~ListProductResponseBodyModelPaging() = default;
};
class ListProductResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<ListProductResponseBodyModelPaging> paging{};

  ListProductResponseBodyModel() {}

  explicit ListProductResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (paging) {
      res["Paging"] = paging ? boost::any(paging->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Paging") != m.end() && !m["Paging"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paging"].type()) {
        ListProductResponseBodyModelPaging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paging"]));
        paging = make_shared<ListProductResponseBodyModelPaging>(model1);
      }
    }
  }


  virtual ~ListProductResponseBodyModel() = default;
};
class ListProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ListProductResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListProductResponseBody() {}

  explicit ListProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ListProductResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ListProductResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListProductResponseBody() = default;
};
class ListProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductResponseBody> body{};

  ListProductResponse() {}

  explicit ListProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductResponse() = default;
};
class ListProductCatalogRequest : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};
  shared_ptr<long> businessId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> fields{};
  shared_ptr<long> limit{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListProductCatalogRequest() {}

  explicit ListProductCatalogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<long>(boost::any_cast<long>(m["BusinessId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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


  virtual ~ListProductCatalogRequest() = default;
};
class ListProductCatalogResponseBodyModelPagingCursors : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};

  ListProductCatalogResponseBodyModelPagingCursors() {}

  explicit ListProductCatalogResponseBodyModelPagingCursors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
  }


  virtual ~ListProductCatalogResponseBodyModelPagingCursors() = default;
};
class ListProductCatalogResponseBodyModelPaging : public Darabonba::Model {
public:
  shared_ptr<ListProductCatalogResponseBodyModelPagingCursors> cursors{};

  ListProductCatalogResponseBodyModelPaging() {}

  explicit ListProductCatalogResponseBodyModelPaging(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursors) {
      res["Cursors"] = cursors ? boost::any(cursors->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cursors") != m.end() && !m["Cursors"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cursors"].type()) {
        ListProductCatalogResponseBodyModelPagingCursors model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cursors"]));
        cursors = make_shared<ListProductCatalogResponseBodyModelPagingCursors>(model1);
      }
    }
  }


  virtual ~ListProductCatalogResponseBodyModelPaging() = default;
};
class ListProductCatalogResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<ListProductCatalogResponseBodyModelPaging> paging{};

  ListProductCatalogResponseBodyModel() {}

  explicit ListProductCatalogResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (paging) {
      res["Paging"] = paging ? boost::any(paging->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Paging") != m.end() && !m["Paging"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paging"].type()) {
        ListProductCatalogResponseBodyModelPaging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paging"]));
        paging = make_shared<ListProductCatalogResponseBodyModelPaging>(model1);
      }
    }
  }


  virtual ~ListProductCatalogResponseBodyModel() = default;
};
class ListProductCatalogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ListProductCatalogResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListProductCatalogResponseBody() {}

  explicit ListProductCatalogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ListProductCatalogResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ListProductCatalogResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListProductCatalogResponseBody() = default;
};
class ListProductCatalogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductCatalogResponseBody> body{};

  ListProductCatalogResponse() {}

  explicit ListProductCatalogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductCatalogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductCatalogResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductCatalogResponse() = default;
};
class ModifyChatappTemplateRequestComponentsButtonsSupportedApps : public Darabonba::Model {
public:
  shared_ptr<string> packageName{};
  shared_ptr<string> signatureHash{};

  ModifyChatappTemplateRequestComponentsButtonsSupportedApps() {}

  explicit ModifyChatappTemplateRequestComponentsButtonsSupportedApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
    }
  }


  virtual ~ModifyChatappTemplateRequestComponentsButtonsSupportedApps() = default;
};
class ModifyChatappTemplateRequestComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> autofillText{};
  shared_ptr<string> couponCode{};
  shared_ptr<string> flowAction{};
  shared_ptr<string> flowId{};
  shared_ptr<bool> isOptOut{};
  shared_ptr<string> navigateScreen{};
  shared_ptr<string> packageName{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> signatureHash{};
  shared_ptr<vector<ModifyChatappTemplateRequestComponentsButtonsSupportedApps>> supportedApps{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  ModifyChatappTemplateRequestComponentsButtons() {}

  explicit ModifyChatappTemplateRequestComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autofillText) {
      res["AutofillText"] = boost::any(*autofillText);
    }
    if (couponCode) {
      res["CouponCode"] = boost::any(*couponCode);
    }
    if (flowAction) {
      res["FlowAction"] = boost::any(*flowAction);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (isOptOut) {
      res["IsOptOut"] = boost::any(*isOptOut);
    }
    if (navigateScreen) {
      res["NavigateScreen"] = boost::any(*navigateScreen);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
    }
    if (supportedApps) {
      vector<boost::any> temp1;
      for(auto item1:*supportedApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedApps"] = boost::any(temp1);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutofillText") != m.end() && !m["AutofillText"].empty()) {
      autofillText = make_shared<string>(boost::any_cast<string>(m["AutofillText"]));
    }
    if (m.find("CouponCode") != m.end() && !m["CouponCode"].empty()) {
      couponCode = make_shared<string>(boost::any_cast<string>(m["CouponCode"]));
    }
    if (m.find("FlowAction") != m.end() && !m["FlowAction"].empty()) {
      flowAction = make_shared<string>(boost::any_cast<string>(m["FlowAction"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("IsOptOut") != m.end() && !m["IsOptOut"].empty()) {
      isOptOut = make_shared<bool>(boost::any_cast<bool>(m["IsOptOut"]));
    }
    if (m.find("NavigateScreen") != m.end() && !m["NavigateScreen"].empty()) {
      navigateScreen = make_shared<string>(boost::any_cast<string>(m["NavigateScreen"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
    }
    if (m.find("SupportedApps") != m.end() && !m["SupportedApps"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedApps"].type()) {
        vector<ModifyChatappTemplateRequestComponentsButtonsSupportedApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponentsButtonsSupportedApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedApps = make_shared<vector<ModifyChatappTemplateRequestComponentsButtonsSupportedApps>>(expect1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~ModifyChatappTemplateRequestComponentsButtons() = default;
};
class ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons() {}

  explicit ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons() = default;
};
class ModifyChatappTemplateRequestComponentsCardsCardComponents : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons>> buttons{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ModifyChatappTemplateRequestComponentsCardsCardComponents() {}

  explicit ModifyChatappTemplateRequestComponentsCardsCardComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<ModifyChatappTemplateRequestComponentsCardsCardComponentsButtons>>(expect1);
      }
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ModifyChatappTemplateRequestComponentsCardsCardComponents() = default;
};
class ModifyChatappTemplateRequestComponentsCards : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyChatappTemplateRequestComponentsCardsCardComponents>> cardComponents{};

  ModifyChatappTemplateRequestComponentsCards() {}

  explicit ModifyChatappTemplateRequestComponentsCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardComponents) {
      vector<boost::any> temp1;
      for(auto item1:*cardComponents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardComponents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardComponents") != m.end() && !m["CardComponents"].empty()) {
      if (typeid(vector<boost::any>) == m["CardComponents"].type()) {
        vector<ModifyChatappTemplateRequestComponentsCardsCardComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardComponents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponentsCardsCardComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardComponents = make_shared<vector<ModifyChatappTemplateRequestComponentsCardsCardComponents>>(expect1);
      }
    }
  }


  virtual ~ModifyChatappTemplateRequestComponentsCards() = default;
};
class ModifyChatappTemplateRequestComponents : public Darabonba::Model {
public:
  shared_ptr<bool> addSecretRecommendation{};
  shared_ptr<vector<ModifyChatappTemplateRequestComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<vector<ModifyChatappTemplateRequestComponentsCards>> cards{};
  shared_ptr<long> codeExpirationMinutes{};
  shared_ptr<long> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> format{};
  shared_ptr<bool> hasExpiration{};
  shared_ptr<string> text{};
  shared_ptr<string> thumbUrl{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ModifyChatappTemplateRequestComponents() {}

  explicit ModifyChatappTemplateRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSecretRecommendation) {
      res["AddSecretRecommendation"] = boost::any(*addSecretRecommendation);
    }
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (cards) {
      vector<boost::any> temp1;
      for(auto item1:*cards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cards"] = boost::any(temp1);
    }
    if (codeExpirationMinutes) {
      res["CodeExpirationMinutes"] = boost::any(*codeExpirationMinutes);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (hasExpiration) {
      res["HasExpiration"] = boost::any(*hasExpiration);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddSecretRecommendation") != m.end() && !m["AddSecretRecommendation"].empty()) {
      addSecretRecommendation = make_shared<bool>(boost::any_cast<bool>(m["AddSecretRecommendation"]));
    }
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<ModifyChatappTemplateRequestComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<ModifyChatappTemplateRequestComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("Cards") != m.end() && !m["Cards"].empty()) {
      if (typeid(vector<boost::any>) == m["Cards"].type()) {
        vector<ModifyChatappTemplateRequestComponentsCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponentsCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cards = make_shared<vector<ModifyChatappTemplateRequestComponentsCards>>(expect1);
      }
    }
    if (m.find("CodeExpirationMinutes") != m.end() && !m["CodeExpirationMinutes"].empty()) {
      codeExpirationMinutes = make_shared<long>(boost::any_cast<long>(m["CodeExpirationMinutes"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("HasExpiration") != m.end() && !m["HasExpiration"].empty()) {
      hasExpiration = make_shared<bool>(boost::any_cast<bool>(m["HasExpiration"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ModifyChatappTemplateRequestComponents() = default;
};
class ModifyChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> categoryChangePaused{};
  shared_ptr<vector<ModifyChatappTemplateRequestComponents>> components{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  ModifyChatappTemplateRequest() {}

  explicit ModifyChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryChangePaused) {
      res["CategoryChangePaused"] = boost::any(*categoryChangePaused);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CategoryChangePaused") != m.end() && !m["CategoryChangePaused"].empty()) {
      categoryChangePaused = make_shared<bool>(boost::any_cast<bool>(m["CategoryChangePaused"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<ModifyChatappTemplateRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<ModifyChatappTemplateRequestComponents>>(expect1);
      }
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ModifyChatappTemplateRequest() = default;
};
class ModifyChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> categoryChangePaused{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> exampleShrink{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  ModifyChatappTemplateShrinkRequest() {}

  explicit ModifyChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryChangePaused) {
      res["CategoryChangePaused"] = boost::any(*categoryChangePaused);
    }
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (exampleShrink) {
      res["Example"] = boost::any(*exampleShrink);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CategoryChangePaused") != m.end() && !m["CategoryChangePaused"].empty()) {
      categoryChangePaused = make_shared<bool>(boost::any_cast<bool>(m["CategoryChangePaused"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      exampleShrink = make_shared<string>(boost::any_cast<string>(m["Example"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ModifyChatappTemplateShrinkRequest() = default;
};
class ModifyChatappTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  ModifyChatappTemplateResponseBodyData() {}

  explicit ModifyChatappTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ModifyChatappTemplateResponseBodyData() = default;
};
class ModifyChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ModifyChatappTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyChatappTemplateResponseBody() {}

  explicit ModifyChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyChatappTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyChatappTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyChatappTemplateResponseBody() = default;
};
class ModifyChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyChatappTemplateResponseBody> body{};

  ModifyChatappTemplateResponse() {}

  explicit ModifyChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyChatappTemplateResponse() = default;
};
class ModifyChatappTemplatePropertiesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowSend{};
  shared_ptr<bool> categoryChangePaused{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> language{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

  ModifyChatappTemplatePropertiesRequest() {}

  explicit ModifyChatappTemplatePropertiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowSend) {
      res["AllowSend"] = boost::any(*allowSend);
    }
    if (categoryChangePaused) {
      res["CategoryChangePaused"] = boost::any(*categoryChangePaused);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowSend") != m.end() && !m["AllowSend"].empty()) {
      allowSend = make_shared<bool>(boost::any_cast<bool>(m["AllowSend"]));
    }
    if (m.find("CategoryChangePaused") != m.end() && !m["CategoryChangePaused"].empty()) {
      categoryChangePaused = make_shared<bool>(boost::any_cast<bool>(m["CategoryChangePaused"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
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
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ModifyChatappTemplatePropertiesRequest() = default;
};
class ModifyChatappTemplatePropertiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyChatappTemplatePropertiesResponseBody() {}

  explicit ModifyChatappTemplatePropertiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Model"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      model = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyChatappTemplatePropertiesResponseBody() = default;
};
class ModifyChatappTemplatePropertiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyChatappTemplatePropertiesResponseBody> body{};

  ModifyChatappTemplatePropertiesResponse() {}

  explicit ModifyChatappTemplatePropertiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyChatappTemplatePropertiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyChatappTemplatePropertiesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyChatappTemplatePropertiesResponse() = default;
};
class ModifyFlowRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyFlowRequest() {}

  explicit ModifyFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
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
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
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


  virtual ~ModifyFlowRequest() = default;
};
class ModifyFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoriesShrink{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyFlowShrinkRequest() {}

  explicit ModifyFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoriesShrink) {
      res["Categories"] = boost::any(*categoriesShrink);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
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
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categoriesShrink = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
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


  virtual ~ModifyFlowShrinkRequest() = default;
};
class ModifyFlowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};

  ModifyFlowResponseBodyData() {}

  explicit ModifyFlowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~ModifyFlowResponseBodyData() = default;
};
class ModifyFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ModifyFlowResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyFlowResponseBody() {}

  explicit ModifyFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyFlowResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyFlowResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyFlowResponseBody() = default;
};
class ModifyFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFlowResponseBody> body{};

  ModifyFlowResponse() {}

  explicit ModifyFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFlowResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFlowResponse() = default;
};
class ModifyPhoneBusinessProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> about{};
  shared_ptr<string> address{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> description{};
  shared_ptr<string> email{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> profilePictureUrl{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vertical{};
  shared_ptr<vector<string>> websites{};

  ModifyPhoneBusinessProfileRequest() {}

  explicit ModifyPhoneBusinessProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (about) {
      res["About"] = boost::any(*about);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (profilePictureUrl) {
      res["ProfilePictureUrl"] = boost::any(*profilePictureUrl);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    if (websites) {
      res["Websites"] = boost::any(*websites);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("About") != m.end() && !m["About"].empty()) {
      about = make_shared<string>(boost::any_cast<string>(m["About"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ProfilePictureUrl") != m.end() && !m["ProfilePictureUrl"].empty()) {
      profilePictureUrl = make_shared<string>(boost::any_cast<string>(m["ProfilePictureUrl"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
    if (m.find("Websites") != m.end() && !m["Websites"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Websites"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Websites"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      websites = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyPhoneBusinessProfileRequest() = default;
};
class ModifyPhoneBusinessProfileShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> about{};
  shared_ptr<string> address{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> description{};
  shared_ptr<string> email{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> profilePictureUrl{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vertical{};
  shared_ptr<string> websitesShrink{};

  ModifyPhoneBusinessProfileShrinkRequest() {}

  explicit ModifyPhoneBusinessProfileShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (about) {
      res["About"] = boost::any(*about);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (profilePictureUrl) {
      res["ProfilePictureUrl"] = boost::any(*profilePictureUrl);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    if (websitesShrink) {
      res["Websites"] = boost::any(*websitesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("About") != m.end() && !m["About"].empty()) {
      about = make_shared<string>(boost::any_cast<string>(m["About"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ProfilePictureUrl") != m.end() && !m["ProfilePictureUrl"].empty()) {
      profilePictureUrl = make_shared<string>(boost::any_cast<string>(m["ProfilePictureUrl"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
    if (m.find("Websites") != m.end() && !m["Websites"].empty()) {
      websitesShrink = make_shared<string>(boost::any_cast<string>(m["Websites"]));
    }
  }


  virtual ~ModifyPhoneBusinessProfileShrinkRequest() = default;
};
class ModifyPhoneBusinessProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyPhoneBusinessProfileResponseBody() {}

  explicit ModifyPhoneBusinessProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyPhoneBusinessProfileResponseBody() = default;
};
class ModifyPhoneBusinessProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPhoneBusinessProfileResponseBody> body{};

  ModifyPhoneBusinessProfileResponse() {}

  explicit ModifyPhoneBusinessProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyPhoneBusinessProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPhoneBusinessProfileResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPhoneBusinessProfileResponse() = default;
};
class OfflineFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OfflineFlowVersionRequest() {}

  explicit OfflineFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OfflineFlowVersionRequest() = default;
};
class OfflineFlowVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OfflineFlowVersionShrinkRequest() {}

  explicit OfflineFlowVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OfflineFlowVersionShrinkRequest() = default;
};
class OfflineFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  OfflineFlowVersionResponseBody() {}

  explicit OfflineFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~OfflineFlowVersionResponseBody() = default;
};
class OfflineFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineFlowVersionResponseBody> body{};

  OfflineFlowVersionResponse() {}

  explicit OfflineFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OfflineFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineFlowVersionResponse() = default;
};
class OnlineFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OnlineFlowVersionRequest() {}

  explicit OnlineFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OnlineFlowVersionRequest() = default;
};
class OnlineFlowVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OnlineFlowVersionShrinkRequest() {}

  explicit OnlineFlowVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OnlineFlowVersionShrinkRequest() = default;
};
class OnlineFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  OnlineFlowVersionResponseBody() {}

  explicit OnlineFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~OnlineFlowVersionResponseBody() = default;
};
class OnlineFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnlineFlowVersionResponseBody> body{};

  OnlineFlowVersionResponse() {}

  explicit OnlineFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OnlineFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnlineFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~OnlineFlowVersionResponse() = default;
};
class PublishFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> flowId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PublishFlowRequest() {}

  explicit PublishFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
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


  virtual ~PublishFlowRequest() = default;
};
class PublishFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PublishFlowResponseBody() {}

  explicit PublishFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PublishFlowResponseBody() = default;
};
class PublishFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishFlowResponseBody> body{};

  PublishFlowResponse() {}

  explicit PublishFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishFlowResponseBody>(model1);
      }
    }
  }


  virtual ~PublishFlowResponse() = default;
};
class QueryChatappBindWabaRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryChatappBindWabaRequest() {}

  explicit QueryChatappBindWabaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
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


  virtual ~QueryChatappBindWabaRequest() = default;
};
class QueryChatappBindWabaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountReviewStatus{};
  shared_ptr<map<string, boost::any>> authInternationalRateEligibility{};
  shared_ptr<string> businessId{};
  shared_ptr<string> businessName{};
  shared_ptr<string> currency{};
  shared_ptr<string> id{};
  shared_ptr<string> marketingMessageLiteStatus{};
  shared_ptr<string> messageTemplateNamespace{};
  shared_ptr<string> name{};
  shared_ptr<string> primaryBusinessLocation{};

  QueryChatappBindWabaResponseBodyData() {}

  explicit QueryChatappBindWabaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountReviewStatus) {
      res["AccountReviewStatus"] = boost::any(*accountReviewStatus);
    }
    if (authInternationalRateEligibility) {
      res["AuthInternationalRateEligibility"] = boost::any(*authInternationalRateEligibility);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (marketingMessageLiteStatus) {
      res["MarketingMessageLiteStatus"] = boost::any(*marketingMessageLiteStatus);
    }
    if (messageTemplateNamespace) {
      res["MessageTemplateNamespace"] = boost::any(*messageTemplateNamespace);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (primaryBusinessLocation) {
      res["PrimaryBusinessLocation"] = boost::any(*primaryBusinessLocation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountReviewStatus") != m.end() && !m["AccountReviewStatus"].empty()) {
      accountReviewStatus = make_shared<string>(boost::any_cast<string>(m["AccountReviewStatus"]));
    }
    if (m.find("AuthInternationalRateEligibility") != m.end() && !m["AuthInternationalRateEligibility"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AuthInternationalRateEligibility"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      authInternationalRateEligibility = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MarketingMessageLiteStatus") != m.end() && !m["MarketingMessageLiteStatus"].empty()) {
      marketingMessageLiteStatus = make_shared<string>(boost::any_cast<string>(m["MarketingMessageLiteStatus"]));
    }
    if (m.find("MessageTemplateNamespace") != m.end() && !m["MessageTemplateNamespace"].empty()) {
      messageTemplateNamespace = make_shared<string>(boost::any_cast<string>(m["MessageTemplateNamespace"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrimaryBusinessLocation") != m.end() && !m["PrimaryBusinessLocation"].empty()) {
      primaryBusinessLocation = make_shared<string>(boost::any_cast<string>(m["PrimaryBusinessLocation"]));
    }
  }


  virtual ~QueryChatappBindWabaResponseBodyData() = default;
};
class QueryChatappBindWabaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryChatappBindWabaResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryChatappBindWabaResponseBody() {}

  explicit QueryChatappBindWabaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryChatappBindWabaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryChatappBindWabaResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryChatappBindWabaResponseBody() = default;
};
class QueryChatappBindWabaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryChatappBindWabaResponseBody> body{};

  QueryChatappBindWabaResponse() {}

  explicit QueryChatappBindWabaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryChatappBindWabaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryChatappBindWabaResponseBody>(model1);
      }
    }
  }


  virtual ~QueryChatappBindWabaResponse() = default;
};
class QueryChatappPhoneNumbersRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  QueryChatappPhoneNumbersRequest() {}

  explicit QueryChatappPhoneNumbersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryChatappPhoneNumbersRequest() = default;
};
class QueryChatappPhoneNumbersResponseBodyPhoneNumbers : public Darabonba::Model {
public:
  shared_ptr<string> codeVerificationStatus{};
  shared_ptr<string> isOfficial{};
  shared_ptr<string> messagingLimitTier{};
  shared_ptr<string> nameStatus{};
  shared_ptr<string> newNameStatus{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qualityRating{};
  shared_ptr<string> status{};
  shared_ptr<string> statusCallbackUrl{};
  shared_ptr<string> statusQueue{};
  shared_ptr<string> upCallbackUrl{};
  shared_ptr<string> upQueue{};
  shared_ptr<string> verifiedName{};

  QueryChatappPhoneNumbersResponseBodyPhoneNumbers() {}

  explicit QueryChatappPhoneNumbersResponseBodyPhoneNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVerificationStatus) {
      res["CodeVerificationStatus"] = boost::any(*codeVerificationStatus);
    }
    if (isOfficial) {
      res["IsOfficial"] = boost::any(*isOfficial);
    }
    if (messagingLimitTier) {
      res["MessagingLimitTier"] = boost::any(*messagingLimitTier);
    }
    if (nameStatus) {
      res["NameStatus"] = boost::any(*nameStatus);
    }
    if (newNameStatus) {
      res["NewNameStatus"] = boost::any(*newNameStatus);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qualityRating) {
      res["QualityRating"] = boost::any(*qualityRating);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    if (statusQueue) {
      res["StatusQueue"] = boost::any(*statusQueue);
    }
    if (upCallbackUrl) {
      res["UpCallbackUrl"] = boost::any(*upCallbackUrl);
    }
    if (upQueue) {
      res["UpQueue"] = boost::any(*upQueue);
    }
    if (verifiedName) {
      res["VerifiedName"] = boost::any(*verifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeVerificationStatus") != m.end() && !m["CodeVerificationStatus"].empty()) {
      codeVerificationStatus = make_shared<string>(boost::any_cast<string>(m["CodeVerificationStatus"]));
    }
    if (m.find("IsOfficial") != m.end() && !m["IsOfficial"].empty()) {
      isOfficial = make_shared<string>(boost::any_cast<string>(m["IsOfficial"]));
    }
    if (m.find("MessagingLimitTier") != m.end() && !m["MessagingLimitTier"].empty()) {
      messagingLimitTier = make_shared<string>(boost::any_cast<string>(m["MessagingLimitTier"]));
    }
    if (m.find("NameStatus") != m.end() && !m["NameStatus"].empty()) {
      nameStatus = make_shared<string>(boost::any_cast<string>(m["NameStatus"]));
    }
    if (m.find("NewNameStatus") != m.end() && !m["NewNameStatus"].empty()) {
      newNameStatus = make_shared<string>(boost::any_cast<string>(m["NewNameStatus"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QualityRating") != m.end() && !m["QualityRating"].empty()) {
      qualityRating = make_shared<string>(boost::any_cast<string>(m["QualityRating"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
    if (m.find("StatusQueue") != m.end() && !m["StatusQueue"].empty()) {
      statusQueue = make_shared<string>(boost::any_cast<string>(m["StatusQueue"]));
    }
    if (m.find("UpCallbackUrl") != m.end() && !m["UpCallbackUrl"].empty()) {
      upCallbackUrl = make_shared<string>(boost::any_cast<string>(m["UpCallbackUrl"]));
    }
    if (m.find("UpQueue") != m.end() && !m["UpQueue"].empty()) {
      upQueue = make_shared<string>(boost::any_cast<string>(m["UpQueue"]));
    }
    if (m.find("VerifiedName") != m.end() && !m["VerifiedName"].empty()) {
      verifiedName = make_shared<string>(boost::any_cast<string>(m["VerifiedName"]));
    }
  }


  virtual ~QueryChatappPhoneNumbersResponseBodyPhoneNumbers() = default;
};
class QueryChatappPhoneNumbersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryChatappPhoneNumbersResponseBodyPhoneNumbers>> phoneNumbers{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryChatappPhoneNumbersResponseBody() {}

  explicit QueryChatappPhoneNumbersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*phoneNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PhoneNumbers"] = boost::any(temp1);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<QueryChatappPhoneNumbersResponseBodyPhoneNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PhoneNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryChatappPhoneNumbersResponseBodyPhoneNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        phoneNumbers = make_shared<vector<QueryChatappPhoneNumbersResponseBodyPhoneNumbers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryChatappPhoneNumbersResponseBody() = default;
};
class QueryChatappPhoneNumbersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryChatappPhoneNumbersResponseBody> body{};

  QueryChatappPhoneNumbersResponse() {}

  explicit QueryChatappPhoneNumbersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryChatappPhoneNumbersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryChatappPhoneNumbersResponseBody>(model1);
      }
    }
  }


  virtual ~QueryChatappPhoneNumbersResponse() = default;
};
class QueryPhoneBusinessProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPhoneBusinessProfileRequest() {}

  explicit QueryPhoneBusinessProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPhoneBusinessProfileRequest() = default;
};
class QueryPhoneBusinessProfileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> about{};
  shared_ptr<string> address{};
  shared_ptr<string> description{};
  shared_ptr<string> email{};
  shared_ptr<string> profilePictureUrl{};
  shared_ptr<string> vertical{};
  shared_ptr<vector<string>> websites{};

  QueryPhoneBusinessProfileResponseBodyData() {}

  explicit QueryPhoneBusinessProfileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (about) {
      res["About"] = boost::any(*about);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (profilePictureUrl) {
      res["ProfilePictureUrl"] = boost::any(*profilePictureUrl);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    if (websites) {
      res["Websites"] = boost::any(*websites);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("About") != m.end() && !m["About"].empty()) {
      about = make_shared<string>(boost::any_cast<string>(m["About"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ProfilePictureUrl") != m.end() && !m["ProfilePictureUrl"].empty()) {
      profilePictureUrl = make_shared<string>(boost::any_cast<string>(m["ProfilePictureUrl"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
    if (m.find("Websites") != m.end() && !m["Websites"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Websites"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Websites"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      websites = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryPhoneBusinessProfileResponseBodyData() = default;
};
class QueryPhoneBusinessProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryPhoneBusinessProfileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPhoneBusinessProfileResponseBody() {}

  explicit QueryPhoneBusinessProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPhoneBusinessProfileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPhoneBusinessProfileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryPhoneBusinessProfileResponseBody() = default;
};
class QueryPhoneBusinessProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPhoneBusinessProfileResponseBody> body{};

  QueryPhoneBusinessProfileResponse() {}

  explicit QueryPhoneBusinessProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPhoneBusinessProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPhoneBusinessProfileResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPhoneBusinessProfileResponse() = default;
};
class QueryWabaBusinessInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  QueryWabaBusinessInfoRequest() {}

  explicit QueryWabaBusinessInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~QueryWabaBusinessInfoRequest() = default;
};
class QueryWabaBusinessInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> businessId{};
  shared_ptr<string> businessName{};
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> vertical{};

  QueryWabaBusinessInfoResponseBodyData() {}

  explicit QueryWabaBusinessInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
  }


  virtual ~QueryWabaBusinessInfoResponseBodyData() = default;
};
class QueryWabaBusinessInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryWabaBusinessInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryWabaBusinessInfoResponseBody() {}

  explicit QueryWabaBusinessInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryWabaBusinessInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryWabaBusinessInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWabaBusinessInfoResponseBody() = default;
};
class QueryWabaBusinessInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWabaBusinessInfoResponseBody> body{};

  QueryWabaBusinessInfoResponse() {}

  explicit QueryWabaBusinessInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryWabaBusinessInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWabaBusinessInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWabaBusinessInfoResponse() = default;
};
class ReadChatFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ReadChatFlowRequest() {}

  explicit ReadChatFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
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


  virtual ~ReadChatFlowRequest() = default;
};
class ReadChatFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ReadChatFlowShrinkRequest() {}

  explicit ReadChatFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
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


  virtual ~ReadChatFlowShrinkRequest() = default;
};
class ReadChatFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  ReadChatFlowResponseBody() {}

  explicit ReadChatFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReadChatFlowResponseBody() = default;
};
class ReadChatFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadChatFlowResponseBody> body{};

  ReadChatFlowResponse() {}

  explicit ReadChatFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReadChatFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadChatFlowResponseBody>(model1);
      }
    }
  }


  virtual ~ReadChatFlowResponse() = default;
};
class ReadChatFlowLogSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ReadChatFlowLogSettingRequest() {}

  explicit ReadChatFlowLogSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
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
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
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


  virtual ~ReadChatFlowLogSettingRequest() = default;
};
class ReadChatFlowLogSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadChatFlowLogSettingResponseBody() {}

  explicit ReadChatFlowLogSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReadChatFlowLogSettingResponseBody() = default;
};
class ReadChatFlowLogSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadChatFlowLogSettingResponseBody> body{};

  ReadChatFlowLogSettingResponse() {}

  explicit ReadChatFlowLogSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReadChatFlowLogSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadChatFlowLogSettingResponseBody>(model1);
      }
    }
  }


  virtual ~ReadChatFlowLogSettingResponse() = default;
};
class ReadFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  ReadFlowVersionRequest() {}

  explicit ReadFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ReadFlowVersionRequest() = default;
};
class ReadFlowVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  ReadFlowVersionShrinkRequest() {}

  explicit ReadFlowVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ReadFlowVersionShrinkRequest() = default;
};
class ReadFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  ReadFlowVersionResponseBody() {}

  explicit ReadFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReadFlowVersionResponseBody() = default;
};
class ReadFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadFlowVersionResponseBody> body{};

  ReadFlowVersionResponse() {}

  explicit ReadFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReadFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ReadFlowVersionResponse() = default;
};
class SendChatappMassMessageRequestSenderListFlowAction : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> flowActionData{};
  shared_ptr<string> flowToken{};

  SendChatappMassMessageRequestSenderListFlowAction() {}

  explicit SendChatappMassMessageRequestSenderListFlowAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowActionData) {
      res["FlowActionData"] = boost::any(*flowActionData);
    }
    if (flowToken) {
      res["FlowToken"] = boost::any(*flowToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowActionData") != m.end() && !m["FlowActionData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["FlowActionData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      flowActionData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowToken") != m.end() && !m["FlowToken"].empty()) {
      flowToken = make_shared<string>(boost::any_cast<string>(m["FlowToken"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderListFlowAction() = default;
};
class SendChatappMassMessageRequestSenderListProductActionSectionsProductItems : public Darabonba::Model {
public:
  shared_ptr<string> productRetailerId{};

  SendChatappMassMessageRequestSenderListProductActionSectionsProductItems() {}

  explicit SendChatappMassMessageRequestSenderListProductActionSectionsProductItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productRetailerId) {
      res["ProductRetailerId"] = boost::any(*productRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductRetailerId") != m.end() && !m["ProductRetailerId"].empty()) {
      productRetailerId = make_shared<string>(boost::any_cast<string>(m["ProductRetailerId"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderListProductActionSectionsProductItems() = default;
};
class SendChatappMassMessageRequestSenderListProductActionSections : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMassMessageRequestSenderListProductActionSectionsProductItems>> productItems{};
  shared_ptr<string> title{};

  SendChatappMassMessageRequestSenderListProductActionSections() {}

  explicit SendChatappMassMessageRequestSenderListProductActionSections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productItems) {
      vector<boost::any> temp1;
      for(auto item1:*productItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductItems"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductItems") != m.end() && !m["ProductItems"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductItems"].type()) {
        vector<SendChatappMassMessageRequestSenderListProductActionSectionsProductItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMassMessageRequestSenderListProductActionSectionsProductItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productItems = make_shared<vector<SendChatappMassMessageRequestSenderListProductActionSectionsProductItems>>(expect1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderListProductActionSections() = default;
};
class SendChatappMassMessageRequestSenderListProductAction : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMassMessageRequestSenderListProductActionSections>> sections{};
  shared_ptr<string> thumbnailProductRetailerId{};

  SendChatappMassMessageRequestSenderListProductAction() {}

  explicit SendChatappMassMessageRequestSenderListProductAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sections) {
      vector<boost::any> temp1;
      for(auto item1:*sections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sections"] = boost::any(temp1);
    }
    if (thumbnailProductRetailerId) {
      res["ThumbnailProductRetailerId"] = boost::any(*thumbnailProductRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sections") != m.end() && !m["Sections"].empty()) {
      if (typeid(vector<boost::any>) == m["Sections"].type()) {
        vector<SendChatappMassMessageRequestSenderListProductActionSections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMassMessageRequestSenderListProductActionSections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sections = make_shared<vector<SendChatappMassMessageRequestSenderListProductActionSections>>(expect1);
      }
    }
    if (m.find("ThumbnailProductRetailerId") != m.end() && !m["ThumbnailProductRetailerId"].empty()) {
      thumbnailProductRetailerId = make_shared<string>(boost::any_cast<string>(m["ThumbnailProductRetailerId"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderListProductAction() = default;
};
class SendChatappMassMessageRequestSenderList : public Darabonba::Model {
public:
  shared_ptr<SendChatappMassMessageRequestSenderListFlowAction> flowAction{};
  shared_ptr<vector<string>> payload{};
  shared_ptr<SendChatappMassMessageRequestSenderListProductAction> productAction{};
  shared_ptr<map<string, string>> templateParams{};
  shared_ptr<string> to{};

  SendChatappMassMessageRequestSenderList() {}

  explicit SendChatappMassMessageRequestSenderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowAction) {
      res["FlowAction"] = flowAction ? boost::any(flowAction->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (productAction) {
      res["ProductAction"] = productAction ? boost::any(productAction->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateParams) {
      res["TemplateParams"] = boost::any(*templateParams);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowAction") != m.end() && !m["FlowAction"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowAction"].type()) {
        SendChatappMassMessageRequestSenderListFlowAction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowAction"]));
        flowAction = make_shared<SendChatappMassMessageRequestSenderListFlowAction>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Payload"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payload"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      payload = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductAction") != m.end() && !m["ProductAction"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductAction"].type()) {
        SendChatappMassMessageRequestSenderListProductAction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductAction"]));
        productAction = make_shared<SendChatappMassMessageRequestSenderListProductAction>(model1);
      }
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TemplateParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderList() = default;
};
class SendChatappMassMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> fallBackRule{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<vector<SendChatappMassMessageRequestSenderList>> senderList{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<long> ttl{};

  SendChatappMassMessageRequest() {}

  explicit SendChatappMassMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (fallBackRule) {
      res["FallBackRule"] = boost::any(*fallBackRule);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (senderList) {
      vector<boost::any> temp1;
      for(auto item1:*senderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SenderList"] = boost::any(temp1);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("FallBackRule") != m.end() && !m["FallBackRule"].empty()) {
      fallBackRule = make_shared<string>(boost::any_cast<string>(m["FallBackRule"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("SenderList") != m.end() && !m["SenderList"].empty()) {
      if (typeid(vector<boost::any>) == m["SenderList"].type()) {
        vector<SendChatappMassMessageRequestSenderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SenderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMassMessageRequestSenderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        senderList = make_shared<vector<SendChatappMassMessageRequestSenderList>>(expect1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~SendChatappMassMessageRequest() = default;
};
class SendChatappMassMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> fallBackRule{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<string> senderListShrink{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<long> ttl{};

  SendChatappMassMessageShrinkRequest() {}

  explicit SendChatappMassMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (fallBackRule) {
      res["FallBackRule"] = boost::any(*fallBackRule);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (senderListShrink) {
      res["SenderList"] = boost::any(*senderListShrink);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("FallBackRule") != m.end() && !m["FallBackRule"].empty()) {
      fallBackRule = make_shared<string>(boost::any_cast<string>(m["FallBackRule"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("SenderList") != m.end() && !m["SenderList"].empty()) {
      senderListShrink = make_shared<string>(boost::any_cast<string>(m["SenderList"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~SendChatappMassMessageShrinkRequest() = default;
};
class SendChatappMassMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> groupMessageId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SendChatappMassMessageResponseBody() {}

  explicit SendChatappMassMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (groupMessageId) {
      res["GroupMessageId"] = boost::any(*groupMessageId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GroupMessageId") != m.end() && !m["GroupMessageId"].empty()) {
      groupMessageId = make_shared<string>(boost::any_cast<string>(m["GroupMessageId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendChatappMassMessageResponseBody() = default;
};
class SendChatappMassMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendChatappMassMessageResponseBody> body{};

  SendChatappMassMessageResponse() {}

  explicit SendChatappMassMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendChatappMassMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendChatappMassMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendChatappMassMessageResponse() = default;
};
class SendChatappMessageRequestFlowAction : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> flowActionData{};
  shared_ptr<string> flowToken{};

  SendChatappMessageRequestFlowAction() {}

  explicit SendChatappMessageRequestFlowAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowActionData) {
      res["FlowActionData"] = boost::any(*flowActionData);
    }
    if (flowToken) {
      res["FlowToken"] = boost::any(*flowToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowActionData") != m.end() && !m["FlowActionData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["FlowActionData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      flowActionData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowToken") != m.end() && !m["FlowToken"].empty()) {
      flowToken = make_shared<string>(boost::any_cast<string>(m["FlowToken"]));
    }
  }


  virtual ~SendChatappMessageRequestFlowAction() = default;
};
class SendChatappMessageRequestProductActionSectionsProductItems : public Darabonba::Model {
public:
  shared_ptr<string> productRetailerId{};

  SendChatappMessageRequestProductActionSectionsProductItems() {}

  explicit SendChatappMessageRequestProductActionSectionsProductItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productRetailerId) {
      res["ProductRetailerId"] = boost::any(*productRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductRetailerId") != m.end() && !m["ProductRetailerId"].empty()) {
      productRetailerId = make_shared<string>(boost::any_cast<string>(m["ProductRetailerId"]));
    }
  }


  virtual ~SendChatappMessageRequestProductActionSectionsProductItems() = default;
};
class SendChatappMessageRequestProductActionSections : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMessageRequestProductActionSectionsProductItems>> productItems{};
  shared_ptr<string> title{};

  SendChatappMessageRequestProductActionSections() {}

  explicit SendChatappMessageRequestProductActionSections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productItems) {
      vector<boost::any> temp1;
      for(auto item1:*productItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductItems"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductItems") != m.end() && !m["ProductItems"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductItems"].type()) {
        vector<SendChatappMessageRequestProductActionSectionsProductItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMessageRequestProductActionSectionsProductItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productItems = make_shared<vector<SendChatappMessageRequestProductActionSectionsProductItems>>(expect1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SendChatappMessageRequestProductActionSections() = default;
};
class SendChatappMessageRequestProductAction : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMessageRequestProductActionSections>> sections{};
  shared_ptr<string> thumbnailProductRetailerId{};

  SendChatappMessageRequestProductAction() {}

  explicit SendChatappMessageRequestProductAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sections) {
      vector<boost::any> temp1;
      for(auto item1:*sections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sections"] = boost::any(temp1);
    }
    if (thumbnailProductRetailerId) {
      res["ThumbnailProductRetailerId"] = boost::any(*thumbnailProductRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sections") != m.end() && !m["Sections"].empty()) {
      if (typeid(vector<boost::any>) == m["Sections"].type()) {
        vector<SendChatappMessageRequestProductActionSections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMessageRequestProductActionSections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sections = make_shared<vector<SendChatappMessageRequestProductActionSections>>(expect1);
      }
    }
    if (m.find("ThumbnailProductRetailerId") != m.end() && !m["ThumbnailProductRetailerId"].empty()) {
      thumbnailProductRetailerId = make_shared<string>(boost::any_cast<string>(m["ThumbnailProductRetailerId"]));
    }
  }


  virtual ~SendChatappMessageRequestProductAction() = default;
};
class SendChatappMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> content{};
  shared_ptr<string> contextMessageId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> fallBackRule{};
  shared_ptr<SendChatappMessageRequestFlowAction> flowAction{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<vector<string>> payload{};
  shared_ptr<SendChatappMessageRequestProductAction> productAction{};
  shared_ptr<string> recipientType{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<map<string, string>> templateParams{};
  shared_ptr<string> to{};
  shared_ptr<string> trackingData{};
  shared_ptr<long> ttl{};
  shared_ptr<string> type{};

  SendChatappMessageRequest() {}

  explicit SendChatappMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contextMessageId) {
      res["ContextMessageId"] = boost::any(*contextMessageId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (fallBackRule) {
      res["FallBackRule"] = boost::any(*fallBackRule);
    }
    if (flowAction) {
      res["FlowAction"] = flowAction ? boost::any(flowAction->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (productAction) {
      res["ProductAction"] = productAction ? boost::any(productAction->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recipientType) {
      res["RecipientType"] = boost::any(*recipientType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateParams) {
      res["TemplateParams"] = boost::any(*templateParams);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (trackingData) {
      res["TrackingData"] = boost::any(*trackingData);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContextMessageId") != m.end() && !m["ContextMessageId"].empty()) {
      contextMessageId = make_shared<string>(boost::any_cast<string>(m["ContextMessageId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("FallBackRule") != m.end() && !m["FallBackRule"].empty()) {
      fallBackRule = make_shared<string>(boost::any_cast<string>(m["FallBackRule"]));
    }
    if (m.find("FlowAction") != m.end() && !m["FlowAction"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlowAction"].type()) {
        SendChatappMessageRequestFlowAction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlowAction"]));
        flowAction = make_shared<SendChatappMessageRequestFlowAction>(model1);
      }
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Payload"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payload"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      payload = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductAction") != m.end() && !m["ProductAction"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductAction"].type()) {
        SendChatappMessageRequestProductAction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductAction"]));
        productAction = make_shared<SendChatappMessageRequestProductAction>(model1);
      }
    }
    if (m.find("RecipientType") != m.end() && !m["RecipientType"].empty()) {
      recipientType = make_shared<string>(boost::any_cast<string>(m["RecipientType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TemplateParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("TrackingData") != m.end() && !m["TrackingData"].empty()) {
      trackingData = make_shared<string>(boost::any_cast<string>(m["TrackingData"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SendChatappMessageRequest() = default;
};
class SendChatappMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> content{};
  shared_ptr<string> contextMessageId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> fallBackRule{};
  shared_ptr<string> flowActionShrink{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> productActionShrink{};
  shared_ptr<string> recipientType{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateParamsShrink{};
  shared_ptr<string> to{};
  shared_ptr<string> trackingData{};
  shared_ptr<long> ttl{};
  shared_ptr<string> type{};

  SendChatappMessageShrinkRequest() {}

  explicit SendChatappMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contextMessageId) {
      res["ContextMessageId"] = boost::any(*contextMessageId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (fallBackRule) {
      res["FallBackRule"] = boost::any(*fallBackRule);
    }
    if (flowActionShrink) {
      res["FlowAction"] = boost::any(*flowActionShrink);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (productActionShrink) {
      res["ProductAction"] = boost::any(*productActionShrink);
    }
    if (recipientType) {
      res["RecipientType"] = boost::any(*recipientType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateParamsShrink) {
      res["TemplateParams"] = boost::any(*templateParamsShrink);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (trackingData) {
      res["TrackingData"] = boost::any(*trackingData);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContextMessageId") != m.end() && !m["ContextMessageId"].empty()) {
      contextMessageId = make_shared<string>(boost::any_cast<string>(m["ContextMessageId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("FallBackRule") != m.end() && !m["FallBackRule"].empty()) {
      fallBackRule = make_shared<string>(boost::any_cast<string>(m["FallBackRule"]));
    }
    if (m.find("FlowAction") != m.end() && !m["FlowAction"].empty()) {
      flowActionShrink = make_shared<string>(boost::any_cast<string>(m["FlowAction"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("ProductAction") != m.end() && !m["ProductAction"].empty()) {
      productActionShrink = make_shared<string>(boost::any_cast<string>(m["ProductAction"]));
    }
    if (m.find("RecipientType") != m.end() && !m["RecipientType"].empty()) {
      recipientType = make_shared<string>(boost::any_cast<string>(m["RecipientType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      templateParamsShrink = make_shared<string>(boost::any_cast<string>(m["TemplateParams"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("TrackingData") != m.end() && !m["TrackingData"].empty()) {
      trackingData = make_shared<string>(boost::any_cast<string>(m["TrackingData"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SendChatappMessageShrinkRequest() = default;
};
class SendChatappMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  SendChatappMessageResponseBody() {}

  explicit SendChatappMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendChatappMessageResponseBody() = default;
};
class SendChatappMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendChatappMessageResponseBody> body{};

  SendChatappMessageResponse() {}

  explicit SendChatappMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendChatappMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendChatappMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendChatappMessageResponse() = default;
};
class SubmitIsvCustomerTermsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessDesc{};
  shared_ptr<string> contactMail{};
  shared_ptr<string> countryId{};
  shared_ptr<string> custName{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvTerms{};
  shared_ptr<string> officeAddress{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  SubmitIsvCustomerTermsRequest() {}

  explicit SubmitIsvCustomerTermsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDesc) {
      res["BusinessDesc"] = boost::any(*businessDesc);
    }
    if (contactMail) {
      res["ContactMail"] = boost::any(*contactMail);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (custName) {
      res["CustName"] = boost::any(*custName);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvTerms) {
      res["IsvTerms"] = boost::any(*isvTerms);
    }
    if (officeAddress) {
      res["OfficeAddress"] = boost::any(*officeAddress);
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
    if (m.find("BusinessDesc") != m.end() && !m["BusinessDesc"].empty()) {
      businessDesc = make_shared<string>(boost::any_cast<string>(m["BusinessDesc"]));
    }
    if (m.find("ContactMail") != m.end() && !m["ContactMail"].empty()) {
      contactMail = make_shared<string>(boost::any_cast<string>(m["ContactMail"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("CustName") != m.end() && !m["CustName"].empty()) {
      custName = make_shared<string>(boost::any_cast<string>(m["CustName"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvTerms") != m.end() && !m["IsvTerms"].empty()) {
      isvTerms = make_shared<string>(boost::any_cast<string>(m["IsvTerms"]));
    }
    if (m.find("OfficeAddress") != m.end() && !m["OfficeAddress"].empty()) {
      officeAddress = make_shared<string>(boost::any_cast<string>(m["OfficeAddress"]));
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


  virtual ~SubmitIsvCustomerTermsRequest() = default;
};
class SubmitIsvCustomerTermsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitIsvCustomerTermsResponseBody() {}

  explicit SubmitIsvCustomerTermsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitIsvCustomerTermsResponseBody() = default;
};
class SubmitIsvCustomerTermsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitIsvCustomerTermsResponseBody> body{};

  SubmitIsvCustomerTermsResponse() {}

  explicit SubmitIsvCustomerTermsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitIsvCustomerTermsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitIsvCustomerTermsResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitIsvCustomerTermsResponse() = default;
};
class TriggerChatFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> claimTimeMillis{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<long> discardTimeMillis{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> uuid{};

  TriggerChatFlowRequest() {}

  explicit TriggerChatFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claimTimeMillis) {
      res["ClaimTimeMillis"] = boost::any(*claimTimeMillis);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (discardTimeMillis) {
      res["DiscardTimeMillis"] = boost::any(*discardTimeMillis);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClaimTimeMillis") != m.end() && !m["ClaimTimeMillis"].empty()) {
      claimTimeMillis = make_shared<long>(boost::any_cast<long>(m["ClaimTimeMillis"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DiscardTimeMillis") != m.end() && !m["DiscardTimeMillis"].empty()) {
      discardTimeMillis = make_shared<long>(boost::any_cast<long>(m["DiscardTimeMillis"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~TriggerChatFlowRequest() = default;
};
class TriggerChatFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> claimTimeMillis{};
  shared_ptr<string> dataShrink{};
  shared_ptr<long> discardTimeMillis{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> uuid{};

  TriggerChatFlowShrinkRequest() {}

  explicit TriggerChatFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claimTimeMillis) {
      res["ClaimTimeMillis"] = boost::any(*claimTimeMillis);
    }
    if (dataShrink) {
      res["Data"] = boost::any(*dataShrink);
    }
    if (discardTimeMillis) {
      res["DiscardTimeMillis"] = boost::any(*discardTimeMillis);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClaimTimeMillis") != m.end() && !m["ClaimTimeMillis"].empty()) {
      claimTimeMillis = make_shared<long>(boost::any_cast<long>(m["ClaimTimeMillis"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      dataShrink = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DiscardTimeMillis") != m.end() && !m["DiscardTimeMillis"].empty()) {
      discardTimeMillis = make_shared<long>(boost::any_cast<long>(m["DiscardTimeMillis"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~TriggerChatFlowShrinkRequest() = default;
};
class TriggerChatFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TriggerChatFlowResponseBody() {}

  explicit TriggerChatFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TriggerChatFlowResponseBody() = default;
};
class TriggerChatFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerChatFlowResponseBody> body{};

  TriggerChatFlowResponse() {}

  explicit TriggerChatFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TriggerChatFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerChatFlowResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerChatFlowResponse() = default;
};
class UpdateAccountWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> httpFlag{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> queueFlag{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> statusCallbackUrl{};

  UpdateAccountWebhookRequest() {}

  explicit UpdateAccountWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (httpFlag) {
      res["HttpFlag"] = boost::any(*httpFlag);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (queueFlag) {
      res["QueueFlag"] = boost::any(*queueFlag);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("HttpFlag") != m.end() && !m["HttpFlag"].empty()) {
      httpFlag = make_shared<string>(boost::any_cast<string>(m["HttpFlag"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QueueFlag") != m.end() && !m["QueueFlag"].empty()) {
      queueFlag = make_shared<string>(boost::any_cast<string>(m["QueueFlag"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
  }


  virtual ~UpdateAccountWebhookRequest() = default;
};
class UpdateAccountWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateAccountWebhookResponseBody() {}

  explicit UpdateAccountWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAccountWebhookResponseBody() = default;
};
class UpdateAccountWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccountWebhookResponseBody> body{};

  UpdateAccountWebhookResponse() {}

  explicit UpdateAccountWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAccountWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccountWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccountWebhookResponse() = default;
};
class UpdateChatFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> title{};

  UpdateChatFlowRequest() {}

  explicit UpdateChatFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateChatFlowRequest() = default;
};
class UpdateChatFlowShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> title{};

  UpdateChatFlowShrinkRequest() {}

  explicit UpdateChatFlowShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateChatFlowShrinkRequest() = default;
};
class UpdateChatFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  UpdateChatFlowResponseBody() {}

  explicit UpdateChatFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateChatFlowResponseBody() = default;
};
class UpdateChatFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateChatFlowResponseBody> body{};

  UpdateChatFlowResponse() {}

  explicit UpdateChatFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateChatFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateChatFlowResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateChatFlowResponse() = default;
};
class UpdateChatFlowLogSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowCode{};
  shared_ptr<long> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  UpdateChatFlowLogSettingRequest() {}

  explicit UpdateChatFlowLogSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateChatFlowLogSettingRequest() = default;
};
class UpdateChatFlowLogSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateChatFlowLogSettingResponseBody() {}

  explicit UpdateChatFlowLogSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateChatFlowLogSettingResponseBody() = default;
};
class UpdateChatFlowLogSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateChatFlowLogSettingResponseBody> body{};

  UpdateChatFlowLogSettingResponse() {}

  explicit UpdateChatFlowLogSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateChatFlowLogSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateChatFlowLogSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateChatFlowLogSettingResponse() = default;
};
class UpdateChatGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessNumber{};
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> profilePictureFile{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subject{};

  UpdateChatGroupRequest() {}

  explicit UpdateChatGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessNumber) {
      res["BusinessNumber"] = boost::any(*businessNumber);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (profilePictureFile) {
      res["ProfilePictureFile"] = boost::any(*profilePictureFile);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessNumber") != m.end() && !m["BusinessNumber"].empty()) {
      businessNumber = make_shared<string>(boost::any_cast<string>(m["BusinessNumber"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProfilePictureFile") != m.end() && !m["ProfilePictureFile"].empty()) {
      profilePictureFile = make_shared<string>(boost::any_cast<string>(m["ProfilePictureFile"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~UpdateChatGroupRequest() = default;
};
class UpdateChatGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  UpdateChatGroupResponseBody() {}

  explicit UpdateChatGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateChatGroupResponseBody() = default;
};
class UpdateChatGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateChatGroupResponseBody> body{};

  UpdateChatGroupResponse() {}

  explicit UpdateChatGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateChatGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateChatGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateChatGroupResponse() = default;
};
class UpdateCommerceSettingRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cartEnable{};
  shared_ptr<bool> catalogVisible{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateCommerceSettingRequest() {}

  explicit UpdateCommerceSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cartEnable) {
      res["CartEnable"] = boost::any(*cartEnable);
    }
    if (catalogVisible) {
      res["CatalogVisible"] = boost::any(*catalogVisible);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CartEnable") != m.end() && !m["CartEnable"].empty()) {
      cartEnable = make_shared<bool>(boost::any_cast<bool>(m["CartEnable"]));
    }
    if (m.find("CatalogVisible") != m.end() && !m["CatalogVisible"].empty()) {
      catalogVisible = make_shared<bool>(boost::any_cast<bool>(m["CatalogVisible"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateCommerceSettingRequest() = default;
};
class UpdateCommerceSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateCommerceSettingResponseBody() {}

  explicit UpdateCommerceSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCommerceSettingResponseBody() = default;
};
class UpdateCommerceSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCommerceSettingResponseBody> body{};

  UpdateCommerceSettingResponse() {}

  explicit UpdateCommerceSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCommerceSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCommerceSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCommerceSettingResponse() = default;
};
class UpdateConversationalAutomationRequestCommands : public Darabonba::Model {
public:
  shared_ptr<string> commandDescription{};
  shared_ptr<string> commandName{};

  UpdateConversationalAutomationRequestCommands() {}

  explicit UpdateConversationalAutomationRequestCommands(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandDescription) {
      res["CommandDescription"] = boost::any(*commandDescription);
    }
    if (commandName) {
      res["CommandName"] = boost::any(*commandName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandDescription") != m.end() && !m["CommandDescription"].empty()) {
      commandDescription = make_shared<string>(boost::any_cast<string>(m["CommandDescription"]));
    }
    if (m.find("CommandName") != m.end() && !m["CommandName"].empty()) {
      commandName = make_shared<string>(boost::any_cast<string>(m["CommandName"]));
    }
  }


  virtual ~UpdateConversationalAutomationRequestCommands() = default;
};
class UpdateConversationalAutomationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateConversationalAutomationRequestCommands>> commands{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<bool> enableWelcomeMessage{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<vector<string>> prompts{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateConversationalAutomationRequest() {}

  explicit UpdateConversationalAutomationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commands) {
      vector<boost::any> temp1;
      for(auto item1:*commands){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Commands"] = boost::any(temp1);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (enableWelcomeMessage) {
      res["EnableWelcomeMessage"] = boost::any(*enableWelcomeMessage);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prompts) {
      res["Prompts"] = boost::any(*prompts);
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
    if (m.find("Commands") != m.end() && !m["Commands"].empty()) {
      if (typeid(vector<boost::any>) == m["Commands"].type()) {
        vector<UpdateConversationalAutomationRequestCommands> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Commands"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConversationalAutomationRequestCommands model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commands = make_shared<vector<UpdateConversationalAutomationRequestCommands>>(expect1);
      }
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("EnableWelcomeMessage") != m.end() && !m["EnableWelcomeMessage"].empty()) {
      enableWelcomeMessage = make_shared<bool>(boost::any_cast<bool>(m["EnableWelcomeMessage"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Prompts") != m.end() && !m["Prompts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Prompts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Prompts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      prompts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateConversationalAutomationRequest() = default;
};
class UpdateConversationalAutomationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> commandsShrink{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<bool> enableWelcomeMessage{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> promptsShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateConversationalAutomationShrinkRequest() {}

  explicit UpdateConversationalAutomationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandsShrink) {
      res["Commands"] = boost::any(*commandsShrink);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (enableWelcomeMessage) {
      res["EnableWelcomeMessage"] = boost::any(*enableWelcomeMessage);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (promptsShrink) {
      res["Prompts"] = boost::any(*promptsShrink);
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
    if (m.find("Commands") != m.end() && !m["Commands"].empty()) {
      commandsShrink = make_shared<string>(boost::any_cast<string>(m["Commands"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("EnableWelcomeMessage") != m.end() && !m["EnableWelcomeMessage"].empty()) {
      enableWelcomeMessage = make_shared<bool>(boost::any_cast<bool>(m["EnableWelcomeMessage"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Prompts") != m.end() && !m["Prompts"].empty()) {
      promptsShrink = make_shared<string>(boost::any_cast<string>(m["Prompts"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateConversationalAutomationShrinkRequest() = default;
};
class UpdateConversationalAutomationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateConversationalAutomationResponseBody() {}

  explicit UpdateConversationalAutomationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateConversationalAutomationResponseBody() = default;
};
class UpdateConversationalAutomationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConversationalAutomationResponseBody> body{};

  UpdateConversationalAutomationResponse() {}

  explicit UpdateConversationalAutomationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConversationalAutomationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConversationalAutomationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConversationalAutomationResponse() = default;
};
class UpdateFlowJSONAssetRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> filePath{};
  shared_ptr<string> flowId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateFlowJSONAssetRequest() {}

  explicit UpdateFlowJSONAssetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
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


  virtual ~UpdateFlowJSONAssetRequest() = default;
};
class UpdateFlowJSONAssetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};

  UpdateFlowJSONAssetResponseBodyData() {}

  explicit UpdateFlowJSONAssetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
  }


  virtual ~UpdateFlowJSONAssetResponseBodyData() = default;
};
class UpdateFlowJSONAssetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<UpdateFlowJSONAssetResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateFlowJSONAssetResponseBody() {}

  explicit UpdateFlowJSONAssetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateFlowJSONAssetResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateFlowJSONAssetResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateFlowJSONAssetResponseBody() = default;
};
class UpdateFlowJSONAssetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFlowJSONAssetResponseBody> body{};

  UpdateFlowJSONAssetResponse() {}

  explicit UpdateFlowJSONAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFlowJSONAssetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFlowJSONAssetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFlowJSONAssetResponse() = default;
};
class UpdateFlowVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<map<string, boost::any>> bizExtend{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<string> flowViewModel{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateFlowVersionRequest() {}

  explicit UpdateFlowVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtend) {
      res["BizExtend"] = boost::any(*bizExtend);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (flowViewModel) {
      res["FlowViewModel"] = boost::any(*flowViewModel);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizExtend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizExtend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("FlowViewModel") != m.end() && !m["FlowViewModel"].empty()) {
      flowViewModel = make_shared<string>(boost::any_cast<string>(m["FlowViewModel"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateFlowVersionRequest() = default;
};
class UpdateFlowVersionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> bizExtendShrink{};
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowVersion{};
  shared_ptr<string> flowViewModel{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateFlowVersionShrinkRequest() {}

  explicit UpdateFlowVersionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (bizExtendShrink) {
      res["BizExtend"] = boost::any(*bizExtendShrink);
    }
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowVersion) {
      res["FlowVersion"] = boost::any(*flowVersion);
    }
    if (flowViewModel) {
      res["FlowViewModel"] = boost::any(*flowViewModel);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("BizExtend") != m.end() && !m["BizExtend"].empty()) {
      bizExtendShrink = make_shared<string>(boost::any_cast<string>(m["BizExtend"]));
    }
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowVersion") != m.end() && !m["FlowVersion"].empty()) {
      flowVersion = make_shared<string>(boost::any_cast<string>(m["FlowVersion"]));
    }
    if (m.find("FlowViewModel") != m.end() && !m["FlowViewModel"].empty()) {
      flowViewModel = make_shared<string>(boost::any_cast<string>(m["FlowViewModel"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateFlowVersionShrinkRequest() = default;
};
class UpdateFlowVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> response{};
  shared_ptr<bool> success{};

  UpdateFlowVersionResponseBody() {}

  explicit UpdateFlowVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Response"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      response = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFlowVersionResponseBody() = default;
};
class UpdateFlowVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFlowVersionResponseBody> body{};

  UpdateFlowVersionResponse() {}

  explicit UpdateFlowVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFlowVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFlowVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFlowVersionResponse() = default;
};
class UpdatePhoneEncryptionPublicKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> encryptionPublicKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdatePhoneEncryptionPublicKeyRequest() {}

  explicit UpdatePhoneEncryptionPublicKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (encryptionPublicKey) {
      res["EncryptionPublicKey"] = boost::any(*encryptionPublicKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("EncryptionPublicKey") != m.end() && !m["EncryptionPublicKey"].empty()) {
      encryptionPublicKey = make_shared<string>(boost::any_cast<string>(m["EncryptionPublicKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdatePhoneEncryptionPublicKeyRequest() = default;
};
class UpdatePhoneEncryptionPublicKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdatePhoneEncryptionPublicKeyResponseBody() {}

  explicit UpdatePhoneEncryptionPublicKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePhoneEncryptionPublicKeyResponseBody() = default;
};
class UpdatePhoneEncryptionPublicKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePhoneEncryptionPublicKeyResponseBody> body{};

  UpdatePhoneEncryptionPublicKeyResponse() {}

  explicit UpdatePhoneEncryptionPublicKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePhoneEncryptionPublicKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePhoneEncryptionPublicKeyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePhoneEncryptionPublicKeyResponse() = default;
};
class UpdatePhoneMessageQrdlRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> generateQrImage{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> prefilledMessage{};
  shared_ptr<string> qrdlCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdatePhoneMessageQrdlRequest() {}

  explicit UpdatePhoneMessageQrdlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (generateQrImage) {
      res["GenerateQrImage"] = boost::any(*generateQrImage);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prefilledMessage) {
      res["PrefilledMessage"] = boost::any(*prefilledMessage);
    }
    if (qrdlCode) {
      res["QrdlCode"] = boost::any(*qrdlCode);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("GenerateQrImage") != m.end() && !m["GenerateQrImage"].empty()) {
      generateQrImage = make_shared<string>(boost::any_cast<string>(m["GenerateQrImage"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PrefilledMessage") != m.end() && !m["PrefilledMessage"].empty()) {
      prefilledMessage = make_shared<string>(boost::any_cast<string>(m["PrefilledMessage"]));
    }
    if (m.find("QrdlCode") != m.end() && !m["QrdlCode"].empty()) {
      qrdlCode = make_shared<string>(boost::any_cast<string>(m["QrdlCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdatePhoneMessageQrdlRequest() = default;
};
class UpdatePhoneMessageQrdlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deepLinkUrl{};
  shared_ptr<string> generateQrImage{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> prefilledMessage{};
  shared_ptr<string> qrImageUrl{};
  shared_ptr<string> qrdlCode{};

  UpdatePhoneMessageQrdlResponseBodyData() {}

  explicit UpdatePhoneMessageQrdlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deepLinkUrl) {
      res["DeepLinkUrl"] = boost::any(*deepLinkUrl);
    }
    if (generateQrImage) {
      res["GenerateQrImage"] = boost::any(*generateQrImage);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prefilledMessage) {
      res["PrefilledMessage"] = boost::any(*prefilledMessage);
    }
    if (qrImageUrl) {
      res["QrImageUrl"] = boost::any(*qrImageUrl);
    }
    if (qrdlCode) {
      res["QrdlCode"] = boost::any(*qrdlCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeepLinkUrl") != m.end() && !m["DeepLinkUrl"].empty()) {
      deepLinkUrl = make_shared<string>(boost::any_cast<string>(m["DeepLinkUrl"]));
    }
    if (m.find("GenerateQrImage") != m.end() && !m["GenerateQrImage"].empty()) {
      generateQrImage = make_shared<string>(boost::any_cast<string>(m["GenerateQrImage"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PrefilledMessage") != m.end() && !m["PrefilledMessage"].empty()) {
      prefilledMessage = make_shared<string>(boost::any_cast<string>(m["PrefilledMessage"]));
    }
    if (m.find("QrImageUrl") != m.end() && !m["QrImageUrl"].empty()) {
      qrImageUrl = make_shared<string>(boost::any_cast<string>(m["QrImageUrl"]));
    }
    if (m.find("QrdlCode") != m.end() && !m["QrdlCode"].empty()) {
      qrdlCode = make_shared<string>(boost::any_cast<string>(m["QrdlCode"]));
    }
  }


  virtual ~UpdatePhoneMessageQrdlResponseBodyData() = default;
};
class UpdatePhoneMessageQrdlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<UpdatePhoneMessageQrdlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdatePhoneMessageQrdlResponseBody() {}

  explicit UpdatePhoneMessageQrdlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdatePhoneMessageQrdlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdatePhoneMessageQrdlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePhoneMessageQrdlResponseBody() = default;
};
class UpdatePhoneMessageQrdlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePhoneMessageQrdlResponseBody> body{};

  UpdatePhoneMessageQrdlResponse() {}

  explicit UpdatePhoneMessageQrdlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePhoneMessageQrdlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePhoneMessageQrdlResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePhoneMessageQrdlResponse() = default;
};
class UpdatePhoneWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> httpFlag{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> queueFlag{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> statusCallbackUrl{};
  shared_ptr<string> upCallbackUrl{};

  UpdatePhoneWebhookRequest() {}

  explicit UpdatePhoneWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (httpFlag) {
      res["HttpFlag"] = boost::any(*httpFlag);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (queueFlag) {
      res["QueueFlag"] = boost::any(*queueFlag);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    if (upCallbackUrl) {
      res["UpCallbackUrl"] = boost::any(*upCallbackUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("HttpFlag") != m.end() && !m["HttpFlag"].empty()) {
      httpFlag = make_shared<string>(boost::any_cast<string>(m["HttpFlag"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QueueFlag") != m.end() && !m["QueueFlag"].empty()) {
      queueFlag = make_shared<string>(boost::any_cast<string>(m["QueueFlag"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
    if (m.find("UpCallbackUrl") != m.end() && !m["UpCallbackUrl"].empty()) {
      upCallbackUrl = make_shared<string>(boost::any_cast<string>(m["UpCallbackUrl"]));
    }
  }


  virtual ~UpdatePhoneWebhookRequest() = default;
};
class UpdatePhoneWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdatePhoneWebhookResponseBody() {}

  explicit UpdatePhoneWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePhoneWebhookResponseBody() = default;
};
class UpdatePhoneWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePhoneWebhookResponseBody> body{};

  UpdatePhoneWebhookResponse() {}

  explicit UpdatePhoneWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePhoneWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePhoneWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePhoneWebhookResponse() = default;
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
  AddChatGroupResponse addChatGroupWithOptions(shared_ptr<AddChatGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddChatGroupResponse addChatGroup(shared_ptr<AddChatGroupRequest> request);
  AddChatGroupInviteLinkResponse addChatGroupInviteLinkWithOptions(shared_ptr<AddChatGroupInviteLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddChatGroupInviteLinkResponse addChatGroupInviteLink(shared_ptr<AddChatGroupInviteLinkRequest> request);
  AddChatappPhoneNumberResponse addChatappPhoneNumberWithOptions(shared_ptr<AddChatappPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddChatappPhoneNumberResponse addChatappPhoneNumber(shared_ptr<AddChatappPhoneNumberRequest> request);
  ChatappBindWabaResponse chatappBindWabaWithOptions(shared_ptr<ChatappBindWabaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappBindWabaResponse chatappBindWaba(shared_ptr<ChatappBindWabaRequest> request);
  ChatappEmbedSignUpResponse chatappEmbedSignUpWithOptions(shared_ptr<ChatappEmbedSignUpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappEmbedSignUpResponse chatappEmbedSignUp(shared_ptr<ChatappEmbedSignUpRequest> request);
  ChatappMigrationRegisterResponse chatappMigrationRegisterWithOptions(shared_ptr<ChatappMigrationRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappMigrationRegisterResponse chatappMigrationRegister(shared_ptr<ChatappMigrationRegisterRequest> request);
  ChatappMigrationVerifiedResponse chatappMigrationVerifiedWithOptions(shared_ptr<ChatappMigrationVerifiedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappMigrationVerifiedResponse chatappMigrationVerified(shared_ptr<ChatappMigrationVerifiedRequest> request);
  ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregisterWithOptions(shared_ptr<ChatappPhoneNumberDeregisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregister(shared_ptr<ChatappPhoneNumberDeregisterRequest> request);
  ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegisterWithOptions(shared_ptr<ChatappPhoneNumberRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegister(shared_ptr<ChatappPhoneNumberRegisterRequest> request);
  ChatappSyncPhoneNumberResponse chatappSyncPhoneNumberWithOptions(shared_ptr<ChatappSyncPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappSyncPhoneNumberResponse chatappSyncPhoneNumber(shared_ptr<ChatappSyncPhoneNumberRequest> request);
  ChatappVerifyAndRegisterResponse chatappVerifyAndRegisterWithOptions(shared_ptr<ChatappVerifyAndRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappVerifyAndRegisterResponse chatappVerifyAndRegister(shared_ptr<ChatappVerifyAndRegisterRequest> request);
  CreateChatFlowResponse createChatFlowWithOptions(shared_ptr<CreateChatFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatFlowResponse createChatFlow(shared_ptr<CreateChatFlowRequest> request);
  CreateChatFlowByImportResponse createChatFlowByImportWithOptions(shared_ptr<CreateChatFlowByImportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatFlowByImportResponse createChatFlowByImport(shared_ptr<CreateChatFlowByImportRequest> request);
  CreateChatFlowLogSettingResponse createChatFlowLogSettingWithOptions(shared_ptr<CreateChatFlowLogSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatFlowLogSettingResponse createChatFlowLogSetting(shared_ptr<CreateChatFlowLogSettingRequest> request);
  CreateChatappMigrationInitiateResponse createChatappMigrationInitiateWithOptions(shared_ptr<CreateChatappMigrationInitiateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatappMigrationInitiateResponse createChatappMigrationInitiate(shared_ptr<CreateChatappMigrationInitiateRequest> request);
  CreateChatappTemplateResponse createChatappTemplateWithOptions(shared_ptr<CreateChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatappTemplateResponse createChatappTemplate(shared_ptr<CreateChatappTemplateRequest> request);
  CreateFlowResponse createFlowWithOptions(shared_ptr<CreateFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowResponse createFlow(shared_ptr<CreateFlowRequest> request);
  CreateFlowVersionResponse createFlowVersionWithOptions(shared_ptr<CreateFlowVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowVersionResponse createFlowVersion(shared_ptr<CreateFlowVersionRequest> request);
  CreatePhoneMessageQrdlResponse createPhoneMessageQrdlWithOptions(shared_ptr<CreatePhoneMessageQrdlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePhoneMessageQrdlResponse createPhoneMessageQrdl(shared_ptr<CreatePhoneMessageQrdlRequest> request);
  DeleteChatFlowResponse deleteChatFlowWithOptions(shared_ptr<DeleteChatFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatFlowResponse deleteChatFlow(shared_ptr<DeleteChatFlowRequest> request);
  DeleteChatGroupResponse deleteChatGroupWithOptions(shared_ptr<DeleteChatGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatGroupResponse deleteChatGroup(shared_ptr<DeleteChatGroupRequest> request);
  DeleteChatGroupInviteLinkResponse deleteChatGroupInviteLinkWithOptions(shared_ptr<DeleteChatGroupInviteLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatGroupInviteLinkResponse deleteChatGroupInviteLink(shared_ptr<DeleteChatGroupInviteLinkRequest> request);
  DeleteChatGroupParticipantsResponse deleteChatGroupParticipantsWithOptions(shared_ptr<DeleteChatGroupParticipantsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatGroupParticipantsResponse deleteChatGroupParticipants(shared_ptr<DeleteChatGroupParticipantsRequest> request);
  DeleteChatappTemplateResponse deleteChatappTemplateWithOptions(shared_ptr<DeleteChatappTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatappTemplateResponse deleteChatappTemplate(shared_ptr<DeleteChatappTemplateRequest> request);
  DeleteFlowResponse deleteFlowWithOptions(shared_ptr<DeleteFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowResponse deleteFlow(shared_ptr<DeleteFlowRequest> request);
  DeleteFlowVersionResponse deleteFlowVersionWithOptions(shared_ptr<DeleteFlowVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowVersionResponse deleteFlowVersion(shared_ptr<DeleteFlowVersionRequest> request);
  DeletePhoneMessageQrdlResponse deletePhoneMessageQrdlWithOptions(shared_ptr<DeletePhoneMessageQrdlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePhoneMessageQrdlResponse deletePhoneMessageQrdl(shared_ptr<DeletePhoneMessageQrdlRequest> request);
  DeprecateFlowResponse deprecateFlowWithOptions(shared_ptr<DeprecateFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeprecateFlowResponse deprecateFlow(shared_ptr<DeprecateFlowRequest> request);
  EnableWhatsappROIMetricResponse enableWhatsappROIMetricWithOptions(shared_ptr<EnableWhatsappROIMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableWhatsappROIMetricResponse enableWhatsappROIMetric(shared_ptr<EnableWhatsappROIMetricRequest> request);
  FlowBindPhoneResponse flowBindPhoneWithOptions(shared_ptr<FlowBindPhoneRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlowBindPhoneResponse flowBindPhone(shared_ptr<FlowBindPhoneRequest> request);
  FlowRebindPhoneResponse flowRebindPhoneWithOptions(shared_ptr<FlowRebindPhoneRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlowRebindPhoneResponse flowRebindPhone(shared_ptr<FlowRebindPhoneRequest> request);
  FlowUnbindPhoneResponse flowUnbindPhoneWithOptions(shared_ptr<FlowUnbindPhoneRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlowUnbindPhoneResponse flowUnbindPhone(shared_ptr<FlowUnbindPhoneRequest> request);
  GetChatFlowMetricResponse getChatFlowMetricWithOptions(shared_ptr<GetChatFlowMetricRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatFlowMetricResponse getChatFlowMetric(shared_ptr<GetChatFlowMetricRequest> request);
  GetChatFlowTemplateResponse getChatFlowTemplateWithOptions(shared_ptr<GetChatFlowTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatFlowTemplateResponse getChatFlowTemplate(shared_ptr<GetChatFlowTemplateRequest> request);
  GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetricWithOptions(shared_ptr<GetChatappPhoneNumberMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetric(shared_ptr<GetChatappPhoneNumberMetricRequest> request);
  GetChatappTemplateDetailResponse getChatappTemplateDetailWithOptions(shared_ptr<GetChatappTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappTemplateDetailResponse getChatappTemplateDetail(shared_ptr<GetChatappTemplateDetailRequest> request);
  GetChatappTemplateMetricResponse getChatappTemplateMetricWithOptions(shared_ptr<GetChatappTemplateMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappTemplateMetricResponse getChatappTemplateMetric(shared_ptr<GetChatappTemplateMetricRequest> request);
  GetChatappUploadAuthorizationResponse getChatappUploadAuthorizationWithOptions(shared_ptr<GetChatappUploadAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappUploadAuthorizationResponse getChatappUploadAuthorization(shared_ptr<GetChatappUploadAuthorizationRequest> request);
  GetChatappVerifyCodeResponse getChatappVerifyCodeWithOptions(shared_ptr<GetChatappVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappVerifyCodeResponse getChatappVerifyCode(shared_ptr<GetChatappVerifyCodeRequest> request);
  GetCommerceSettingResponse getCommerceSettingWithOptions(shared_ptr<GetCommerceSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCommerceSettingResponse getCommerceSetting(shared_ptr<GetCommerceSettingRequest> request);
  GetConversationalAutomationResponse getConversationalAutomationWithOptions(shared_ptr<GetConversationalAutomationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConversationalAutomationResponse getConversationalAutomation(shared_ptr<GetConversationalAutomationRequest> request);
  GetFlowResponse getFlowWithOptions(shared_ptr<GetFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFlowResponse getFlow(shared_ptr<GetFlowRequest> request);
  GetFlowJSONAssestResponse getFlowJSONAssestWithOptions(shared_ptr<GetFlowJSONAssestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFlowJSONAssestResponse getFlowJSONAssest(shared_ptr<GetFlowJSONAssestRequest> request);
  GetFlowPreviewUrlResponse getFlowPreviewUrlWithOptions(shared_ptr<GetFlowPreviewUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFlowPreviewUrlResponse getFlowPreviewUrl(shared_ptr<GetFlowPreviewUrlRequest> request);
  GetMigrationVerifyCodeResponse getMigrationVerifyCodeWithOptions(shared_ptr<GetMigrationVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMigrationVerifyCodeResponse getMigrationVerifyCode(shared_ptr<GetMigrationVerifyCodeRequest> request);
  GetPermissionByCodeResponse getPermissionByCodeWithOptions(shared_ptr<GetPermissionByCodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPermissionByCodeResponse getPermissionByCode(shared_ptr<GetPermissionByCodeRequest> request);
  GetPhoneEncryptionPublicKeyResponse getPhoneEncryptionPublicKeyWithOptions(shared_ptr<GetPhoneEncryptionPublicKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneEncryptionPublicKeyResponse getPhoneEncryptionPublicKey(shared_ptr<GetPhoneEncryptionPublicKeyRequest> request);
  GetPhoneNumberVerificationStatusResponse getPhoneNumberVerificationStatusWithOptions(shared_ptr<GetPhoneNumberVerificationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneNumberVerificationStatusResponse getPhoneNumberVerificationStatus(shared_ptr<GetPhoneNumberVerificationStatusRequest> request);
  GetPreValidatePhoneIdResponse getPreValidatePhoneIdWithOptions(shared_ptr<GetPreValidatePhoneIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPreValidatePhoneIdResponse getPreValidatePhoneId(shared_ptr<GetPreValidatePhoneIdRequest> request);
  GetWhatsappConnectionCatalogResponse getWhatsappConnectionCatalogWithOptions(shared_ptr<GetWhatsappConnectionCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWhatsappConnectionCatalogResponse getWhatsappConnectionCatalog(shared_ptr<GetWhatsappConnectionCatalogRequest> request);
  GetWhatsappHealthStatusResponse getWhatsappHealthStatusWithOptions(shared_ptr<GetWhatsappHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWhatsappHealthStatusResponse getWhatsappHealthStatus(shared_ptr<GetWhatsappHealthStatusRequest> request);
  IsvGetAppIdResponse isvGetAppIdWithOptions(shared_ptr<IsvGetAppIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IsvGetAppIdResponse isvGetAppId(shared_ptr<IsvGetAppIdRequest> request);
  ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersionWithOptions(shared_ptr<ListBindingRelationsForFlowVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBindingRelationsForFlowVersionResponse listBindingRelationsForFlowVersion(shared_ptr<ListBindingRelationsForFlowVersionRequest> request);
  ListChatFlowResponse listChatFlowWithOptions(shared_ptr<ListChatFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatFlowResponse listChatFlow(shared_ptr<ListChatFlowRequest> request);
  ListChatFlowTemplateResponse listChatFlowTemplateWithOptions(shared_ptr<ListChatFlowTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatFlowTemplateResponse listChatFlowTemplate(shared_ptr<ListChatFlowTemplateRequest> request);
  ListChatGroupResponse listChatGroupWithOptions(shared_ptr<ListChatGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatGroupResponse listChatGroup(shared_ptr<ListChatGroupRequest> request);
  ListChatGroupParticipantsResponse listChatGroupParticipantsWithOptions(shared_ptr<ListChatGroupParticipantsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatGroupParticipantsResponse listChatGroupParticipants(shared_ptr<ListChatGroupParticipantsRequest> request);
  ListChatappMessageResponse listChatappMessageWithOptions(shared_ptr<ListChatappMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatappMessageResponse listChatappMessage(shared_ptr<ListChatappMessageRequest> request);
  ListChatappTemplateResponse listChatappTemplateWithOptions(shared_ptr<ListChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatappTemplateResponse listChatappTemplate(shared_ptr<ListChatappTemplateRequest> request);
  ListFlowResponse listFlowWithOptions(shared_ptr<ListFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowResponse listFlow(shared_ptr<ListFlowRequest> request);
  ListFlowNodePrototypeV2Response listFlowNodePrototypeV2WithOptions(shared_ptr<ListFlowNodePrototypeV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowNodePrototypeV2Response listFlowNodePrototypeV2(shared_ptr<ListFlowNodePrototypeV2Request> request);
  ListFlowVersionResponse listFlowVersionWithOptions(shared_ptr<ListFlowVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowVersionResponse listFlowVersion(shared_ptr<ListFlowVersionRequest> request);
  ListPhoneMessageQrdlResponse listPhoneMessageQrdlWithOptions(shared_ptr<ListPhoneMessageQrdlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPhoneMessageQrdlResponse listPhoneMessageQrdl(shared_ptr<ListPhoneMessageQrdlRequest> request);
  ListProductResponse listProductWithOptions(shared_ptr<ListProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductResponse listProduct(shared_ptr<ListProductRequest> request);
  ListProductCatalogResponse listProductCatalogWithOptions(shared_ptr<ListProductCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductCatalogResponse listProductCatalog(shared_ptr<ListProductCatalogRequest> request);
  ModifyChatappTemplateResponse modifyChatappTemplateWithOptions(shared_ptr<ModifyChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyChatappTemplateResponse modifyChatappTemplate(shared_ptr<ModifyChatappTemplateRequest> request);
  ModifyChatappTemplatePropertiesResponse modifyChatappTemplatePropertiesWithOptions(shared_ptr<ModifyChatappTemplatePropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyChatappTemplatePropertiesResponse modifyChatappTemplateProperties(shared_ptr<ModifyChatappTemplatePropertiesRequest> request);
  ModifyFlowResponse modifyFlowWithOptions(shared_ptr<ModifyFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFlowResponse modifyFlow(shared_ptr<ModifyFlowRequest> request);
  ModifyPhoneBusinessProfileResponse modifyPhoneBusinessProfileWithOptions(shared_ptr<ModifyPhoneBusinessProfileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPhoneBusinessProfileResponse modifyPhoneBusinessProfile(shared_ptr<ModifyPhoneBusinessProfileRequest> request);
  OfflineFlowVersionResponse offlineFlowVersionWithOptions(shared_ptr<OfflineFlowVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineFlowVersionResponse offlineFlowVersion(shared_ptr<OfflineFlowVersionRequest> request);
  OnlineFlowVersionResponse onlineFlowVersionWithOptions(shared_ptr<OnlineFlowVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnlineFlowVersionResponse onlineFlowVersion(shared_ptr<OnlineFlowVersionRequest> request);
  PublishFlowResponse publishFlowWithOptions(shared_ptr<PublishFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishFlowResponse publishFlow(shared_ptr<PublishFlowRequest> request);
  QueryChatappBindWabaResponse queryChatappBindWabaWithOptions(shared_ptr<QueryChatappBindWabaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChatappBindWabaResponse queryChatappBindWaba(shared_ptr<QueryChatappBindWabaRequest> request);
  QueryChatappPhoneNumbersResponse queryChatappPhoneNumbersWithOptions(shared_ptr<QueryChatappPhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChatappPhoneNumbersResponse queryChatappPhoneNumbers(shared_ptr<QueryChatappPhoneNumbersRequest> request);
  QueryPhoneBusinessProfileResponse queryPhoneBusinessProfileWithOptions(shared_ptr<QueryPhoneBusinessProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPhoneBusinessProfileResponse queryPhoneBusinessProfile(shared_ptr<QueryPhoneBusinessProfileRequest> request);
  QueryWabaBusinessInfoResponse queryWabaBusinessInfoWithOptions(shared_ptr<QueryWabaBusinessInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWabaBusinessInfoResponse queryWabaBusinessInfo(shared_ptr<QueryWabaBusinessInfoRequest> request);
  ReadChatFlowResponse readChatFlowWithOptions(shared_ptr<ReadChatFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadChatFlowResponse readChatFlow(shared_ptr<ReadChatFlowRequest> request);
  ReadChatFlowLogSettingResponse readChatFlowLogSettingWithOptions(shared_ptr<ReadChatFlowLogSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadChatFlowLogSettingResponse readChatFlowLogSetting(shared_ptr<ReadChatFlowLogSettingRequest> request);
  ReadFlowVersionResponse readFlowVersionWithOptions(shared_ptr<ReadFlowVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadFlowVersionResponse readFlowVersion(shared_ptr<ReadFlowVersionRequest> request);
  SendChatappMassMessageResponse sendChatappMassMessageWithOptions(shared_ptr<SendChatappMassMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendChatappMassMessageResponse sendChatappMassMessage(shared_ptr<SendChatappMassMessageRequest> request);
  SendChatappMessageResponse sendChatappMessageWithOptions(shared_ptr<SendChatappMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendChatappMessageResponse sendChatappMessage(shared_ptr<SendChatappMessageRequest> request);
  SubmitIsvCustomerTermsResponse submitIsvCustomerTermsWithOptions(shared_ptr<SubmitIsvCustomerTermsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitIsvCustomerTermsResponse submitIsvCustomerTerms(shared_ptr<SubmitIsvCustomerTermsRequest> request);
  TriggerChatFlowResponse triggerChatFlowWithOptions(shared_ptr<TriggerChatFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerChatFlowResponse triggerChatFlow(shared_ptr<TriggerChatFlowRequest> request);
  UpdateAccountWebhookResponse updateAccountWebhookWithOptions(shared_ptr<UpdateAccountWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccountWebhookResponse updateAccountWebhook(shared_ptr<UpdateAccountWebhookRequest> request);
  UpdateChatFlowResponse updateChatFlowWithOptions(shared_ptr<UpdateChatFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateChatFlowResponse updateChatFlow(shared_ptr<UpdateChatFlowRequest> request);
  UpdateChatFlowLogSettingResponse updateChatFlowLogSettingWithOptions(shared_ptr<UpdateChatFlowLogSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateChatFlowLogSettingResponse updateChatFlowLogSetting(shared_ptr<UpdateChatFlowLogSettingRequest> request);
  UpdateChatGroupResponse updateChatGroupWithOptions(shared_ptr<UpdateChatGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateChatGroupResponse updateChatGroup(shared_ptr<UpdateChatGroupRequest> request);
  UpdateCommerceSettingResponse updateCommerceSettingWithOptions(shared_ptr<UpdateCommerceSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCommerceSettingResponse updateCommerceSetting(shared_ptr<UpdateCommerceSettingRequest> request);
  UpdateConversationalAutomationResponse updateConversationalAutomationWithOptions(shared_ptr<UpdateConversationalAutomationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConversationalAutomationResponse updateConversationalAutomation(shared_ptr<UpdateConversationalAutomationRequest> request);
  UpdateFlowJSONAssetResponse updateFlowJSONAssetWithOptions(shared_ptr<UpdateFlowJSONAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFlowJSONAssetResponse updateFlowJSONAsset(shared_ptr<UpdateFlowJSONAssetRequest> request);
  UpdateFlowVersionResponse updateFlowVersionWithOptions(shared_ptr<UpdateFlowVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFlowVersionResponse updateFlowVersion(shared_ptr<UpdateFlowVersionRequest> request);
  UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKeyWithOptions(shared_ptr<UpdatePhoneEncryptionPublicKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePhoneEncryptionPublicKeyResponse updatePhoneEncryptionPublicKey(shared_ptr<UpdatePhoneEncryptionPublicKeyRequest> request);
  UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdlWithOptions(shared_ptr<UpdatePhoneMessageQrdlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePhoneMessageQrdlResponse updatePhoneMessageQrdl(shared_ptr<UpdatePhoneMessageQrdlRequest> request);
  UpdatePhoneWebhookResponse updatePhoneWebhookWithOptions(shared_ptr<UpdatePhoneWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePhoneWebhookResponse updatePhoneWebhook(shared_ptr<UpdatePhoneWebhookRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cams20200606

#endif
