// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SCDN20171115_H_
#define ALIBABACLOUD_SCDN20171115_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Scdn20171115 {
class AddScdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sources{};
  shared_ptr<string> checkUrl{};
  shared_ptr<string> scope{};

  AddScdnDomainRequest() {}

  explicit AddScdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (checkUrl) {
      res["CheckUrl"] = boost::any(*checkUrl);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("CheckUrl") != m.end() && !m["CheckUrl"].empty()) {
      checkUrl = make_shared<string>(boost::any_cast<string>(m["CheckUrl"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~AddScdnDomainRequest() = default;
};
class AddScdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddScdnDomainResponseBody() {}

  explicit AddScdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddScdnDomainResponseBody() = default;
};
class AddScdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddScdnDomainResponseBody> body{};

  AddScdnDomainResponse() {}

  explicit AddScdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddScdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddScdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~AddScdnDomainResponse() = default;
};
class BatchDeleteScdnDomainConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainNames{};
  shared_ptr<string> functionNames{};

  BatchDeleteScdnDomainConfigsRequest() {}

  explicit BatchDeleteScdnDomainConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (functionNames) {
      res["FunctionNames"] = boost::any(*functionNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      domainNames = make_shared<string>(boost::any_cast<string>(m["DomainNames"]));
    }
    if (m.find("FunctionNames") != m.end() && !m["FunctionNames"].empty()) {
      functionNames = make_shared<string>(boost::any_cast<string>(m["FunctionNames"]));
    }
  }


  virtual ~BatchDeleteScdnDomainConfigsRequest() = default;
};
class BatchDeleteScdnDomainConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchDeleteScdnDomainConfigsResponseBody() {}

  explicit BatchDeleteScdnDomainConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchDeleteScdnDomainConfigsResponseBody() = default;
};
class BatchDeleteScdnDomainConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchDeleteScdnDomainConfigsResponseBody> body{};

  BatchDeleteScdnDomainConfigsResponse() {}

  explicit BatchDeleteScdnDomainConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteScdnDomainConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteScdnDomainConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteScdnDomainConfigsResponse() = default;
};
class BatchSetScdnDomainConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainNames{};
  shared_ptr<string> functions{};

  BatchSetScdnDomainConfigsRequest() {}

  explicit BatchSetScdnDomainConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (functions) {
      res["Functions"] = boost::any(*functions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      domainNames = make_shared<string>(boost::any_cast<string>(m["DomainNames"]));
    }
    if (m.find("Functions") != m.end() && !m["Functions"].empty()) {
      functions = make_shared<string>(boost::any_cast<string>(m["Functions"]));
    }
  }


  virtual ~BatchSetScdnDomainConfigsRequest() = default;
};
class BatchSetScdnDomainConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchSetScdnDomainConfigsResponseBody() {}

  explicit BatchSetScdnDomainConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchSetScdnDomainConfigsResponseBody() = default;
};
class BatchSetScdnDomainConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchSetScdnDomainConfigsResponseBody> body{};

  BatchSetScdnDomainConfigsResponse() {}

  explicit BatchSetScdnDomainConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchSetScdnDomainConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchSetScdnDomainConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchSetScdnDomainConfigsResponse() = default;
};
class BatchUpdateScdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};
  shared_ptr<string> sources{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> topLevelDomain{};

  BatchUpdateScdnDomainRequest() {}

  explicit BatchUpdateScdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (topLevelDomain) {
      res["TopLevelDomain"] = boost::any(*topLevelDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TopLevelDomain") != m.end() && !m["TopLevelDomain"].empty()) {
      topLevelDomain = make_shared<string>(boost::any_cast<string>(m["TopLevelDomain"]));
    }
  }


  virtual ~BatchUpdateScdnDomainRequest() = default;
};
class BatchUpdateScdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchUpdateScdnDomainResponseBody() {}

  explicit BatchUpdateScdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchUpdateScdnDomainResponseBody() = default;
};
class BatchUpdateScdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchUpdateScdnDomainResponseBody> body{};

  BatchUpdateScdnDomainResponse() {}

  explicit BatchUpdateScdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUpdateScdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUpdateScdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUpdateScdnDomainResponse() = default;
};
class CheckScdnServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  CheckScdnServiceRequest() {}

  explicit CheckScdnServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CheckScdnServiceRequest() = default;
};
class CheckScdnServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> inDebt{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> inDebtOverdue{};
  shared_ptr<bool> onService{};

  CheckScdnServiceResponseBody() {}

  explicit CheckScdnServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (inDebt) {
      res["InDebt"] = boost::any(*inDebt);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (inDebtOverdue) {
      res["InDebtOverdue"] = boost::any(*inDebtOverdue);
    }
    if (onService) {
      res["OnService"] = boost::any(*onService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InDebt") != m.end() && !m["InDebt"].empty()) {
      inDebt = make_shared<bool>(boost::any_cast<bool>(m["InDebt"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("InDebtOverdue") != m.end() && !m["InDebtOverdue"].empty()) {
      inDebtOverdue = make_shared<bool>(boost::any_cast<bool>(m["InDebtOverdue"]));
    }
    if (m.find("OnService") != m.end() && !m["OnService"].empty()) {
      onService = make_shared<bool>(boost::any_cast<bool>(m["OnService"]));
    }
  }


  virtual ~CheckScdnServiceResponseBody() = default;
};
class CheckScdnServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckScdnServiceResponseBody> body{};

  CheckScdnServiceResponse() {}

  explicit CheckScdnServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckScdnServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckScdnServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckScdnServiceResponse() = default;
};
class DeleteScdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};

  DeleteScdnDomainRequest() {}

  explicit DeleteScdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DeleteScdnDomainRequest() = default;
};
class DeleteScdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScdnDomainResponseBody() {}

  explicit DeleteScdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScdnDomainResponseBody() = default;
};
class DeleteScdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScdnDomainResponseBody> body{};

  DeleteScdnDomainResponse() {}

  explicit DeleteScdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScdnDomainResponse() = default;
};
class DeleteScdnSpecificConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};
  shared_ptr<string> configId{};

  DeleteScdnSpecificConfigRequest() {}

  explicit DeleteScdnSpecificConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
  }


  virtual ~DeleteScdnSpecificConfigRequest() = default;
};
class DeleteScdnSpecificConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScdnSpecificConfigResponseBody() {}

  explicit DeleteScdnSpecificConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScdnSpecificConfigResponseBody() = default;
};
class DeleteScdnSpecificConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScdnSpecificConfigResponseBody> body{};

  DeleteScdnSpecificConfigResponse() {}

  explicit DeleteScdnSpecificConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScdnSpecificConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScdnSpecificConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScdnSpecificConfigResponse() = default;
};
class DescribeScdnCcQpsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnCcQpsInfoRequest() {}

  explicit DescribeScdnCcQpsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnCcQpsInfoRequest() = default;
};
class DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope : public Darabonba::Model {
public:
  shared_ptr<string> start{};
  shared_ptr<string> interval{};

  DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope() {}

  explicit DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["Start"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
  }


  virtual ~DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope() = default;
};
class DescribeScdnCcQpsInfoResponseBodyTimeScopes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope>> timeScope{};

  DescribeScdnCcQpsInfoResponseBodyTimeScopes() {}

  explicit DescribeScdnCcQpsInfoResponseBodyTimeScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeScope) {
      vector<boost::any> temp1;
      for(auto item1:*timeScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeScope") != m.end() && !m["TimeScope"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeScope"].type()) {
        vector<DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeScope = make_shared<vector<DescribeScdnCcQpsInfoResponseBodyTimeScopesTimeScope>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnCcQpsInfoResponseBodyTimeScopes() = default;
};
class DescribeScdnCcQpsInfoResponseBodyTotals : public Darabonba::Model {
public:
  shared_ptr<vector<string>> total{};

  DescribeScdnCcQpsInfoResponseBodyTotals() {}

  explicit DescribeScdnCcQpsInfoResponseBodyTotals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Total"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Total"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      total = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScdnCcQpsInfoResponseBodyTotals() = default;
};
class DescribeScdnCcQpsInfoResponseBodyAttacks : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attack{};

  DescribeScdnCcQpsInfoResponseBodyAttacks() {}

  explicit DescribeScdnCcQpsInfoResponseBodyAttacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attack) {
      res["Attack"] = boost::any(*attack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attack") != m.end() && !m["Attack"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attack"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attack"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attack = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScdnCcQpsInfoResponseBodyAttacks() = default;
};
class DescribeScdnCcQpsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnCcQpsInfoResponseBodyTimeScopes> timeScopes{};
  shared_ptr<DescribeScdnCcQpsInfoResponseBodyTotals> totals{};
  shared_ptr<DescribeScdnCcQpsInfoResponseBodyAttacks> attacks{};

  DescribeScdnCcQpsInfoResponseBody() {}

  explicit DescribeScdnCcQpsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeScopes) {
      res["TimeScopes"] = timeScopes ? boost::any(timeScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totals) {
      res["Totals"] = totals ? boost::any(totals->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (attacks) {
      res["Attacks"] = attacks ? boost::any(attacks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeScopes") != m.end() && !m["TimeScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeScopes"].type()) {
        DescribeScdnCcQpsInfoResponseBodyTimeScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeScopes"]));
        timeScopes = make_shared<DescribeScdnCcQpsInfoResponseBodyTimeScopes>(model1);
      }
    }
    if (m.find("Totals") != m.end() && !m["Totals"].empty()) {
      if (typeid(map<string, boost::any>) == m["Totals"].type()) {
        DescribeScdnCcQpsInfoResponseBodyTotals model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Totals"]));
        totals = make_shared<DescribeScdnCcQpsInfoResponseBodyTotals>(model1);
      }
    }
    if (m.find("Attacks") != m.end() && !m["Attacks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Attacks"].type()) {
        DescribeScdnCcQpsInfoResponseBodyAttacks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Attacks"]));
        attacks = make_shared<DescribeScdnCcQpsInfoResponseBodyAttacks>(model1);
      }
    }
  }


  virtual ~DescribeScdnCcQpsInfoResponseBody() = default;
};
class DescribeScdnCcQpsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnCcQpsInfoResponseBody> body{};

  DescribeScdnCcQpsInfoResponse() {}

  explicit DescribeScdnCcQpsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnCcQpsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnCcQpsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnCcQpsInfoResponse() = default;
};
class DescribeScdnCcTopIpRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnCcTopIpRequest() {}

  explicit DescribeScdnCcTopIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnCcTopIpRequest() = default;
};
class DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> attackCount{};

  DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas() {}

  explicit DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (attackCount) {
      res["AttackCount"] = boost::any(*attackCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("AttackCount") != m.end() && !m["AttackCount"].empty()) {
      attackCount = make_shared<string>(boost::any_cast<string>(m["AttackCount"]));
    }
  }


  virtual ~DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas() = default;
};
class DescribeScdnCcTopIpResponseBodyAttackIpDataList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas>> attackIpDatas{};

  DescribeScdnCcTopIpResponseBodyAttackIpDataList() {}

  explicit DescribeScdnCcTopIpResponseBodyAttackIpDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackIpDatas) {
      vector<boost::any> temp1;
      for(auto item1:*attackIpDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttackIpDatas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackIpDatas") != m.end() && !m["AttackIpDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["AttackIpDatas"].type()) {
        vector<DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttackIpDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attackIpDatas = make_shared<vector<DescribeScdnCcTopIpResponseBodyAttackIpDataListAttackIpDatas>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnCcTopIpResponseBodyAttackIpDataList() = default;
};
class DescribeScdnCcTopIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> total{};
  shared_ptr<DescribeScdnCcTopIpResponseBodyAttackIpDataList> attackIpDataList{};

  DescribeScdnCcTopIpResponseBody() {}

  explicit DescribeScdnCcTopIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (attackIpDataList) {
      res["AttackIpDataList"] = attackIpDataList ? boost::any(attackIpDataList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
    if (m.find("AttackIpDataList") != m.end() && !m["AttackIpDataList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AttackIpDataList"].type()) {
        DescribeScdnCcTopIpResponseBodyAttackIpDataList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AttackIpDataList"]));
        attackIpDataList = make_shared<DescribeScdnCcTopIpResponseBodyAttackIpDataList>(model1);
      }
    }
  }


  virtual ~DescribeScdnCcTopIpResponseBody() = default;
};
class DescribeScdnCcTopIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnCcTopIpResponseBody> body{};

  DescribeScdnCcTopIpResponse() {}

  explicit DescribeScdnCcTopIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnCcTopIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnCcTopIpResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnCcTopIpResponse() = default;
};
class DescribeScdnCcTopUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnCcTopUrlRequest() {}

  explicit DescribeScdnCcTopUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnCcTopUrlRequest() = default;
};
class DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> attackCount{};

  DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas() {}

  explicit DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (attackCount) {
      res["AttackCount"] = boost::any(*attackCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("AttackCount") != m.end() && !m["AttackCount"].empty()) {
      attackCount = make_shared<string>(boost::any_cast<string>(m["AttackCount"]));
    }
  }


  virtual ~DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas() = default;
};
class DescribeScdnCcTopUrlResponseBodyAttackUrlDataList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas>> attackUrlDatas{};

  DescribeScdnCcTopUrlResponseBodyAttackUrlDataList() {}

  explicit DescribeScdnCcTopUrlResponseBodyAttackUrlDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackUrlDatas) {
      vector<boost::any> temp1;
      for(auto item1:*attackUrlDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AttackUrlDatas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackUrlDatas") != m.end() && !m["AttackUrlDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["AttackUrlDatas"].type()) {
        vector<DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AttackUrlDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attackUrlDatas = make_shared<vector<DescribeScdnCcTopUrlResponseBodyAttackUrlDataListAttackUrlDatas>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnCcTopUrlResponseBodyAttackUrlDataList() = default;
};
class DescribeScdnCcTopUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> total{};
  shared_ptr<DescribeScdnCcTopUrlResponseBodyAttackUrlDataList> attackUrlDataList{};

  DescribeScdnCcTopUrlResponseBody() {}

  explicit DescribeScdnCcTopUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (attackUrlDataList) {
      res["AttackUrlDataList"] = attackUrlDataList ? boost::any(attackUrlDataList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
    if (m.find("AttackUrlDataList") != m.end() && !m["AttackUrlDataList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AttackUrlDataList"].type()) {
        DescribeScdnCcTopUrlResponseBodyAttackUrlDataList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AttackUrlDataList"]));
        attackUrlDataList = make_shared<DescribeScdnCcTopUrlResponseBodyAttackUrlDataList>(model1);
      }
    }
  }


  virtual ~DescribeScdnCcTopUrlResponseBody() = default;
};
class DescribeScdnCcTopUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnCcTopUrlResponseBody> body{};

  DescribeScdnCcTopUrlResponse() {}

  explicit DescribeScdnCcTopUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnCcTopUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnCcTopUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnCcTopUrlResponse() = default;
};
class DescribeScdnCertificateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> certName{};

  DescribeScdnCertificateDetailRequest() {}

  explicit DescribeScdnCertificateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
  }


  virtual ~DescribeScdnCertificateDetailRequest() = default;
};
class DescribeScdnCertificateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> certId{};
  shared_ptr<string> certName{};
  shared_ptr<string> cert{};
  shared_ptr<string> key{};

  DescribeScdnCertificateDetailResponseBody() {}

  explicit DescribeScdnCertificateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~DescribeScdnCertificateDetailResponseBody() = default;
};
class DescribeScdnCertificateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnCertificateDetailResponseBody> body{};

  DescribeScdnCertificateDetailResponse() {}

  explicit DescribeScdnCertificateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnCertificateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnCertificateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnCertificateDetailResponse() = default;
};
class DescribeScdnCertificateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};

  DescribeScdnCertificateListRequest() {}

  explicit DescribeScdnCertificateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeScdnCertificateListRequest() = default;
};
class DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert : public Darabonba::Model {
public:
  shared_ptr<long> lastTime{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> certName{};
  shared_ptr<string> issuer{};
  shared_ptr<long> certId{};
  shared_ptr<string> common{};

  DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert() {}

  explicit DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTime) {
      res["LastTime"] = boost::any(*lastTime);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTime") != m.end() && !m["LastTime"].empty()) {
      lastTime = make_shared<long>(boost::any_cast<long>(m["LastTime"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<string>(boost::any_cast<string>(m["Common"]));
    }
  }


  virtual ~DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert() = default;
};
class DescribeScdnCertificateListResponseBodyCertificateListModelCertList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert>> cert{};

  DescribeScdnCertificateListResponseBodyCertificateListModelCertList() {}

  explicit DescribeScdnCertificateListResponseBodyCertificateListModelCertList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cert) {
      vector<boost::any> temp1;
      for(auto item1:*cert){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cert"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      if (typeid(vector<boost::any>) == m["Cert"].type()) {
        vector<DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cert"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cert = make_shared<vector<DescribeScdnCertificateListResponseBodyCertificateListModelCertListCert>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnCertificateListResponseBodyCertificateListModelCertList() = default;
};
class DescribeScdnCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnCertificateListResponseBodyCertificateListModelCertList> certList{};
  shared_ptr<long> count{};

  DescribeScdnCertificateListResponseBodyCertificateListModel() {}

  explicit DescribeScdnCertificateListResponseBodyCertificateListModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certList) {
      res["CertList"] = certList ? boost::any(certList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertList") != m.end() && !m["CertList"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertList"].type()) {
        DescribeScdnCertificateListResponseBodyCertificateListModelCertList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertList"]));
        certList = make_shared<DescribeScdnCertificateListResponseBodyCertificateListModelCertList>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DescribeScdnCertificateListResponseBodyCertificateListModel() = default;
};
class DescribeScdnCertificateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnCertificateListResponseBodyCertificateListModel> certificateListModel{};

  DescribeScdnCertificateListResponseBody() {}

  explicit DescribeScdnCertificateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (certificateListModel) {
      res["CertificateListModel"] = certificateListModel ? boost::any(certificateListModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CertificateListModel") != m.end() && !m["CertificateListModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertificateListModel"].type()) {
        DescribeScdnCertificateListResponseBodyCertificateListModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertificateListModel"]));
        certificateListModel = make_shared<DescribeScdnCertificateListResponseBodyCertificateListModel>(model1);
      }
    }
  }


  virtual ~DescribeScdnCertificateListResponseBody() = default;
};
class DescribeScdnCertificateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnCertificateListResponseBody> body{};

  DescribeScdnCertificateListResponse() {}

  explicit DescribeScdnCertificateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnCertificateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnCertificateListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnCertificateListResponse() = default;
};
class DescribeScdnDDoSInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  DescribeScdnDDoSInfoRequest() {}

  explicit DescribeScdnDDoSInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeScdnDDoSInfoRequest() = default;
};
class DescribeScdnDDoSInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> secBandwidth{};
  shared_ptr<string> requestId{};
  shared_ptr<long> elasticBandwidth{};

  DescribeScdnDDoSInfoResponseBody() {}

  explicit DescribeScdnDDoSInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secBandwidth) {
      res["SecBandwidth"] = boost::any(*secBandwidth);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (elasticBandwidth) {
      res["ElasticBandwidth"] = boost::any(*elasticBandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecBandwidth") != m.end() && !m["SecBandwidth"].empty()) {
      secBandwidth = make_shared<long>(boost::any_cast<long>(m["SecBandwidth"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ElasticBandwidth") != m.end() && !m["ElasticBandwidth"].empty()) {
      elasticBandwidth = make_shared<long>(boost::any_cast<long>(m["ElasticBandwidth"]));
    }
  }


  virtual ~DescribeScdnDDoSInfoResponseBody() = default;
};
class DescribeScdnDDoSInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDDoSInfoResponseBody> body{};

  DescribeScdnDDoSInfoResponse() {}

  explicit DescribeScdnDDoSInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDDoSInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDDoSInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDDoSInfoResponse() = default;
};
class DescribeScdnDDoSTrafficInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> line{};

  DescribeScdnDDoSTrafficInfoRequest() {}

  explicit DescribeScdnDDoSTrafficInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<string>(boost::any_cast<string>(m["Line"]));
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoRequest() = default;
};
class DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope : public Darabonba::Model {
public:
  shared_ptr<string> start{};
  shared_ptr<string> interval{};

  DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope() {}

  explicit DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["Start"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope() = default;
};
class DescribeScdnDDoSTrafficInfoResponseBodyTimeScopes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope>> timeScope{};

  DescribeScdnDDoSTrafficInfoResponseBodyTimeScopes() {}

  explicit DescribeScdnDDoSTrafficInfoResponseBodyTimeScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeScope) {
      vector<boost::any> temp1;
      for(auto item1:*timeScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeScope") != m.end() && !m["TimeScope"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeScope"].type()) {
        vector<DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeScope = make_shared<vector<DescribeScdnDDoSTrafficInfoResponseBodyTimeScopesTimeScope>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponseBodyTimeScopes() = default;
};
class DescribeScdnDDoSTrafficInfoResponseBodyBpsDrops : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bpsDrop{};

  DescribeScdnDDoSTrafficInfoResponseBodyBpsDrops() {}

  explicit DescribeScdnDDoSTrafficInfoResponseBodyBpsDrops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsDrop) {
      res["BpsDrop"] = boost::any(*bpsDrop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsDrop") != m.end() && !m["BpsDrop"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BpsDrop"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BpsDrop"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bpsDrop = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponseBodyBpsDrops() = default;
};
class DescribeScdnDDoSTrafficInfoResponseBodyPpsDrops : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ppsDrop{};

  DescribeScdnDDoSTrafficInfoResponseBodyPpsDrops() {}

  explicit DescribeScdnDDoSTrafficInfoResponseBodyPpsDrops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ppsDrop) {
      res["PpsDrop"] = boost::any(*ppsDrop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PpsDrop") != m.end() && !m["PpsDrop"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PpsDrop"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PpsDrop"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ppsDrop = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponseBodyPpsDrops() = default;
};
class DescribeScdnDDoSTrafficInfoResponseBodyBpsTotals : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bpsTotal{};

  DescribeScdnDDoSTrafficInfoResponseBodyBpsTotals() {}

  explicit DescribeScdnDDoSTrafficInfoResponseBodyBpsTotals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsTotal) {
      res["BpsTotal"] = boost::any(*bpsTotal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsTotal") != m.end() && !m["BpsTotal"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BpsTotal"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BpsTotal"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bpsTotal = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponseBodyBpsTotals() = default;
};
class DescribeScdnDDoSTrafficInfoResponseBodyPpsTotals : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ppsTotal{};

  DescribeScdnDDoSTrafficInfoResponseBodyPpsTotals() {}

  explicit DescribeScdnDDoSTrafficInfoResponseBodyPpsTotals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ppsTotal) {
      res["PpsTotal"] = boost::any(*ppsTotal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PpsTotal") != m.end() && !m["PpsTotal"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PpsTotal"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PpsTotal"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ppsTotal = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponseBodyPpsTotals() = default;
};
class DescribeScdnDDoSTrafficInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnDDoSTrafficInfoResponseBodyTimeScopes> timeScopes{};
  shared_ptr<DescribeScdnDDoSTrafficInfoResponseBodyBpsDrops> bpsDrops{};
  shared_ptr<DescribeScdnDDoSTrafficInfoResponseBodyPpsDrops> ppsDrops{};
  shared_ptr<DescribeScdnDDoSTrafficInfoResponseBodyBpsTotals> bpsTotals{};
  shared_ptr<DescribeScdnDDoSTrafficInfoResponseBodyPpsTotals> ppsTotals{};

  DescribeScdnDDoSTrafficInfoResponseBody() {}

  explicit DescribeScdnDDoSTrafficInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeScopes) {
      res["TimeScopes"] = timeScopes ? boost::any(timeScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bpsDrops) {
      res["BpsDrops"] = bpsDrops ? boost::any(bpsDrops->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ppsDrops) {
      res["PpsDrops"] = ppsDrops ? boost::any(ppsDrops->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bpsTotals) {
      res["BpsTotals"] = bpsTotals ? boost::any(bpsTotals->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ppsTotals) {
      res["PpsTotals"] = ppsTotals ? boost::any(ppsTotals->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeScopes") != m.end() && !m["TimeScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeScopes"].type()) {
        DescribeScdnDDoSTrafficInfoResponseBodyTimeScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeScopes"]));
        timeScopes = make_shared<DescribeScdnDDoSTrafficInfoResponseBodyTimeScopes>(model1);
      }
    }
    if (m.find("BpsDrops") != m.end() && !m["BpsDrops"].empty()) {
      if (typeid(map<string, boost::any>) == m["BpsDrops"].type()) {
        DescribeScdnDDoSTrafficInfoResponseBodyBpsDrops model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BpsDrops"]));
        bpsDrops = make_shared<DescribeScdnDDoSTrafficInfoResponseBodyBpsDrops>(model1);
      }
    }
    if (m.find("PpsDrops") != m.end() && !m["PpsDrops"].empty()) {
      if (typeid(map<string, boost::any>) == m["PpsDrops"].type()) {
        DescribeScdnDDoSTrafficInfoResponseBodyPpsDrops model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PpsDrops"]));
        ppsDrops = make_shared<DescribeScdnDDoSTrafficInfoResponseBodyPpsDrops>(model1);
      }
    }
    if (m.find("BpsTotals") != m.end() && !m["BpsTotals"].empty()) {
      if (typeid(map<string, boost::any>) == m["BpsTotals"].type()) {
        DescribeScdnDDoSTrafficInfoResponseBodyBpsTotals model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BpsTotals"]));
        bpsTotals = make_shared<DescribeScdnDDoSTrafficInfoResponseBodyBpsTotals>(model1);
      }
    }
    if (m.find("PpsTotals") != m.end() && !m["PpsTotals"].empty()) {
      if (typeid(map<string, boost::any>) == m["PpsTotals"].type()) {
        DescribeScdnDDoSTrafficInfoResponseBodyPpsTotals model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PpsTotals"]));
        ppsTotals = make_shared<DescribeScdnDDoSTrafficInfoResponseBodyPpsTotals>(model1);
      }
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponseBody() = default;
};
class DescribeScdnDDoSTrafficInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDDoSTrafficInfoResponseBody> body{};

  DescribeScdnDDoSTrafficInfoResponse() {}

  explicit DescribeScdnDDoSTrafficInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDDoSTrafficInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDDoSTrafficInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDDoSTrafficInfoResponse() = default;
};
class DescribeScdnDomainBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeScdnDomainBpsDataRequest() {}

  explicit DescribeScdnDomainBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeScdnDomainBpsDataRequest() = default;
};
class DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> httpsBpsValue{};
  shared_ptr<string> bpsValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> httpBpsValue{};

  DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpsBpsValue) {
      res["HttpsBpsValue"] = boost::any(*httpsBpsValue);
    }
    if (bpsValue) {
      res["BpsValue"] = boost::any(*bpsValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (httpBpsValue) {
      res["HttpBpsValue"] = boost::any(*httpBpsValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpsBpsValue") != m.end() && !m["HttpsBpsValue"].empty()) {
      httpsBpsValue = make_shared<string>(boost::any_cast<string>(m["HttpsBpsValue"]));
    }
    if (m.find("BpsValue") != m.end() && !m["BpsValue"].empty()) {
      bpsValue = make_shared<string>(boost::any_cast<string>(m["BpsValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("HttpBpsValue") != m.end() && !m["HttpBpsValue"].empty()) {
      httpBpsValue = make_shared<string>(boost::any_cast<string>(m["HttpBpsValue"]));
    }
  }


  virtual ~DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainBpsDataResponseBodyBpsDataPerInterval() {}

  explicit DescribeScdnDomainBpsDataResponseBodyBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainBpsDataResponseBodyBpsDataPerInterval() = default;
};
class DescribeScdnDomainBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainBpsDataResponseBodyBpsDataPerInterval> bpsDataPerInterval{};

  DescribeScdnDomainBpsDataResponseBody() {}

  explicit DescribeScdnDomainBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (bpsDataPerInterval) {
      res["BpsDataPerInterval"] = bpsDataPerInterval ? boost::any(bpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("BpsDataPerInterval") != m.end() && !m["BpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["BpsDataPerInterval"].type()) {
        DescribeScdnDomainBpsDataResponseBodyBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BpsDataPerInterval"]));
        bpsDataPerInterval = make_shared<DescribeScdnDomainBpsDataResponseBodyBpsDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainBpsDataResponseBody() = default;
};
class DescribeScdnDomainBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainBpsDataResponseBody> body{};

  DescribeScdnDomainBpsDataResponse() {}

  explicit DescribeScdnDomainBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainBpsDataResponse() = default;
};
class DescribeScdnDomainCertificateInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DescribeScdnDomainCertificateInfoRequest() {}

  explicit DescribeScdnDomainCertificateInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeScdnDomainCertificateInfoRequest() = default;
};
class DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> certLife{};
  shared_ptr<string> certExpireTime{};
  shared_ptr<string> SSLPub{};
  shared_ptr<string> SSLProtocol{};
  shared_ptr<string> certType{};
  shared_ptr<string> certDomainName{};
  shared_ptr<string> certName{};
  shared_ptr<string> certOrg{};
  shared_ptr<string> domainName{};

  DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo() {}

  explicit DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (certLife) {
      res["CertLife"] = boost::any(*certLife);
    }
    if (certExpireTime) {
      res["CertExpireTime"] = boost::any(*certExpireTime);
    }
    if (SSLPub) {
      res["SSLPub"] = boost::any(*SSLPub);
    }
    if (SSLProtocol) {
      res["SSLProtocol"] = boost::any(*SSLProtocol);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certDomainName) {
      res["CertDomainName"] = boost::any(*certDomainName);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certOrg) {
      res["CertOrg"] = boost::any(*certOrg);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CertLife") != m.end() && !m["CertLife"].empty()) {
      certLife = make_shared<string>(boost::any_cast<string>(m["CertLife"]));
    }
    if (m.find("CertExpireTime") != m.end() && !m["CertExpireTime"].empty()) {
      certExpireTime = make_shared<string>(boost::any_cast<string>(m["CertExpireTime"]));
    }
    if (m.find("SSLPub") != m.end() && !m["SSLPub"].empty()) {
      SSLPub = make_shared<string>(boost::any_cast<string>(m["SSLPub"]));
    }
    if (m.find("SSLProtocol") != m.end() && !m["SSLProtocol"].empty()) {
      SSLProtocol = make_shared<string>(boost::any_cast<string>(m["SSLProtocol"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertDomainName") != m.end() && !m["CertDomainName"].empty()) {
      certDomainName = make_shared<string>(boost::any_cast<string>(m["CertDomainName"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertOrg") != m.end() && !m["CertOrg"].empty()) {
      certOrg = make_shared<string>(boost::any_cast<string>(m["CertOrg"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo() = default;
};
class DescribeScdnDomainCertificateInfoResponseBodyCertInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo>> certInfo{};

  DescribeScdnDomainCertificateInfoResponseBodyCertInfos() {}

  explicit DescribeScdnDomainCertificateInfoResponseBodyCertInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certInfo) {
      vector<boost::any> temp1;
      for(auto item1:*certInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertInfo") != m.end() && !m["CertInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CertInfo"].type()) {
        vector<DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certInfo = make_shared<vector<DescribeScdnDomainCertificateInfoResponseBodyCertInfosCertInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainCertificateInfoResponseBodyCertInfos() = default;
};
class DescribeScdnDomainCertificateInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnDomainCertificateInfoResponseBodyCertInfos> certInfos{};
  shared_ptr<string> requestId{};

  DescribeScdnDomainCertificateInfoResponseBody() {}

  explicit DescribeScdnDomainCertificateInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certInfos) {
      res["CertInfos"] = certInfos ? boost::any(certInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertInfos") != m.end() && !m["CertInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertInfos"].type()) {
        DescribeScdnDomainCertificateInfoResponseBodyCertInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertInfos"]));
        certInfos = make_shared<DescribeScdnDomainCertificateInfoResponseBodyCertInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScdnDomainCertificateInfoResponseBody() = default;
};
class DescribeScdnDomainCertificateInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainCertificateInfoResponseBody> body{};

  DescribeScdnDomainCertificateInfoResponse() {}

  explicit DescribeScdnDomainCertificateInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainCertificateInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainCertificateInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainCertificateInfoResponse() = default;
};
class DescribeScdnDomainCnameRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};

  DescribeScdnDomainCnameRequest() {}

  explicit DescribeScdnDomainCnameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeScdnDomainCnameRequest() = default;
};
class DescribeScdnDomainCnameResponseBodyCnameDatasData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> domain{};
  shared_ptr<string> cname{};

  DescribeScdnDomainCnameResponseBodyCnameDatasData() {}

  explicit DescribeScdnDomainCnameResponseBodyCnameDatasData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
  }


  virtual ~DescribeScdnDomainCnameResponseBodyCnameDatasData() = default;
};
class DescribeScdnDomainCnameResponseBodyCnameDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainCnameResponseBodyCnameDatasData>> data{};

  DescribeScdnDomainCnameResponseBodyCnameDatas() {}

  explicit DescribeScdnDomainCnameResponseBodyCnameDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeScdnDomainCnameResponseBodyCnameDatasData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainCnameResponseBodyCnameDatasData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeScdnDomainCnameResponseBodyCnameDatasData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainCnameResponseBodyCnameDatas() = default;
};
class DescribeScdnDomainCnameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnDomainCnameResponseBodyCnameDatas> cnameDatas{};

  DescribeScdnDomainCnameResponseBody() {}

  explicit DescribeScdnDomainCnameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (cnameDatas) {
      res["CnameDatas"] = cnameDatas ? boost::any(cnameDatas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CnameDatas") != m.end() && !m["CnameDatas"].empty()) {
      if (typeid(map<string, boost::any>) == m["CnameDatas"].type()) {
        DescribeScdnDomainCnameResponseBodyCnameDatas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CnameDatas"]));
        cnameDatas = make_shared<DescribeScdnDomainCnameResponseBodyCnameDatas>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainCnameResponseBody() = default;
};
class DescribeScdnDomainCnameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainCnameResponseBody> body{};

  DescribeScdnDomainCnameResponse() {}

  explicit DescribeScdnDomainCnameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainCnameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainCnameResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainCnameResponse() = default;
};
class DescribeScdnDomainConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};
  shared_ptr<string> functionNames{};

  DescribeScdnDomainConfigsRequest() {}

  explicit DescribeScdnDomainConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (functionNames) {
      res["FunctionNames"] = boost::any(*functionNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("FunctionNames") != m.end() && !m["FunctionNames"].empty()) {
      functionNames = make_shared<string>(boost::any_cast<string>(m["FunctionNames"]));
    }
  }


  virtual ~DescribeScdnDomainConfigsRequest() = default;
};
class DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg : public Darabonba::Model {
public:
  shared_ptr<string> argName{};
  shared_ptr<string> argValue{};

  DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg() {}

  explicit DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argName) {
      res["ArgName"] = boost::any(*argName);
    }
    if (argValue) {
      res["ArgValue"] = boost::any(*argValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArgName") != m.end() && !m["ArgName"].empty()) {
      argName = make_shared<string>(boost::any_cast<string>(m["ArgName"]));
    }
    if (m.find("ArgValue") != m.end() && !m["ArgValue"].empty()) {
      argValue = make_shared<string>(boost::any_cast<string>(m["ArgValue"]));
    }
  }


  virtual ~DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg() = default;
};
class DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>> functionArg{};

  DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() {}

  explicit DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionArg) {
      vector<boost::any> temp1;
      for(auto item1:*functionArg){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FunctionArg"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FunctionArg") != m.end() && !m["FunctionArg"].empty()) {
      if (typeid(vector<boost::any>) == m["FunctionArg"].type()) {
        vector<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FunctionArg"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functionArg = make_shared<vector<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default;
};
class DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> configId{};
  shared_ptr<string> functionName{};
  shared_ptr<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs> functionArgs{};

  DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig() {}

  explicit DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (functionArgs) {
      res["FunctionArgs"] = functionArgs ? boost::any(functionArgs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("FunctionArgs") != m.end() && !m["FunctionArgs"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionArgs"].type()) {
        DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionArgs"]));
        functionArgs = make_shared<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig() = default;
};
class DescribeScdnDomainConfigsResponseBodyDomainConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig>> domainConfig{};

  DescribeScdnDomainConfigsResponseBodyDomainConfigs() {}

  explicit DescribeScdnDomainConfigsResponseBodyDomainConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainConfig) {
      vector<boost::any> temp1;
      for(auto item1:*domainConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainConfig"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainConfig") != m.end() && !m["DomainConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainConfig"].type()) {
        vector<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainConfig = make_shared<vector<DescribeScdnDomainConfigsResponseBodyDomainConfigsDomainConfig>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainConfigsResponseBodyDomainConfigs() = default;
};
class DescribeScdnDomainConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnDomainConfigsResponseBodyDomainConfigs> domainConfigs{};

  DescribeScdnDomainConfigsResponseBody() {}

  explicit DescribeScdnDomainConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainConfigs) {
      res["DomainConfigs"] = domainConfigs ? boost::any(domainConfigs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainConfigs") != m.end() && !m["DomainConfigs"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainConfigs"].type()) {
        DescribeScdnDomainConfigsResponseBodyDomainConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainConfigs"]));
        domainConfigs = make_shared<DescribeScdnDomainConfigsResponseBodyDomainConfigs>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainConfigsResponseBody() = default;
};
class DescribeScdnDomainConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainConfigsResponseBody> body{};

  DescribeScdnDomainConfigsResponse() {}

  explicit DescribeScdnDomainConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainConfigsResponse() = default;
};
class DescribeScdnDomainDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};

  DescribeScdnDomainDetailRequest() {}

  explicit DescribeScdnDomainDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeScdnDomainDetailRequest() = default;
};
class DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> enabled{};
  shared_ptr<string> priority{};
  shared_ptr<long> port{};
  shared_ptr<string> content{};

  DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource() {}

  explicit DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource() = default;
};
class DescribeScdnDomainDetailResponseBodyDomainDetailSources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource>> source{};

  DescribeScdnDomainDetailResponseBodyDomainDetailSources() {}

  explicit DescribeScdnDomainDetailResponseBodyDomainDetailSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      vector<boost::any> temp1;
      for(auto item1:*source){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Source"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(vector<boost::any>) == m["Source"].type()) {
        vector<DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Source"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        source = make_shared<vector<DescribeScdnDomainDetailResponseBodyDomainDetailSourcesSource>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainDetailResponseBodyDomainDetailSources() = default;
};
class DescribeScdnDomainDetailResponseBodyDomainDetail : public Darabonba::Model {
public:
  shared_ptr<string> SSLPub{};
  shared_ptr<DescribeScdnDomainDetailResponseBodyDomainDetailSources> sources{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> domainName{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> description{};
  shared_ptr<string> SSLProtocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> certName{};
  shared_ptr<string> scope{};
  shared_ptr<string> cname{};
  shared_ptr<string> domainStatus{};

  DescribeScdnDomainDetailResponseBodyDomainDetail() {}

  explicit DescribeScdnDomainDetailResponseBodyDomainDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SSLPub) {
      res["SSLPub"] = boost::any(*SSLPub);
    }
    if (sources) {
      res["Sources"] = sources ? boost::any(sources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SSLProtocol) {
      res["SSLProtocol"] = boost::any(*SSLProtocol);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SSLPub") != m.end() && !m["SSLPub"].empty()) {
      SSLPub = make_shared<string>(boost::any_cast<string>(m["SSLPub"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sources"].type()) {
        DescribeScdnDomainDetailResponseBodyDomainDetailSources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sources"]));
        sources = make_shared<DescribeScdnDomainDetailResponseBodyDomainDetailSources>(model1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SSLProtocol") != m.end() && !m["SSLProtocol"].empty()) {
      SSLProtocol = make_shared<string>(boost::any_cast<string>(m["SSLProtocol"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
  }


  virtual ~DescribeScdnDomainDetailResponseBodyDomainDetail() = default;
};
class DescribeScdnDomainDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnDomainDetailResponseBodyDomainDetail> domainDetail{};
  shared_ptr<string> requestId{};

  DescribeScdnDomainDetailResponseBody() {}

  explicit DescribeScdnDomainDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainDetail) {
      res["DomainDetail"] = domainDetail ? boost::any(domainDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainDetail") != m.end() && !m["DomainDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainDetail"].type()) {
        DescribeScdnDomainDetailResponseBodyDomainDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainDetail"]));
        domainDetail = make_shared<DescribeScdnDomainDetailResponseBodyDomainDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScdnDomainDetailResponseBody() = default;
};
class DescribeScdnDomainDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainDetailResponseBody> body{};

  DescribeScdnDomainDetailResponse() {}

  explicit DescribeScdnDomainDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainDetailResponse() = default;
};
class DescribeScdnDomainHitRateDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};

  DescribeScdnDomainHitRateDataRequest() {}

  explicit DescribeScdnDomainHitRateDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
  }


  virtual ~DescribeScdnDomainHitRateDataRequest() = default;
};
class DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> byteHitRate{};
  shared_ptr<string> reqHitRate{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule() {}

  explicit DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byteHitRate) {
      res["ByteHitRate"] = boost::any(*byteHitRate);
    }
    if (reqHitRate) {
      res["ReqHitRate"] = boost::any(*reqHitRate);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByteHitRate") != m.end() && !m["ByteHitRate"].empty()) {
      byteHitRate = make_shared<string>(boost::any_cast<string>(m["ByteHitRate"]));
    }
    if (m.find("ReqHitRate") != m.end() && !m["ReqHitRate"].empty()) {
      reqHitRate = make_shared<string>(boost::any_cast<string>(m["ReqHitRate"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule() = default;
};
class DescribeScdnDomainHitRateDataResponseBodyHitRatePerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule>> dataModule{};

  DescribeScdnDomainHitRateDataResponseBodyHitRatePerInterval() {}

  explicit DescribeScdnDomainHitRateDataResponseBodyHitRatePerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainHitRateDataResponseBodyHitRatePerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainHitRateDataResponseBodyHitRatePerInterval() = default;
};
class DescribeScdnDomainHitRateDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeScdnDomainHitRateDataResponseBodyHitRatePerInterval> hitRatePerInterval{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};

  DescribeScdnDomainHitRateDataResponseBody() {}

  explicit DescribeScdnDomainHitRateDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (hitRatePerInterval) {
      res["HitRatePerInterval"] = hitRatePerInterval ? boost::any(hitRatePerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("HitRatePerInterval") != m.end() && !m["HitRatePerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["HitRatePerInterval"].type()) {
        DescribeScdnDomainHitRateDataResponseBodyHitRatePerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HitRatePerInterval"]));
        hitRatePerInterval = make_shared<DescribeScdnDomainHitRateDataResponseBodyHitRatePerInterval>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
  }


  virtual ~DescribeScdnDomainHitRateDataResponseBody() = default;
};
class DescribeScdnDomainHitRateDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainHitRateDataResponseBody> body{};

  DescribeScdnDomainHitRateDataResponse() {}

  explicit DescribeScdnDomainHitRateDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainHitRateDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainHitRateDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainHitRateDataResponse() = default;
};
class DescribeScdnDomainHttpCodeDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeScdnDomainHttpCodeDataRequest() {}

  explicit DescribeScdnDomainHttpCodeDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeScdnDomainHttpCodeDataRequest() = default;
};
class DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> proportion{};
  shared_ptr<string> count{};

  DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule() {}

  explicit DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
  }


  virtual ~DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule() = default;
};
class DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule>> httpCodeDataModule{};

  DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval() {}

  explicit DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCodeDataModule) {
      vector<boost::any> temp1;
      for(auto item1:*httpCodeDataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HttpCodeDataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCodeDataModule") != m.end() && !m["HttpCodeDataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["HttpCodeDataModule"].type()) {
        vector<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HttpCodeDataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        httpCodeDataModule = make_shared<vector<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval() = default;
};
class DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval> httpCodeDataPerInterval{};

  DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (httpCodeDataPerInterval) {
      res["HttpCodeDataPerInterval"] = httpCodeDataPerInterval ? boost::any(httpCodeDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("HttpCodeDataPerInterval") != m.end() && !m["HttpCodeDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpCodeDataPerInterval"].type()) {
        DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpCodeDataPerInterval"]));
        httpCodeDataPerInterval = make_shared<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainHttpCodeDataResponseBodyDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainHttpCodeDataResponseBodyDataPerInterval() {}

  explicit DescribeScdnDomainHttpCodeDataResponseBodyDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainHttpCodeDataResponseBodyDataPerInterval() = default;
};
class DescribeScdnDomainHttpCodeDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainHttpCodeDataResponseBodyDataPerInterval> dataPerInterval{};

  DescribeScdnDomainHttpCodeDataResponseBody() {}

  explicit DescribeScdnDomainHttpCodeDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (dataPerInterval) {
      res["DataPerInterval"] = dataPerInterval ? boost::any(dataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("DataPerInterval") != m.end() && !m["DataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataPerInterval"].type()) {
        DescribeScdnDomainHttpCodeDataResponseBodyDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataPerInterval"]));
        dataPerInterval = make_shared<DescribeScdnDomainHttpCodeDataResponseBodyDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainHttpCodeDataResponseBody() = default;
};
class DescribeScdnDomainHttpCodeDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainHttpCodeDataResponseBody> body{};

  DescribeScdnDomainHttpCodeDataResponse() {}

  explicit DescribeScdnDomainHttpCodeDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainHttpCodeDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainHttpCodeDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainHttpCodeDataResponse() = default;
};
class DescribeScdnDomainIspDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainIspDataRequest() {}

  explicit DescribeScdnDomainIspDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainIspDataRequest() = default;
};
class DescribeScdnDomainIspDataResponseBodyValueISPProportionData : public Darabonba::Model {
public:
  shared_ptr<string> totalQuery{};
  shared_ptr<string> totalBytes{};
  shared_ptr<string> avgResponseRate{};
  shared_ptr<string> avgResponseTime{};
  shared_ptr<string> reqErrRate{};
  shared_ptr<string> avgObjectSize{};
  shared_ptr<string> bps{};
  shared_ptr<string> qps{};
  shared_ptr<string> proportion{};
  shared_ptr<string> ispEname{};
  shared_ptr<string> ISP{};
  shared_ptr<string> bytesProportion{};

  DescribeScdnDomainIspDataResponseBodyValueISPProportionData() {}

  explicit DescribeScdnDomainIspDataResponseBodyValueISPProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalQuery) {
      res["TotalQuery"] = boost::any(*totalQuery);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    if (avgResponseRate) {
      res["AvgResponseRate"] = boost::any(*avgResponseRate);
    }
    if (avgResponseTime) {
      res["AvgResponseTime"] = boost::any(*avgResponseTime);
    }
    if (reqErrRate) {
      res["ReqErrRate"] = boost::any(*reqErrRate);
    }
    if (avgObjectSize) {
      res["AvgObjectSize"] = boost::any(*avgObjectSize);
    }
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (ispEname) {
      res["IspEname"] = boost::any(*ispEname);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (bytesProportion) {
      res["BytesProportion"] = boost::any(*bytesProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalQuery") != m.end() && !m["TotalQuery"].empty()) {
      totalQuery = make_shared<string>(boost::any_cast<string>(m["TotalQuery"]));
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<string>(boost::any_cast<string>(m["TotalBytes"]));
    }
    if (m.find("AvgResponseRate") != m.end() && !m["AvgResponseRate"].empty()) {
      avgResponseRate = make_shared<string>(boost::any_cast<string>(m["AvgResponseRate"]));
    }
    if (m.find("AvgResponseTime") != m.end() && !m["AvgResponseTime"].empty()) {
      avgResponseTime = make_shared<string>(boost::any_cast<string>(m["AvgResponseTime"]));
    }
    if (m.find("ReqErrRate") != m.end() && !m["ReqErrRate"].empty()) {
      reqErrRate = make_shared<string>(boost::any_cast<string>(m["ReqErrRate"]));
    }
    if (m.find("AvgObjectSize") != m.end() && !m["AvgObjectSize"].empty()) {
      avgObjectSize = make_shared<string>(boost::any_cast<string>(m["AvgObjectSize"]));
    }
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<string>(boost::any_cast<string>(m["Bps"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
    if (m.find("IspEname") != m.end() && !m["IspEname"].empty()) {
      ispEname = make_shared<string>(boost::any_cast<string>(m["IspEname"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("BytesProportion") != m.end() && !m["BytesProportion"].empty()) {
      bytesProportion = make_shared<string>(boost::any_cast<string>(m["BytesProportion"]));
    }
  }


  virtual ~DescribeScdnDomainIspDataResponseBodyValueISPProportionData() = default;
};
class DescribeScdnDomainIspDataResponseBodyValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainIspDataResponseBodyValueISPProportionData>> ISPProportionData{};

  DescribeScdnDomainIspDataResponseBodyValue() {}

  explicit DescribeScdnDomainIspDataResponseBodyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ISPProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*ISPProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ISPProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ISPProportionData") != m.end() && !m["ISPProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["ISPProportionData"].type()) {
        vector<DescribeScdnDomainIspDataResponseBodyValueISPProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ISPProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainIspDataResponseBodyValueISPProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ISPProportionData = make_shared<vector<DescribeScdnDomainIspDataResponseBodyValueISPProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainIspDataResponseBodyValue() = default;
};
class DescribeScdnDomainIspDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainIspDataResponseBodyValue> value{};

  DescribeScdnDomainIspDataResponseBody() {}

  explicit DescribeScdnDomainIspDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeScdnDomainIspDataResponseBodyValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeScdnDomainIspDataResponseBodyValue>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainIspDataResponseBody() = default;
};
class DescribeScdnDomainIspDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainIspDataResponseBody> body{};

  DescribeScdnDomainIspDataResponse() {}

  explicit DescribeScdnDomainIspDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainIspDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainIspDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainIspDataResponse() = default;
};
class DescribeScdnDomainLogRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainLogRequest() {}

  explicit DescribeScdnDomainLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainLogRequest() = default;
};
class DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos() {}

  explicit DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos() = default;
};
class DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> logPath{};
  shared_ptr<long> logSize{};
  shared_ptr<string> logName{};

  DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail() {}

  explicit DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (logPath) {
      res["LogPath"] = boost::any(*logPath);
    }
    if (logSize) {
      res["LogSize"] = boost::any(*logSize);
    }
    if (logName) {
      res["LogName"] = boost::any(*logName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("LogPath") != m.end() && !m["LogPath"].empty()) {
      logPath = make_shared<string>(boost::any_cast<string>(m["LogPath"]));
    }
    if (m.find("LogSize") != m.end() && !m["LogSize"].empty()) {
      logSize = make_shared<long>(boost::any_cast<long>(m["LogSize"]));
    }
    if (m.find("LogName") != m.end() && !m["LogName"].empty()) {
      logName = make_shared<string>(boost::any_cast<string>(m["LogName"]));
    }
  }


  virtual ~DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail() = default;
};
class DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>> logInfoDetail{};

  DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() {}

  explicit DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logInfoDetail) {
      vector<boost::any> temp1;
      for(auto item1:*logInfoDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogInfoDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogInfoDetail") != m.end() && !m["LogInfoDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["LogInfoDetail"].type()) {
        vector<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogInfoDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logInfoDetail = make_shared<vector<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos() = default;
};
class DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos> pageInfos{};
  shared_ptr<long> logCount{};
  shared_ptr<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos> logInfos{};

  DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail() {}

  explicit DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfos) {
      res["PageInfos"] = pageInfos ? boost::any(pageInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logCount) {
      res["LogCount"] = boost::any(*logCount);
    }
    if (logInfos) {
      res["LogInfos"] = logInfos ? boost::any(logInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfos") != m.end() && !m["PageInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfos"].type()) {
        DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfos"]));
        pageInfos = make_shared<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailPageInfos>(model1);
      }
    }
    if (m.find("LogCount") != m.end() && !m["LogCount"].empty()) {
      logCount = make_shared<long>(boost::any_cast<long>(m["LogCount"]));
    }
    if (m.find("LogInfos") != m.end() && !m["LogInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogInfos"].type()) {
        DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogInfos"]));
        logInfos = make_shared<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetailLogInfos>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail() = default;
};
class DescribeScdnDomainLogResponseBodyDomainLogDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail{};

  DescribeScdnDomainLogResponseBodyDomainLogDetails() {}

  explicit DescribeScdnDomainLogResponseBodyDomainLogDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainLogDetail) {
      vector<boost::any> temp1;
      for(auto item1:*domainLogDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainLogDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainLogDetail") != m.end() && !m["DomainLogDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainLogDetail"].type()) {
        vector<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainLogDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainLogDetail = make_shared<vector<DescribeScdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainLogResponseBodyDomainLogDetails() = default;
};
class DescribeScdnDomainLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeScdnDomainLogResponseBodyDomainLogDetails> domainLogDetails{};

  DescribeScdnDomainLogResponseBody() {}

  explicit DescribeScdnDomainLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainLogDetails) {
      res["DomainLogDetails"] = domainLogDetails ? boost::any(domainLogDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainLogDetails") != m.end() && !m["DomainLogDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainLogDetails"].type()) {
        DescribeScdnDomainLogResponseBodyDomainLogDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainLogDetails"]));
        domainLogDetails = make_shared<DescribeScdnDomainLogResponseBodyDomainLogDetails>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainLogResponseBody() = default;
};
class DescribeScdnDomainLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainLogResponseBody> body{};

  DescribeScdnDomainLogResponse() {}

  explicit DescribeScdnDomainLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainLogResponse() = default;
};
class DescribeScdnDomainOriginBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};

  DescribeScdnDomainOriginBpsDataRequest() {}

  explicit DescribeScdnDomainOriginBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
  }


  virtual ~DescribeScdnDomainOriginBpsDataRequest() = default;
};
class DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> httpOriginBpsValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> httpsOriginBpsValue{};
  shared_ptr<string> originBpsValue{};

  DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpOriginBpsValue) {
      res["HttpOriginBpsValue"] = boost::any(*httpOriginBpsValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (httpsOriginBpsValue) {
      res["HttpsOriginBpsValue"] = boost::any(*httpsOriginBpsValue);
    }
    if (originBpsValue) {
      res["OriginBpsValue"] = boost::any(*originBpsValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpOriginBpsValue") != m.end() && !m["HttpOriginBpsValue"].empty()) {
      httpOriginBpsValue = make_shared<string>(boost::any_cast<string>(m["HttpOriginBpsValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("HttpsOriginBpsValue") != m.end() && !m["HttpsOriginBpsValue"].empty()) {
      httpsOriginBpsValue = make_shared<string>(boost::any_cast<string>(m["HttpsOriginBpsValue"]));
    }
    if (m.find("OriginBpsValue") != m.end() && !m["OriginBpsValue"].empty()) {
      originBpsValue = make_shared<string>(boost::any_cast<string>(m["OriginBpsValue"]));
    }
  }


  virtual ~DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval() {}

  explicit DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval() = default;
};
class DescribeScdnDomainOriginBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval> originBpsDataPerInterval{};

  DescribeScdnDomainOriginBpsDataResponseBody() {}

  explicit DescribeScdnDomainOriginBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (originBpsDataPerInterval) {
      res["OriginBpsDataPerInterval"] = originBpsDataPerInterval ? boost::any(originBpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("OriginBpsDataPerInterval") != m.end() && !m["OriginBpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["OriginBpsDataPerInterval"].type()) {
        DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OriginBpsDataPerInterval"]));
        originBpsDataPerInterval = make_shared<DescribeScdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainOriginBpsDataResponseBody() = default;
};
class DescribeScdnDomainOriginBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainOriginBpsDataResponseBody> body{};

  DescribeScdnDomainOriginBpsDataResponse() {}

  explicit DescribeScdnDomainOriginBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainOriginBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainOriginBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainOriginBpsDataResponse() = default;
};
class DescribeScdnDomainOriginTrafficDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};

  DescribeScdnDomainOriginTrafficDataRequest() {}

  explicit DescribeScdnDomainOriginTrafficDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
  }


  virtual ~DescribeScdnDomainOriginTrafficDataRequest() = default;
};
class DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> trafficValue{};
  shared_ptr<string> httpTrafficValue{};
  shared_ptr<string> httpsTrafficValue{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficValue) {
      res["TrafficValue"] = boost::any(*trafficValue);
    }
    if (httpTrafficValue) {
      res["HttpTrafficValue"] = boost::any(*httpTrafficValue);
    }
    if (httpsTrafficValue) {
      res["HttpsTrafficValue"] = boost::any(*httpsTrafficValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficValue") != m.end() && !m["TrafficValue"].empty()) {
      trafficValue = make_shared<string>(boost::any_cast<string>(m["TrafficValue"]));
    }
    if (m.find("HttpTrafficValue") != m.end() && !m["HttpTrafficValue"].empty()) {
      httpTrafficValue = make_shared<string>(boost::any_cast<string>(m["HttpTrafficValue"]));
    }
    if (m.find("HttpsTrafficValue") != m.end() && !m["HttpsTrafficValue"].empty()) {
      httpsTrafficValue = make_shared<string>(boost::any_cast<string>(m["HttpsTrafficValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval() {}

  explicit DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval() = default;
};
class DescribeScdnDomainOriginTrafficDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval> originTrafficDataPerInterval{};

  DescribeScdnDomainOriginTrafficDataResponseBody() {}

  explicit DescribeScdnDomainOriginTrafficDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (originTrafficDataPerInterval) {
      res["OriginTrafficDataPerInterval"] = originTrafficDataPerInterval ? boost::any(originTrafficDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("OriginTrafficDataPerInterval") != m.end() && !m["OriginTrafficDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["OriginTrafficDataPerInterval"].type()) {
        DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OriginTrafficDataPerInterval"]));
        originTrafficDataPerInterval = make_shared<DescribeScdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainOriginTrafficDataResponseBody() = default;
};
class DescribeScdnDomainOriginTrafficDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainOriginTrafficDataResponseBody> body{};

  DescribeScdnDomainOriginTrafficDataResponse() {}

  explicit DescribeScdnDomainOriginTrafficDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainOriginTrafficDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainOriginTrafficDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainOriginTrafficDataResponse() = default;
};
class DescribeScdnDomainPvDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainPvDataRequest() {}

  explicit DescribeScdnDomainPvDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainPvDataRequest() = default;
};
class DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData() {}

  explicit DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData() = default;
};
class DescribeScdnDomainPvDataResponseBodyPvDataInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData>> usageData{};

  DescribeScdnDomainPvDataResponseBodyPvDataInterval() {}

  explicit DescribeScdnDomainPvDataResponseBodyPvDataInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeScdnDomainPvDataResponseBodyPvDataIntervalUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainPvDataResponseBodyPvDataInterval() = default;
};
class DescribeScdnDomainPvDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainPvDataResponseBodyPvDataInterval> pvDataInterval{};

  DescribeScdnDomainPvDataResponseBody() {}

  explicit DescribeScdnDomainPvDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (pvDataInterval) {
      res["PvDataInterval"] = pvDataInterval ? boost::any(pvDataInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("PvDataInterval") != m.end() && !m["PvDataInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["PvDataInterval"].type()) {
        DescribeScdnDomainPvDataResponseBodyPvDataInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PvDataInterval"]));
        pvDataInterval = make_shared<DescribeScdnDomainPvDataResponseBodyPvDataInterval>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainPvDataResponseBody() = default;
};
class DescribeScdnDomainPvDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainPvDataResponseBody> body{};

  DescribeScdnDomainPvDataResponse() {}

  explicit DescribeScdnDomainPvDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainPvDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainPvDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainPvDataResponse() = default;
};
class DescribeScdnDomainQpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeScdnDomainQpsDataRequest() {}

  explicit DescribeScdnDomainQpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeScdnDomainQpsDataRequest() = default;
};
class DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> httpsAccValue{};
  shared_ptr<string> qpsValue{};
  shared_ptr<string> accValue{};
  shared_ptr<string> httpQpsValue{};
  shared_ptr<string> timeStamp{};
  shared_ptr<string> httpsQpsValue{};
  shared_ptr<string> httpAccValue{};

  DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpsAccValue) {
      res["HttpsAccValue"] = boost::any(*httpsAccValue);
    }
    if (qpsValue) {
      res["QpsValue"] = boost::any(*qpsValue);
    }
    if (accValue) {
      res["AccValue"] = boost::any(*accValue);
    }
    if (httpQpsValue) {
      res["HttpQpsValue"] = boost::any(*httpQpsValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (httpsQpsValue) {
      res["HttpsQpsValue"] = boost::any(*httpsQpsValue);
    }
    if (httpAccValue) {
      res["HttpAccValue"] = boost::any(*httpAccValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpsAccValue") != m.end() && !m["HttpsAccValue"].empty()) {
      httpsAccValue = make_shared<string>(boost::any_cast<string>(m["HttpsAccValue"]));
    }
    if (m.find("QpsValue") != m.end() && !m["QpsValue"].empty()) {
      qpsValue = make_shared<string>(boost::any_cast<string>(m["QpsValue"]));
    }
    if (m.find("AccValue") != m.end() && !m["AccValue"].empty()) {
      accValue = make_shared<string>(boost::any_cast<string>(m["AccValue"]));
    }
    if (m.find("HttpQpsValue") != m.end() && !m["HttpQpsValue"].empty()) {
      httpQpsValue = make_shared<string>(boost::any_cast<string>(m["HttpQpsValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("HttpsQpsValue") != m.end() && !m["HttpsQpsValue"].empty()) {
      httpsQpsValue = make_shared<string>(boost::any_cast<string>(m["HttpsQpsValue"]));
    }
    if (m.find("HttpAccValue") != m.end() && !m["HttpAccValue"].empty()) {
      httpAccValue = make_shared<string>(boost::any_cast<string>(m["HttpAccValue"]));
    }
  }


  virtual ~DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainQpsDataResponseBodyQpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainQpsDataResponseBodyQpsDataPerInterval() {}

  explicit DescribeScdnDomainQpsDataResponseBodyQpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainQpsDataResponseBodyQpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainQpsDataResponseBodyQpsDataPerInterval() = default;
};
class DescribeScdnDomainQpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnDomainQpsDataResponseBodyQpsDataPerInterval> qpsDataPerInterval{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};

  DescribeScdnDomainQpsDataResponseBody() {}

  explicit DescribeScdnDomainQpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qpsDataPerInterval) {
      res["QpsDataPerInterval"] = qpsDataPerInterval ? boost::any(qpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QpsDataPerInterval") != m.end() && !m["QpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["QpsDataPerInterval"].type()) {
        DescribeScdnDomainQpsDataResponseBodyQpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QpsDataPerInterval"]));
        qpsDataPerInterval = make_shared<DescribeScdnDomainQpsDataResponseBodyQpsDataPerInterval>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
  }


  virtual ~DescribeScdnDomainQpsDataResponseBody() = default;
};
class DescribeScdnDomainQpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainQpsDataResponseBody> body{};

  DescribeScdnDomainQpsDataResponse() {}

  explicit DescribeScdnDomainQpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainQpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainQpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainQpsDataResponse() = default;
};
class DescribeScdnDomainRealTimeBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRealTimeBpsDataRequest() {}

  explicit DescribeScdnDomainRealTimeBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeBpsDataRequest() = default;
};
class DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel : public Darabonba::Model {
public:
  shared_ptr<string> timeStamp{};
  shared_ptr<double> bps{};

  DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel() {}

  explicit DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<double>(boost::any_cast<double>(m["Bps"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel() = default;
};
class DescribeScdnDomainRealTimeBpsDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel>> bpsModel{};

  DescribeScdnDomainRealTimeBpsDataResponseBodyData() {}

  explicit DescribeScdnDomainRealTimeBpsDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bpsModel) {
      vector<boost::any> temp1;
      for(auto item1:*bpsModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BpsModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BpsModel") != m.end() && !m["BpsModel"].empty()) {
      if (typeid(vector<boost::any>) == m["BpsModel"].type()) {
        vector<DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BpsModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bpsModel = make_shared<vector<DescribeScdnDomainRealTimeBpsDataResponseBodyDataBpsModel>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeBpsDataResponseBodyData() = default;
};
class DescribeScdnDomainRealTimeBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnDomainRealTimeBpsDataResponseBodyData> data{};

  DescribeScdnDomainRealTimeBpsDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeScdnDomainRealTimeBpsDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeScdnDomainRealTimeBpsDataResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeBpsDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeBpsDataResponseBody> body{};

  DescribeScdnDomainRealTimeBpsDataResponse() {}

  explicit DescribeScdnDomainRealTimeBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeBpsDataResponse() = default;
};
class DescribeScdnDomainRealTimeByteHitRateDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRealTimeByteHitRateDataRequest() {}

  explicit DescribeScdnDomainRealTimeByteHitRateDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeByteHitRateDataRequest() = default;
};
class DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel : public Darabonba::Model {
public:
  shared_ptr<double> byteHitRate{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel() {}

  explicit DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byteHitRate) {
      res["ByteHitRate"] = boost::any(*byteHitRate);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByteHitRate") != m.end() && !m["ByteHitRate"].empty()) {
      byteHitRate = make_shared<double>(boost::any_cast<double>(m["ByteHitRate"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel() = default;
};
class DescribeScdnDomainRealTimeByteHitRateDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>> byteHitRateDataModel{};

  DescribeScdnDomainRealTimeByteHitRateDataResponseBodyData() {}

  explicit DescribeScdnDomainRealTimeByteHitRateDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byteHitRateDataModel) {
      vector<boost::any> temp1;
      for(auto item1:*byteHitRateDataModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ByteHitRateDataModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByteHitRateDataModel") != m.end() && !m["ByteHitRateDataModel"].empty()) {
      if (typeid(vector<boost::any>) == m["ByteHitRateDataModel"].type()) {
        vector<DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ByteHitRateDataModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        byteHitRateDataModel = make_shared<vector<DescribeScdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeByteHitRateDataResponseBodyData() = default;
};
class DescribeScdnDomainRealTimeByteHitRateDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnDomainRealTimeByteHitRateDataResponseBodyData> data{};

  DescribeScdnDomainRealTimeByteHitRateDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeByteHitRateDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeScdnDomainRealTimeByteHitRateDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeScdnDomainRealTimeByteHitRateDataResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeByteHitRateDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeByteHitRateDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeByteHitRateDataResponseBody> body{};

  DescribeScdnDomainRealTimeByteHitRateDataResponse() {}

  explicit DescribeScdnDomainRealTimeByteHitRateDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeByteHitRateDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeByteHitRateDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeByteHitRateDataResponse() = default;
};
class DescribeScdnDomainRealTimeHttpCodeDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeScdnDomainRealTimeHttpCodeDataRequest() {}

  explicit DescribeScdnDomainRealTimeHttpCodeDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeHttpCodeDataRequest() = default;
};
class DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> proportion{};
  shared_ptr<string> count{};

  DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData() {}

  explicit DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData() = default;
};
class DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>> realTimeCodeProportionData{};

  DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue() {}

  explicit DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (realTimeCodeProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*realTimeCodeProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RealTimeCodeProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RealTimeCodeProportionData") != m.end() && !m["RealTimeCodeProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["RealTimeCodeProportionData"].type()) {
        vector<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RealTimeCodeProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        realTimeCodeProportionData = make_shared<vector<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue() = default;
};
class DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue> value{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData() {}

  explicit DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue>(model1);
      }
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData() = default;
};
class DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>> usageData{};

  DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() {}

  explicit DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default;
};
class DescribeScdnDomainRealTimeHttpCodeDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData> realTimeHttpCodeData{};

  DescribeScdnDomainRealTimeHttpCodeDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeHttpCodeDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (realTimeHttpCodeData) {
      res["RealTimeHttpCodeData"] = realTimeHttpCodeData ? boost::any(realTimeHttpCodeData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("RealTimeHttpCodeData") != m.end() && !m["RealTimeHttpCodeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealTimeHttpCodeData"].type()) {
        DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealTimeHttpCodeData"]));
        realTimeHttpCodeData = make_shared<DescribeScdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeHttpCodeDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeHttpCodeDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeHttpCodeDataResponseBody> body{};

  DescribeScdnDomainRealTimeHttpCodeDataResponse() {}

  explicit DescribeScdnDomainRealTimeHttpCodeDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeHttpCodeDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeHttpCodeDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeHttpCodeDataResponse() = default;
};
class DescribeScdnDomainRealTimeQpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRealTimeQpsDataRequest() {}

  explicit DescribeScdnDomainRealTimeQpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeQpsDataRequest() = default;
};
class DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel : public Darabonba::Model {
public:
  shared_ptr<double> qps{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel() {}

  explicit DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<double>(boost::any_cast<double>(m["Qps"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel() = default;
};
class DescribeScdnDomainRealTimeQpsDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel>> qpsModel{};

  DescribeScdnDomainRealTimeQpsDataResponseBodyData() {}

  explicit DescribeScdnDomainRealTimeQpsDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qpsModel) {
      vector<boost::any> temp1;
      for(auto item1:*qpsModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QpsModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QpsModel") != m.end() && !m["QpsModel"].empty()) {
      if (typeid(vector<boost::any>) == m["QpsModel"].type()) {
        vector<DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QpsModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qpsModel = make_shared<vector<DescribeScdnDomainRealTimeQpsDataResponseBodyDataQpsModel>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeQpsDataResponseBodyData() = default;
};
class DescribeScdnDomainRealTimeQpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnDomainRealTimeQpsDataResponseBodyData> data{};

  DescribeScdnDomainRealTimeQpsDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeQpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeScdnDomainRealTimeQpsDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeScdnDomainRealTimeQpsDataResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeQpsDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeQpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeQpsDataResponseBody> body{};

  DescribeScdnDomainRealTimeQpsDataResponse() {}

  explicit DescribeScdnDomainRealTimeQpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeQpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeQpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeQpsDataResponse() = default;
};
class DescribeScdnDomainRealTimeReqHitRateDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRealTimeReqHitRateDataRequest() {}

  explicit DescribeScdnDomainRealTimeReqHitRateDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeReqHitRateDataRequest() = default;
};
class DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel : public Darabonba::Model {
public:
  shared_ptr<double> reqHitRate{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel() {}

  explicit DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reqHitRate) {
      res["ReqHitRate"] = boost::any(*reqHitRate);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReqHitRate") != m.end() && !m["ReqHitRate"].empty()) {
      reqHitRate = make_shared<double>(boost::any_cast<double>(m["ReqHitRate"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel() = default;
};
class DescribeScdnDomainRealTimeReqHitRateDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>> reqHitRateDataModel{};

  DescribeScdnDomainRealTimeReqHitRateDataResponseBodyData() {}

  explicit DescribeScdnDomainRealTimeReqHitRateDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reqHitRateDataModel) {
      vector<boost::any> temp1;
      for(auto item1:*reqHitRateDataModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReqHitRateDataModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReqHitRateDataModel") != m.end() && !m["ReqHitRateDataModel"].empty()) {
      if (typeid(vector<boost::any>) == m["ReqHitRateDataModel"].type()) {
        vector<DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReqHitRateDataModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reqHitRateDataModel = make_shared<vector<DescribeScdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeReqHitRateDataResponseBodyData() = default;
};
class DescribeScdnDomainRealTimeReqHitRateDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScdnDomainRealTimeReqHitRateDataResponseBodyData> data{};

  DescribeScdnDomainRealTimeReqHitRateDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeReqHitRateDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeScdnDomainRealTimeReqHitRateDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeScdnDomainRealTimeReqHitRateDataResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeReqHitRateDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeReqHitRateDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeReqHitRateDataResponseBody> body{};

  DescribeScdnDomainRealTimeReqHitRateDataResponse() {}

  explicit DescribeScdnDomainRealTimeReqHitRateDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeReqHitRateDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeReqHitRateDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeReqHitRateDataResponse() = default;
};
class DescribeScdnDomainRealTimeSrcBpsDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRealTimeSrcBpsDataRequest() {}

  explicit DescribeScdnDomainRealTimeSrcBpsDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcBpsDataRequest() = default;
};
class DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval() {}

  explicit DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval() = default;
};
class DescribeScdnDomainRealTimeSrcBpsDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval> realTimeSrcBpsDataPerInterval{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};

  DescribeScdnDomainRealTimeSrcBpsDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeSrcBpsDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (realTimeSrcBpsDataPerInterval) {
      res["RealTimeSrcBpsDataPerInterval"] = realTimeSrcBpsDataPerInterval ? boost::any(realTimeSrcBpsDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("RealTimeSrcBpsDataPerInterval") != m.end() && !m["RealTimeSrcBpsDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealTimeSrcBpsDataPerInterval"].type()) {
        DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealTimeSrcBpsDataPerInterval"]));
        realTimeSrcBpsDataPerInterval = make_shared<DescribeScdnDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcBpsDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeSrcBpsDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeSrcBpsDataResponseBody> body{};

  DescribeScdnDomainRealTimeSrcBpsDataResponse() {}

  explicit DescribeScdnDomainRealTimeSrcBpsDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeSrcBpsDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeSrcBpsDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcBpsDataResponse() = default;
};
class DescribeScdnDomainRealTimeSrcTrafficDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRealTimeSrcTrafficDataRequest() {}

  explicit DescribeScdnDomainRealTimeSrcTrafficDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcTrafficDataRequest() = default;
};
class DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerInterval() {}

  explicit DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerInterval() = default;
};
class DescribeScdnDomainRealTimeSrcTrafficDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerInterval> realTimeSrcTrafficDataPerInterval{};

  DescribeScdnDomainRealTimeSrcTrafficDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeSrcTrafficDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (realTimeSrcTrafficDataPerInterval) {
      res["RealTimeSrcTrafficDataPerInterval"] = realTimeSrcTrafficDataPerInterval ? boost::any(realTimeSrcTrafficDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("RealTimeSrcTrafficDataPerInterval") != m.end() && !m["RealTimeSrcTrafficDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealTimeSrcTrafficDataPerInterval"].type()) {
        DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealTimeSrcTrafficDataPerInterval"]));
        realTimeSrcTrafficDataPerInterval = make_shared<DescribeScdnDomainRealTimeSrcTrafficDataResponseBodyRealTimeSrcTrafficDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcTrafficDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeSrcTrafficDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeSrcTrafficDataResponseBody> body{};

  DescribeScdnDomainRealTimeSrcTrafficDataResponse() {}

  explicit DescribeScdnDomainRealTimeSrcTrafficDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeSrcTrafficDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeSrcTrafficDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeSrcTrafficDataResponse() = default;
};
class DescribeScdnDomainRealTimeTrafficDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRealTimeTrafficDataRequest() {}

  explicit DescribeScdnDomainRealTimeTrafficDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeTrafficDataRequest() = default;
};
class DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval() {}

  explicit DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval() = default;
};
class DescribeScdnDomainRealTimeTrafficDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval> realTimeTrafficDataPerInterval{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};

  DescribeScdnDomainRealTimeTrafficDataResponseBody() {}

  explicit DescribeScdnDomainRealTimeTrafficDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (realTimeTrafficDataPerInterval) {
      res["RealTimeTrafficDataPerInterval"] = realTimeTrafficDataPerInterval ? boost::any(realTimeTrafficDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("RealTimeTrafficDataPerInterval") != m.end() && !m["RealTimeTrafficDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealTimeTrafficDataPerInterval"].type()) {
        DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealTimeTrafficDataPerInterval"]));
        realTimeTrafficDataPerInterval = make_shared<DescribeScdnDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
  }


  virtual ~DescribeScdnDomainRealTimeTrafficDataResponseBody() = default;
};
class DescribeScdnDomainRealTimeTrafficDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRealTimeTrafficDataResponseBody> body{};

  DescribeScdnDomainRealTimeTrafficDataResponse() {}

  explicit DescribeScdnDomainRealTimeTrafficDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRealTimeTrafficDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRealTimeTrafficDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRealTimeTrafficDataResponse() = default;
};
class DescribeScdnDomainRegionDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainRegionDataRequest() {}

  explicit DescribeScdnDomainRegionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainRegionDataRequest() = default;
};
class DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData : public Darabonba::Model {
public:
  shared_ptr<string> totalQuery{};
  shared_ptr<string> totalBytes{};
  shared_ptr<string> avgResponseRate{};
  shared_ptr<string> avgResponseTime{};
  shared_ptr<string> reqErrRate{};
  shared_ptr<string> avgObjectSize{};
  shared_ptr<string> bps{};
  shared_ptr<string> qps{};
  shared_ptr<string> regionEname{};
  shared_ptr<string> region{};
  shared_ptr<string> proportion{};
  shared_ptr<string> bytesProportion{};

  DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData() {}

  explicit DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalQuery) {
      res["TotalQuery"] = boost::any(*totalQuery);
    }
    if (totalBytes) {
      res["TotalBytes"] = boost::any(*totalBytes);
    }
    if (avgResponseRate) {
      res["AvgResponseRate"] = boost::any(*avgResponseRate);
    }
    if (avgResponseTime) {
      res["AvgResponseTime"] = boost::any(*avgResponseTime);
    }
    if (reqErrRate) {
      res["ReqErrRate"] = boost::any(*reqErrRate);
    }
    if (avgObjectSize) {
      res["AvgObjectSize"] = boost::any(*avgObjectSize);
    }
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (regionEname) {
      res["RegionEname"] = boost::any(*regionEname);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (proportion) {
      res["Proportion"] = boost::any(*proportion);
    }
    if (bytesProportion) {
      res["BytesProportion"] = boost::any(*bytesProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalQuery") != m.end() && !m["TotalQuery"].empty()) {
      totalQuery = make_shared<string>(boost::any_cast<string>(m["TotalQuery"]));
    }
    if (m.find("TotalBytes") != m.end() && !m["TotalBytes"].empty()) {
      totalBytes = make_shared<string>(boost::any_cast<string>(m["TotalBytes"]));
    }
    if (m.find("AvgResponseRate") != m.end() && !m["AvgResponseRate"].empty()) {
      avgResponseRate = make_shared<string>(boost::any_cast<string>(m["AvgResponseRate"]));
    }
    if (m.find("AvgResponseTime") != m.end() && !m["AvgResponseTime"].empty()) {
      avgResponseTime = make_shared<string>(boost::any_cast<string>(m["AvgResponseTime"]));
    }
    if (m.find("ReqErrRate") != m.end() && !m["ReqErrRate"].empty()) {
      reqErrRate = make_shared<string>(boost::any_cast<string>(m["ReqErrRate"]));
    }
    if (m.find("AvgObjectSize") != m.end() && !m["AvgObjectSize"].empty()) {
      avgObjectSize = make_shared<string>(boost::any_cast<string>(m["AvgObjectSize"]));
    }
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<string>(boost::any_cast<string>(m["Bps"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("RegionEname") != m.end() && !m["RegionEname"].empty()) {
      regionEname = make_shared<string>(boost::any_cast<string>(m["RegionEname"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Proportion") != m.end() && !m["Proportion"].empty()) {
      proportion = make_shared<string>(boost::any_cast<string>(m["Proportion"]));
    }
    if (m.find("BytesProportion") != m.end() && !m["BytesProportion"].empty()) {
      bytesProportion = make_shared<string>(boost::any_cast<string>(m["BytesProportion"]));
    }
  }


  virtual ~DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData() = default;
};
class DescribeScdnDomainRegionDataResponseBodyValue : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData>> regionProportionData{};

  DescribeScdnDomainRegionDataResponseBodyValue() {}

  explicit DescribeScdnDomainRegionDataResponseBodyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionProportionData) {
      vector<boost::any> temp1;
      for(auto item1:*regionProportionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionProportionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionProportionData") != m.end() && !m["RegionProportionData"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionProportionData"].type()) {
        vector<DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionProportionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionProportionData = make_shared<vector<DescribeScdnDomainRegionDataResponseBodyValueRegionProportionData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainRegionDataResponseBodyValue() = default;
};
class DescribeScdnDomainRegionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};
  shared_ptr<DescribeScdnDomainRegionDataResponseBodyValue> value{};

  DescribeScdnDomainRegionDataResponseBody() {}

  explicit DescribeScdnDomainRegionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        DescribeScdnDomainRegionDataResponseBodyValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<DescribeScdnDomainRegionDataResponseBodyValue>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRegionDataResponseBody() = default;
};
class DescribeScdnDomainRegionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainRegionDataResponseBody> body{};

  DescribeScdnDomainRegionDataResponse() {}

  explicit DescribeScdnDomainRegionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainRegionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainRegionDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainRegionDataResponse() = default;
};
class DescribeScdnDomainTopReferVisitRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> sortBy{};

  DescribeScdnDomainTopReferVisitRequest() {}

  explicit DescribeScdnDomainTopReferVisitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~DescribeScdnDomainTopReferVisitRequest() = default;
};
class DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList : public Darabonba::Model {
public:
  shared_ptr<string> visitData{};
  shared_ptr<string> referDetail{};
  shared_ptr<double> visitProportion{};
  shared_ptr<string> flow{};
  shared_ptr<double> flowProportion{};

  DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList() {}

  explicit DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (visitData) {
      res["VisitData"] = boost::any(*visitData);
    }
    if (referDetail) {
      res["ReferDetail"] = boost::any(*referDetail);
    }
    if (visitProportion) {
      res["VisitProportion"] = boost::any(*visitProportion);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (flowProportion) {
      res["FlowProportion"] = boost::any(*flowProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VisitData") != m.end() && !m["VisitData"].empty()) {
      visitData = make_shared<string>(boost::any_cast<string>(m["VisitData"]));
    }
    if (m.find("ReferDetail") != m.end() && !m["ReferDetail"].empty()) {
      referDetail = make_shared<string>(boost::any_cast<string>(m["ReferDetail"]));
    }
    if (m.find("VisitProportion") != m.end() && !m["VisitProportion"].empty()) {
      visitProportion = make_shared<double>(boost::any_cast<double>(m["VisitProportion"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
    if (m.find("FlowProportion") != m.end() && !m["FlowProportion"].empty()) {
      flowProportion = make_shared<double>(boost::any_cast<double>(m["FlowProportion"]));
    }
  }


  virtual ~DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList() = default;
};
class DescribeScdnDomainTopReferVisitResponseBodyTopReferList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList>> referList{};

  DescribeScdnDomainTopReferVisitResponseBodyTopReferList() {}

  explicit DescribeScdnDomainTopReferVisitResponseBodyTopReferList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (referList) {
      vector<boost::any> temp1;
      for(auto item1:*referList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReferList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReferList") != m.end() && !m["ReferList"].empty()) {
      if (typeid(vector<boost::any>) == m["ReferList"].type()) {
        vector<DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReferList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        referList = make_shared<vector<DescribeScdnDomainTopReferVisitResponseBodyTopReferListReferList>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopReferVisitResponseBodyTopReferList() = default;
};
class DescribeScdnDomainTopReferVisitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeScdnDomainTopReferVisitResponseBodyTopReferList> topReferList{};

  DescribeScdnDomainTopReferVisitResponseBody() {}

  explicit DescribeScdnDomainTopReferVisitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (topReferList) {
      res["TopReferList"] = topReferList ? boost::any(topReferList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TopReferList") != m.end() && !m["TopReferList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopReferList"].type()) {
        DescribeScdnDomainTopReferVisitResponseBodyTopReferList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopReferList"]));
        topReferList = make_shared<DescribeScdnDomainTopReferVisitResponseBodyTopReferList>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopReferVisitResponseBody() = default;
};
class DescribeScdnDomainTopReferVisitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainTopReferVisitResponseBody> body{};

  DescribeScdnDomainTopReferVisitResponse() {}

  explicit DescribeScdnDomainTopReferVisitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainTopReferVisitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainTopReferVisitResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopReferVisitResponse() = default;
};
class DescribeScdnDomainTopUrlVisitRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> sortBy{};

  DescribeScdnDomainTopUrlVisitRequest() {}

  explicit DescribeScdnDomainTopUrlVisitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitRequest() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList : public Darabonba::Model {
public:
  shared_ptr<string> urlDetail{};
  shared_ptr<string> visitData{};
  shared_ptr<double> visitProportion{};
  shared_ptr<string> flow{};
  shared_ptr<double> flowProportion{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlDetail) {
      res["UrlDetail"] = boost::any(*urlDetail);
    }
    if (visitData) {
      res["VisitData"] = boost::any(*visitData);
    }
    if (visitProportion) {
      res["VisitProportion"] = boost::any(*visitProportion);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (flowProportion) {
      res["FlowProportion"] = boost::any(*flowProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlDetail") != m.end() && !m["UrlDetail"].empty()) {
      urlDetail = make_shared<string>(boost::any_cast<string>(m["UrlDetail"]));
    }
    if (m.find("VisitData") != m.end() && !m["VisitData"].empty()) {
      visitData = make_shared<string>(boost::any_cast<string>(m["VisitData"]));
    }
    if (m.find("VisitProportion") != m.end() && !m["VisitProportion"].empty()) {
      visitProportion = make_shared<double>(boost::any_cast<double>(m["VisitProportion"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
    if (m.find("FlowProportion") != m.end() && !m["FlowProportion"].empty()) {
      flowProportion = make_shared<double>(boost::any_cast<double>(m["FlowProportion"]));
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl500List : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList>> urlList{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl500List() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl500List(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlList) {
      vector<boost::any> temp1;
      for(auto item1:*urlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UrlList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlList") != m.end() && !m["UrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["UrlList"].type()) {
        vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urlList = make_shared<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl500ListUrlList>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl500List() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList : public Darabonba::Model {
public:
  shared_ptr<string> urlDetail{};
  shared_ptr<string> visitData{};
  shared_ptr<double> visitProportion{};
  shared_ptr<string> flow{};
  shared_ptr<double> flowProportion{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlDetail) {
      res["UrlDetail"] = boost::any(*urlDetail);
    }
    if (visitData) {
      res["VisitData"] = boost::any(*visitData);
    }
    if (visitProportion) {
      res["VisitProportion"] = boost::any(*visitProportion);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (flowProportion) {
      res["FlowProportion"] = boost::any(*flowProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlDetail") != m.end() && !m["UrlDetail"].empty()) {
      urlDetail = make_shared<string>(boost::any_cast<string>(m["UrlDetail"]));
    }
    if (m.find("VisitData") != m.end() && !m["VisitData"].empty()) {
      visitData = make_shared<string>(boost::any_cast<string>(m["VisitData"]));
    }
    if (m.find("VisitProportion") != m.end() && !m["VisitProportion"].empty()) {
      visitProportion = make_shared<double>(boost::any_cast<double>(m["VisitProportion"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
    if (m.find("FlowProportion") != m.end() && !m["FlowProportion"].empty()) {
      flowProportion = make_shared<double>(boost::any_cast<double>(m["FlowProportion"]));
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl200List : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList>> urlList{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl200List() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl200List(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlList) {
      vector<boost::any> temp1;
      for(auto item1:*urlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UrlList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlList") != m.end() && !m["UrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["UrlList"].type()) {
        vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urlList = make_shared<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl200ListUrlList>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl200List() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList : public Darabonba::Model {
public:
  shared_ptr<string> urlDetail{};
  shared_ptr<string> visitData{};
  shared_ptr<double> visitProportion{};
  shared_ptr<string> flow{};
  shared_ptr<double> flowProportion{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlDetail) {
      res["UrlDetail"] = boost::any(*urlDetail);
    }
    if (visitData) {
      res["VisitData"] = boost::any(*visitData);
    }
    if (visitProportion) {
      res["VisitProportion"] = boost::any(*visitProportion);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (flowProportion) {
      res["FlowProportion"] = boost::any(*flowProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlDetail") != m.end() && !m["UrlDetail"].empty()) {
      urlDetail = make_shared<string>(boost::any_cast<string>(m["UrlDetail"]));
    }
    if (m.find("VisitData") != m.end() && !m["VisitData"].empty()) {
      visitData = make_shared<string>(boost::any_cast<string>(m["VisitData"]));
    }
    if (m.find("VisitProportion") != m.end() && !m["VisitProportion"].empty()) {
      visitProportion = make_shared<double>(boost::any_cast<double>(m["VisitProportion"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
    if (m.find("FlowProportion") != m.end() && !m["FlowProportion"].empty()) {
      flowProportion = make_shared<double>(boost::any_cast<double>(m["FlowProportion"]));
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl400List : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList>> urlList{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl400List() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl400List(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlList) {
      vector<boost::any> temp1;
      for(auto item1:*urlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UrlList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlList") != m.end() && !m["UrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["UrlList"].type()) {
        vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urlList = make_shared<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl400ListUrlList>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl400List() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList : public Darabonba::Model {
public:
  shared_ptr<string> urlDetail{};
  shared_ptr<string> visitData{};
  shared_ptr<double> visitProportion{};
  shared_ptr<string> flow{};
  shared_ptr<double> flowProportion{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlDetail) {
      res["UrlDetail"] = boost::any(*urlDetail);
    }
    if (visitData) {
      res["VisitData"] = boost::any(*visitData);
    }
    if (visitProportion) {
      res["VisitProportion"] = boost::any(*visitProportion);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (flowProportion) {
      res["FlowProportion"] = boost::any(*flowProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlDetail") != m.end() && !m["UrlDetail"].empty()) {
      urlDetail = make_shared<string>(boost::any_cast<string>(m["UrlDetail"]));
    }
    if (m.find("VisitData") != m.end() && !m["VisitData"].empty()) {
      visitData = make_shared<string>(boost::any_cast<string>(m["VisitData"]));
    }
    if (m.find("VisitProportion") != m.end() && !m["VisitProportion"].empty()) {
      visitProportion = make_shared<double>(boost::any_cast<double>(m["VisitProportion"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
    if (m.find("FlowProportion") != m.end() && !m["FlowProportion"].empty()) {
      flowProportion = make_shared<double>(boost::any_cast<double>(m["FlowProportion"]));
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyUrl300List : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList>> urlList{};

  DescribeScdnDomainTopUrlVisitResponseBodyUrl300List() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyUrl300List(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlList) {
      vector<boost::any> temp1;
      for(auto item1:*urlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UrlList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlList") != m.end() && !m["UrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["UrlList"].type()) {
        vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urlList = make_shared<vector<DescribeScdnDomainTopUrlVisitResponseBodyUrl300ListUrlList>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyUrl300List() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList : public Darabonba::Model {
public:
  shared_ptr<string> urlDetail{};
  shared_ptr<string> visitData{};
  shared_ptr<double> visitProportion{};
  shared_ptr<string> flow{};
  shared_ptr<double> flowProportion{};

  DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlDetail) {
      res["UrlDetail"] = boost::any(*urlDetail);
    }
    if (visitData) {
      res["VisitData"] = boost::any(*visitData);
    }
    if (visitProportion) {
      res["VisitProportion"] = boost::any(*visitProportion);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (flowProportion) {
      res["FlowProportion"] = boost::any(*flowProportion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlDetail") != m.end() && !m["UrlDetail"].empty()) {
      urlDetail = make_shared<string>(boost::any_cast<string>(m["UrlDetail"]));
    }
    if (m.find("VisitData") != m.end() && !m["VisitData"].empty()) {
      visitData = make_shared<string>(boost::any_cast<string>(m["VisitData"]));
    }
    if (m.find("VisitProportion") != m.end() && !m["VisitProportion"].empty()) {
      visitProportion = make_shared<double>(boost::any_cast<double>(m["VisitProportion"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["Flow"]));
    }
    if (m.find("FlowProportion") != m.end() && !m["FlowProportion"].empty()) {
      flowProportion = make_shared<double>(boost::any_cast<double>(m["FlowProportion"]));
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBodyAllUrlList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList>> urlList{};

  DescribeScdnDomainTopUrlVisitResponseBodyAllUrlList() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBodyAllUrlList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlList) {
      vector<boost::any> temp1;
      for(auto item1:*urlList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UrlList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlList") != m.end() && !m["UrlList"].empty()) {
      if (typeid(vector<boost::any>) == m["UrlList"].type()) {
        vector<DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UrlList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urlList = make_shared<vector<DescribeScdnDomainTopUrlVisitResponseBodyAllUrlListUrlList>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBodyAllUrlList() = default;
};
class DescribeScdnDomainTopUrlVisitResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnDomainTopUrlVisitResponseBodyUrl500List> url500List{};
  shared_ptr<DescribeScdnDomainTopUrlVisitResponseBodyUrl200List> url200List{};
  shared_ptr<DescribeScdnDomainTopUrlVisitResponseBodyUrl400List> url400List{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeScdnDomainTopUrlVisitResponseBodyUrl300List> url300List{};
  shared_ptr<DescribeScdnDomainTopUrlVisitResponseBodyAllUrlList> allUrlList{};

  DescribeScdnDomainTopUrlVisitResponseBody() {}

  explicit DescribeScdnDomainTopUrlVisitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url500List) {
      res["Url500List"] = url500List ? boost::any(url500List->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (url200List) {
      res["Url200List"] = url200List ? boost::any(url200List->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (url400List) {
      res["Url400List"] = url400List ? boost::any(url400List->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (url300List) {
      res["Url300List"] = url300List ? boost::any(url300List->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (allUrlList) {
      res["AllUrlList"] = allUrlList ? boost::any(allUrlList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url500List") != m.end() && !m["Url500List"].empty()) {
      if (typeid(map<string, boost::any>) == m["Url500List"].type()) {
        DescribeScdnDomainTopUrlVisitResponseBodyUrl500List model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Url500List"]));
        url500List = make_shared<DescribeScdnDomainTopUrlVisitResponseBodyUrl500List>(model1);
      }
    }
    if (m.find("Url200List") != m.end() && !m["Url200List"].empty()) {
      if (typeid(map<string, boost::any>) == m["Url200List"].type()) {
        DescribeScdnDomainTopUrlVisitResponseBodyUrl200List model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Url200List"]));
        url200List = make_shared<DescribeScdnDomainTopUrlVisitResponseBodyUrl200List>(model1);
      }
    }
    if (m.find("Url400List") != m.end() && !m["Url400List"].empty()) {
      if (typeid(map<string, boost::any>) == m["Url400List"].type()) {
        DescribeScdnDomainTopUrlVisitResponseBodyUrl400List model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Url400List"]));
        url400List = make_shared<DescribeScdnDomainTopUrlVisitResponseBodyUrl400List>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Url300List") != m.end() && !m["Url300List"].empty()) {
      if (typeid(map<string, boost::any>) == m["Url300List"].type()) {
        DescribeScdnDomainTopUrlVisitResponseBodyUrl300List model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Url300List"]));
        url300List = make_shared<DescribeScdnDomainTopUrlVisitResponseBodyUrl300List>(model1);
      }
    }
    if (m.find("AllUrlList") != m.end() && !m["AllUrlList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AllUrlList"].type()) {
        DescribeScdnDomainTopUrlVisitResponseBodyAllUrlList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AllUrlList"]));
        allUrlList = make_shared<DescribeScdnDomainTopUrlVisitResponseBodyAllUrlList>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponseBody() = default;
};
class DescribeScdnDomainTopUrlVisitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainTopUrlVisitResponseBody> body{};

  DescribeScdnDomainTopUrlVisitResponse() {}

  explicit DescribeScdnDomainTopUrlVisitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainTopUrlVisitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainTopUrlVisitResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainTopUrlVisitResponse() = default;
};
class DescribeScdnDomainTrafficDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<string> ispNameEn{};
  shared_ptr<string> locationNameEn{};

  DescribeScdnDomainTrafficDataRequest() {}

  explicit DescribeScdnDomainTrafficDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ispNameEn) {
      res["IspNameEn"] = boost::any(*ispNameEn);
    }
    if (locationNameEn) {
      res["LocationNameEn"] = boost::any(*locationNameEn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("IspNameEn") != m.end() && !m["IspNameEn"].empty()) {
      ispNameEn = make_shared<string>(boost::any_cast<string>(m["IspNameEn"]));
    }
    if (m.find("LocationNameEn") != m.end() && !m["LocationNameEn"].empty()) {
      locationNameEn = make_shared<string>(boost::any_cast<string>(m["LocationNameEn"]));
    }
  }


  virtual ~DescribeScdnDomainTrafficDataRequest() = default;
};
class DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
public:
  shared_ptr<string> trafficValue{};
  shared_ptr<string> httpTrafficValue{};
  shared_ptr<string> httpsTrafficValue{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() {}

  explicit DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficValue) {
      res["TrafficValue"] = boost::any(*trafficValue);
    }
    if (httpTrafficValue) {
      res["HttpTrafficValue"] = boost::any(*httpTrafficValue);
    }
    if (httpsTrafficValue) {
      res["HttpsTrafficValue"] = boost::any(*httpsTrafficValue);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficValue") != m.end() && !m["TrafficValue"].empty()) {
      trafficValue = make_shared<string>(boost::any_cast<string>(m["TrafficValue"]));
    }
    if (m.find("HttpTrafficValue") != m.end() && !m["HttpTrafficValue"].empty()) {
      httpTrafficValue = make_shared<string>(boost::any_cast<string>(m["HttpTrafficValue"]));
    }
    if (m.find("HttpsTrafficValue") != m.end() && !m["HttpsTrafficValue"].empty()) {
      httpsTrafficValue = make_shared<string>(boost::any_cast<string>(m["HttpsTrafficValue"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default;
};
class DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule{};

  DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerInterval() {}

  explicit DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModule) {
      vector<boost::any> temp1;
      for(auto item1:*dataModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModule") != m.end() && !m["DataModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModule"].type()) {
        vector<DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModule = make_shared<vector<DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerInterval() = default;
};
class DescribeScdnDomainTrafficDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerInterval> trafficDataPerInterval{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};

  DescribeScdnDomainTrafficDataResponseBody() {}

  explicit DescribeScdnDomainTrafficDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (trafficDataPerInterval) {
      res["TrafficDataPerInterval"] = trafficDataPerInterval ? boost::any(trafficDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("TrafficDataPerInterval") != m.end() && !m["TrafficDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficDataPerInterval"].type()) {
        DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficDataPerInterval"]));
        trafficDataPerInterval = make_shared<DescribeScdnDomainTrafficDataResponseBodyTrafficDataPerInterval>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
  }


  virtual ~DescribeScdnDomainTrafficDataResponseBody() = default;
};
class DescribeScdnDomainTrafficDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainTrafficDataResponseBody> body{};

  DescribeScdnDomainTrafficDataResponse() {}

  explicit DescribeScdnDomainTrafficDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainTrafficDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainTrafficDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainTrafficDataResponse() = default;
};
class DescribeScdnDomainUvDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeScdnDomainUvDataRequest() {}

  explicit DescribeScdnDomainUvDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeScdnDomainUvDataRequest() = default;
};
class DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> timeStamp{};

  DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData() {}

  explicit DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData() = default;
};
class DescribeScdnDomainUvDataResponseBodyUvDataInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData>> usageData{};

  DescribeScdnDomainUvDataResponseBodyUvDataInterval() {}

  explicit DescribeScdnDomainUvDataResponseBodyUvDataInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usageData) {
      vector<boost::any> temp1;
      for(auto item1:*usageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsageData") != m.end() && !m["UsageData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageData"].type()) {
        vector<DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageData = make_shared<vector<DescribeScdnDomainUvDataResponseBodyUvDataIntervalUsageData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnDomainUvDataResponseBodyUvDataInterval() = default;
};
class DescribeScdnDomainUvDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnDomainUvDataResponseBodyUvDataInterval> uvDataInterval{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> dataInterval{};

  DescribeScdnDomainUvDataResponseBody() {}

  explicit DescribeScdnDomainUvDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uvDataInterval) {
      res["UvDataInterval"] = uvDataInterval ? boost::any(uvDataInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dataInterval) {
      res["DataInterval"] = boost::any(*dataInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UvDataInterval") != m.end() && !m["UvDataInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["UvDataInterval"].type()) {
        DescribeScdnDomainUvDataResponseBodyUvDataInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UvDataInterval"]));
        uvDataInterval = make_shared<DescribeScdnDomainUvDataResponseBodyUvDataInterval>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DataInterval") != m.end() && !m["DataInterval"].empty()) {
      dataInterval = make_shared<string>(boost::any_cast<string>(m["DataInterval"]));
    }
  }


  virtual ~DescribeScdnDomainUvDataResponseBody() = default;
};
class DescribeScdnDomainUvDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnDomainUvDataResponseBody> body{};

  DescribeScdnDomainUvDataResponse() {}

  explicit DescribeScdnDomainUvDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnDomainUvDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnDomainUvDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnDomainUvDataResponse() = default;
};
class DescribeScdnRefreshQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  DescribeScdnRefreshQuotaRequest() {}

  explicit DescribeScdnRefreshQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeScdnRefreshQuotaRequest() = default;
};
class DescribeScdnRefreshQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> urlRemain{};
  shared_ptr<string> preloadRemain{};
  shared_ptr<string> blockQuota{};
  shared_ptr<string> dirRemain{};
  shared_ptr<string> urlQuota{};
  shared_ptr<string> dirQuota{};
  shared_ptr<string> blockRemain{};
  shared_ptr<string> preloadQuota{};

  DescribeScdnRefreshQuotaResponseBody() {}

  explicit DescribeScdnRefreshQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (urlRemain) {
      res["UrlRemain"] = boost::any(*urlRemain);
    }
    if (preloadRemain) {
      res["PreloadRemain"] = boost::any(*preloadRemain);
    }
    if (blockQuota) {
      res["BlockQuota"] = boost::any(*blockQuota);
    }
    if (dirRemain) {
      res["DirRemain"] = boost::any(*dirRemain);
    }
    if (urlQuota) {
      res["UrlQuota"] = boost::any(*urlQuota);
    }
    if (dirQuota) {
      res["DirQuota"] = boost::any(*dirQuota);
    }
    if (blockRemain) {
      res["blockRemain"] = boost::any(*blockRemain);
    }
    if (preloadQuota) {
      res["PreloadQuota"] = boost::any(*preloadQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UrlRemain") != m.end() && !m["UrlRemain"].empty()) {
      urlRemain = make_shared<string>(boost::any_cast<string>(m["UrlRemain"]));
    }
    if (m.find("PreloadRemain") != m.end() && !m["PreloadRemain"].empty()) {
      preloadRemain = make_shared<string>(boost::any_cast<string>(m["PreloadRemain"]));
    }
    if (m.find("BlockQuota") != m.end() && !m["BlockQuota"].empty()) {
      blockQuota = make_shared<string>(boost::any_cast<string>(m["BlockQuota"]));
    }
    if (m.find("DirRemain") != m.end() && !m["DirRemain"].empty()) {
      dirRemain = make_shared<string>(boost::any_cast<string>(m["DirRemain"]));
    }
    if (m.find("UrlQuota") != m.end() && !m["UrlQuota"].empty()) {
      urlQuota = make_shared<string>(boost::any_cast<string>(m["UrlQuota"]));
    }
    if (m.find("DirQuota") != m.end() && !m["DirQuota"].empty()) {
      dirQuota = make_shared<string>(boost::any_cast<string>(m["DirQuota"]));
    }
    if (m.find("blockRemain") != m.end() && !m["blockRemain"].empty()) {
      blockRemain = make_shared<string>(boost::any_cast<string>(m["blockRemain"]));
    }
    if (m.find("PreloadQuota") != m.end() && !m["PreloadQuota"].empty()) {
      preloadQuota = make_shared<string>(boost::any_cast<string>(m["PreloadQuota"]));
    }
  }


  virtual ~DescribeScdnRefreshQuotaResponseBody() = default;
};
class DescribeScdnRefreshQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnRefreshQuotaResponseBody> body{};

  DescribeScdnRefreshQuotaResponse() {}

  explicit DescribeScdnRefreshQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnRefreshQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnRefreshQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnRefreshQuotaResponse() = default;
};
class DescribeScdnRefreshTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> taskId{};
  shared_ptr<string> objectPath{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> objectType{};
  shared_ptr<string> domainName{};
  shared_ptr<string> status{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> resourceGroupId{};

  DescribeScdnRefreshTasksRequest() {}

  explicit DescribeScdnRefreshTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (objectPath) {
      res["ObjectPath"] = boost::any(*objectPath);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("ObjectPath") != m.end() && !m["ObjectPath"].empty()) {
      objectPath = make_shared<string>(boost::any_cast<string>(m["ObjectPath"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeScdnRefreshTasksRequest() = default;
};
class DescribeScdnRefreshTasksResponseBodyTasksTask : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> objectType{};
  shared_ptr<string> process{};
  shared_ptr<string> description{};
  shared_ptr<string> objectPath{};
  shared_ptr<string> taskId{};

  DescribeScdnRefreshTasksResponseBodyTasksTask() {}

  explicit DescribeScdnRefreshTasksResponseBodyTasksTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (objectPath) {
      res["ObjectPath"] = boost::any(*objectPath);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ObjectPath") != m.end() && !m["ObjectPath"].empty()) {
      objectPath = make_shared<string>(boost::any_cast<string>(m["ObjectPath"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeScdnRefreshTasksResponseBodyTasksTask() = default;
};
class DescribeScdnRefreshTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnRefreshTasksResponseBodyTasksTask>> task{};

  DescribeScdnRefreshTasksResponseBodyTasks() {}

  explicit DescribeScdnRefreshTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<DescribeScdnRefreshTasksResponseBodyTasksTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnRefreshTasksResponseBodyTasksTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<DescribeScdnRefreshTasksResponseBodyTasksTask>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnRefreshTasksResponseBodyTasks() = default;
};
class DescribeScdnRefreshTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeScdnRefreshTasksResponseBodyTasks> tasks{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeScdnRefreshTasksResponseBody() {}

  explicit DescribeScdnRefreshTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (tasks) {
      res["Tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasks"].type()) {
        DescribeScdnRefreshTasksResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasks"]));
        tasks = make_shared<DescribeScdnRefreshTasksResponseBodyTasks>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeScdnRefreshTasksResponseBody() = default;
};
class DescribeScdnRefreshTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnRefreshTasksResponseBody> body{};

  DescribeScdnRefreshTasksResponse() {}

  explicit DescribeScdnRefreshTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnRefreshTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnRefreshTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnRefreshTasksResponse() = default;
};
class DescribeScdnServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  DescribeScdnServiceRequest() {}

  explicit DescribeScdnServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeScdnServiceRequest() = default;
};
class DescribeScdnServiceResponseBodyOperationLocksLockReason : public Darabonba::Model {
public:
  shared_ptr<string> lockReason{};

  DescribeScdnServiceResponseBodyOperationLocksLockReason() {}

  explicit DescribeScdnServiceResponseBodyOperationLocksLockReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
  }


  virtual ~DescribeScdnServiceResponseBodyOperationLocksLockReason() = default;
};
class DescribeScdnServiceResponseBodyOperationLocks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnServiceResponseBodyOperationLocksLockReason>> lockReason{};

  DescribeScdnServiceResponseBodyOperationLocks() {}

  explicit DescribeScdnServiceResponseBodyOperationLocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      vector<boost::any> temp1;
      for(auto item1:*lockReason){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LockReason"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      if (typeid(vector<boost::any>) == m["LockReason"].type()) {
        vector<DescribeScdnServiceResponseBodyOperationLocksLockReason> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LockReason"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnServiceResponseBodyOperationLocksLockReason model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lockReason = make_shared<vector<DescribeScdnServiceResponseBodyOperationLocksLockReason>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnServiceResponseBodyOperationLocks() = default;
};
class DescribeScdnServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> currentDDoSBasicValue{};
  shared_ptr<string> currentElasticProtectionValue{};
  shared_ptr<string> endTime{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> elasticProtection{};
  shared_ptr<string> domainCountValue{};
  shared_ptr<string> currentDomainCount{};
  shared_ptr<string> DDoSBasic{};
  shared_ptr<string> ccProtectionValue{};
  shared_ptr<string> elasticProtectionValue{};
  shared_ptr<string> openTime{};
  shared_ptr<string> changingChargeType{};
  shared_ptr<string> bandwidth{};
  shared_ptr<string> domainCount{};
  shared_ptr<string> currentBandwidth{};
  shared_ptr<string> requestId{};
  shared_ptr<string> currentElasticProtection{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> currentCcProtectionValue{};
  shared_ptr<string> currentDDoSBasic{};
  shared_ptr<string> currentProtectType{};
  shared_ptr<string> currentDomainCountValue{};
  shared_ptr<string> currentBandwidthValue{};
  shared_ptr<string> protectTypeValue{};
  shared_ptr<string> currentProtectTypeValue{};
  shared_ptr<string> ccProtection{};
  shared_ptr<string> changingAffectTime{};
  shared_ptr<DescribeScdnServiceResponseBodyOperationLocks> operationLocks{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> DDoSBasicValue{};
  shared_ptr<string> protectType{};
  shared_ptr<string> currentCcProtection{};
  shared_ptr<string> priceType{};
  shared_ptr<string> bandwidthValue{};

  DescribeScdnServiceResponseBody() {}

  explicit DescribeScdnServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentDDoSBasicValue) {
      res["CurrentDDoSBasicValue"] = boost::any(*currentDDoSBasicValue);
    }
    if (currentElasticProtectionValue) {
      res["CurrentElasticProtectionValue"] = boost::any(*currentElasticProtectionValue);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (elasticProtection) {
      res["ElasticProtection"] = boost::any(*elasticProtection);
    }
    if (domainCountValue) {
      res["DomainCountValue"] = boost::any(*domainCountValue);
    }
    if (currentDomainCount) {
      res["CurrentDomainCount"] = boost::any(*currentDomainCount);
    }
    if (DDoSBasic) {
      res["DDoSBasic"] = boost::any(*DDoSBasic);
    }
    if (ccProtectionValue) {
      res["CcProtectionValue"] = boost::any(*ccProtectionValue);
    }
    if (elasticProtectionValue) {
      res["ElasticProtectionValue"] = boost::any(*elasticProtectionValue);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    if (changingChargeType) {
      res["ChangingChargeType"] = boost::any(*changingChargeType);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (domainCount) {
      res["DomainCount"] = boost::any(*domainCount);
    }
    if (currentBandwidth) {
      res["CurrentBandwidth"] = boost::any(*currentBandwidth);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (currentElasticProtection) {
      res["CurrentElasticProtection"] = boost::any(*currentElasticProtection);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (currentCcProtectionValue) {
      res["CurrentCcProtectionValue"] = boost::any(*currentCcProtectionValue);
    }
    if (currentDDoSBasic) {
      res["CurrentDDoSBasic"] = boost::any(*currentDDoSBasic);
    }
    if (currentProtectType) {
      res["CurrentProtectType"] = boost::any(*currentProtectType);
    }
    if (currentDomainCountValue) {
      res["CurrentDomainCountValue"] = boost::any(*currentDomainCountValue);
    }
    if (currentBandwidthValue) {
      res["CurrentBandwidthValue"] = boost::any(*currentBandwidthValue);
    }
    if (protectTypeValue) {
      res["ProtectTypeValue"] = boost::any(*protectTypeValue);
    }
    if (currentProtectTypeValue) {
      res["CurrentProtectTypeValue"] = boost::any(*currentProtectTypeValue);
    }
    if (ccProtection) {
      res["CcProtection"] = boost::any(*ccProtection);
    }
    if (changingAffectTime) {
      res["ChangingAffectTime"] = boost::any(*changingAffectTime);
    }
    if (operationLocks) {
      res["OperationLocks"] = operationLocks ? boost::any(operationLocks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (DDoSBasicValue) {
      res["DDoSBasicValue"] = boost::any(*DDoSBasicValue);
    }
    if (protectType) {
      res["ProtectType"] = boost::any(*protectType);
    }
    if (currentCcProtection) {
      res["CurrentCcProtection"] = boost::any(*currentCcProtection);
    }
    if (priceType) {
      res["PriceType"] = boost::any(*priceType);
    }
    if (bandwidthValue) {
      res["BandwidthValue"] = boost::any(*bandwidthValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentDDoSBasicValue") != m.end() && !m["CurrentDDoSBasicValue"].empty()) {
      currentDDoSBasicValue = make_shared<string>(boost::any_cast<string>(m["CurrentDDoSBasicValue"]));
    }
    if (m.find("CurrentElasticProtectionValue") != m.end() && !m["CurrentElasticProtectionValue"].empty()) {
      currentElasticProtectionValue = make_shared<string>(boost::any_cast<string>(m["CurrentElasticProtectionValue"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ElasticProtection") != m.end() && !m["ElasticProtection"].empty()) {
      elasticProtection = make_shared<string>(boost::any_cast<string>(m["ElasticProtection"]));
    }
    if (m.find("DomainCountValue") != m.end() && !m["DomainCountValue"].empty()) {
      domainCountValue = make_shared<string>(boost::any_cast<string>(m["DomainCountValue"]));
    }
    if (m.find("CurrentDomainCount") != m.end() && !m["CurrentDomainCount"].empty()) {
      currentDomainCount = make_shared<string>(boost::any_cast<string>(m["CurrentDomainCount"]));
    }
    if (m.find("DDoSBasic") != m.end() && !m["DDoSBasic"].empty()) {
      DDoSBasic = make_shared<string>(boost::any_cast<string>(m["DDoSBasic"]));
    }
    if (m.find("CcProtectionValue") != m.end() && !m["CcProtectionValue"].empty()) {
      ccProtectionValue = make_shared<string>(boost::any_cast<string>(m["CcProtectionValue"]));
    }
    if (m.find("ElasticProtectionValue") != m.end() && !m["ElasticProtectionValue"].empty()) {
      elasticProtectionValue = make_shared<string>(boost::any_cast<string>(m["ElasticProtectionValue"]));
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
    if (m.find("ChangingChargeType") != m.end() && !m["ChangingChargeType"].empty()) {
      changingChargeType = make_shared<string>(boost::any_cast<string>(m["ChangingChargeType"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
    if (m.find("DomainCount") != m.end() && !m["DomainCount"].empty()) {
      domainCount = make_shared<string>(boost::any_cast<string>(m["DomainCount"]));
    }
    if (m.find("CurrentBandwidth") != m.end() && !m["CurrentBandwidth"].empty()) {
      currentBandwidth = make_shared<string>(boost::any_cast<string>(m["CurrentBandwidth"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CurrentElasticProtection") != m.end() && !m["CurrentElasticProtection"].empty()) {
      currentElasticProtection = make_shared<string>(boost::any_cast<string>(m["CurrentElasticProtection"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CurrentCcProtectionValue") != m.end() && !m["CurrentCcProtectionValue"].empty()) {
      currentCcProtectionValue = make_shared<string>(boost::any_cast<string>(m["CurrentCcProtectionValue"]));
    }
    if (m.find("CurrentDDoSBasic") != m.end() && !m["CurrentDDoSBasic"].empty()) {
      currentDDoSBasic = make_shared<string>(boost::any_cast<string>(m["CurrentDDoSBasic"]));
    }
    if (m.find("CurrentProtectType") != m.end() && !m["CurrentProtectType"].empty()) {
      currentProtectType = make_shared<string>(boost::any_cast<string>(m["CurrentProtectType"]));
    }
    if (m.find("CurrentDomainCountValue") != m.end() && !m["CurrentDomainCountValue"].empty()) {
      currentDomainCountValue = make_shared<string>(boost::any_cast<string>(m["CurrentDomainCountValue"]));
    }
    if (m.find("CurrentBandwidthValue") != m.end() && !m["CurrentBandwidthValue"].empty()) {
      currentBandwidthValue = make_shared<string>(boost::any_cast<string>(m["CurrentBandwidthValue"]));
    }
    if (m.find("ProtectTypeValue") != m.end() && !m["ProtectTypeValue"].empty()) {
      protectTypeValue = make_shared<string>(boost::any_cast<string>(m["ProtectTypeValue"]));
    }
    if (m.find("CurrentProtectTypeValue") != m.end() && !m["CurrentProtectTypeValue"].empty()) {
      currentProtectTypeValue = make_shared<string>(boost::any_cast<string>(m["CurrentProtectTypeValue"]));
    }
    if (m.find("CcProtection") != m.end() && !m["CcProtection"].empty()) {
      ccProtection = make_shared<string>(boost::any_cast<string>(m["CcProtection"]));
    }
    if (m.find("ChangingAffectTime") != m.end() && !m["ChangingAffectTime"].empty()) {
      changingAffectTime = make_shared<string>(boost::any_cast<string>(m["ChangingAffectTime"]));
    }
    if (m.find("OperationLocks") != m.end() && !m["OperationLocks"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationLocks"].type()) {
        DescribeScdnServiceResponseBodyOperationLocks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationLocks"]));
        operationLocks = make_shared<DescribeScdnServiceResponseBodyOperationLocks>(model1);
      }
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("DDoSBasicValue") != m.end() && !m["DDoSBasicValue"].empty()) {
      DDoSBasicValue = make_shared<string>(boost::any_cast<string>(m["DDoSBasicValue"]));
    }
    if (m.find("ProtectType") != m.end() && !m["ProtectType"].empty()) {
      protectType = make_shared<string>(boost::any_cast<string>(m["ProtectType"]));
    }
    if (m.find("CurrentCcProtection") != m.end() && !m["CurrentCcProtection"].empty()) {
      currentCcProtection = make_shared<string>(boost::any_cast<string>(m["CurrentCcProtection"]));
    }
    if (m.find("PriceType") != m.end() && !m["PriceType"].empty()) {
      priceType = make_shared<string>(boost::any_cast<string>(m["PriceType"]));
    }
    if (m.find("BandwidthValue") != m.end() && !m["BandwidthValue"].empty()) {
      bandwidthValue = make_shared<string>(boost::any_cast<string>(m["BandwidthValue"]));
    }
  }


  virtual ~DescribeScdnServiceResponseBody() = default;
};
class DescribeScdnServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnServiceResponseBody> body{};

  DescribeScdnServiceResponse() {}

  explicit DescribeScdnServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnServiceResponse() = default;
};
class DescribeScdnTopDomainsByFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> product{};
  shared_ptr<long> limit{};

  DescribeScdnTopDomainsByFlowRequest() {}

  explicit DescribeScdnTopDomainsByFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~DescribeScdnTopDomainsByFlowRequest() = default;
};
class DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain : public Darabonba::Model {
public:
  shared_ptr<long> maxBps{};
  shared_ptr<long> rank{};
  shared_ptr<long> totalAccess{};
  shared_ptr<string> trafficPercent{};
  shared_ptr<string> domainName{};
  shared_ptr<string> totalTraffic{};
  shared_ptr<string> maxBpsTime{};

  DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain() {}

  explicit DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxBps) {
      res["MaxBps"] = boost::any(*maxBps);
    }
    if (rank) {
      res["Rank"] = boost::any(*rank);
    }
    if (totalAccess) {
      res["TotalAccess"] = boost::any(*totalAccess);
    }
    if (trafficPercent) {
      res["TrafficPercent"] = boost::any(*trafficPercent);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (totalTraffic) {
      res["TotalTraffic"] = boost::any(*totalTraffic);
    }
    if (maxBpsTime) {
      res["MaxBpsTime"] = boost::any(*maxBpsTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxBps") != m.end() && !m["MaxBps"].empty()) {
      maxBps = make_shared<long>(boost::any_cast<long>(m["MaxBps"]));
    }
    if (m.find("Rank") != m.end() && !m["Rank"].empty()) {
      rank = make_shared<long>(boost::any_cast<long>(m["Rank"]));
    }
    if (m.find("TotalAccess") != m.end() && !m["TotalAccess"].empty()) {
      totalAccess = make_shared<long>(boost::any_cast<long>(m["TotalAccess"]));
    }
    if (m.find("TrafficPercent") != m.end() && !m["TrafficPercent"].empty()) {
      trafficPercent = make_shared<string>(boost::any_cast<string>(m["TrafficPercent"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("TotalTraffic") != m.end() && !m["TotalTraffic"].empty()) {
      totalTraffic = make_shared<string>(boost::any_cast<string>(m["TotalTraffic"]));
    }
    if (m.find("MaxBpsTime") != m.end() && !m["MaxBpsTime"].empty()) {
      maxBpsTime = make_shared<string>(boost::any_cast<string>(m["MaxBpsTime"]));
    }
  }


  virtual ~DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain() = default;
};
class DescribeScdnTopDomainsByFlowResponseBodyTopDomains : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain>> topDomain{};

  DescribeScdnTopDomainsByFlowResponseBodyTopDomains() {}

  explicit DescribeScdnTopDomainsByFlowResponseBodyTopDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topDomain) {
      vector<boost::any> temp1;
      for(auto item1:*topDomain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopDomain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopDomain") != m.end() && !m["TopDomain"].empty()) {
      if (typeid(vector<boost::any>) == m["TopDomain"].type()) {
        vector<DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopDomain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topDomain = make_shared<vector<DescribeScdnTopDomainsByFlowResponseBodyTopDomainsTopDomain>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnTopDomainsByFlowResponseBodyTopDomains() = default;
};
class DescribeScdnTopDomainsByFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnTopDomainsByFlowResponseBodyTopDomains> topDomains{};
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<long> domainOnlineCount{};
  shared_ptr<string> startTime{};
  shared_ptr<long> domainCount{};

  DescribeScdnTopDomainsByFlowResponseBody() {}

  explicit DescribeScdnTopDomainsByFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topDomains) {
      res["TopDomains"] = topDomains ? boost::any(topDomains->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (domainOnlineCount) {
      res["DomainOnlineCount"] = boost::any(*domainOnlineCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (domainCount) {
      res["DomainCount"] = boost::any(*domainCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopDomains") != m.end() && !m["TopDomains"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopDomains"].type()) {
        DescribeScdnTopDomainsByFlowResponseBodyTopDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopDomains"]));
        topDomains = make_shared<DescribeScdnTopDomainsByFlowResponseBodyTopDomains>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DomainOnlineCount") != m.end() && !m["DomainOnlineCount"].empty()) {
      domainOnlineCount = make_shared<long>(boost::any_cast<long>(m["DomainOnlineCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DomainCount") != m.end() && !m["DomainCount"].empty()) {
      domainCount = make_shared<long>(boost::any_cast<long>(m["DomainCount"]));
    }
  }


  virtual ~DescribeScdnTopDomainsByFlowResponseBody() = default;
};
class DescribeScdnTopDomainsByFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnTopDomainsByFlowResponseBody> body{};

  DescribeScdnTopDomainsByFlowResponse() {}

  explicit DescribeScdnTopDomainsByFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnTopDomainsByFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnTopDomainsByFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnTopDomainsByFlowResponse() = default;
};
class DescribeScdnUserDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> domainSearchType{};
  shared_ptr<bool> checkDomainShow{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> funcId{};
  shared_ptr<string> funcFilter{};
  shared_ptr<string> changeStartTime{};
  shared_ptr<string> changeEndTime{};

  DescribeScdnUserDomainsRequest() {}

  explicit DescribeScdnUserDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (domainSearchType) {
      res["DomainSearchType"] = boost::any(*domainSearchType);
    }
    if (checkDomainShow) {
      res["CheckDomainShow"] = boost::any(*checkDomainShow);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (funcId) {
      res["FuncId"] = boost::any(*funcId);
    }
    if (funcFilter) {
      res["FuncFilter"] = boost::any(*funcFilter);
    }
    if (changeStartTime) {
      res["ChangeStartTime"] = boost::any(*changeStartTime);
    }
    if (changeEndTime) {
      res["ChangeEndTime"] = boost::any(*changeEndTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("DomainSearchType") != m.end() && !m["DomainSearchType"].empty()) {
      domainSearchType = make_shared<string>(boost::any_cast<string>(m["DomainSearchType"]));
    }
    if (m.find("CheckDomainShow") != m.end() && !m["CheckDomainShow"].empty()) {
      checkDomainShow = make_shared<bool>(boost::any_cast<bool>(m["CheckDomainShow"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("FuncId") != m.end() && !m["FuncId"].empty()) {
      funcId = make_shared<string>(boost::any_cast<string>(m["FuncId"]));
    }
    if (m.find("FuncFilter") != m.end() && !m["FuncFilter"].empty()) {
      funcFilter = make_shared<string>(boost::any_cast<string>(m["FuncFilter"]));
    }
    if (m.find("ChangeStartTime") != m.end() && !m["ChangeStartTime"].empty()) {
      changeStartTime = make_shared<string>(boost::any_cast<string>(m["ChangeStartTime"]));
    }
    if (m.find("ChangeEndTime") != m.end() && !m["ChangeEndTime"].empty()) {
      changeEndTime = make_shared<string>(boost::any_cast<string>(m["ChangeEndTime"]));
    }
  }


  virtual ~DescribeScdnUserDomainsRequest() = default;
};
class DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> priority{};
  shared_ptr<long> port{};
  shared_ptr<string> content{};

  DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource() {}

  explicit DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource() = default;
};
class DescribeScdnUserDomainsResponseBodyDomainsPageDataSources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource>> source{};

  DescribeScdnUserDomainsResponseBodyDomainsPageDataSources() {}

  explicit DescribeScdnUserDomainsResponseBodyDomainsPageDataSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      vector<boost::any> temp1;
      for(auto item1:*source){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Source"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(vector<boost::any>) == m["Source"].type()) {
        vector<DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Source"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        source = make_shared<vector<DescribeScdnUserDomainsResponseBodyDomainsPageDataSourcesSource>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnUserDomainsResponseBodyDomainsPageDataSources() = default;
};
class DescribeScdnUserDomainsResponseBodyDomainsPageData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> description{};
  shared_ptr<string> SSLProtocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sandbox{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> cname{};
  shared_ptr<DescribeScdnUserDomainsResponseBodyDomainsPageDataSources> sources{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> domainName{};

  DescribeScdnUserDomainsResponseBodyDomainsPageData() {}

  explicit DescribeScdnUserDomainsResponseBodyDomainsPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SSLProtocol) {
      res["SSLProtocol"] = boost::any(*SSLProtocol);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sandbox) {
      res["Sandbox"] = boost::any(*sandbox);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (sources) {
      res["Sources"] = sources ? boost::any(sources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SSLProtocol") != m.end() && !m["SSLProtocol"].empty()) {
      SSLProtocol = make_shared<string>(boost::any_cast<string>(m["SSLProtocol"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sandbox") != m.end() && !m["Sandbox"].empty()) {
      sandbox = make_shared<string>(boost::any_cast<string>(m["Sandbox"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sources"].type()) {
        DescribeScdnUserDomainsResponseBodyDomainsPageDataSources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sources"]));
        sources = make_shared<DescribeScdnUserDomainsResponseBodyDomainsPageDataSources>(model1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeScdnUserDomainsResponseBodyDomainsPageData() = default;
};
class DescribeScdnUserDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScdnUserDomainsResponseBodyDomainsPageData>> pageData{};

  DescribeScdnUserDomainsResponseBodyDomains() {}

  explicit DescribeScdnUserDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<DescribeScdnUserDomainsResponseBodyDomainsPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScdnUserDomainsResponseBodyDomainsPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<DescribeScdnUserDomainsResponseBodyDomainsPageData>>(expect1);
      }
    }
  }


  virtual ~DescribeScdnUserDomainsResponseBodyDomains() = default;
};
class DescribeScdnUserDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScdnUserDomainsResponseBodyDomains> domains{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeScdnUserDomainsResponseBody() {}

  explicit DescribeScdnUserDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      res["Domains"] = domains ? boost::any(domains->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(map<string, boost::any>) == m["Domains"].type()) {
        DescribeScdnUserDomainsResponseBodyDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Domains"]));
        domains = make_shared<DescribeScdnUserDomainsResponseBodyDomains>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeScdnUserDomainsResponseBody() = default;
};
class DescribeScdnUserDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnUserDomainsResponseBody> body{};

  DescribeScdnUserDomainsResponse() {}

  explicit DescribeScdnUserDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnUserDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnUserDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnUserDomainsResponse() = default;
};
class DescribeScdnUserProtectInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  DescribeScdnUserProtectInfoRequest() {}

  explicit DescribeScdnUserProtectInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeScdnUserProtectInfoRequest() = default;
};
class DescribeScdnUserProtectInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> serviceDDoS{};

  DescribeScdnUserProtectInfoResponseBody() {}

  explicit DescribeScdnUserProtectInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceDDoS) {
      res["ServiceDDoS"] = boost::any(*serviceDDoS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceDDoS") != m.end() && !m["ServiceDDoS"].empty()) {
      serviceDDoS = make_shared<long>(boost::any_cast<long>(m["ServiceDDoS"]));
    }
  }


  virtual ~DescribeScdnUserProtectInfoResponseBody() = default;
};
class DescribeScdnUserProtectInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnUserProtectInfoResponseBody> body{};

  DescribeScdnUserProtectInfoResponse() {}

  explicit DescribeScdnUserProtectInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnUserProtectInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnUserProtectInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnUserProtectInfoResponse() = default;
};
class DescribeScdnUserQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};

  DescribeScdnUserQuotaRequest() {}

  explicit DescribeScdnUserQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeScdnUserQuotaRequest() = default;
};
class DescribeScdnUserQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> refreshUrlQuota{};
  shared_ptr<long> blockRemain{};
  shared_ptr<long> preloadRemain{};
  shared_ptr<long> refreshDirRemain{};
  shared_ptr<long> blockQuota{};
  shared_ptr<long> refreshDirQuota{};
  shared_ptr<long> domainQuota{};
  shared_ptr<long> refreshUrlRemain{};
  shared_ptr<long> preloadQuota{};

  DescribeScdnUserQuotaResponseBody() {}

  explicit DescribeScdnUserQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (refreshUrlQuota) {
      res["RefreshUrlQuota"] = boost::any(*refreshUrlQuota);
    }
    if (blockRemain) {
      res["BlockRemain"] = boost::any(*blockRemain);
    }
    if (preloadRemain) {
      res["PreloadRemain"] = boost::any(*preloadRemain);
    }
    if (refreshDirRemain) {
      res["RefreshDirRemain"] = boost::any(*refreshDirRemain);
    }
    if (blockQuota) {
      res["BlockQuota"] = boost::any(*blockQuota);
    }
    if (refreshDirQuota) {
      res["RefreshDirQuota"] = boost::any(*refreshDirQuota);
    }
    if (domainQuota) {
      res["DomainQuota"] = boost::any(*domainQuota);
    }
    if (refreshUrlRemain) {
      res["RefreshUrlRemain"] = boost::any(*refreshUrlRemain);
    }
    if (preloadQuota) {
      res["PreloadQuota"] = boost::any(*preloadQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RefreshUrlQuota") != m.end() && !m["RefreshUrlQuota"].empty()) {
      refreshUrlQuota = make_shared<long>(boost::any_cast<long>(m["RefreshUrlQuota"]));
    }
    if (m.find("BlockRemain") != m.end() && !m["BlockRemain"].empty()) {
      blockRemain = make_shared<long>(boost::any_cast<long>(m["BlockRemain"]));
    }
    if (m.find("PreloadRemain") != m.end() && !m["PreloadRemain"].empty()) {
      preloadRemain = make_shared<long>(boost::any_cast<long>(m["PreloadRemain"]));
    }
    if (m.find("RefreshDirRemain") != m.end() && !m["RefreshDirRemain"].empty()) {
      refreshDirRemain = make_shared<long>(boost::any_cast<long>(m["RefreshDirRemain"]));
    }
    if (m.find("BlockQuota") != m.end() && !m["BlockQuota"].empty()) {
      blockQuota = make_shared<long>(boost::any_cast<long>(m["BlockQuota"]));
    }
    if (m.find("RefreshDirQuota") != m.end() && !m["RefreshDirQuota"].empty()) {
      refreshDirQuota = make_shared<long>(boost::any_cast<long>(m["RefreshDirQuota"]));
    }
    if (m.find("DomainQuota") != m.end() && !m["DomainQuota"].empty()) {
      domainQuota = make_shared<long>(boost::any_cast<long>(m["DomainQuota"]));
    }
    if (m.find("RefreshUrlRemain") != m.end() && !m["RefreshUrlRemain"].empty()) {
      refreshUrlRemain = make_shared<long>(boost::any_cast<long>(m["RefreshUrlRemain"]));
    }
    if (m.find("PreloadQuota") != m.end() && !m["PreloadQuota"].empty()) {
      preloadQuota = make_shared<long>(boost::any_cast<long>(m["PreloadQuota"]));
    }
  }


  virtual ~DescribeScdnUserQuotaResponseBody() = default;
};
class DescribeScdnUserQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScdnUserQuotaResponseBody> body{};

  DescribeScdnUserQuotaResponse() {}

  explicit DescribeScdnUserQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScdnUserQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScdnUserQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScdnUserQuotaResponse() = default;
};
class OpenScdnServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> protectType{};
  shared_ptr<long> DDoSBasic{};
  shared_ptr<long> elasticProtection{};
  shared_ptr<long> ccProtection{};
  shared_ptr<long> domainCount{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};

  OpenScdnServiceRequest() {}

  explicit OpenScdnServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (protectType) {
      res["ProtectType"] = boost::any(*protectType);
    }
    if (DDoSBasic) {
      res["DDoSBasic"] = boost::any(*DDoSBasic);
    }
    if (elasticProtection) {
      res["ElasticProtection"] = boost::any(*elasticProtection);
    }
    if (ccProtection) {
      res["CcProtection"] = boost::any(*ccProtection);
    }
    if (domainCount) {
      res["DomainCount"] = boost::any(*domainCount);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ProtectType") != m.end() && !m["ProtectType"].empty()) {
      protectType = make_shared<string>(boost::any_cast<string>(m["ProtectType"]));
    }
    if (m.find("DDoSBasic") != m.end() && !m["DDoSBasic"].empty()) {
      DDoSBasic = make_shared<long>(boost::any_cast<long>(m["DDoSBasic"]));
    }
    if (m.find("ElasticProtection") != m.end() && !m["ElasticProtection"].empty()) {
      elasticProtection = make_shared<long>(boost::any_cast<long>(m["ElasticProtection"]));
    }
    if (m.find("CcProtection") != m.end() && !m["CcProtection"].empty()) {
      ccProtection = make_shared<long>(boost::any_cast<long>(m["CcProtection"]));
    }
    if (m.find("DomainCount") != m.end() && !m["DomainCount"].empty()) {
      domainCount = make_shared<long>(boost::any_cast<long>(m["DomainCount"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~OpenScdnServiceRequest() = default;
};
class OpenScdnServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenScdnServiceResponseBody() {}

  explicit OpenScdnServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenScdnServiceResponseBody() = default;
};
class OpenScdnServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenScdnServiceResponseBody> body{};

  OpenScdnServiceResponse() {}

  explicit OpenScdnServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenScdnServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenScdnServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenScdnServiceResponse() = default;
};
class PreloadScdnObjectCachesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> objectPath{};
  shared_ptr<string> area{};

  PreloadScdnObjectCachesRequest() {}

  explicit PreloadScdnObjectCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (objectPath) {
      res["ObjectPath"] = boost::any(*objectPath);
    }
    if (area) {
      res["Area"] = boost::any(*area);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ObjectPath") != m.end() && !m["ObjectPath"].empty()) {
      objectPath = make_shared<string>(boost::any_cast<string>(m["ObjectPath"]));
    }
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
  }


  virtual ~PreloadScdnObjectCachesRequest() = default;
};
class PreloadScdnObjectCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> preloadTaskId{};

  PreloadScdnObjectCachesResponseBody() {}

  explicit PreloadScdnObjectCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (preloadTaskId) {
      res["PreloadTaskId"] = boost::any(*preloadTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PreloadTaskId") != m.end() && !m["PreloadTaskId"].empty()) {
      preloadTaskId = make_shared<string>(boost::any_cast<string>(m["PreloadTaskId"]));
    }
  }


  virtual ~PreloadScdnObjectCachesResponseBody() = default;
};
class PreloadScdnObjectCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PreloadScdnObjectCachesResponseBody> body{};

  PreloadScdnObjectCachesResponse() {}

  explicit PreloadScdnObjectCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PreloadScdnObjectCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PreloadScdnObjectCachesResponseBody>(model1);
      }
    }
  }


  virtual ~PreloadScdnObjectCachesResponse() = default;
};
class RefreshScdnObjectCachesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> objectPath{};
  shared_ptr<string> objectType{};

  RefreshScdnObjectCachesRequest() {}

  explicit RefreshScdnObjectCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (objectPath) {
      res["ObjectPath"] = boost::any(*objectPath);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ObjectPath") != m.end() && !m["ObjectPath"].empty()) {
      objectPath = make_shared<string>(boost::any_cast<string>(m["ObjectPath"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
  }


  virtual ~RefreshScdnObjectCachesRequest() = default;
};
class RefreshScdnObjectCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> refreshTaskId{};

  RefreshScdnObjectCachesResponseBody() {}

  explicit RefreshScdnObjectCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (refreshTaskId) {
      res["RefreshTaskId"] = boost::any(*refreshTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RefreshTaskId") != m.end() && !m["RefreshTaskId"].empty()) {
      refreshTaskId = make_shared<string>(boost::any_cast<string>(m["RefreshTaskId"]));
    }
  }


  virtual ~RefreshScdnObjectCachesResponseBody() = default;
};
class RefreshScdnObjectCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshScdnObjectCachesResponseBody> body{};

  RefreshScdnObjectCachesResponse() {}

  explicit RefreshScdnObjectCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshScdnObjectCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshScdnObjectCachesResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshScdnObjectCachesResponse() = default;
};
class SetScdnBotInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> enable{};
  shared_ptr<string> status{};

  SetScdnBotInfoRequest() {}

  explicit SetScdnBotInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<string>(boost::any_cast<string>(m["Enable"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SetScdnBotInfoRequest() = default;
};
class SetScdnBotInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetScdnBotInfoResponseBody() {}

  explicit SetScdnBotInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetScdnBotInfoResponseBody() = default;
};
class SetScdnBotInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetScdnBotInfoResponseBody> body{};

  SetScdnBotInfoResponse() {}

  explicit SetScdnBotInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetScdnBotInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetScdnBotInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetScdnBotInfoResponse() = default;
};
class SetScdnCcInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> status{};

  SetScdnCcInfoRequest() {}

  explicit SetScdnCcInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SetScdnCcInfoRequest() = default;
};
class SetScdnCcInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetScdnCcInfoResponseBody() {}

  explicit SetScdnCcInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetScdnCcInfoResponseBody() = default;
};
class SetScdnCcInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetScdnCcInfoResponseBody> body{};

  SetScdnCcInfoResponse() {}

  explicit SetScdnCcInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetScdnCcInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetScdnCcInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetScdnCcInfoResponse() = default;
};
class SetScdnDDoSInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> elasticBandwidth{};

  SetScdnDDoSInfoRequest() {}

  explicit SetScdnDDoSInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (elasticBandwidth) {
      res["ElasticBandwidth"] = boost::any(*elasticBandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ElasticBandwidth") != m.end() && !m["ElasticBandwidth"].empty()) {
      elasticBandwidth = make_shared<long>(boost::any_cast<long>(m["ElasticBandwidth"]));
    }
  }


  virtual ~SetScdnDDoSInfoRequest() = default;
};
class SetScdnDDoSInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetScdnDDoSInfoResponseBody() {}

  explicit SetScdnDDoSInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetScdnDDoSInfoResponseBody() = default;
};
class SetScdnDDoSInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetScdnDDoSInfoResponseBody> body{};

  SetScdnDDoSInfoResponse() {}

  explicit SetScdnDDoSInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetScdnDDoSInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetScdnDDoSInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetScdnDDoSInfoResponse() = default;
};
class SetScdnDomainBizInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> bizName{};
  shared_ptr<string> domainName{};

  SetScdnDomainBizInfoRequest() {}

  explicit SetScdnDomainBizInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~SetScdnDomainBizInfoRequest() = default;
};
class SetScdnDomainBizInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetScdnDomainBizInfoResponseBody() {}

  explicit SetScdnDomainBizInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetScdnDomainBizInfoResponseBody() = default;
};
class SetScdnDomainBizInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetScdnDomainBizInfoResponseBody> body{};

  SetScdnDomainBizInfoResponse() {}

  explicit SetScdnDomainBizInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetScdnDomainBizInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetScdnDomainBizInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetScdnDomainBizInfoResponse() = default;
};
class SetScdnDomainCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};
  shared_ptr<string> certType{};
  shared_ptr<string> certName{};
  shared_ptr<string> SSLProtocol{};
  shared_ptr<string> SSLPub{};
  shared_ptr<string> SSLPri{};
  shared_ptr<string> region{};
  shared_ptr<string> forceSet{};

  SetScdnDomainCertificateRequest() {}

  explicit SetScdnDomainCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (SSLProtocol) {
      res["SSLProtocol"] = boost::any(*SSLProtocol);
    }
    if (SSLPub) {
      res["SSLPub"] = boost::any(*SSLPub);
    }
    if (SSLPri) {
      res["SSLPri"] = boost::any(*SSLPri);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (forceSet) {
      res["ForceSet"] = boost::any(*forceSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("SSLProtocol") != m.end() && !m["SSLProtocol"].empty()) {
      SSLProtocol = make_shared<string>(boost::any_cast<string>(m["SSLProtocol"]));
    }
    if (m.find("SSLPub") != m.end() && !m["SSLPub"].empty()) {
      SSLPub = make_shared<string>(boost::any_cast<string>(m["SSLPub"]));
    }
    if (m.find("SSLPri") != m.end() && !m["SSLPri"].empty()) {
      SSLPri = make_shared<string>(boost::any_cast<string>(m["SSLPri"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ForceSet") != m.end() && !m["ForceSet"].empty()) {
      forceSet = make_shared<string>(boost::any_cast<string>(m["ForceSet"]));
    }
  }


  virtual ~SetScdnDomainCertificateRequest() = default;
};
class SetScdnDomainCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetScdnDomainCertificateResponseBody() {}

  explicit SetScdnDomainCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetScdnDomainCertificateResponseBody() = default;
};
class SetScdnDomainCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetScdnDomainCertificateResponseBody> body{};

  SetScdnDomainCertificateResponse() {}

  explicit SetScdnDomainCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetScdnDomainCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetScdnDomainCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~SetScdnDomainCertificateResponse() = default;
};
class StartScdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};

  StartScdnDomainRequest() {}

  explicit StartScdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~StartScdnDomainRequest() = default;
};
class StartScdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartScdnDomainResponseBody() {}

  explicit StartScdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartScdnDomainResponseBody() = default;
};
class StartScdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartScdnDomainResponseBody> body{};

  StartScdnDomainResponse() {}

  explicit StartScdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartScdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartScdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~StartScdnDomainResponse() = default;
};
class StopScdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};

  StopScdnDomainRequest() {}

  explicit StopScdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~StopScdnDomainRequest() = default;
};
class StopScdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopScdnDomainResponseBody() {}

  explicit StopScdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopScdnDomainResponseBody() = default;
};
class StopScdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopScdnDomainResponseBody> body{};

  StopScdnDomainResponse() {}

  explicit StopScdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopScdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopScdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~StopScdnDomainResponse() = default;
};
class UpdateScdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> domainName{};
  shared_ptr<string> sources{};
  shared_ptr<string> resourceGroupId{};

  UpdateScdnDomainRequest() {}

  explicit UpdateScdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sources = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~UpdateScdnDomainRequest() = default;
};
class UpdateScdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateScdnDomainResponseBody() {}

  explicit UpdateScdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateScdnDomainResponseBody() = default;
};
class UpdateScdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateScdnDomainResponseBody> body{};

  UpdateScdnDomainResponse() {}

  explicit UpdateScdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateScdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateScdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateScdnDomainResponse() = default;
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
  AddScdnDomainResponse addScdnDomainWithOptions(shared_ptr<AddScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddScdnDomainResponse addScdnDomain(shared_ptr<AddScdnDomainRequest> request);
  BatchDeleteScdnDomainConfigsResponse batchDeleteScdnDomainConfigsWithOptions(shared_ptr<BatchDeleteScdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteScdnDomainConfigsResponse batchDeleteScdnDomainConfigs(shared_ptr<BatchDeleteScdnDomainConfigsRequest> request);
  BatchSetScdnDomainConfigsResponse batchSetScdnDomainConfigsWithOptions(shared_ptr<BatchSetScdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSetScdnDomainConfigsResponse batchSetScdnDomainConfigs(shared_ptr<BatchSetScdnDomainConfigsRequest> request);
  BatchUpdateScdnDomainResponse batchUpdateScdnDomainWithOptions(shared_ptr<BatchUpdateScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUpdateScdnDomainResponse batchUpdateScdnDomain(shared_ptr<BatchUpdateScdnDomainRequest> request);
  CheckScdnServiceResponse checkScdnServiceWithOptions(shared_ptr<CheckScdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckScdnServiceResponse checkScdnService(shared_ptr<CheckScdnServiceRequest> request);
  DeleteScdnDomainResponse deleteScdnDomainWithOptions(shared_ptr<DeleteScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScdnDomainResponse deleteScdnDomain(shared_ptr<DeleteScdnDomainRequest> request);
  DeleteScdnSpecificConfigResponse deleteScdnSpecificConfigWithOptions(shared_ptr<DeleteScdnSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScdnSpecificConfigResponse deleteScdnSpecificConfig(shared_ptr<DeleteScdnSpecificConfigRequest> request);
  DescribeScdnCcQpsInfoResponse describeScdnCcQpsInfoWithOptions(shared_ptr<DescribeScdnCcQpsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnCcQpsInfoResponse describeScdnCcQpsInfo(shared_ptr<DescribeScdnCcQpsInfoRequest> request);
  DescribeScdnCcTopIpResponse describeScdnCcTopIpWithOptions(shared_ptr<DescribeScdnCcTopIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnCcTopIpResponse describeScdnCcTopIp(shared_ptr<DescribeScdnCcTopIpRequest> request);
  DescribeScdnCcTopUrlResponse describeScdnCcTopUrlWithOptions(shared_ptr<DescribeScdnCcTopUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnCcTopUrlResponse describeScdnCcTopUrl(shared_ptr<DescribeScdnCcTopUrlRequest> request);
  DescribeScdnCertificateDetailResponse describeScdnCertificateDetailWithOptions(shared_ptr<DescribeScdnCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnCertificateDetailResponse describeScdnCertificateDetail(shared_ptr<DescribeScdnCertificateDetailRequest> request);
  DescribeScdnCertificateListResponse describeScdnCertificateListWithOptions(shared_ptr<DescribeScdnCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnCertificateListResponse describeScdnCertificateList(shared_ptr<DescribeScdnCertificateListRequest> request);
  DescribeScdnDDoSInfoResponse describeScdnDDoSInfoWithOptions(shared_ptr<DescribeScdnDDoSInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDDoSInfoResponse describeScdnDDoSInfo(shared_ptr<DescribeScdnDDoSInfoRequest> request);
  DescribeScdnDDoSTrafficInfoResponse describeScdnDDoSTrafficInfoWithOptions(shared_ptr<DescribeScdnDDoSTrafficInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDDoSTrafficInfoResponse describeScdnDDoSTrafficInfo(shared_ptr<DescribeScdnDDoSTrafficInfoRequest> request);
  DescribeScdnDomainBpsDataResponse describeScdnDomainBpsDataWithOptions(shared_ptr<DescribeScdnDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainBpsDataResponse describeScdnDomainBpsData(shared_ptr<DescribeScdnDomainBpsDataRequest> request);
  DescribeScdnDomainCertificateInfoResponse describeScdnDomainCertificateInfoWithOptions(shared_ptr<DescribeScdnDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainCertificateInfoResponse describeScdnDomainCertificateInfo(shared_ptr<DescribeScdnDomainCertificateInfoRequest> request);
  DescribeScdnDomainCnameResponse describeScdnDomainCnameWithOptions(shared_ptr<DescribeScdnDomainCnameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainCnameResponse describeScdnDomainCname(shared_ptr<DescribeScdnDomainCnameRequest> request);
  DescribeScdnDomainConfigsResponse describeScdnDomainConfigsWithOptions(shared_ptr<DescribeScdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainConfigsResponse describeScdnDomainConfigs(shared_ptr<DescribeScdnDomainConfigsRequest> request);
  DescribeScdnDomainDetailResponse describeScdnDomainDetailWithOptions(shared_ptr<DescribeScdnDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainDetailResponse describeScdnDomainDetail(shared_ptr<DescribeScdnDomainDetailRequest> request);
  DescribeScdnDomainHitRateDataResponse describeScdnDomainHitRateDataWithOptions(shared_ptr<DescribeScdnDomainHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainHitRateDataResponse describeScdnDomainHitRateData(shared_ptr<DescribeScdnDomainHitRateDataRequest> request);
  DescribeScdnDomainHttpCodeDataResponse describeScdnDomainHttpCodeDataWithOptions(shared_ptr<DescribeScdnDomainHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainHttpCodeDataResponse describeScdnDomainHttpCodeData(shared_ptr<DescribeScdnDomainHttpCodeDataRequest> request);
  DescribeScdnDomainIspDataResponse describeScdnDomainIspDataWithOptions(shared_ptr<DescribeScdnDomainIspDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainIspDataResponse describeScdnDomainIspData(shared_ptr<DescribeScdnDomainIspDataRequest> request);
  DescribeScdnDomainLogResponse describeScdnDomainLogWithOptions(shared_ptr<DescribeScdnDomainLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainLogResponse describeScdnDomainLog(shared_ptr<DescribeScdnDomainLogRequest> request);
  DescribeScdnDomainOriginBpsDataResponse describeScdnDomainOriginBpsDataWithOptions(shared_ptr<DescribeScdnDomainOriginBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainOriginBpsDataResponse describeScdnDomainOriginBpsData(shared_ptr<DescribeScdnDomainOriginBpsDataRequest> request);
  DescribeScdnDomainOriginTrafficDataResponse describeScdnDomainOriginTrafficDataWithOptions(shared_ptr<DescribeScdnDomainOriginTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainOriginTrafficDataResponse describeScdnDomainOriginTrafficData(shared_ptr<DescribeScdnDomainOriginTrafficDataRequest> request);
  DescribeScdnDomainPvDataResponse describeScdnDomainPvDataWithOptions(shared_ptr<DescribeScdnDomainPvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainPvDataResponse describeScdnDomainPvData(shared_ptr<DescribeScdnDomainPvDataRequest> request);
  DescribeScdnDomainQpsDataResponse describeScdnDomainQpsDataWithOptions(shared_ptr<DescribeScdnDomainQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainQpsDataResponse describeScdnDomainQpsData(shared_ptr<DescribeScdnDomainQpsDataRequest> request);
  DescribeScdnDomainRealTimeBpsDataResponse describeScdnDomainRealTimeBpsDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeBpsDataResponse describeScdnDomainRealTimeBpsData(shared_ptr<DescribeScdnDomainRealTimeBpsDataRequest> request);
  DescribeScdnDomainRealTimeByteHitRateDataResponse describeScdnDomainRealTimeByteHitRateDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeByteHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeByteHitRateDataResponse describeScdnDomainRealTimeByteHitRateData(shared_ptr<DescribeScdnDomainRealTimeByteHitRateDataRequest> request);
  DescribeScdnDomainRealTimeHttpCodeDataResponse describeScdnDomainRealTimeHttpCodeDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeHttpCodeDataResponse describeScdnDomainRealTimeHttpCodeData(shared_ptr<DescribeScdnDomainRealTimeHttpCodeDataRequest> request);
  DescribeScdnDomainRealTimeQpsDataResponse describeScdnDomainRealTimeQpsDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeQpsDataResponse describeScdnDomainRealTimeQpsData(shared_ptr<DescribeScdnDomainRealTimeQpsDataRequest> request);
  DescribeScdnDomainRealTimeReqHitRateDataResponse describeScdnDomainRealTimeReqHitRateDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeReqHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeReqHitRateDataResponse describeScdnDomainRealTimeReqHitRateData(shared_ptr<DescribeScdnDomainRealTimeReqHitRateDataRequest> request);
  DescribeScdnDomainRealTimeSrcBpsDataResponse describeScdnDomainRealTimeSrcBpsDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeSrcBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeSrcBpsDataResponse describeScdnDomainRealTimeSrcBpsData(shared_ptr<DescribeScdnDomainRealTimeSrcBpsDataRequest> request);
  DescribeScdnDomainRealTimeSrcTrafficDataResponse describeScdnDomainRealTimeSrcTrafficDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeSrcTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeSrcTrafficDataResponse describeScdnDomainRealTimeSrcTrafficData(shared_ptr<DescribeScdnDomainRealTimeSrcTrafficDataRequest> request);
  DescribeScdnDomainRealTimeTrafficDataResponse describeScdnDomainRealTimeTrafficDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRealTimeTrafficDataResponse describeScdnDomainRealTimeTrafficData(shared_ptr<DescribeScdnDomainRealTimeTrafficDataRequest> request);
  DescribeScdnDomainRegionDataResponse describeScdnDomainRegionDataWithOptions(shared_ptr<DescribeScdnDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainRegionDataResponse describeScdnDomainRegionData(shared_ptr<DescribeScdnDomainRegionDataRequest> request);
  DescribeScdnDomainTopReferVisitResponse describeScdnDomainTopReferVisitWithOptions(shared_ptr<DescribeScdnDomainTopReferVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainTopReferVisitResponse describeScdnDomainTopReferVisit(shared_ptr<DescribeScdnDomainTopReferVisitRequest> request);
  DescribeScdnDomainTopUrlVisitResponse describeScdnDomainTopUrlVisitWithOptions(shared_ptr<DescribeScdnDomainTopUrlVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainTopUrlVisitResponse describeScdnDomainTopUrlVisit(shared_ptr<DescribeScdnDomainTopUrlVisitRequest> request);
  DescribeScdnDomainTrafficDataResponse describeScdnDomainTrafficDataWithOptions(shared_ptr<DescribeScdnDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainTrafficDataResponse describeScdnDomainTrafficData(shared_ptr<DescribeScdnDomainTrafficDataRequest> request);
  DescribeScdnDomainUvDataResponse describeScdnDomainUvDataWithOptions(shared_ptr<DescribeScdnDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnDomainUvDataResponse describeScdnDomainUvData(shared_ptr<DescribeScdnDomainUvDataRequest> request);
  DescribeScdnRefreshQuotaResponse describeScdnRefreshQuotaWithOptions(shared_ptr<DescribeScdnRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnRefreshQuotaResponse describeScdnRefreshQuota(shared_ptr<DescribeScdnRefreshQuotaRequest> request);
  DescribeScdnRefreshTasksResponse describeScdnRefreshTasksWithOptions(shared_ptr<DescribeScdnRefreshTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnRefreshTasksResponse describeScdnRefreshTasks(shared_ptr<DescribeScdnRefreshTasksRequest> request);
  DescribeScdnServiceResponse describeScdnServiceWithOptions(shared_ptr<DescribeScdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnServiceResponse describeScdnService(shared_ptr<DescribeScdnServiceRequest> request);
  DescribeScdnTopDomainsByFlowResponse describeScdnTopDomainsByFlowWithOptions(shared_ptr<DescribeScdnTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnTopDomainsByFlowResponse describeScdnTopDomainsByFlow(shared_ptr<DescribeScdnTopDomainsByFlowRequest> request);
  DescribeScdnUserDomainsResponse describeScdnUserDomainsWithOptions(shared_ptr<DescribeScdnUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnUserDomainsResponse describeScdnUserDomains(shared_ptr<DescribeScdnUserDomainsRequest> request);
  DescribeScdnUserProtectInfoResponse describeScdnUserProtectInfoWithOptions(shared_ptr<DescribeScdnUserProtectInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnUserProtectInfoResponse describeScdnUserProtectInfo(shared_ptr<DescribeScdnUserProtectInfoRequest> request);
  DescribeScdnUserQuotaResponse describeScdnUserQuotaWithOptions(shared_ptr<DescribeScdnUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScdnUserQuotaResponse describeScdnUserQuota(shared_ptr<DescribeScdnUserQuotaRequest> request);
  OpenScdnServiceResponse openScdnServiceWithOptions(shared_ptr<OpenScdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenScdnServiceResponse openScdnService(shared_ptr<OpenScdnServiceRequest> request);
  PreloadScdnObjectCachesResponse preloadScdnObjectCachesWithOptions(shared_ptr<PreloadScdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreloadScdnObjectCachesResponse preloadScdnObjectCaches(shared_ptr<PreloadScdnObjectCachesRequest> request);
  RefreshScdnObjectCachesResponse refreshScdnObjectCachesWithOptions(shared_ptr<RefreshScdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshScdnObjectCachesResponse refreshScdnObjectCaches(shared_ptr<RefreshScdnObjectCachesRequest> request);
  SetScdnBotInfoResponse setScdnBotInfoWithOptions(shared_ptr<SetScdnBotInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetScdnBotInfoResponse setScdnBotInfo(shared_ptr<SetScdnBotInfoRequest> request);
  SetScdnCcInfoResponse setScdnCcInfoWithOptions(shared_ptr<SetScdnCcInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetScdnCcInfoResponse setScdnCcInfo(shared_ptr<SetScdnCcInfoRequest> request);
  SetScdnDDoSInfoResponse setScdnDDoSInfoWithOptions(shared_ptr<SetScdnDDoSInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetScdnDDoSInfoResponse setScdnDDoSInfo(shared_ptr<SetScdnDDoSInfoRequest> request);
  SetScdnDomainBizInfoResponse setScdnDomainBizInfoWithOptions(shared_ptr<SetScdnDomainBizInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetScdnDomainBizInfoResponse setScdnDomainBizInfo(shared_ptr<SetScdnDomainBizInfoRequest> request);
  SetScdnDomainCertificateResponse setScdnDomainCertificateWithOptions(shared_ptr<SetScdnDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetScdnDomainCertificateResponse setScdnDomainCertificate(shared_ptr<SetScdnDomainCertificateRequest> request);
  StartScdnDomainResponse startScdnDomainWithOptions(shared_ptr<StartScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartScdnDomainResponse startScdnDomain(shared_ptr<StartScdnDomainRequest> request);
  StopScdnDomainResponse stopScdnDomainWithOptions(shared_ptr<StopScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopScdnDomainResponse stopScdnDomain(shared_ptr<StopScdnDomainRequest> request);
  UpdateScdnDomainResponse updateScdnDomainWithOptions(shared_ptr<UpdateScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateScdnDomainResponse updateScdnDomain(shared_ptr<UpdateScdnDomainRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Scdn20171115

#endif
