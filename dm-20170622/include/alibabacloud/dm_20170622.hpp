// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DM20170622_H_
#define ALIBABACLOUD_DM20170622_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dm20170622 {
class AddIpfilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipAddress{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AddIpfilterRequest() {}

  explicit AddIpfilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
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
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
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


  virtual ~AddIpfilterRequest() = default;
};
class AddIpfilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ipFilterId{};
  shared_ptr<string> requestId{};

  AddIpfilterResponseBody() {}

  explicit AddIpfilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipFilterId) {
      res["IpFilterId"] = boost::any(*ipFilterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpFilterId") != m.end() && !m["IpFilterId"].empty()) {
      ipFilterId = make_shared<string>(boost::any_cast<string>(m["IpFilterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddIpfilterResponseBody() = default;
};
class AddIpfilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddIpfilterResponseBody> body{};

  AddIpfilterResponse() {}

  explicit AddIpfilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddIpfilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddIpfilterResponseBody>(model1);
      }
    }
  }


  virtual ~AddIpfilterResponse() = default;
};
class BatchSendMailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> addressType{};
  shared_ptr<string> clickTrace{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> receiversName{};
  shared_ptr<string> replyAddress{};
  shared_ptr<string> replyAddressAlias{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagName{};
  shared_ptr<string> templateName{};
  shared_ptr<string> unSubscribeFilterLevel{};
  shared_ptr<string> unSubscribeLinkType{};

  BatchSendMailRequest() {}

  explicit BatchSendMailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (clickTrace) {
      res["ClickTrace"] = boost::any(*clickTrace);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (receiversName) {
      res["ReceiversName"] = boost::any(*receiversName);
    }
    if (replyAddress) {
      res["ReplyAddress"] = boost::any(*replyAddress);
    }
    if (replyAddressAlias) {
      res["ReplyAddressAlias"] = boost::any(*replyAddressAlias);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (unSubscribeFilterLevel) {
      res["UnSubscribeFilterLevel"] = boost::any(*unSubscribeFilterLevel);
    }
    if (unSubscribeLinkType) {
      res["UnSubscribeLinkType"] = boost::any(*unSubscribeLinkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<long>(boost::any_cast<long>(m["AddressType"]));
    }
    if (m.find("ClickTrace") != m.end() && !m["ClickTrace"].empty()) {
      clickTrace = make_shared<string>(boost::any_cast<string>(m["ClickTrace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReceiversName") != m.end() && !m["ReceiversName"].empty()) {
      receiversName = make_shared<string>(boost::any_cast<string>(m["ReceiversName"]));
    }
    if (m.find("ReplyAddress") != m.end() && !m["ReplyAddress"].empty()) {
      replyAddress = make_shared<string>(boost::any_cast<string>(m["ReplyAddress"]));
    }
    if (m.find("ReplyAddressAlias") != m.end() && !m["ReplyAddressAlias"].empty()) {
      replyAddressAlias = make_shared<string>(boost::any_cast<string>(m["ReplyAddressAlias"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UnSubscribeFilterLevel") != m.end() && !m["UnSubscribeFilterLevel"].empty()) {
      unSubscribeFilterLevel = make_shared<string>(boost::any_cast<string>(m["UnSubscribeFilterLevel"]));
    }
    if (m.find("UnSubscribeLinkType") != m.end() && !m["UnSubscribeLinkType"].empty()) {
      unSubscribeLinkType = make_shared<string>(boost::any_cast<string>(m["UnSubscribeLinkType"]));
    }
  }


  virtual ~BatchSendMailRequest() = default;
};
class BatchSendMailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> requestId{};

  BatchSendMailResponseBody() {}

  explicit BatchSendMailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchSendMailResponseBody() = default;
};
class BatchSendMailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchSendMailResponseBody> body{};

  BatchSendMailResponse() {}

  explicit BatchSendMailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchSendMailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchSendMailResponseBody>(model1);
      }
    }
  }


  virtual ~BatchSendMailResponse() = default;
};
class CheckDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckDomainRequest() {}

  explicit CheckDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
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
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
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


  virtual ~CheckDomainRequest() = default;
};
class CheckDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainStatus{};
  shared_ptr<string> requestId{};

  CheckDomainResponseBody() {}

  explicit CheckDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDomainResponseBody() = default;
};
class CheckDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDomainResponseBody> body{};

  CheckDomainResponse() {}

  explicit CheckDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDomainResponse() = default;
};
class CheckDomainDnsRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> type{};

  CheckDomainDnsRequest() {}

  explicit CheckDomainDnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
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
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CheckDomainDnsRequest() = default;
};
class CheckDomainDnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  CheckDomainDnsResponseBody() {}

  explicit CheckDomainDnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckDomainDnsResponseBody() = default;
};
class CheckDomainDnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDomainDnsResponseBody> body{};

  CheckDomainDnsResponse() {}

  explicit CheckDomainDnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDomainDnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDomainDnsResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDomainDnsResponse() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
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
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
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


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDomainResponseBody() = default;
};
class CreateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDomainResponseBody> body{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateMailAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> replyAddress{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sendtype{};

  CreateMailAddressRequest() {}

  explicit CreateMailAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (replyAddress) {
      res["ReplyAddress"] = boost::any(*replyAddress);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendtype) {
      res["Sendtype"] = boost::any(*sendtype);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReplyAddress") != m.end() && !m["ReplyAddress"].empty()) {
      replyAddress = make_shared<string>(boost::any_cast<string>(m["ReplyAddress"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Sendtype") != m.end() && !m["Sendtype"].empty()) {
      sendtype = make_shared<string>(boost::any_cast<string>(m["Sendtype"]));
    }
  }


  virtual ~CreateMailAddressRequest() = default;
};
class CreateMailAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> mailAddressId{};
  shared_ptr<string> requestId{};

  CreateMailAddressResponseBody() {}

  explicit CreateMailAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailAddressId) {
      res["MailAddressId"] = boost::any(*mailAddressId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MailAddressId") != m.end() && !m["MailAddressId"].empty()) {
      mailAddressId = make_shared<string>(boost::any_cast<string>(m["MailAddressId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMailAddressResponseBody() = default;
};
class CreateMailAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMailAddressResponseBody> body{};

  CreateMailAddressResponse() {}

  explicit CreateMailAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMailAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMailAddressResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMailAddressResponse() = default;
};
class CreateReceiverRequest : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> receiversAlias{};
  shared_ptr<string> receiversName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateReceiverRequest() {}

  explicit CreateReceiverRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (receiversAlias) {
      res["ReceiversAlias"] = boost::any(*receiversAlias);
    }
    if (receiversName) {
      res["ReceiversName"] = boost::any(*receiversName);
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
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReceiversAlias") != m.end() && !m["ReceiversAlias"].empty()) {
      receiversAlias = make_shared<string>(boost::any_cast<string>(m["ReceiversAlias"]));
    }
    if (m.find("ReceiversName") != m.end() && !m["ReceiversName"].empty()) {
      receiversName = make_shared<string>(boost::any_cast<string>(m["ReceiversName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateReceiverRequest() = default;
};
class CreateReceiverResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> receiverId{};
  shared_ptr<string> requestId{};

  CreateReceiverResponseBody() {}

  explicit CreateReceiverResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receiverId) {
      res["ReceiverId"] = boost::any(*receiverId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReceiverId") != m.end() && !m["ReceiverId"].empty()) {
      receiverId = make_shared<string>(boost::any_cast<string>(m["ReceiverId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateReceiverResponseBody() = default;
};
class CreateReceiverResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateReceiverResponseBody> body{};

  CreateReceiverResponse() {}

  explicit CreateReceiverResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateReceiverResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateReceiverResponseBody>(model1);
      }
    }
  }


  virtual ~CreateReceiverResponse() = default;
};
class CreateTagRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagDescription{};
  shared_ptr<string> tagName{};

  CreateTagRequest() {}

  explicit CreateTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagDescription) {
      res["TagDescription"] = boost::any(*tagDescription);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
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
    if (m.find("TagDescription") != m.end() && !m["TagDescription"].empty()) {
      tagDescription = make_shared<string>(boost::any_cast<string>(m["TagDescription"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~CreateTagRequest() = default;
};
class CreateTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tagId{};

  CreateTagResponseBody() {}

  explicit CreateTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~CreateTagResponseBody() = default;
};
class CreateTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTagResponseBody> body{};

  CreateTagResponse() {}

  explicit CreateTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTagResponse() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> smsContent{};
  shared_ptr<long> smsType{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateNickName{};
  shared_ptr<string> templateSubject{};
  shared_ptr<string> templateText{};
  shared_ptr<long> templateType{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromType) {
      res["FromType"] = boost::any(*fromType);
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
    if (smsContent) {
      res["SmsContent"] = boost::any(*smsContent);
    }
    if (smsType) {
      res["SmsType"] = boost::any(*smsType);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateNickName) {
      res["TemplateNickName"] = boost::any(*templateNickName);
    }
    if (templateSubject) {
      res["TemplateSubject"] = boost::any(*templateSubject);
    }
    if (templateText) {
      res["TemplateText"] = boost::any(*templateText);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromType") != m.end() && !m["FromType"].empty()) {
      fromType = make_shared<long>(boost::any_cast<long>(m["FromType"]));
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
    if (m.find("SmsContent") != m.end() && !m["SmsContent"].empty()) {
      smsContent = make_shared<string>(boost::any_cast<string>(m["SmsContent"]));
    }
    if (m.find("SmsType") != m.end() && !m["SmsType"].empty()) {
      smsType = make_shared<long>(boost::any_cast<long>(m["SmsType"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateNickName") != m.end() && !m["TemplateNickName"].empty()) {
      templateNickName = make_shared<string>(boost::any_cast<string>(m["TemplateNickName"]));
    }
    if (m.find("TemplateSubject") != m.end() && !m["TemplateSubject"].empty()) {
      templateSubject = make_shared<string>(boost::any_cast<string>(m["TemplateSubject"]));
    }
    if (m.find("TemplateText") != m.end() && !m["TemplateText"].empty()) {
      templateText = make_shared<string>(boost::any_cast<string>(m["TemplateText"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> templateId{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~CreateTemplateResponseBody() = default;
};
class CreateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class DeleteDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDomainRequest() {}

  explicit DeleteDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
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
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
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


  virtual ~DeleteDomainRequest() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDomainResponseBody() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainResponseBody> body{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteMailAddressRequest : public Darabonba::Model {
public:
  shared_ptr<long> mailAddressId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteMailAddressRequest() {}

  explicit DeleteMailAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailAddressId) {
      res["MailAddressId"] = boost::any(*mailAddressId);
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
    if (m.find("MailAddressId") != m.end() && !m["MailAddressId"].empty()) {
      mailAddressId = make_shared<long>(boost::any_cast<long>(m["MailAddressId"]));
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


  virtual ~DeleteMailAddressRequest() = default;
};
class DeleteMailAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMailAddressResponseBody() {}

  explicit DeleteMailAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMailAddressResponseBody() = default;
};
class DeleteMailAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMailAddressResponseBody> body{};

  DeleteMailAddressResponse() {}

  explicit DeleteMailAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMailAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMailAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMailAddressResponse() = default;
};
class DeleteReceiverRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> receiverId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteReceiverRequest() {}

  explicit DeleteReceiverRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (receiverId) {
      res["ReceiverId"] = boost::any(*receiverId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReceiverId") != m.end() && !m["ReceiverId"].empty()) {
      receiverId = make_shared<string>(boost::any_cast<string>(m["ReceiverId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteReceiverRequest() = default;
};
class DeleteReceiverResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteReceiverResponseBody() {}

  explicit DeleteReceiverResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteReceiverResponseBody() = default;
};
class DeleteReceiverResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteReceiverResponseBody> body{};

  DeleteReceiverResponse() {}

  explicit DeleteReceiverResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteReceiverResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteReceiverResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteReceiverResponse() = default;
};
class DeleteReceiverDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> receiverId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteReceiverDetailRequest() {}

  explicit DeleteReceiverDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (receiverId) {
      res["ReceiverId"] = boost::any(*receiverId);
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
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReceiverId") != m.end() && !m["ReceiverId"].empty()) {
      receiverId = make_shared<string>(boost::any_cast<string>(m["ReceiverId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteReceiverDetailRequest() = default;
};
class DeleteReceiverDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteReceiverDetailResponseBody() {}

  explicit DeleteReceiverDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteReceiverDetailResponseBody() = default;
};
class DeleteReceiverDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteReceiverDetailResponseBody> body{};

  DeleteReceiverDetailResponse() {}

  explicit DeleteReceiverDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteReceiverDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteReceiverDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteReceiverDetailResponse() = default;
};
class DeleteTagRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> tagId{};

  DeleteTagRequest() {}

  explicit DeleteTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
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
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
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
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> templateId{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromType) {
      res["FromType"] = boost::any(*fromType);
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
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromType") != m.end() && !m["FromType"].empty()) {
      fromType = make_shared<long>(boost::any_cast<long>(m["FromType"]));
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DeleteTemplateRequest() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTemplateResponseBody() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class DescAccountSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescAccountSummaryRequest() {}

  explicit DescAccountSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DescAccountSummaryRequest() = default;
};
class DescAccountSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> dailyQuota{};
  shared_ptr<string> dailyRemainFreeQuota{};
  shared_ptr<long> dayuStatus{};
  shared_ptr<long> domains{};
  shared_ptr<long> enableTimes{};
  shared_ptr<long> mailAddresses{};
  shared_ptr<long> maxQuotaLevel{};
  shared_ptr<long> monthQuota{};
  shared_ptr<long> quotaLevel{};
  shared_ptr<long> receivers{};
  shared_ptr<long> remainFreeQuota{};
  shared_ptr<string> requestId{};
  shared_ptr<long> smsRecord{};
  shared_ptr<long> smsSign{};
  shared_ptr<long> smsTemplates{};
  shared_ptr<long> tags{};
  shared_ptr<long> templates{};
  shared_ptr<long> userStatus{};

  DescAccountSummaryResponseBody() {}

  explicit DescAccountSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dailyQuota) {
      res["DailyQuota"] = boost::any(*dailyQuota);
    }
    if (dailyRemainFreeQuota) {
      res["DailyRemainFreeQuota"] = boost::any(*dailyRemainFreeQuota);
    }
    if (dayuStatus) {
      res["DayuStatus"] = boost::any(*dayuStatus);
    }
    if (domains) {
      res["Domains"] = boost::any(*domains);
    }
    if (enableTimes) {
      res["EnableTimes"] = boost::any(*enableTimes);
    }
    if (mailAddresses) {
      res["MailAddresses"] = boost::any(*mailAddresses);
    }
    if (maxQuotaLevel) {
      res["MaxQuotaLevel"] = boost::any(*maxQuotaLevel);
    }
    if (monthQuota) {
      res["MonthQuota"] = boost::any(*monthQuota);
    }
    if (quotaLevel) {
      res["QuotaLevel"] = boost::any(*quotaLevel);
    }
    if (receivers) {
      res["Receivers"] = boost::any(*receivers);
    }
    if (remainFreeQuota) {
      res["RemainFreeQuota"] = boost::any(*remainFreeQuota);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smsRecord) {
      res["SmsRecord"] = boost::any(*smsRecord);
    }
    if (smsSign) {
      res["SmsSign"] = boost::any(*smsSign);
    }
    if (smsTemplates) {
      res["SmsTemplates"] = boost::any(*smsTemplates);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (templates) {
      res["Templates"] = boost::any(*templates);
    }
    if (userStatus) {
      res["UserStatus"] = boost::any(*userStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DailyQuota") != m.end() && !m["DailyQuota"].empty()) {
      dailyQuota = make_shared<long>(boost::any_cast<long>(m["DailyQuota"]));
    }
    if (m.find("DailyRemainFreeQuota") != m.end() && !m["DailyRemainFreeQuota"].empty()) {
      dailyRemainFreeQuota = make_shared<string>(boost::any_cast<string>(m["DailyRemainFreeQuota"]));
    }
    if (m.find("DayuStatus") != m.end() && !m["DayuStatus"].empty()) {
      dayuStatus = make_shared<long>(boost::any_cast<long>(m["DayuStatus"]));
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      domains = make_shared<long>(boost::any_cast<long>(m["Domains"]));
    }
    if (m.find("EnableTimes") != m.end() && !m["EnableTimes"].empty()) {
      enableTimes = make_shared<long>(boost::any_cast<long>(m["EnableTimes"]));
    }
    if (m.find("MailAddresses") != m.end() && !m["MailAddresses"].empty()) {
      mailAddresses = make_shared<long>(boost::any_cast<long>(m["MailAddresses"]));
    }
    if (m.find("MaxQuotaLevel") != m.end() && !m["MaxQuotaLevel"].empty()) {
      maxQuotaLevel = make_shared<long>(boost::any_cast<long>(m["MaxQuotaLevel"]));
    }
    if (m.find("MonthQuota") != m.end() && !m["MonthQuota"].empty()) {
      monthQuota = make_shared<long>(boost::any_cast<long>(m["MonthQuota"]));
    }
    if (m.find("QuotaLevel") != m.end() && !m["QuotaLevel"].empty()) {
      quotaLevel = make_shared<long>(boost::any_cast<long>(m["QuotaLevel"]));
    }
    if (m.find("Receivers") != m.end() && !m["Receivers"].empty()) {
      receivers = make_shared<long>(boost::any_cast<long>(m["Receivers"]));
    }
    if (m.find("RemainFreeQuota") != m.end() && !m["RemainFreeQuota"].empty()) {
      remainFreeQuota = make_shared<long>(boost::any_cast<long>(m["RemainFreeQuota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmsRecord") != m.end() && !m["SmsRecord"].empty()) {
      smsRecord = make_shared<long>(boost::any_cast<long>(m["SmsRecord"]));
    }
    if (m.find("SmsSign") != m.end() && !m["SmsSign"].empty()) {
      smsSign = make_shared<long>(boost::any_cast<long>(m["SmsSign"]));
    }
    if (m.find("SmsTemplates") != m.end() && !m["SmsTemplates"].empty()) {
      smsTemplates = make_shared<long>(boost::any_cast<long>(m["SmsTemplates"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<long>(boost::any_cast<long>(m["Tags"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      templates = make_shared<long>(boost::any_cast<long>(m["Templates"]));
    }
    if (m.find("UserStatus") != m.end() && !m["UserStatus"].empty()) {
      userStatus = make_shared<long>(boost::any_cast<long>(m["UserStatus"]));
    }
  }


  virtual ~DescAccountSummaryResponseBody() = default;
};
class DescAccountSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescAccountSummaryResponseBody> body{};

  DescAccountSummaryResponse() {}

  explicit DescAccountSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescAccountSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescAccountSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescAccountSummaryResponse() = default;
};
class DescDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainId{};
  shared_ptr<long> ownerId{};
  shared_ptr<bool> requireRealTimeDnsRecords{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescDomainRequest() {}

  explicit DescDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requireRealTimeDnsRecords) {
      res["RequireRealTimeDnsRecords"] = boost::any(*requireRealTimeDnsRecords);
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
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RequireRealTimeDnsRecords") != m.end() && !m["RequireRealTimeDnsRecords"].empty()) {
      requireRealTimeDnsRecords = make_shared<bool>(boost::any_cast<bool>(m["RequireRealTimeDnsRecords"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescDomainRequest() = default;
};
class DescDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cnameAuthStatus{};
  shared_ptr<string> cnameConfirmStatus{};
  shared_ptr<string> cnameRecord{};
  shared_ptr<string> createTime{};
  shared_ptr<string> defaultDomain{};
  shared_ptr<string> dkimAuthStatus{};
  shared_ptr<string> dkimPublicKey{};
  shared_ptr<string> dkimRR{};
  shared_ptr<long> dmarcAuthStatus{};
  shared_ptr<string> dmarcHostRecord{};
  shared_ptr<string> dmarcRecord{};
  shared_ptr<string> dnsDmarc{};
  shared_ptr<string> dnsMx{};
  shared_ptr<string> dnsSpf{};
  shared_ptr<string> dnsTxt{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> domainType{};
  shared_ptr<string> hostRecord{};
  shared_ptr<string> icpStatus{};
  shared_ptr<string> mxAuthStatus{};
  shared_ptr<string> mxRecord{};
  shared_ptr<string> requestId{};
  shared_ptr<string> spfAuthStatus{};
  shared_ptr<string> spfRecord{};
  shared_ptr<string> spfRecordV2{};
  shared_ptr<string> tlDomainName{};
  shared_ptr<string> tracefRecord{};

  DescDomainResponseBody() {}

  explicit DescDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnameAuthStatus) {
      res["CnameAuthStatus"] = boost::any(*cnameAuthStatus);
    }
    if (cnameConfirmStatus) {
      res["CnameConfirmStatus"] = boost::any(*cnameConfirmStatus);
    }
    if (cnameRecord) {
      res["CnameRecord"] = boost::any(*cnameRecord);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultDomain) {
      res["DefaultDomain"] = boost::any(*defaultDomain);
    }
    if (dkimAuthStatus) {
      res["DkimAuthStatus"] = boost::any(*dkimAuthStatus);
    }
    if (dkimPublicKey) {
      res["DkimPublicKey"] = boost::any(*dkimPublicKey);
    }
    if (dkimRR) {
      res["DkimRR"] = boost::any(*dkimRR);
    }
    if (dmarcAuthStatus) {
      res["DmarcAuthStatus"] = boost::any(*dmarcAuthStatus);
    }
    if (dmarcHostRecord) {
      res["DmarcHostRecord"] = boost::any(*dmarcHostRecord);
    }
    if (dmarcRecord) {
      res["DmarcRecord"] = boost::any(*dmarcRecord);
    }
    if (dnsDmarc) {
      res["DnsDmarc"] = boost::any(*dnsDmarc);
    }
    if (dnsMx) {
      res["DnsMx"] = boost::any(*dnsMx);
    }
    if (dnsSpf) {
      res["DnsSpf"] = boost::any(*dnsSpf);
    }
    if (dnsTxt) {
      res["DnsTxt"] = boost::any(*dnsTxt);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (hostRecord) {
      res["HostRecord"] = boost::any(*hostRecord);
    }
    if (icpStatus) {
      res["IcpStatus"] = boost::any(*icpStatus);
    }
    if (mxAuthStatus) {
      res["MxAuthStatus"] = boost::any(*mxAuthStatus);
    }
    if (mxRecord) {
      res["MxRecord"] = boost::any(*mxRecord);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spfAuthStatus) {
      res["SpfAuthStatus"] = boost::any(*spfAuthStatus);
    }
    if (spfRecord) {
      res["SpfRecord"] = boost::any(*spfRecord);
    }
    if (spfRecordV2) {
      res["SpfRecordV2"] = boost::any(*spfRecordV2);
    }
    if (tlDomainName) {
      res["TlDomainName"] = boost::any(*tlDomainName);
    }
    if (tracefRecord) {
      res["TracefRecord"] = boost::any(*tracefRecord);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CnameAuthStatus") != m.end() && !m["CnameAuthStatus"].empty()) {
      cnameAuthStatus = make_shared<string>(boost::any_cast<string>(m["CnameAuthStatus"]));
    }
    if (m.find("CnameConfirmStatus") != m.end() && !m["CnameConfirmStatus"].empty()) {
      cnameConfirmStatus = make_shared<string>(boost::any_cast<string>(m["CnameConfirmStatus"]));
    }
    if (m.find("CnameRecord") != m.end() && !m["CnameRecord"].empty()) {
      cnameRecord = make_shared<string>(boost::any_cast<string>(m["CnameRecord"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultDomain") != m.end() && !m["DefaultDomain"].empty()) {
      defaultDomain = make_shared<string>(boost::any_cast<string>(m["DefaultDomain"]));
    }
    if (m.find("DkimAuthStatus") != m.end() && !m["DkimAuthStatus"].empty()) {
      dkimAuthStatus = make_shared<string>(boost::any_cast<string>(m["DkimAuthStatus"]));
    }
    if (m.find("DkimPublicKey") != m.end() && !m["DkimPublicKey"].empty()) {
      dkimPublicKey = make_shared<string>(boost::any_cast<string>(m["DkimPublicKey"]));
    }
    if (m.find("DkimRR") != m.end() && !m["DkimRR"].empty()) {
      dkimRR = make_shared<string>(boost::any_cast<string>(m["DkimRR"]));
    }
    if (m.find("DmarcAuthStatus") != m.end() && !m["DmarcAuthStatus"].empty()) {
      dmarcAuthStatus = make_shared<long>(boost::any_cast<long>(m["DmarcAuthStatus"]));
    }
    if (m.find("DmarcHostRecord") != m.end() && !m["DmarcHostRecord"].empty()) {
      dmarcHostRecord = make_shared<string>(boost::any_cast<string>(m["DmarcHostRecord"]));
    }
    if (m.find("DmarcRecord") != m.end() && !m["DmarcRecord"].empty()) {
      dmarcRecord = make_shared<string>(boost::any_cast<string>(m["DmarcRecord"]));
    }
    if (m.find("DnsDmarc") != m.end() && !m["DnsDmarc"].empty()) {
      dnsDmarc = make_shared<string>(boost::any_cast<string>(m["DnsDmarc"]));
    }
    if (m.find("DnsMx") != m.end() && !m["DnsMx"].empty()) {
      dnsMx = make_shared<string>(boost::any_cast<string>(m["DnsMx"]));
    }
    if (m.find("DnsSpf") != m.end() && !m["DnsSpf"].empty()) {
      dnsSpf = make_shared<string>(boost::any_cast<string>(m["DnsSpf"]));
    }
    if (m.find("DnsTxt") != m.end() && !m["DnsTxt"].empty()) {
      dnsTxt = make_shared<string>(boost::any_cast<string>(m["DnsTxt"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("HostRecord") != m.end() && !m["HostRecord"].empty()) {
      hostRecord = make_shared<string>(boost::any_cast<string>(m["HostRecord"]));
    }
    if (m.find("IcpStatus") != m.end() && !m["IcpStatus"].empty()) {
      icpStatus = make_shared<string>(boost::any_cast<string>(m["IcpStatus"]));
    }
    if (m.find("MxAuthStatus") != m.end() && !m["MxAuthStatus"].empty()) {
      mxAuthStatus = make_shared<string>(boost::any_cast<string>(m["MxAuthStatus"]));
    }
    if (m.find("MxRecord") != m.end() && !m["MxRecord"].empty()) {
      mxRecord = make_shared<string>(boost::any_cast<string>(m["MxRecord"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpfAuthStatus") != m.end() && !m["SpfAuthStatus"].empty()) {
      spfAuthStatus = make_shared<string>(boost::any_cast<string>(m["SpfAuthStatus"]));
    }
    if (m.find("SpfRecord") != m.end() && !m["SpfRecord"].empty()) {
      spfRecord = make_shared<string>(boost::any_cast<string>(m["SpfRecord"]));
    }
    if (m.find("SpfRecordV2") != m.end() && !m["SpfRecordV2"].empty()) {
      spfRecordV2 = make_shared<string>(boost::any_cast<string>(m["SpfRecordV2"]));
    }
    if (m.find("TlDomainName") != m.end() && !m["TlDomainName"].empty()) {
      tlDomainName = make_shared<string>(boost::any_cast<string>(m["TlDomainName"]));
    }
    if (m.find("TracefRecord") != m.end() && !m["TracefRecord"].empty()) {
      tracefRecord = make_shared<string>(boost::any_cast<string>(m["TracefRecord"]));
    }
  }


  virtual ~DescDomainResponseBody() = default;
};
class DescDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescDomainResponseBody> body{};

  DescDomainResponse() {}

  explicit DescDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescDomainResponse() = default;
};
class DescTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> templateId{};

  DescTemplateRequest() {}

  explicit DescTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromType) {
      res["FromType"] = boost::any(*fromType);
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
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromType") != m.end() && !m["FromType"].empty()) {
      fromType = make_shared<long>(boost::any_cast<long>(m["FromType"]));
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescTemplateRequest() = default;
};
class DescTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> remark{};
  shared_ptr<string> requestId{};
  shared_ptr<string> smsContent{};
  shared_ptr<string> smsType{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateNickName{};
  shared_ptr<string> templateStatus{};
  shared_ptr<string> templateSubject{};
  shared_ptr<string> templateText{};
  shared_ptr<string> templateType{};

  DescTemplateResponseBody() {}

  explicit DescTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smsContent) {
      res["SmsContent"] = boost::any(*smsContent);
    }
    if (smsType) {
      res["SmsType"] = boost::any(*smsType);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateNickName) {
      res["TemplateNickName"] = boost::any(*templateNickName);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    if (templateSubject) {
      res["TemplateSubject"] = boost::any(*templateSubject);
    }
    if (templateText) {
      res["TemplateText"] = boost::any(*templateText);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmsContent") != m.end() && !m["SmsContent"].empty()) {
      smsContent = make_shared<string>(boost::any_cast<string>(m["SmsContent"]));
    }
    if (m.find("SmsType") != m.end() && !m["SmsType"].empty()) {
      smsType = make_shared<string>(boost::any_cast<string>(m["SmsType"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateNickName") != m.end() && !m["TemplateNickName"].empty()) {
      templateNickName = make_shared<string>(boost::any_cast<string>(m["TemplateNickName"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<string>(boost::any_cast<string>(m["TemplateStatus"]));
    }
    if (m.find("TemplateSubject") != m.end() && !m["TemplateSubject"].empty()) {
      templateSubject = make_shared<string>(boost::any_cast<string>(m["TemplateSubject"]));
    }
    if (m.find("TemplateText") != m.end() && !m["TemplateText"].empty()) {
      templateText = make_shared<string>(boost::any_cast<string>(m["TemplateText"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~DescTemplateResponseBody() = default;
};
class DescTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescTemplateResponseBody> body{};

  DescTemplateResponse() {}

  explicit DescTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DescTemplateResponse() = default;
};
class GetAccountListRequest : public Darabonba::Model {
public:
  shared_ptr<string> offset{};
  shared_ptr<string> offsetCreateTime{};
  shared_ptr<string> offsetCreateTimeDesc{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> total{};

  GetAccountListRequest() {}

  explicit GetAccountListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (offsetCreateTime) {
      res["OffsetCreateTime"] = boost::any(*offsetCreateTime);
    }
    if (offsetCreateTimeDesc) {
      res["OffsetCreateTimeDesc"] = boost::any(*offsetCreateTimeDesc);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("OffsetCreateTime") != m.end() && !m["OffsetCreateTime"].empty()) {
      offsetCreateTime = make_shared<string>(boost::any_cast<string>(m["OffsetCreateTime"]));
    }
    if (m.find("OffsetCreateTimeDesc") != m.end() && !m["OffsetCreateTimeDesc"].empty()) {
      offsetCreateTimeDesc = make_shared<string>(boost::any_cast<string>(m["OffsetCreateTimeDesc"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
  }


  virtual ~GetAccountListRequest() = default;
};
class GetAccountListResponseBodyDataAccountNotificationInfo : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  GetAccountListResponseBodyDataAccountNotificationInfo() {}

  explicit GetAccountListResponseBodyDataAccountNotificationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetAccountListResponseBodyDataAccountNotificationInfo() = default;
};
class GetAccountListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetAccountListResponseBodyDataAccountNotificationInfo>> accountNotificationInfo{};

  GetAccountListResponseBodyData() {}

  explicit GetAccountListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNotificationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*accountNotificationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["accountNotificationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountNotificationInfo") != m.end() && !m["accountNotificationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["accountNotificationInfo"].type()) {
        vector<GetAccountListResponseBodyDataAccountNotificationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["accountNotificationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccountListResponseBodyDataAccountNotificationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountNotificationInfo = make_shared<vector<GetAccountListResponseBodyDataAccountNotificationInfo>>(expect1);
      }
    }
  }


  virtual ~GetAccountListResponseBodyData() = default;
};
class GetAccountListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<GetAccountListResponseBodyData> data{};

  GetAccountListResponseBody() {}

  explicit GetAccountListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetAccountListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetAccountListResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetAccountListResponseBody() = default;
};
class GetAccountListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountListResponseBody> body{};

  GetAccountListResponse() {}

  explicit GetAccountListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccountListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountListResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountListResponse() = default;
};
class GetMailAddressMsgCallBackUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> mailFrom{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetMailAddressMsgCallBackUrlRequest() {}

  explicit GetMailAddressMsgCallBackUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailFrom) {
      res["MailFrom"] = boost::any(*mailFrom);
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
    if (m.find("MailFrom") != m.end() && !m["MailFrom"].empty()) {
      mailFrom = make_shared<string>(boost::any_cast<string>(m["MailFrom"]));
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


  virtual ~GetMailAddressMsgCallBackUrlRequest() = default;
};
class GetMailAddressMsgCallBackUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> notifyUrl{};
  shared_ptr<long> notifyUrlStatus{};
  shared_ptr<string> requestId{};

  GetMailAddressMsgCallBackUrlResponseBody() {}

  explicit GetMailAddressMsgCallBackUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyUrl) {
      res["NotifyUrl"] = boost::any(*notifyUrl);
    }
    if (notifyUrlStatus) {
      res["NotifyUrlStatus"] = boost::any(*notifyUrlStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotifyUrl") != m.end() && !m["NotifyUrl"].empty()) {
      notifyUrl = make_shared<long>(boost::any_cast<long>(m["NotifyUrl"]));
    }
    if (m.find("NotifyUrlStatus") != m.end() && !m["NotifyUrlStatus"].empty()) {
      notifyUrlStatus = make_shared<long>(boost::any_cast<long>(m["NotifyUrlStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMailAddressMsgCallBackUrlResponseBody() = default;
};
class GetMailAddressMsgCallBackUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMailAddressMsgCallBackUrlResponseBody> body{};

  GetMailAddressMsgCallBackUrlResponse() {}

  explicit GetMailAddressMsgCallBackUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMailAddressMsgCallBackUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMailAddressMsgCallBackUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetMailAddressMsgCallBackUrlResponse() = default;
};
class GetTrackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> offset{};
  shared_ptr<string> offsetCreateTime{};
  shared_ptr<string> offsetCreateTimeDesc{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> tagName{};
  shared_ptr<string> total{};

  GetTrackListRequest() {}

  explicit GetTrackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (offsetCreateTime) {
      res["OffsetCreateTime"] = boost::any(*offsetCreateTime);
    }
    if (offsetCreateTimeDesc) {
      res["OffsetCreateTimeDesc"] = boost::any(*offsetCreateTimeDesc);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("OffsetCreateTime") != m.end() && !m["OffsetCreateTime"].empty()) {
      offsetCreateTime = make_shared<string>(boost::any_cast<string>(m["OffsetCreateTime"]));
    }
    if (m.find("OffsetCreateTimeDesc") != m.end() && !m["OffsetCreateTimeDesc"].empty()) {
      offsetCreateTimeDesc = make_shared<string>(boost::any_cast<string>(m["OffsetCreateTimeDesc"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
  }


  virtual ~GetTrackListRequest() = default;
};
class GetTrackListResponseBodyDataStat : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> rcptClickCount{};
  shared_ptr<string> rcptClickRate{};
  shared_ptr<long> rcptOpenCount{};
  shared_ptr<string> rcptOpenRate{};
  shared_ptr<long> rcptUniqueClickCount{};
  shared_ptr<string> rcptUniqueClickRate{};
  shared_ptr<long> rcptUniqueOpenCount{};
  shared_ptr<string> rcptUniqueOpenRate{};
  shared_ptr<long> totalNumber{};

  GetTrackListResponseBodyDataStat() {}

  explicit GetTrackListResponseBodyDataStat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (rcptClickCount) {
      res["RcptClickCount"] = boost::any(*rcptClickCount);
    }
    if (rcptClickRate) {
      res["RcptClickRate"] = boost::any(*rcptClickRate);
    }
    if (rcptOpenCount) {
      res["RcptOpenCount"] = boost::any(*rcptOpenCount);
    }
    if (rcptOpenRate) {
      res["RcptOpenRate"] = boost::any(*rcptOpenRate);
    }
    if (rcptUniqueClickCount) {
      res["RcptUniqueClickCount"] = boost::any(*rcptUniqueClickCount);
    }
    if (rcptUniqueClickRate) {
      res["RcptUniqueClickRate"] = boost::any(*rcptUniqueClickRate);
    }
    if (rcptUniqueOpenCount) {
      res["RcptUniqueOpenCount"] = boost::any(*rcptUniqueOpenCount);
    }
    if (rcptUniqueOpenRate) {
      res["RcptUniqueOpenRate"] = boost::any(*rcptUniqueOpenRate);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("RcptClickCount") != m.end() && !m["RcptClickCount"].empty()) {
      rcptClickCount = make_shared<long>(boost::any_cast<long>(m["RcptClickCount"]));
    }
    if (m.find("RcptClickRate") != m.end() && !m["RcptClickRate"].empty()) {
      rcptClickRate = make_shared<string>(boost::any_cast<string>(m["RcptClickRate"]));
    }
    if (m.find("RcptOpenCount") != m.end() && !m["RcptOpenCount"].empty()) {
      rcptOpenCount = make_shared<long>(boost::any_cast<long>(m["RcptOpenCount"]));
    }
    if (m.find("RcptOpenRate") != m.end() && !m["RcptOpenRate"].empty()) {
      rcptOpenRate = make_shared<string>(boost::any_cast<string>(m["RcptOpenRate"]));
    }
    if (m.find("RcptUniqueClickCount") != m.end() && !m["RcptUniqueClickCount"].empty()) {
      rcptUniqueClickCount = make_shared<long>(boost::any_cast<long>(m["RcptUniqueClickCount"]));
    }
    if (m.find("RcptUniqueClickRate") != m.end() && !m["RcptUniqueClickRate"].empty()) {
      rcptUniqueClickRate = make_shared<string>(boost::any_cast<string>(m["RcptUniqueClickRate"]));
    }
    if (m.find("RcptUniqueOpenCount") != m.end() && !m["RcptUniqueOpenCount"].empty()) {
      rcptUniqueOpenCount = make_shared<long>(boost::any_cast<long>(m["RcptUniqueOpenCount"]));
    }
    if (m.find("RcptUniqueOpenRate") != m.end() && !m["RcptUniqueOpenRate"].empty()) {
      rcptUniqueOpenRate = make_shared<string>(boost::any_cast<string>(m["RcptUniqueOpenRate"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~GetTrackListResponseBodyDataStat() = default;
};
class GetTrackListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetTrackListResponseBodyDataStat>> stat{};

  GetTrackListResponseBodyData() {}

  explicit GetTrackListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stat) {
      vector<boost::any> temp1;
      for(auto item1:*stat){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stat"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("stat") != m.end() && !m["stat"].empty()) {
      if (typeid(vector<boost::any>) == m["stat"].type()) {
        vector<GetTrackListResponseBodyDataStat> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stat"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrackListResponseBodyDataStat model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stat = make_shared<vector<GetTrackListResponseBodyDataStat>>(expect1);
      }
    }
  }


  virtual ~GetTrackListResponseBodyData() = default;
};
class GetTrackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> offsetCreateTime{};
  shared_ptr<string> offsetCreateTimeDesc{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<GetTrackListResponseBodyData> data{};

  GetTrackListResponseBody() {}

  explicit GetTrackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offsetCreateTime) {
      res["OffsetCreateTime"] = boost::any(*offsetCreateTime);
    }
    if (offsetCreateTimeDesc) {
      res["OffsetCreateTimeDesc"] = boost::any(*offsetCreateTimeDesc);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OffsetCreateTime") != m.end() && !m["OffsetCreateTime"].empty()) {
      offsetCreateTime = make_shared<string>(boost::any_cast<string>(m["OffsetCreateTime"]));
    }
    if (m.find("OffsetCreateTimeDesc") != m.end() && !m["OffsetCreateTimeDesc"].empty()) {
      offsetCreateTimeDesc = make_shared<string>(boost::any_cast<string>(m["OffsetCreateTimeDesc"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTrackListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTrackListResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetTrackListResponseBody() = default;
};
class GetTrackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrackListResponseBody> body{};

  GetTrackListResponse() {}

  explicit GetTrackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTrackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrackListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrackListResponse() = default;
};
class ModifyMailAddressRequest : public Darabonba::Model {
public:
  shared_ptr<long> mailAddressId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> password{};
  shared_ptr<string> replyAddress{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyMailAddressRequest() {}

  explicit ModifyMailAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailAddressId) {
      res["MailAddressId"] = boost::any(*mailAddressId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (replyAddress) {
      res["ReplyAddress"] = boost::any(*replyAddress);
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
    if (m.find("MailAddressId") != m.end() && !m["MailAddressId"].empty()) {
      mailAddressId = make_shared<long>(boost::any_cast<long>(m["MailAddressId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ReplyAddress") != m.end() && !m["ReplyAddress"].empty()) {
      replyAddress = make_shared<string>(boost::any_cast<string>(m["ReplyAddress"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyMailAddressRequest() = default;
};
class ModifyMailAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMailAddressResponseBody() {}

  explicit ModifyMailAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMailAddressResponseBody() = default;
};
class ModifyMailAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMailAddressResponseBody> body{};

  ModifyMailAddressResponse() {}

  explicit ModifyMailAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyMailAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMailAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMailAddressResponse() = default;
};
class ModifyPWByDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> password{};
  shared_ptr<string> resourceOwnerId{};

  ModifyPWByDomainRequest() {}

  explicit ModifyPWByDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyPWByDomainRequest() = default;
};
class ModifyPWByDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyPWByDomainResponseBody() {}

  explicit ModifyPWByDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPWByDomainResponseBody() = default;
};
class ModifyPWByDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPWByDomainResponseBody> body{};

  ModifyPWByDomainResponse() {}

  explicit ModifyPWByDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyPWByDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPWByDomainResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPWByDomainResponse() = default;
};
class ModifyTagRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagDescription{};
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};

  ModifyTagRequest() {}

  explicit ModifyTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagDescription) {
      res["TagDescription"] = boost::any(*tagDescription);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagDescription") != m.end() && !m["TagDescription"].empty()) {
      tagDescription = make_shared<string>(boost::any_cast<string>(m["TagDescription"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ModifyTagRequest() = default;
};
class ModifyTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyTagResponseBody() {}

  explicit ModifyTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyTagResponseBody() = default;
};
class ModifyTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTagResponseBody> body{};

  ModifyTagResponse() {}

  explicit ModifyTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTagResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTagResponse() = default;
};
class ModifyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> smsContent{};
  shared_ptr<long> smsType{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateNickName{};
  shared_ptr<string> templateSubject{};
  shared_ptr<string> templateText{};

  ModifyTemplateRequest() {}

  explicit ModifyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromType) {
      res["FromType"] = boost::any(*fromType);
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
    if (smsContent) {
      res["SmsContent"] = boost::any(*smsContent);
    }
    if (smsType) {
      res["SmsType"] = boost::any(*smsType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateNickName) {
      res["TemplateNickName"] = boost::any(*templateNickName);
    }
    if (templateSubject) {
      res["TemplateSubject"] = boost::any(*templateSubject);
    }
    if (templateText) {
      res["TemplateText"] = boost::any(*templateText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromType") != m.end() && !m["FromType"].empty()) {
      fromType = make_shared<long>(boost::any_cast<long>(m["FromType"]));
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
    if (m.find("SmsContent") != m.end() && !m["SmsContent"].empty()) {
      smsContent = make_shared<string>(boost::any_cast<string>(m["SmsContent"]));
    }
    if (m.find("SmsType") != m.end() && !m["SmsType"].empty()) {
      smsType = make_shared<long>(boost::any_cast<long>(m["SmsType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateNickName") != m.end() && !m["TemplateNickName"].empty()) {
      templateNickName = make_shared<string>(boost::any_cast<string>(m["TemplateNickName"]));
    }
    if (m.find("TemplateSubject") != m.end() && !m["TemplateSubject"].empty()) {
      templateSubject = make_shared<string>(boost::any_cast<string>(m["TemplateSubject"]));
    }
    if (m.find("TemplateText") != m.end() && !m["TemplateText"].empty()) {
      templateText = make_shared<string>(boost::any_cast<string>(m["TemplateText"]));
    }
  }


  virtual ~ModifyTemplateRequest() = default;
};
class ModifyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyTemplateResponseBody() {}

  explicit ModifyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyTemplateResponseBody() = default;
};
class ModifyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTemplateResponseBody> body{};

  ModifyTemplateResponse() {}

  explicit ModifyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTemplateResponse() = default;
};
class QueryDomainByParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> status{};

  QueryDomainByParamRequest() {}

  explicit QueryDomainByParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
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
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
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
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryDomainByParamRequest() = default;
};
class QueryDomainByParamResponseBodyDataDomain : public Darabonba::Model {
public:
  shared_ptr<string> cnameAuthStatus{};
  shared_ptr<string> confirmStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainRecord{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> icpStatus{};
  shared_ptr<string> mxAuthStatus{};
  shared_ptr<string> spfAuthStatus{};
  shared_ptr<long> utcCreateTime{};

  QueryDomainByParamResponseBodyDataDomain() {}

  explicit QueryDomainByParamResponseBodyDataDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnameAuthStatus) {
      res["CnameAuthStatus"] = boost::any(*cnameAuthStatus);
    }
    if (confirmStatus) {
      res["ConfirmStatus"] = boost::any(*confirmStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainRecord) {
      res["DomainRecord"] = boost::any(*domainRecord);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (icpStatus) {
      res["IcpStatus"] = boost::any(*icpStatus);
    }
    if (mxAuthStatus) {
      res["MxAuthStatus"] = boost::any(*mxAuthStatus);
    }
    if (spfAuthStatus) {
      res["SpfAuthStatus"] = boost::any(*spfAuthStatus);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CnameAuthStatus") != m.end() && !m["CnameAuthStatus"].empty()) {
      cnameAuthStatus = make_shared<string>(boost::any_cast<string>(m["CnameAuthStatus"]));
    }
    if (m.find("ConfirmStatus") != m.end() && !m["ConfirmStatus"].empty()) {
      confirmStatus = make_shared<string>(boost::any_cast<string>(m["ConfirmStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainRecord") != m.end() && !m["DomainRecord"].empty()) {
      domainRecord = make_shared<string>(boost::any_cast<string>(m["DomainRecord"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("IcpStatus") != m.end() && !m["IcpStatus"].empty()) {
      icpStatus = make_shared<string>(boost::any_cast<string>(m["IcpStatus"]));
    }
    if (m.find("MxAuthStatus") != m.end() && !m["MxAuthStatus"].empty()) {
      mxAuthStatus = make_shared<string>(boost::any_cast<string>(m["MxAuthStatus"]));
    }
    if (m.find("SpfAuthStatus") != m.end() && !m["SpfAuthStatus"].empty()) {
      spfAuthStatus = make_shared<string>(boost::any_cast<string>(m["SpfAuthStatus"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["UtcCreateTime"]));
    }
  }


  virtual ~QueryDomainByParamResponseBodyDataDomain() = default;
};
class QueryDomainByParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDomainByParamResponseBodyDataDomain>> domain{};

  QueryDomainByParamResponseBodyData() {}

  explicit QueryDomainByParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      vector<boost::any> temp1;
      for(auto item1:*domain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["domain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      if (typeid(vector<boost::any>) == m["domain"].type()) {
        vector<QueryDomainByParamResponseBodyDataDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["domain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDomainByParamResponseBodyDataDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domain = make_shared<vector<QueryDomainByParamResponseBodyDataDomain>>(expect1);
      }
    }
  }


  virtual ~QueryDomainByParamResponseBodyData() = default;
};
class QueryDomainByParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryDomainByParamResponseBodyData> data{};

  QueryDomainByParamResponseBody() {}

  explicit QueryDomainByParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryDomainByParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryDomainByParamResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryDomainByParamResponseBody() = default;
};
class QueryDomainByParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDomainByParamResponseBody> body{};

  QueryDomainByParamResponse() {}

  explicit QueryDomainByParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDomainByParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDomainByParamResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDomainByParamResponse() = default;
};
class QueryInvalidAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> length{};
  shared_ptr<string> nextStart{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  QueryInvalidAddressRequest() {}

  explicit QueryInvalidAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (length) {
      res["Length"] = boost::any(*length);
    }
    if (nextStart) {
      res["NextStart"] = boost::any(*nextStart);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["Length"]));
    }
    if (m.find("NextStart") != m.end() && !m["NextStart"].empty()) {
      nextStart = make_shared<string>(boost::any_cast<string>(m["NextStart"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryInvalidAddressRequest() = default;
};
class QueryInvalidAddressResponseBodyDataMailDetail : public Darabonba::Model {
public:
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> toAddress{};
  shared_ptr<long> utcLastUpdateTime{};

  QueryInvalidAddressResponseBodyDataMailDetail() {}

  explicit QueryInvalidAddressResponseBodyDataMailDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (toAddress) {
      res["ToAddress"] = boost::any(*toAddress);
    }
    if (utcLastUpdateTime) {
      res["UtcLastUpdateTime"] = boost::any(*utcLastUpdateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["LastUpdateTime"]));
    }
    if (m.find("ToAddress") != m.end() && !m["ToAddress"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["ToAddress"]));
    }
    if (m.find("UtcLastUpdateTime") != m.end() && !m["UtcLastUpdateTime"].empty()) {
      utcLastUpdateTime = make_shared<long>(boost::any_cast<long>(m["UtcLastUpdateTime"]));
    }
  }


  virtual ~QueryInvalidAddressResponseBodyDataMailDetail() = default;
};
class QueryInvalidAddressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryInvalidAddressResponseBodyDataMailDetail>> mailDetail{};

  QueryInvalidAddressResponseBodyData() {}

  explicit QueryInvalidAddressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailDetail) {
      vector<boost::any> temp1;
      for(auto item1:*mailDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mailDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mailDetail") != m.end() && !m["mailDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["mailDetail"].type()) {
        vector<QueryInvalidAddressResponseBodyDataMailDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mailDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInvalidAddressResponseBodyDataMailDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mailDetail = make_shared<vector<QueryInvalidAddressResponseBodyDataMailDetail>>(expect1);
      }
    }
  }


  virtual ~QueryInvalidAddressResponseBodyData() = default;
};
class QueryInvalidAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> nextStart{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryInvalidAddressResponseBodyData> data{};

  QueryInvalidAddressResponseBody() {}

  explicit QueryInvalidAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextStart) {
      res["NextStart"] = boost::any(*nextStart);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextStart") != m.end() && !m["NextStart"].empty()) {
      nextStart = make_shared<long>(boost::any_cast<long>(m["NextStart"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryInvalidAddressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryInvalidAddressResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryInvalidAddressResponseBody() = default;
};
class QueryInvalidAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryInvalidAddressResponseBody> body{};

  QueryInvalidAddressResponse() {}

  explicit QueryInvalidAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryInvalidAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInvalidAddressResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInvalidAddressResponse() = default;
};
class QueryMailAddressByParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sendtype{};

  QueryMailAddressByParamRequest() {}

  explicit QueryMailAddressByParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
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
    if (sendtype) {
      res["Sendtype"] = boost::any(*sendtype);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
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
    if (m.find("Sendtype") != m.end() && !m["Sendtype"].empty()) {
      sendtype = make_shared<string>(boost::any_cast<string>(m["Sendtype"]));
    }
  }


  virtual ~QueryMailAddressByParamRequest() = default;
};
class QueryMailAddressByParamResponseBodyDataMailAddress : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dailyCount{};
  shared_ptr<string> dailyReqCount{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> mailAddressId{};
  shared_ptr<string> monthCount{};
  shared_ptr<string> monthReqCount{};
  shared_ptr<string> replyAddress{};
  shared_ptr<string> replyStatus{};
  shared_ptr<string> sendtype{};

  QueryMailAddressByParamResponseBodyDataMailAddress() {}

  explicit QueryMailAddressByParamResponseBodyDataMailAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dailyCount) {
      res["DailyCount"] = boost::any(*dailyCount);
    }
    if (dailyReqCount) {
      res["DailyReqCount"] = boost::any(*dailyReqCount);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (mailAddressId) {
      res["MailAddressId"] = boost::any(*mailAddressId);
    }
    if (monthCount) {
      res["MonthCount"] = boost::any(*monthCount);
    }
    if (monthReqCount) {
      res["MonthReqCount"] = boost::any(*monthReqCount);
    }
    if (replyAddress) {
      res["ReplyAddress"] = boost::any(*replyAddress);
    }
    if (replyStatus) {
      res["ReplyStatus"] = boost::any(*replyStatus);
    }
    if (sendtype) {
      res["Sendtype"] = boost::any(*sendtype);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DailyCount") != m.end() && !m["DailyCount"].empty()) {
      dailyCount = make_shared<string>(boost::any_cast<string>(m["DailyCount"]));
    }
    if (m.find("DailyReqCount") != m.end() && !m["DailyReqCount"].empty()) {
      dailyReqCount = make_shared<string>(boost::any_cast<string>(m["DailyReqCount"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("MailAddressId") != m.end() && !m["MailAddressId"].empty()) {
      mailAddressId = make_shared<string>(boost::any_cast<string>(m["MailAddressId"]));
    }
    if (m.find("MonthCount") != m.end() && !m["MonthCount"].empty()) {
      monthCount = make_shared<string>(boost::any_cast<string>(m["MonthCount"]));
    }
    if (m.find("MonthReqCount") != m.end() && !m["MonthReqCount"].empty()) {
      monthReqCount = make_shared<string>(boost::any_cast<string>(m["MonthReqCount"]));
    }
    if (m.find("ReplyAddress") != m.end() && !m["ReplyAddress"].empty()) {
      replyAddress = make_shared<string>(boost::any_cast<string>(m["ReplyAddress"]));
    }
    if (m.find("ReplyStatus") != m.end() && !m["ReplyStatus"].empty()) {
      replyStatus = make_shared<string>(boost::any_cast<string>(m["ReplyStatus"]));
    }
    if (m.find("Sendtype") != m.end() && !m["Sendtype"].empty()) {
      sendtype = make_shared<string>(boost::any_cast<string>(m["Sendtype"]));
    }
  }


  virtual ~QueryMailAddressByParamResponseBodyDataMailAddress() = default;
};
class QueryMailAddressByParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMailAddressByParamResponseBodyDataMailAddress>> mailAddress{};

  QueryMailAddressByParamResponseBodyData() {}

  explicit QueryMailAddressByParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailAddress) {
      vector<boost::any> temp1;
      for(auto item1:*mailAddress){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mailAddress"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mailAddress") != m.end() && !m["mailAddress"].empty()) {
      if (typeid(vector<boost::any>) == m["mailAddress"].type()) {
        vector<QueryMailAddressByParamResponseBodyDataMailAddress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mailAddress"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMailAddressByParamResponseBodyDataMailAddress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mailAddress = make_shared<vector<QueryMailAddressByParamResponseBodyDataMailAddress>>(expect1);
      }
    }
  }


  virtual ~QueryMailAddressByParamResponseBodyData() = default;
};
class QueryMailAddressByParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryMailAddressByParamResponseBodyData> data{};

  QueryMailAddressByParamResponseBody() {}

  explicit QueryMailAddressByParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryMailAddressByParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryMailAddressByParamResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryMailAddressByParamResponseBody() = default;
};
class QueryMailAddressByParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMailAddressByParamResponseBody> body{};

  QueryMailAddressByParamResponse() {}

  explicit QueryMailAddressByParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMailAddressByParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMailAddressByParamResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMailAddressByParamResponse() = default;
};
class QueryReceiverByParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> status{};

  QueryReceiverByParamRequest() {}

  explicit QueryReceiverByParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
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
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
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
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryReceiverByParamRequest() = default;
};
class QueryReceiverByParamResponseBodyDataReceiver : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> createTime{};
  shared_ptr<string> desc{};
  shared_ptr<string> receiverId{};
  shared_ptr<string> receiversAlias{};
  shared_ptr<string> receiversName{};
  shared_ptr<string> receiversStatus{};
  shared_ptr<long> utcCreateTime{};

  QueryReceiverByParamResponseBodyDataReceiver() {}

  explicit QueryReceiverByParamResponseBodyDataReceiver(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (receiverId) {
      res["ReceiverId"] = boost::any(*receiverId);
    }
    if (receiversAlias) {
      res["ReceiversAlias"] = boost::any(*receiversAlias);
    }
    if (receiversName) {
      res["ReceiversName"] = boost::any(*receiversName);
    }
    if (receiversStatus) {
      res["ReceiversStatus"] = boost::any(*receiversStatus);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("ReceiverId") != m.end() && !m["ReceiverId"].empty()) {
      receiverId = make_shared<string>(boost::any_cast<string>(m["ReceiverId"]));
    }
    if (m.find("ReceiversAlias") != m.end() && !m["ReceiversAlias"].empty()) {
      receiversAlias = make_shared<string>(boost::any_cast<string>(m["ReceiversAlias"]));
    }
    if (m.find("ReceiversName") != m.end() && !m["ReceiversName"].empty()) {
      receiversName = make_shared<string>(boost::any_cast<string>(m["ReceiversName"]));
    }
    if (m.find("ReceiversStatus") != m.end() && !m["ReceiversStatus"].empty()) {
      receiversStatus = make_shared<string>(boost::any_cast<string>(m["ReceiversStatus"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["UtcCreateTime"]));
    }
  }


  virtual ~QueryReceiverByParamResponseBodyDataReceiver() = default;
};
class QueryReceiverByParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryReceiverByParamResponseBodyDataReceiver>> receiver{};

  QueryReceiverByParamResponseBodyData() {}

  explicit QueryReceiverByParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receiver) {
      vector<boost::any> temp1;
      for(auto item1:*receiver){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["receiver"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("receiver") != m.end() && !m["receiver"].empty()) {
      if (typeid(vector<boost::any>) == m["receiver"].type()) {
        vector<QueryReceiverByParamResponseBodyDataReceiver> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["receiver"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryReceiverByParamResponseBodyDataReceiver model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        receiver = make_shared<vector<QueryReceiverByParamResponseBodyDataReceiver>>(expect1);
      }
    }
  }


  virtual ~QueryReceiverByParamResponseBodyData() = default;
};
class QueryReceiverByParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextStart{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryReceiverByParamResponseBodyData> data{};

  QueryReceiverByParamResponseBody() {}

  explicit QueryReceiverByParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextStart) {
      res["NextStart"] = boost::any(*nextStart);
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
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextStart") != m.end() && !m["NextStart"].empty()) {
      nextStart = make_shared<string>(boost::any_cast<string>(m["NextStart"]));
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryReceiverByParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryReceiverByParamResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryReceiverByParamResponseBody() = default;
};
class QueryReceiverByParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryReceiverByParamResponseBody> body{};

  QueryReceiverByParamResponse() {}

  explicit QueryReceiverByParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryReceiverByParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryReceiverByParamResponseBody>(model1);
      }
    }
  }


  virtual ~QueryReceiverByParamResponse() = default;
};
class QueryReceiverDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<string> nextStart{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> receiverId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryReceiverDetailRequest() {}

  explicit QueryReceiverDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (nextStart) {
      res["NextStart"] = boost::any(*nextStart);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (receiverId) {
      res["ReceiverId"] = boost::any(*receiverId);
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
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("NextStart") != m.end() && !m["NextStart"].empty()) {
      nextStart = make_shared<string>(boost::any_cast<string>(m["NextStart"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReceiverId") != m.end() && !m["ReceiverId"].empty()) {
      receiverId = make_shared<string>(boost::any_cast<string>(m["ReceiverId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryReceiverDetailRequest() = default;
};
class QueryReceiverDetailResponseBodyDataDetail : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> data{};
  shared_ptr<string> email{};
  shared_ptr<long> utcCreateTime{};

  QueryReceiverDetailResponseBodyDataDetail() {}

  explicit QueryReceiverDetailResponseBodyDataDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["UtcCreateTime"]));
    }
  }


  virtual ~QueryReceiverDetailResponseBodyDataDetail() = default;
};
class QueryReceiverDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryReceiverDetailResponseBodyDataDetail>> detail{};

  QueryReceiverDetailResponseBodyData() {}

  explicit QueryReceiverDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      vector<boost::any> temp1;
      for(auto item1:*detail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["detail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      if (typeid(vector<boost::any>) == m["detail"].type()) {
        vector<QueryReceiverDetailResponseBodyDataDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryReceiverDetailResponseBodyDataDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<QueryReceiverDetailResponseBodyDataDetail>>(expect1);
      }
    }
  }


  virtual ~QueryReceiverDetailResponseBodyData() = default;
};
class QueryReceiverDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataSchema{};
  shared_ptr<string> nextStart{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryReceiverDetailResponseBodyData> data{};

  QueryReceiverDetailResponseBody() {}

  explicit QueryReceiverDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSchema) {
      res["DataSchema"] = boost::any(*dataSchema);
    }
    if (nextStart) {
      res["NextStart"] = boost::any(*nextStart);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSchema") != m.end() && !m["DataSchema"].empty()) {
      dataSchema = make_shared<string>(boost::any_cast<string>(m["DataSchema"]));
    }
    if (m.find("NextStart") != m.end() && !m["NextStart"].empty()) {
      nextStart = make_shared<string>(boost::any_cast<string>(m["NextStart"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryReceiverDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryReceiverDetailResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryReceiverDetailResponseBody() = default;
};
class QueryReceiverDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryReceiverDetailResponseBody> body{};

  QueryReceiverDetailResponse() {}

  explicit QueryReceiverDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryReceiverDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryReceiverDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryReceiverDetailResponse() = default;
};
class QueryTagByParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryTagByParamRequest() {}

  explicit QueryTagByParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
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
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
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


  virtual ~QueryTagByParamRequest() = default;
};
class QueryTagByParamResponseBodyDataTag : public Darabonba::Model {
public:
  shared_ptr<string> tagDescription{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};

  QueryTagByParamResponseBodyDataTag() {}

  explicit QueryTagByParamResponseBodyDataTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDescription) {
      res["TagDescription"] = boost::any(*tagDescription);
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
    if (m.find("TagDescription") != m.end() && !m["TagDescription"].empty()) {
      tagDescription = make_shared<string>(boost::any_cast<string>(m["TagDescription"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~QueryTagByParamResponseBodyDataTag() = default;
};
class QueryTagByParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTagByParamResponseBodyDataTag>> tag{};

  QueryTagByParamResponseBodyData() {}

  explicit QueryTagByParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<QueryTagByParamResponseBodyDataTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTagByParamResponseBodyDataTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<QueryTagByParamResponseBodyDataTag>>(expect1);
      }
    }
  }


  virtual ~QueryTagByParamResponseBodyData() = default;
};
class QueryTagByParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryTagByParamResponseBodyData> data{};

  QueryTagByParamResponseBody() {}

  explicit QueryTagByParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryTagByParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryTagByParamResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryTagByParamResponseBody() = default;
};
class QueryTagByParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTagByParamResponseBody> body{};

  QueryTagByParamResponse() {}

  explicit QueryTagByParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTagByParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTagByParamResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTagByParamResponse() = default;
};
class QueryTaskByParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> status{};

  QueryTaskByParamRequest() {}

  explicit QueryTaskByParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
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
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
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
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryTaskByParamRequest() = default;
};
class QueryTaskByParamResponseBodyDataTask : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> receiversName{};
  shared_ptr<string> requestCount{};
  shared_ptr<string> tagName{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> templateName{};
  shared_ptr<long> utcCreateTime{};

  QueryTaskByParamResponseBodyDataTask() {}

  explicit QueryTaskByParamResponseBodyDataTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (receiversName) {
      res["ReceiversName"] = boost::any(*receiversName);
    }
    if (requestCount) {
      res["RequestCount"] = boost::any(*requestCount);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (utcCreateTime) {
      res["UtcCreateTime"] = boost::any(*utcCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ReceiversName") != m.end() && !m["ReceiversName"].empty()) {
      receiversName = make_shared<string>(boost::any_cast<string>(m["ReceiversName"]));
    }
    if (m.find("RequestCount") != m.end() && !m["RequestCount"].empty()) {
      requestCount = make_shared<string>(boost::any_cast<string>(m["RequestCount"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UtcCreateTime") != m.end() && !m["UtcCreateTime"].empty()) {
      utcCreateTime = make_shared<long>(boost::any_cast<long>(m["UtcCreateTime"]));
    }
  }


  virtual ~QueryTaskByParamResponseBodyDataTask() = default;
};
class QueryTaskByParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTaskByParamResponseBodyDataTask>> task{};

  QueryTaskByParamResponseBodyData() {}

  explicit QueryTaskByParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("task") != m.end() && !m["task"].empty()) {
      if (typeid(vector<boost::any>) == m["task"].type()) {
        vector<QueryTaskByParamResponseBodyDataTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTaskByParamResponseBodyDataTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<QueryTaskByParamResponseBodyDataTask>>(expect1);
      }
    }
  }


  virtual ~QueryTaskByParamResponseBodyData() = default;
};
class QueryTaskByParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryTaskByParamResponseBodyData> data{};

  QueryTaskByParamResponseBody() {}

  explicit QueryTaskByParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryTaskByParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryTaskByParamResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryTaskByParamResponseBody() = default;
};
class QueryTaskByParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTaskByParamResponseBody> body{};

  QueryTaskByParamResponse() {}

  explicit QueryTaskByParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTaskByParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTaskByParamResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTaskByParamResponse() = default;
};
class QueryTemplateByParamRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromType{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> status{};

  QueryTemplateByParamRequest() {}

  explicit QueryTemplateByParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromType) {
      res["FromType"] = boost::any(*fromType);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
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
    if (m.find("FromType") != m.end() && !m["FromType"].empty()) {
      fromType = make_shared<long>(boost::any_cast<long>(m["FromType"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
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
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryTemplateByParamRequest() = default;
};
class QueryTemplateByParamResponseBodyDataTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> smsStatus{};
  shared_ptr<long> smsTemplateCode{};
  shared_ptr<long> smsrejectinfo{};
  shared_ptr<string> templateComment{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateStatus{};
  shared_ptr<long> templateType{};
  shared_ptr<long> utcCreatetime{};

  QueryTemplateByParamResponseBodyDataTemplate() {}

  explicit QueryTemplateByParamResponseBodyDataTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (smsTemplateCode) {
      res["SmsTemplateCode"] = boost::any(*smsTemplateCode);
    }
    if (smsrejectinfo) {
      res["Smsrejectinfo"] = boost::any(*smsrejectinfo);
    }
    if (templateComment) {
      res["TemplateComment"] = boost::any(*templateComment);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (utcCreatetime) {
      res["UtcCreatetime"] = boost::any(*utcCreatetime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<long>(boost::any_cast<long>(m["SmsStatus"]));
    }
    if (m.find("SmsTemplateCode") != m.end() && !m["SmsTemplateCode"].empty()) {
      smsTemplateCode = make_shared<long>(boost::any_cast<long>(m["SmsTemplateCode"]));
    }
    if (m.find("Smsrejectinfo") != m.end() && !m["Smsrejectinfo"].empty()) {
      smsrejectinfo = make_shared<long>(boost::any_cast<long>(m["Smsrejectinfo"]));
    }
    if (m.find("TemplateComment") != m.end() && !m["TemplateComment"].empty()) {
      templateComment = make_shared<string>(boost::any_cast<string>(m["TemplateComment"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<string>(boost::any_cast<string>(m["TemplateStatus"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
    if (m.find("UtcCreatetime") != m.end() && !m["UtcCreatetime"].empty()) {
      utcCreatetime = make_shared<long>(boost::any_cast<long>(m["UtcCreatetime"]));
    }
  }


  virtual ~QueryTemplateByParamResponseBodyDataTemplate() = default;
};
class QueryTemplateByParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTemplateByParamResponseBodyDataTemplate>> template_{};

  QueryTemplateByParamResponseBodyData() {}

  explicit QueryTemplateByParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (template_) {
      vector<boost::any> temp1;
      for(auto item1:*template_){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["template"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("template") != m.end() && !m["template"].empty()) {
      if (typeid(vector<boost::any>) == m["template"].type()) {
        vector<QueryTemplateByParamResponseBodyDataTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["template"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTemplateByParamResponseBodyDataTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        template_ = make_shared<vector<QueryTemplateByParamResponseBodyDataTemplate>>(expect1);
      }
    }
  }


  virtual ~QueryTemplateByParamResponseBodyData() = default;
};
class QueryTemplateByParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<QueryTemplateByParamResponseBodyData> data{};

  QueryTemplateByParamResponseBody() {}

  explicit QueryTemplateByParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryTemplateByParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryTemplateByParamResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryTemplateByParamResponseBody() = default;
};
class QueryTemplateByParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTemplateByParamResponseBody> body{};

  QueryTemplateByParamResponse() {}

  explicit QueryTemplateByParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTemplateByParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTemplateByParamResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTemplateByParamResponse() = default;
};
class SaveReceiverDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> receiverId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  SaveReceiverDetailRequest() {}

  explicit SaveReceiverDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (receiverId) {
      res["ReceiverId"] = boost::any(*receiverId);
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
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReceiverId") != m.end() && !m["ReceiverId"].empty()) {
      receiverId = make_shared<string>(boost::any_cast<string>(m["ReceiverId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~SaveReceiverDetailRequest() = default;
};
class SaveReceiverDetailResponseBodyDataDetail : public Darabonba::Model {
public:
  shared_ptr<string> email{};

  SaveReceiverDetailResponseBodyDataDetail() {}

  explicit SaveReceiverDetailResponseBodyDataDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
  }


  virtual ~SaveReceiverDetailResponseBodyDataDetail() = default;
};
class SaveReceiverDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SaveReceiverDetailResponseBodyDataDetail>> detail{};

  SaveReceiverDetailResponseBodyData() {}

  explicit SaveReceiverDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      vector<boost::any> temp1;
      for(auto item1:*detail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(vector<boost::any>) == m["Detail"].type()) {
        vector<SaveReceiverDetailResponseBodyDataDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveReceiverDetailResponseBodyDataDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<SaveReceiverDetailResponseBodyDataDetail>>(expect1);
      }
    }
  }


  virtual ~SaveReceiverDetailResponseBodyData() = default;
};
class SaveReceiverDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<SaveReceiverDetailResponseBodyData> data{};
  shared_ptr<long> errorCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> successCount{};

  SaveReceiverDetailResponseBody() {}

  explicit SaveReceiverDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCount) {
      res["ErrorCount"] = boost::any(*errorCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SaveReceiverDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SaveReceiverDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCount") != m.end() && !m["ErrorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["ErrorCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
  }


  virtual ~SaveReceiverDetailResponseBody() = default;
};
class SaveReceiverDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveReceiverDetailResponseBody> body{};

  SaveReceiverDetailResponse() {}

  explicit SaveReceiverDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveReceiverDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveReceiverDetailResponseBody>(model1);
      }
    }
  }


  virtual ~SaveReceiverDetailResponse() = default;
};
class SenderStatisticsByTagNameAndBatchIDRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> tagName{};

  SenderStatisticsByTagNameAndBatchIDRequest() {}

  explicit SenderStatisticsByTagNameAndBatchIDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~SenderStatisticsByTagNameAndBatchIDRequest() = default;
};
class SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> faildCount{};
  shared_ptr<string> requestCount{};
  shared_ptr<string> succeededPercent{};
  shared_ptr<string> successCount{};
  shared_ptr<string> unavailableCount{};
  shared_ptr<string> unavailablePercent{};

  SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat() {}

  explicit SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (faildCount) {
      res["faildCount"] = boost::any(*faildCount);
    }
    if (requestCount) {
      res["requestCount"] = boost::any(*requestCount);
    }
    if (succeededPercent) {
      res["succeededPercent"] = boost::any(*succeededPercent);
    }
    if (successCount) {
      res["successCount"] = boost::any(*successCount);
    }
    if (unavailableCount) {
      res["unavailableCount"] = boost::any(*unavailableCount);
    }
    if (unavailablePercent) {
      res["unavailablePercent"] = boost::any(*unavailablePercent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("faildCount") != m.end() && !m["faildCount"].empty()) {
      faildCount = make_shared<string>(boost::any_cast<string>(m["faildCount"]));
    }
    if (m.find("requestCount") != m.end() && !m["requestCount"].empty()) {
      requestCount = make_shared<string>(boost::any_cast<string>(m["requestCount"]));
    }
    if (m.find("succeededPercent") != m.end() && !m["succeededPercent"].empty()) {
      succeededPercent = make_shared<string>(boost::any_cast<string>(m["succeededPercent"]));
    }
    if (m.find("successCount") != m.end() && !m["successCount"].empty()) {
      successCount = make_shared<string>(boost::any_cast<string>(m["successCount"]));
    }
    if (m.find("unavailableCount") != m.end() && !m["unavailableCount"].empty()) {
      unavailableCount = make_shared<string>(boost::any_cast<string>(m["unavailableCount"]));
    }
    if (m.find("unavailablePercent") != m.end() && !m["unavailablePercent"].empty()) {
      unavailablePercent = make_shared<string>(boost::any_cast<string>(m["unavailablePercent"]));
    }
  }


  virtual ~SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat() = default;
};
class SenderStatisticsByTagNameAndBatchIDResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat>> stat{};

  SenderStatisticsByTagNameAndBatchIDResponseBodyData() {}

  explicit SenderStatisticsByTagNameAndBatchIDResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stat) {
      vector<boost::any> temp1;
      for(auto item1:*stat){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stat"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("stat") != m.end() && !m["stat"].empty()) {
      if (typeid(vector<boost::any>) == m["stat"].type()) {
        vector<SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stat"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stat = make_shared<vector<SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat>>(expect1);
      }
    }
  }


  virtual ~SenderStatisticsByTagNameAndBatchIDResponseBodyData() = default;
};
class SenderStatisticsByTagNameAndBatchIDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<SenderStatisticsByTagNameAndBatchIDResponseBodyData> data{};

  SenderStatisticsByTagNameAndBatchIDResponseBody() {}

  explicit SenderStatisticsByTagNameAndBatchIDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SenderStatisticsByTagNameAndBatchIDResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SenderStatisticsByTagNameAndBatchIDResponseBodyData>(model1);
      }
    }
  }


  virtual ~SenderStatisticsByTagNameAndBatchIDResponseBody() = default;
};
class SenderStatisticsByTagNameAndBatchIDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SenderStatisticsByTagNameAndBatchIDResponseBody> body{};

  SenderStatisticsByTagNameAndBatchIDResponse() {}

  explicit SenderStatisticsByTagNameAndBatchIDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SenderStatisticsByTagNameAndBatchIDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SenderStatisticsByTagNameAndBatchIDResponseBody>(model1);
      }
    }
  }


  virtual ~SenderStatisticsByTagNameAndBatchIDResponse() = default;
};
class SenderStatisticsDetailByParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> length{};
  shared_ptr<string> nextStart{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> tagName{};
  shared_ptr<string> toAddress{};

  SenderStatisticsDetailByParamRequest() {}

  explicit SenderStatisticsDetailByParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (length) {
      res["Length"] = boost::any(*length);
    }
    if (nextStart) {
      res["NextStart"] = boost::any(*nextStart);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (toAddress) {
      res["ToAddress"] = boost::any(*toAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["Length"]));
    }
    if (m.find("NextStart") != m.end() && !m["NextStart"].empty()) {
      nextStart = make_shared<string>(boost::any_cast<string>(m["NextStart"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("ToAddress") != m.end() && !m["ToAddress"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["ToAddress"]));
    }
  }


  virtual ~SenderStatisticsDetailByParamRequest() = default;
};
class SenderStatisticsDetailByParamResponseBodyDataMailDetail : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> errorClassification{};
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> message{};
  shared_ptr<long> status{};
  shared_ptr<string> subject{};
  shared_ptr<string> toAddress{};
  shared_ptr<string> utcLastUpdateTime{};

  SenderStatisticsDetailByParamResponseBodyDataMailDetail() {}

  explicit SenderStatisticsDetailByParamResponseBodyDataMailDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (errorClassification) {
      res["ErrorClassification"] = boost::any(*errorClassification);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (toAddress) {
      res["ToAddress"] = boost::any(*toAddress);
    }
    if (utcLastUpdateTime) {
      res["UtcLastUpdateTime"] = boost::any(*utcLastUpdateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("ErrorClassification") != m.end() && !m["ErrorClassification"].empty()) {
      errorClassification = make_shared<string>(boost::any_cast<string>(m["ErrorClassification"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["LastUpdateTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("ToAddress") != m.end() && !m["ToAddress"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["ToAddress"]));
    }
    if (m.find("UtcLastUpdateTime") != m.end() && !m["UtcLastUpdateTime"].empty()) {
      utcLastUpdateTime = make_shared<string>(boost::any_cast<string>(m["UtcLastUpdateTime"]));
    }
  }


  virtual ~SenderStatisticsDetailByParamResponseBodyDataMailDetail() = default;
};
class SenderStatisticsDetailByParamResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SenderStatisticsDetailByParamResponseBodyDataMailDetail>> mailDetail{};

  SenderStatisticsDetailByParamResponseBodyData() {}

  explicit SenderStatisticsDetailByParamResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailDetail) {
      vector<boost::any> temp1;
      for(auto item1:*mailDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mailDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mailDetail") != m.end() && !m["mailDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["mailDetail"].type()) {
        vector<SenderStatisticsDetailByParamResponseBodyDataMailDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mailDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SenderStatisticsDetailByParamResponseBodyDataMailDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mailDetail = make_shared<vector<SenderStatisticsDetailByParamResponseBodyDataMailDetail>>(expect1);
      }
    }
  }


  virtual ~SenderStatisticsDetailByParamResponseBodyData() = default;
};
class SenderStatisticsDetailByParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> nextStart{};
  shared_ptr<string> requestId{};
  shared_ptr<SenderStatisticsDetailByParamResponseBodyData> data{};

  SenderStatisticsDetailByParamResponseBody() {}

  explicit SenderStatisticsDetailByParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextStart) {
      res["NextStart"] = boost::any(*nextStart);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextStart") != m.end() && !m["NextStart"].empty()) {
      nextStart = make_shared<long>(boost::any_cast<long>(m["NextStart"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SenderStatisticsDetailByParamResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SenderStatisticsDetailByParamResponseBodyData>(model1);
      }
    }
  }


  virtual ~SenderStatisticsDetailByParamResponseBody() = default;
};
class SenderStatisticsDetailByParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SenderStatisticsDetailByParamResponseBody> body{};

  SenderStatisticsDetailByParamResponse() {}

  explicit SenderStatisticsDetailByParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SenderStatisticsDetailByParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SenderStatisticsDetailByParamResponseBody>(model1);
      }
    }
  }


  virtual ~SenderStatisticsDetailByParamResponse() = default;
};
class SingleSendMailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> addressType{};
  shared_ptr<string> clickTrace{};
  shared_ptr<string> fromAlias{};
  shared_ptr<string> htmlBody{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> replyAddress{};
  shared_ptr<string> replyAddressAlias{};
  shared_ptr<bool> replyToAddress{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subject{};
  shared_ptr<string> tagName{};
  shared_ptr<string> textBody{};
  shared_ptr<string> toAddress{};
  shared_ptr<string> unSubscribeFilterLevel{};
  shared_ptr<string> unSubscribeLinkType{};

  SingleSendMailRequest() {}

  explicit SingleSendMailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (clickTrace) {
      res["ClickTrace"] = boost::any(*clickTrace);
    }
    if (fromAlias) {
      res["FromAlias"] = boost::any(*fromAlias);
    }
    if (htmlBody) {
      res["HtmlBody"] = boost::any(*htmlBody);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (replyAddress) {
      res["ReplyAddress"] = boost::any(*replyAddress);
    }
    if (replyAddressAlias) {
      res["ReplyAddressAlias"] = boost::any(*replyAddressAlias);
    }
    if (replyToAddress) {
      res["ReplyToAddress"] = boost::any(*replyToAddress);
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
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (textBody) {
      res["TextBody"] = boost::any(*textBody);
    }
    if (toAddress) {
      res["ToAddress"] = boost::any(*toAddress);
    }
    if (unSubscribeFilterLevel) {
      res["UnSubscribeFilterLevel"] = boost::any(*unSubscribeFilterLevel);
    }
    if (unSubscribeLinkType) {
      res["UnSubscribeLinkType"] = boost::any(*unSubscribeLinkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<long>(boost::any_cast<long>(m["AddressType"]));
    }
    if (m.find("ClickTrace") != m.end() && !m["ClickTrace"].empty()) {
      clickTrace = make_shared<string>(boost::any_cast<string>(m["ClickTrace"]));
    }
    if (m.find("FromAlias") != m.end() && !m["FromAlias"].empty()) {
      fromAlias = make_shared<string>(boost::any_cast<string>(m["FromAlias"]));
    }
    if (m.find("HtmlBody") != m.end() && !m["HtmlBody"].empty()) {
      htmlBody = make_shared<string>(boost::any_cast<string>(m["HtmlBody"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReplyAddress") != m.end() && !m["ReplyAddress"].empty()) {
      replyAddress = make_shared<string>(boost::any_cast<string>(m["ReplyAddress"]));
    }
    if (m.find("ReplyAddressAlias") != m.end() && !m["ReplyAddressAlias"].empty()) {
      replyAddressAlias = make_shared<string>(boost::any_cast<string>(m["ReplyAddressAlias"]));
    }
    if (m.find("ReplyToAddress") != m.end() && !m["ReplyToAddress"].empty()) {
      replyToAddress = make_shared<bool>(boost::any_cast<bool>(m["ReplyToAddress"]));
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
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TextBody") != m.end() && !m["TextBody"].empty()) {
      textBody = make_shared<string>(boost::any_cast<string>(m["TextBody"]));
    }
    if (m.find("ToAddress") != m.end() && !m["ToAddress"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["ToAddress"]));
    }
    if (m.find("UnSubscribeFilterLevel") != m.end() && !m["UnSubscribeFilterLevel"].empty()) {
      unSubscribeFilterLevel = make_shared<string>(boost::any_cast<string>(m["UnSubscribeFilterLevel"]));
    }
    if (m.find("UnSubscribeLinkType") != m.end() && !m["UnSubscribeLinkType"].empty()) {
      unSubscribeLinkType = make_shared<string>(boost::any_cast<string>(m["UnSubscribeLinkType"]));
    }
  }


  virtual ~SingleSendMailRequest() = default;
};
class SingleSendMailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> requestId{};

  SingleSendMailResponseBody() {}

  explicit SingleSendMailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SingleSendMailResponseBody() = default;
};
class SingleSendMailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SingleSendMailResponseBody> body{};

  SingleSendMailResponse() {}

  explicit SingleSendMailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SingleSendMailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SingleSendMailResponseBody>(model1);
      }
    }
  }


  virtual ~SingleSendMailResponse() = default;
};
class SingleSendMailV2RequestHtmlBodyPlaceHolders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> placeHolders{};
  shared_ptr<string> toAddress{};

  SingleSendMailV2RequestHtmlBodyPlaceHolders() {}

  explicit SingleSendMailV2RequestHtmlBodyPlaceHolders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (placeHolders) {
      res["PlaceHolders"] = boost::any(*placeHolders);
    }
    if (toAddress) {
      res["ToAddress"] = boost::any(*toAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlaceHolders") != m.end() && !m["PlaceHolders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PlaceHolders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      placeHolders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ToAddress") != m.end() && !m["ToAddress"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["ToAddress"]));
    }
  }


  virtual ~SingleSendMailV2RequestHtmlBodyPlaceHolders() = default;
};
class SingleSendMailV2Request : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> addressType{};
  shared_ptr<string> clickTrace{};
  shared_ptr<string> fromAlias{};
  shared_ptr<string> htmlBody{};
  shared_ptr<vector<SingleSendMailV2RequestHtmlBodyPlaceHolders>> htmlBodyPlaceHolders{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> replyAddress{};
  shared_ptr<string> replyAddressAlias{};
  shared_ptr<bool> replyToAddress{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subject{};
  shared_ptr<string> tagName{};
  shared_ptr<string> textBody{};
  shared_ptr<string> toAddress{};

  SingleSendMailV2Request() {}

  explicit SingleSendMailV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (clickTrace) {
      res["ClickTrace"] = boost::any(*clickTrace);
    }
    if (fromAlias) {
      res["FromAlias"] = boost::any(*fromAlias);
    }
    if (htmlBody) {
      res["HtmlBody"] = boost::any(*htmlBody);
    }
    if (htmlBodyPlaceHolders) {
      vector<boost::any> temp1;
      for(auto item1:*htmlBodyPlaceHolders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HtmlBodyPlaceHolders"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (replyAddress) {
      res["ReplyAddress"] = boost::any(*replyAddress);
    }
    if (replyAddressAlias) {
      res["ReplyAddressAlias"] = boost::any(*replyAddressAlias);
    }
    if (replyToAddress) {
      res["ReplyToAddress"] = boost::any(*replyToAddress);
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
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (textBody) {
      res["TextBody"] = boost::any(*textBody);
    }
    if (toAddress) {
      res["ToAddress"] = boost::any(*toAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<long>(boost::any_cast<long>(m["AddressType"]));
    }
    if (m.find("ClickTrace") != m.end() && !m["ClickTrace"].empty()) {
      clickTrace = make_shared<string>(boost::any_cast<string>(m["ClickTrace"]));
    }
    if (m.find("FromAlias") != m.end() && !m["FromAlias"].empty()) {
      fromAlias = make_shared<string>(boost::any_cast<string>(m["FromAlias"]));
    }
    if (m.find("HtmlBody") != m.end() && !m["HtmlBody"].empty()) {
      htmlBody = make_shared<string>(boost::any_cast<string>(m["HtmlBody"]));
    }
    if (m.find("HtmlBodyPlaceHolders") != m.end() && !m["HtmlBodyPlaceHolders"].empty()) {
      if (typeid(vector<boost::any>) == m["HtmlBodyPlaceHolders"].type()) {
        vector<SingleSendMailV2RequestHtmlBodyPlaceHolders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HtmlBodyPlaceHolders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SingleSendMailV2RequestHtmlBodyPlaceHolders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        htmlBodyPlaceHolders = make_shared<vector<SingleSendMailV2RequestHtmlBodyPlaceHolders>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReplyAddress") != m.end() && !m["ReplyAddress"].empty()) {
      replyAddress = make_shared<string>(boost::any_cast<string>(m["ReplyAddress"]));
    }
    if (m.find("ReplyAddressAlias") != m.end() && !m["ReplyAddressAlias"].empty()) {
      replyAddressAlias = make_shared<string>(boost::any_cast<string>(m["ReplyAddressAlias"]));
    }
    if (m.find("ReplyToAddress") != m.end() && !m["ReplyToAddress"].empty()) {
      replyToAddress = make_shared<bool>(boost::any_cast<bool>(m["ReplyToAddress"]));
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
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TextBody") != m.end() && !m["TextBody"].empty()) {
      textBody = make_shared<string>(boost::any_cast<string>(m["TextBody"]));
    }
    if (m.find("ToAddress") != m.end() && !m["ToAddress"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["ToAddress"]));
    }
  }


  virtual ~SingleSendMailV2Request() = default;
};
class SingleSendMailV2ShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> addressType{};
  shared_ptr<string> clickTrace{};
  shared_ptr<string> fromAlias{};
  shared_ptr<string> htmlBody{};
  shared_ptr<string> htmlBodyPlaceHoldersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> replyAddress{};
  shared_ptr<string> replyAddressAlias{};
  shared_ptr<bool> replyToAddress{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subject{};
  shared_ptr<string> tagName{};
  shared_ptr<string> textBody{};
  shared_ptr<string> toAddress{};

  SingleSendMailV2ShrinkRequest() {}

  explicit SingleSendMailV2ShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (clickTrace) {
      res["ClickTrace"] = boost::any(*clickTrace);
    }
    if (fromAlias) {
      res["FromAlias"] = boost::any(*fromAlias);
    }
    if (htmlBody) {
      res["HtmlBody"] = boost::any(*htmlBody);
    }
    if (htmlBodyPlaceHoldersShrink) {
      res["HtmlBodyPlaceHolders"] = boost::any(*htmlBodyPlaceHoldersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (replyAddress) {
      res["ReplyAddress"] = boost::any(*replyAddress);
    }
    if (replyAddressAlias) {
      res["ReplyAddressAlias"] = boost::any(*replyAddressAlias);
    }
    if (replyToAddress) {
      res["ReplyToAddress"] = boost::any(*replyToAddress);
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
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (textBody) {
      res["TextBody"] = boost::any(*textBody);
    }
    if (toAddress) {
      res["ToAddress"] = boost::any(*toAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<long>(boost::any_cast<long>(m["AddressType"]));
    }
    if (m.find("ClickTrace") != m.end() && !m["ClickTrace"].empty()) {
      clickTrace = make_shared<string>(boost::any_cast<string>(m["ClickTrace"]));
    }
    if (m.find("FromAlias") != m.end() && !m["FromAlias"].empty()) {
      fromAlias = make_shared<string>(boost::any_cast<string>(m["FromAlias"]));
    }
    if (m.find("HtmlBody") != m.end() && !m["HtmlBody"].empty()) {
      htmlBody = make_shared<string>(boost::any_cast<string>(m["HtmlBody"]));
    }
    if (m.find("HtmlBodyPlaceHolders") != m.end() && !m["HtmlBodyPlaceHolders"].empty()) {
      htmlBodyPlaceHoldersShrink = make_shared<string>(boost::any_cast<string>(m["HtmlBodyPlaceHolders"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReplyAddress") != m.end() && !m["ReplyAddress"].empty()) {
      replyAddress = make_shared<string>(boost::any_cast<string>(m["ReplyAddress"]));
    }
    if (m.find("ReplyAddressAlias") != m.end() && !m["ReplyAddressAlias"].empty()) {
      replyAddressAlias = make_shared<string>(boost::any_cast<string>(m["ReplyAddressAlias"]));
    }
    if (m.find("ReplyToAddress") != m.end() && !m["ReplyToAddress"].empty()) {
      replyToAddress = make_shared<bool>(boost::any_cast<bool>(m["ReplyToAddress"]));
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
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TextBody") != m.end() && !m["TextBody"].empty()) {
      textBody = make_shared<string>(boost::any_cast<string>(m["TextBody"]));
    }
    if (m.find("ToAddress") != m.end() && !m["ToAddress"].empty()) {
      toAddress = make_shared<string>(boost::any_cast<string>(m["ToAddress"]));
    }
  }


  virtual ~SingleSendMailV2ShrinkRequest() = default;
};
class SingleSendMailV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> requestId{};

  SingleSendMailV2ResponseBody() {}

  explicit SingleSendMailV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SingleSendMailV2ResponseBody() = default;
};
class SingleSendMailV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SingleSendMailV2ResponseBody> body{};

  SingleSendMailV2Response() {}

  explicit SingleSendMailV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SingleSendMailV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SingleSendMailV2ResponseBody>(model1);
      }
    }
  }


  virtual ~SingleSendMailV2Response() = default;
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
  AddIpfilterResponse addIpfilterWithOptions(shared_ptr<AddIpfilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddIpfilterResponse addIpfilter(shared_ptr<AddIpfilterRequest> request);
  BatchSendMailResponse batchSendMailWithOptions(shared_ptr<BatchSendMailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSendMailResponse batchSendMail(shared_ptr<BatchSendMailRequest> request);
  CheckDomainResponse checkDomainWithOptions(shared_ptr<CheckDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDomainResponse checkDomain(shared_ptr<CheckDomainRequest> request);
  CheckDomainDnsResponse checkDomainDnsWithOptions(shared_ptr<CheckDomainDnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDomainDnsResponse checkDomainDns(shared_ptr<CheckDomainDnsRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateMailAddressResponse createMailAddressWithOptions(shared_ptr<CreateMailAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMailAddressResponse createMailAddress(shared_ptr<CreateMailAddressRequest> request);
  CreateReceiverResponse createReceiverWithOptions(shared_ptr<CreateReceiverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReceiverResponse createReceiver(shared_ptr<CreateReceiverRequest> request);
  CreateTagResponse createTagWithOptions(shared_ptr<CreateTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTagResponse createTag(shared_ptr<CreateTagRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<DeleteDomainRequest> request);
  DeleteMailAddressResponse deleteMailAddressWithOptions(shared_ptr<DeleteMailAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMailAddressResponse deleteMailAddress(shared_ptr<DeleteMailAddressRequest> request);
  DeleteReceiverResponse deleteReceiverWithOptions(shared_ptr<DeleteReceiverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteReceiverResponse deleteReceiver(shared_ptr<DeleteReceiverRequest> request);
  DeleteReceiverDetailResponse deleteReceiverDetailWithOptions(shared_ptr<DeleteReceiverDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteReceiverDetailResponse deleteReceiverDetail(shared_ptr<DeleteReceiverDetailRequest> request);
  DeleteTagResponse deleteTagWithOptions(shared_ptr<DeleteTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTagResponse deleteTag(shared_ptr<DeleteTagRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<DeleteTemplateRequest> request);
  DescAccountSummaryResponse descAccountSummaryWithOptions(shared_ptr<DescAccountSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescAccountSummaryResponse descAccountSummary(shared_ptr<DescAccountSummaryRequest> request);
  DescDomainResponse descDomainWithOptions(shared_ptr<DescDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescDomainResponse descDomain(shared_ptr<DescDomainRequest> request);
  DescTemplateResponse descTemplateWithOptions(shared_ptr<DescTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescTemplateResponse descTemplate(shared_ptr<DescTemplateRequest> request);
  GetAccountListResponse getAccountListWithOptions(shared_ptr<GetAccountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountListResponse getAccountList(shared_ptr<GetAccountListRequest> request);
  GetMailAddressMsgCallBackUrlResponse getMailAddressMsgCallBackUrlWithOptions(shared_ptr<GetMailAddressMsgCallBackUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMailAddressMsgCallBackUrlResponse getMailAddressMsgCallBackUrl(shared_ptr<GetMailAddressMsgCallBackUrlRequest> request);
  GetTrackListResponse getTrackListWithOptions(shared_ptr<GetTrackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrackListResponse getTrackList(shared_ptr<GetTrackListRequest> request);
  ModifyMailAddressResponse modifyMailAddressWithOptions(shared_ptr<ModifyMailAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMailAddressResponse modifyMailAddress(shared_ptr<ModifyMailAddressRequest> request);
  ModifyPWByDomainResponse modifyPWByDomainWithOptions(shared_ptr<ModifyPWByDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPWByDomainResponse modifyPWByDomain(shared_ptr<ModifyPWByDomainRequest> request);
  ModifyTagResponse modifyTagWithOptions(shared_ptr<ModifyTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTagResponse modifyTag(shared_ptr<ModifyTagRequest> request);
  ModifyTemplateResponse modifyTemplateWithOptions(shared_ptr<ModifyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTemplateResponse modifyTemplate(shared_ptr<ModifyTemplateRequest> request);
  QueryDomainByParamResponse queryDomainByParamWithOptions(shared_ptr<QueryDomainByParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDomainByParamResponse queryDomainByParam(shared_ptr<QueryDomainByParamRequest> request);
  QueryInvalidAddressResponse queryInvalidAddressWithOptions(shared_ptr<QueryInvalidAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInvalidAddressResponse queryInvalidAddress(shared_ptr<QueryInvalidAddressRequest> request);
  QueryMailAddressByParamResponse queryMailAddressByParamWithOptions(shared_ptr<QueryMailAddressByParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMailAddressByParamResponse queryMailAddressByParam(shared_ptr<QueryMailAddressByParamRequest> request);
  QueryReceiverByParamResponse queryReceiverByParamWithOptions(shared_ptr<QueryReceiverByParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryReceiverByParamResponse queryReceiverByParam(shared_ptr<QueryReceiverByParamRequest> request);
  QueryReceiverDetailResponse queryReceiverDetailWithOptions(shared_ptr<QueryReceiverDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryReceiverDetailResponse queryReceiverDetail(shared_ptr<QueryReceiverDetailRequest> request);
  QueryTagByParamResponse queryTagByParamWithOptions(shared_ptr<QueryTagByParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTagByParamResponse queryTagByParam(shared_ptr<QueryTagByParamRequest> request);
  QueryTaskByParamResponse queryTaskByParamWithOptions(shared_ptr<QueryTaskByParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTaskByParamResponse queryTaskByParam(shared_ptr<QueryTaskByParamRequest> request);
  QueryTemplateByParamResponse queryTemplateByParamWithOptions(shared_ptr<QueryTemplateByParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTemplateByParamResponse queryTemplateByParam(shared_ptr<QueryTemplateByParamRequest> request);
  SaveReceiverDetailResponse saveReceiverDetailWithOptions(shared_ptr<SaveReceiverDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveReceiverDetailResponse saveReceiverDetail(shared_ptr<SaveReceiverDetailRequest> request);
  SenderStatisticsByTagNameAndBatchIDResponse senderStatisticsByTagNameAndBatchIDWithOptions(shared_ptr<SenderStatisticsByTagNameAndBatchIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SenderStatisticsByTagNameAndBatchIDResponse senderStatisticsByTagNameAndBatchID(shared_ptr<SenderStatisticsByTagNameAndBatchIDRequest> request);
  SenderStatisticsDetailByParamResponse senderStatisticsDetailByParamWithOptions(shared_ptr<SenderStatisticsDetailByParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SenderStatisticsDetailByParamResponse senderStatisticsDetailByParam(shared_ptr<SenderStatisticsDetailByParamRequest> request);
  SingleSendMailResponse singleSendMailWithOptions(shared_ptr<SingleSendMailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SingleSendMailResponse singleSendMail(shared_ptr<SingleSendMailRequest> request);
  SingleSendMailV2Response singleSendMailV2WithOptions(shared_ptr<SingleSendMailV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SingleSendMailV2Response singleSendMailV2(shared_ptr<SingleSendMailV2Request> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dm20170622

#endif
