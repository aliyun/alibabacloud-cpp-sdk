// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WAF-OPENAPI20180117_H_
#define ALIBABACLOUD_WAF-OPENAPI20180117_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Waf-openapi20180117 {
class CreateAclRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> rules{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  CreateAclRuleRequest() {}

  explicit CreateAclRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rules = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~CreateAclRuleRequest() = default;
};
class CreateAclRuleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  CreateAclRuleResponseBodyResult() {}

  explicit CreateAclRuleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~CreateAclRuleResponseBodyResult() = default;
};
class CreateAclRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAclRuleResponseBodyResult> result{};

  CreateAclRuleResponseBody() {}

  explicit CreateAclRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateAclRuleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateAclRuleResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateAclRuleResponseBody() = default;
};
class CreateAclRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAclRuleResponseBody> body{};

  CreateAclRuleResponse() {}

  explicit CreateAclRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAclRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAclRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAclRuleResponse() = default;
};
class CreateCertAndKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> cert{};
  shared_ptr<string> key{};
  shared_ptr<string> httpsCertName{};

  CreateCertAndKeyRequest() {}

  explicit CreateCertAndKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (httpsCertName) {
      res["HttpsCertName"] = boost::any(*httpsCertName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("HttpsCertName") != m.end() && !m["HttpsCertName"].empty()) {
      httpsCertName = make_shared<string>(boost::any_cast<string>(m["HttpsCertName"]));
    }
  }


  virtual ~CreateCertAndKeyRequest() = default;
};
class CreateCertAndKeyResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  CreateCertAndKeyResponseBodyResult() {}

  explicit CreateCertAndKeyResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~CreateCertAndKeyResponseBodyResult() = default;
};
class CreateCertAndKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateCertAndKeyResponseBodyResult> result{};

  CreateCertAndKeyResponseBody() {}

  explicit CreateCertAndKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateCertAndKeyResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateCertAndKeyResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateCertAndKeyResponseBody() = default;
};
class CreateCertAndKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCertAndKeyResponseBody> body{};

  CreateCertAndKeyResponse() {}

  explicit CreateCertAndKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertAndKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertAndKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertAndKeyResponse() = default;
};
class CreateDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<string> sourceIps{};
  shared_ptr<string> httpPort{};
  shared_ptr<string> httpsPort{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> isAccessProduct{};
  shared_ptr<string> protocols{};
  shared_ptr<long> loadBalancing{};
  shared_ptr<long> httpToUserIp{};
  shared_ptr<long> httpsRedirect{};
  shared_ptr<long> rsType{};
  shared_ptr<string> resourceGroupId{};

  CreateDomainConfigRequest() {}

  explicit CreateDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (isAccessProduct) {
      res["IsAccessProduct"] = boost::any(*isAccessProduct);
    }
    if (protocols) {
      res["Protocols"] = boost::any(*protocols);
    }
    if (loadBalancing) {
      res["LoadBalancing"] = boost::any(*loadBalancing);
    }
    if (httpToUserIp) {
      res["HttpToUserIp"] = boost::any(*httpToUserIp);
    }
    if (httpsRedirect) {
      res["HttpsRedirect"] = boost::any(*httpsRedirect);
    }
    if (rsType) {
      res["RsType"] = boost::any(*rsType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      httpPort = make_shared<string>(boost::any_cast<string>(m["HttpPort"]));
    }
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      httpsPort = make_shared<string>(boost::any_cast<string>(m["HttpsPort"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("IsAccessProduct") != m.end() && !m["IsAccessProduct"].empty()) {
      isAccessProduct = make_shared<long>(boost::any_cast<long>(m["IsAccessProduct"]));
    }
    if (m.find("Protocols") != m.end() && !m["Protocols"].empty()) {
      protocols = make_shared<string>(boost::any_cast<string>(m["Protocols"]));
    }
    if (m.find("LoadBalancing") != m.end() && !m["LoadBalancing"].empty()) {
      loadBalancing = make_shared<long>(boost::any_cast<long>(m["LoadBalancing"]));
    }
    if (m.find("HttpToUserIp") != m.end() && !m["HttpToUserIp"].empty()) {
      httpToUserIp = make_shared<long>(boost::any_cast<long>(m["HttpToUserIp"]));
    }
    if (m.find("HttpsRedirect") != m.end() && !m["HttpsRedirect"].empty()) {
      httpsRedirect = make_shared<long>(boost::any_cast<long>(m["HttpsRedirect"]));
    }
    if (m.find("RsType") != m.end() && !m["RsType"].empty()) {
      rsType = make_shared<long>(boost::any_cast<long>(m["RsType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateDomainConfigRequest() = default;
};
class CreateDomainConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  CreateDomainConfigResponseBodyResult() {}

  explicit CreateDomainConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~CreateDomainConfigResponseBodyResult() = default;
};
class CreateDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateDomainConfigResponseBodyResult> result{};

  CreateDomainConfigResponseBody() {}

  explicit CreateDomainConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateDomainConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateDomainConfigResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateDomainConfigResponseBody() = default;
};
class CreateDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDomainConfigResponseBody> body{};

  CreateDomainConfigResponse() {}

  explicit CreateDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainConfigResponse() = default;
};
class CreateProtectionModuleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<string> defense{};
  shared_ptr<string> rule{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  CreateProtectionModuleRuleRequest() {}

  explicit CreateProtectionModuleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (defense) {
      res["Defense"] = boost::any(*defense);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Defense") != m.end() && !m["Defense"].empty()) {
      defense = make_shared<string>(boost::any_cast<string>(m["Defense"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~CreateProtectionModuleRuleRequest() = default;
};
class CreateProtectionModuleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateProtectionModuleRuleResponseBody() {}

  explicit CreateProtectionModuleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateProtectionModuleRuleResponseBody() = default;
};
class CreateProtectionModuleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProtectionModuleRuleResponseBody> body{};

  CreateProtectionModuleRuleResponse() {}

  explicit CreateProtectionModuleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProtectionModuleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProtectionModuleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProtectionModuleRuleResponse() = default;
};
class DeleteAclRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  DeleteAclRuleRequest() {}

  explicit DeleteAclRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DeleteAclRuleRequest() = default;
};
class DeleteAclRuleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  DeleteAclRuleResponseBodyResult() {}

  explicit DeleteAclRuleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~DeleteAclRuleResponseBodyResult() = default;
};
class DeleteAclRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteAclRuleResponseBodyResult> result{};

  DeleteAclRuleResponseBody() {}

  explicit DeleteAclRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteAclRuleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteAclRuleResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteAclRuleResponseBody() = default;
};
class DeleteAclRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAclRuleResponseBody> body{};

  DeleteAclRuleResponse() {}

  explicit DeleteAclRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAclRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAclRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAclRuleResponse() = default;
};
class DeleteDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  DeleteDomainConfigRequest() {}

  explicit DeleteDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DeleteDomainConfigRequest() = default;
};
class DeleteDomainConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  DeleteDomainConfigResponseBodyResult() {}

  explicit DeleteDomainConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~DeleteDomainConfigResponseBodyResult() = default;
};
class DeleteDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteDomainConfigResponseBodyResult> result{};

  DeleteDomainConfigResponseBody() {}

  explicit DeleteDomainConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeleteDomainConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteDomainConfigResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteDomainConfigResponseBody() = default;
};
class DeleteDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDomainConfigResponseBody> body{};

  DeleteDomainConfigResponse() {}

  explicit DeleteDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainConfigResponse() = default;
};
class DescribeAclRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> domain{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  DescribeAclRulesRequest() {}

  explicit DescribeAclRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAclRulesRequest() = default;
};
class DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> contain{};

  DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition() {}

  explicit DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (contain) {
      res["Contain"] = boost::any(*contain);
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
    if (m.find("Contain") != m.end() && !m["Contain"].empty()) {
      contain = make_shared<string>(boost::any_cast<string>(m["Contain"]));
    }
  }


  virtual ~DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition() = default;
};
class DescribeAclRulesResponseBodyResultAclRulesAclRuleConditions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition>> condition{};

  DescribeAclRulesResponseBodyResultAclRulesAclRuleConditions() {}

  explicit DescribeAclRulesResponseBodyResultAclRulesAclRuleConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      vector<boost::any> temp1;
      for(auto item1:*condition){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["condition"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      if (typeid(vector<boost::any>) == m["condition"].type()) {
        vector<DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["condition"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        condition = make_shared<vector<DescribeAclRulesResponseBodyResultAclRulesAclRuleConditionsCondition>>(expect1);
      }
    }
  }


  virtual ~DescribeAclRulesResponseBodyResultAclRulesAclRuleConditions() = default;
};
class DescribeAclRulesResponseBodyResultAclRulesAclRule : public Darabonba::Model {
public:
  shared_ptr<long> action{};
  shared_ptr<long> isDefault{};
  shared_ptr<long> continueWaf{};
  shared_ptr<long> order{};
  shared_ptr<DescribeAclRulesResponseBodyResultAclRulesAclRuleConditions> conditions{};
  shared_ptr<long> continueDataRiskControl{};
  shared_ptr<long> continueSdk{};
  shared_ptr<long> continueCc{};
  shared_ptr<long> continueSA{};
  shared_ptr<long> continueBlockGeo{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};

  DescribeAclRulesResponseBodyResultAclRulesAclRule() {}

  explicit DescribeAclRulesResponseBodyResultAclRulesAclRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (continueWaf) {
      res["ContinueWaf"] = boost::any(*continueWaf);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (conditions) {
      res["Conditions"] = conditions ? boost::any(conditions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (continueDataRiskControl) {
      res["ContinueDataRiskControl"] = boost::any(*continueDataRiskControl);
    }
    if (continueSdk) {
      res["ContinueSdk"] = boost::any(*continueSdk);
    }
    if (continueCc) {
      res["ContinueCc"] = boost::any(*continueCc);
    }
    if (continueSA) {
      res["ContinueSA"] = boost::any(*continueSA);
    }
    if (continueBlockGeo) {
      res["ContinueBlockGeo"] = boost::any(*continueBlockGeo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<long>(boost::any_cast<long>(m["Action"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<long>(boost::any_cast<long>(m["IsDefault"]));
    }
    if (m.find("ContinueWaf") != m.end() && !m["ContinueWaf"].empty()) {
      continueWaf = make_shared<long>(boost::any_cast<long>(m["ContinueWaf"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Conditions"].type()) {
        DescribeAclRulesResponseBodyResultAclRulesAclRuleConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Conditions"]));
        conditions = make_shared<DescribeAclRulesResponseBodyResultAclRulesAclRuleConditions>(model1);
      }
    }
    if (m.find("ContinueDataRiskControl") != m.end() && !m["ContinueDataRiskControl"].empty()) {
      continueDataRiskControl = make_shared<long>(boost::any_cast<long>(m["ContinueDataRiskControl"]));
    }
    if (m.find("ContinueSdk") != m.end() && !m["ContinueSdk"].empty()) {
      continueSdk = make_shared<long>(boost::any_cast<long>(m["ContinueSdk"]));
    }
    if (m.find("ContinueCc") != m.end() && !m["ContinueCc"].empty()) {
      continueCc = make_shared<long>(boost::any_cast<long>(m["ContinueCc"]));
    }
    if (m.find("ContinueSA") != m.end() && !m["ContinueSA"].empty()) {
      continueSA = make_shared<long>(boost::any_cast<long>(m["ContinueSA"]));
    }
    if (m.find("ContinueBlockGeo") != m.end() && !m["ContinueBlockGeo"].empty()) {
      continueBlockGeo = make_shared<long>(boost::any_cast<long>(m["ContinueBlockGeo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DescribeAclRulesResponseBodyResultAclRulesAclRule() = default;
};
class DescribeAclRulesResponseBodyResultAclRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAclRulesResponseBodyResultAclRulesAclRule>> aclRule{};

  DescribeAclRulesResponseBodyResultAclRules() {}

  explicit DescribeAclRulesResponseBodyResultAclRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclRule) {
      vector<boost::any> temp1;
      for(auto item1:*aclRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclRule") != m.end() && !m["AclRule"].empty()) {
      if (typeid(vector<boost::any>) == m["AclRule"].type()) {
        vector<DescribeAclRulesResponseBodyResultAclRulesAclRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAclRulesResponseBodyResultAclRulesAclRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclRule = make_shared<vector<DescribeAclRulesResponseBodyResultAclRulesAclRule>>(expect1);
      }
    }
  }


  virtual ~DescribeAclRulesResponseBodyResultAclRules() = default;
};
class DescribeAclRulesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<DescribeAclRulesResponseBodyResultAclRules> aclRules{};
  shared_ptr<long> total{};

  DescribeAclRulesResponseBodyResult() {}

  explicit DescribeAclRulesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclRules) {
      res["AclRules"] = aclRules ? boost::any(aclRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclRules") != m.end() && !m["AclRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["AclRules"].type()) {
        DescribeAclRulesResponseBodyResultAclRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AclRules"]));
        aclRules = make_shared<DescribeAclRulesResponseBodyResultAclRules>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAclRulesResponseBodyResult() = default;
};
class DescribeAclRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAclRulesResponseBodyResult> result{};

  DescribeAclRulesResponseBody() {}

  explicit DescribeAclRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeAclRulesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeAclRulesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeAclRulesResponseBody() = default;
};
class DescribeAclRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAclRulesResponseBody> body{};

  DescribeAclRulesResponse() {}

  explicit DescribeAclRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAclRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAclRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAclRulesResponse() = default;
};
class DescribeAsyncTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> wafRequestId{};
  shared_ptr<string> resourceGroupId{};

  DescribeAsyncTaskStatusRequest() {}

  explicit DescribeAsyncTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (wafRequestId) {
      res["WafRequestId"] = boost::any(*wafRequestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("WafRequestId") != m.end() && !m["WafRequestId"].empty()) {
      wafRequestId = make_shared<string>(boost::any_cast<string>(m["WafRequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeAsyncTaskStatusRequest() = default;
};
class DescribeAsyncTaskStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> progress{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> asyncTaskStatus{};

  DescribeAsyncTaskStatusResponseBodyResult() {}

  explicit DescribeAsyncTaskStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (asyncTaskStatus) {
      res["AsyncTaskStatus"] = boost::any(*asyncTaskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("AsyncTaskStatus") != m.end() && !m["AsyncTaskStatus"].empty()) {
      asyncTaskStatus = make_shared<string>(boost::any_cast<string>(m["AsyncTaskStatus"]));
    }
  }


  virtual ~DescribeAsyncTaskStatusResponseBodyResult() = default;
};
class DescribeAsyncTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAsyncTaskStatusResponseBodyResult> result{};

  DescribeAsyncTaskStatusResponseBody() {}

  explicit DescribeAsyncTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeAsyncTaskStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeAsyncTaskStatusResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeAsyncTaskStatusResponseBody() = default;
};
class DescribeAsyncTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAsyncTaskStatusResponseBody> body{};

  DescribeAsyncTaskStatusResponse() {}

  explicit DescribeAsyncTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAsyncTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAsyncTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAsyncTaskStatusResponse() = default;
};
class DescribeDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> domain{};

  DescribeDomainConfigRequest() {}

  explicit DescribeDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~DescribeDomainConfigRequest() = default;
};
class DescribeDomainConfigResponseBodyResultDomainConfig : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<long> protocolType{};
  shared_ptr<string> sourceIps{};

  DescribeDomainConfigResponseBodyResultDomainConfig() {}

  explicit DescribeDomainConfigResponseBodyResultDomainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<long>(boost::any_cast<long>(m["ProtocolType"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
  }


  virtual ~DescribeDomainConfigResponseBodyResultDomainConfig() = default;
};
class DescribeDomainConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};
  shared_ptr<DescribeDomainConfigResponseBodyResultDomainConfig> domainConfig{};

  DescribeDomainConfigResponseBodyResult() {}

  explicit DescribeDomainConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    if (domainConfig) {
      res["DomainConfig"] = domainConfig ? boost::any(domainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
    if (m.find("DomainConfig") != m.end() && !m["DomainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainConfig"].type()) {
        DescribeDomainConfigResponseBodyResultDomainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainConfig"]));
        domainConfig = make_shared<DescribeDomainConfigResponseBodyResultDomainConfig>(model1);
      }
    }
  }


  virtual ~DescribeDomainConfigResponseBodyResult() = default;
};
class DescribeDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDomainConfigResponseBodyResult> result{};

  DescribeDomainConfigResponseBody() {}

  explicit DescribeDomainConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeDomainConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeDomainConfigResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeDomainConfigResponseBody() = default;
};
class DescribeDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainConfigResponseBody> body{};

  DescribeDomainConfigResponse() {}

  explicit DescribeDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainConfigResponse() = default;
};
class DescribeDomainConfigStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> domain{};

  DescribeDomainConfigStatusRequest() {}

  explicit DescribeDomainConfigStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~DescribeDomainConfigStatusRequest() = default;
};
class DescribeDomainConfigStatusResponseBodyResultDomainConfig : public Darabonba::Model {
public:
  shared_ptr<string> configStatus{};

  DescribeDomainConfigStatusResponseBodyResultDomainConfig() {}

  explicit DescribeDomainConfigStatusResponseBodyResultDomainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configStatus) {
      res["ConfigStatus"] = boost::any(*configStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigStatus") != m.end() && !m["ConfigStatus"].empty()) {
      configStatus = make_shared<string>(boost::any_cast<string>(m["ConfigStatus"]));
    }
  }


  virtual ~DescribeDomainConfigStatusResponseBodyResultDomainConfig() = default;
};
class DescribeDomainConfigStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};
  shared_ptr<DescribeDomainConfigStatusResponseBodyResultDomainConfig> domainConfig{};

  DescribeDomainConfigStatusResponseBodyResult() {}

  explicit DescribeDomainConfigStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    if (domainConfig) {
      res["DomainConfig"] = domainConfig ? boost::any(domainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
    if (m.find("DomainConfig") != m.end() && !m["DomainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainConfig"].type()) {
        DescribeDomainConfigStatusResponseBodyResultDomainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainConfig"]));
        domainConfig = make_shared<DescribeDomainConfigStatusResponseBodyResultDomainConfig>(model1);
      }
    }
  }


  virtual ~DescribeDomainConfigStatusResponseBodyResult() = default;
};
class DescribeDomainConfigStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDomainConfigStatusResponseBodyResult> result{};

  DescribeDomainConfigStatusResponseBody() {}

  explicit DescribeDomainConfigStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeDomainConfigStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeDomainConfigStatusResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeDomainConfigStatusResponseBody() = default;
};
class DescribeDomainConfigStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainConfigStatusResponseBody> body{};

  DescribeDomainConfigStatusResponse() {}

  explicit DescribeDomainConfigStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainConfigStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainConfigStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainConfigStatusResponse() = default;
};
class DescribeDomainNamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeDomainNamesRequest() {}

  explicit DescribeDomainNamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeDomainNamesRequest() = default;
};
class DescribeDomainNamesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainNames{};

  DescribeDomainNamesResponseBodyResult() {}

  explicit DescribeDomainNamesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDomainNamesResponseBodyResult() = default;
};
class DescribeDomainNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDomainNamesResponseBodyResult> result{};

  DescribeDomainNamesResponseBody() {}

  explicit DescribeDomainNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeDomainNamesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeDomainNamesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeDomainNamesResponseBody() = default;
};
class DescribeDomainNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainNamesResponseBody> body{};

  DescribeDomainNamesResponse() {}

  explicit DescribeDomainNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainNamesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainNamesResponse() = default;
};
class DescribePayInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> instanceSource{};
  shared_ptr<string> resourceGroupId{};

  DescribePayInfoRequest() {}

  explicit DescribePayInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribePayInfoRequest() = default;
};
class DescribePayInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> endDate{};
  shared_ptr<long> remainDay{};
  shared_ptr<string> region{};
  shared_ptr<long> payType{};
  shared_ptr<long> inDebt{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> trial{};

  DescribePayInfoResponseBodyResult() {}

  explicit DescribePayInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (remainDay) {
      res["RemainDay"] = boost::any(*remainDay);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (inDebt) {
      res["InDebt"] = boost::any(*inDebt);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (trial) {
      res["Trial"] = boost::any(*trial);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("RemainDay") != m.end() && !m["RemainDay"].empty()) {
      remainDay = make_shared<long>(boost::any_cast<long>(m["RemainDay"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("InDebt") != m.end() && !m["InDebt"].empty()) {
      inDebt = make_shared<long>(boost::any_cast<long>(m["InDebt"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Trial") != m.end() && !m["Trial"].empty()) {
      trial = make_shared<long>(boost::any_cast<long>(m["Trial"]));
    }
  }


  virtual ~DescribePayInfoResponseBodyResult() = default;
};
class DescribePayInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribePayInfoResponseBodyResult> result{};

  DescribePayInfoResponseBody() {}

  explicit DescribePayInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribePayInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribePayInfoResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribePayInfoResponseBody() = default;
};
class DescribePayInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePayInfoResponseBody> body{};

  DescribePayInfoResponse() {}

  explicit DescribePayInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePayInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePayInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePayInfoResponse() = default;
};
class DescribeProtectionModuleRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> domain{};
  shared_ptr<string> defense{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  DescribeProtectionModuleRulesRequest() {}

  explicit DescribeProtectionModuleRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (defense) {
      res["Defense"] = boost::any(*defense);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Defense") != m.end() && !m["Defense"].empty()) {
      defense = make_shared<string>(boost::any_cast<string>(m["Defense"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeProtectionModuleRulesRequest() = default;
};
class DescribeProtectionModuleRulesResponseBodyModuleRules : public Darabonba::Model {
public:
  shared_ptr<long> time{};
  shared_ptr<long> version{};
  shared_ptr<string> content{};
  shared_ptr<long> id{};

  DescribeProtectionModuleRulesResponseBodyModuleRules() {}

  explicit DescribeProtectionModuleRulesResponseBodyModuleRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DescribeProtectionModuleRulesResponseBodyModuleRules() = default;
};
class DescribeProtectionModuleRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProtectionModuleRulesResponseBodyModuleRules>> moduleRules{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<long> taskStatus{};

  DescribeProtectionModuleRulesResponseBody() {}

  explicit DescribeProtectionModuleRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleRules) {
      vector<boost::any> temp1;
      for(auto item1:*moduleRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleRules") != m.end() && !m["ModuleRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleRules"].type()) {
        vector<DescribeProtectionModuleRulesResponseBodyModuleRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProtectionModuleRulesResponseBodyModuleRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleRules = make_shared<vector<DescribeProtectionModuleRulesResponseBodyModuleRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
  }


  virtual ~DescribeProtectionModuleRulesResponseBody() = default;
};
class DescribeProtectionModuleRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProtectionModuleRulesResponseBody> body{};

  DescribeProtectionModuleRulesResponse() {}

  explicit DescribeProtectionModuleRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProtectionModuleRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProtectionModuleRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProtectionModuleRulesResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> display{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<string>(boost::any_cast<string>(m["Display"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
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
class DescribeWafSourceIpSegmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};

  DescribeWafSourceIpSegmentRequest() {}

  explicit DescribeWafSourceIpSegmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeWafSourceIpSegmentRequest() = default;
};
class DescribeWafSourceIpSegmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ips{};

  DescribeWafSourceIpSegmentResponseBody() {}

  explicit DescribeWafSourceIpSegmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      ips = make_shared<string>(boost::any_cast<string>(m["Ips"]));
    }
  }


  virtual ~DescribeWafSourceIpSegmentResponseBody() = default;
};
class DescribeWafSourceIpSegmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeWafSourceIpSegmentResponseBody> body{};

  DescribeWafSourceIpSegmentResponse() {}

  explicit DescribeWafSourceIpSegmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWafSourceIpSegmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWafSourceIpSegmentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWafSourceIpSegmentResponse() = default;
};
class ModifyAclRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<string> rules{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  ModifyAclRuleRequest() {}

  explicit ModifyAclRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rules = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ModifyAclRuleRequest() = default;
};
class ModifyAclRuleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  ModifyAclRuleResponseBodyResult() {}

  explicit ModifyAclRuleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~ModifyAclRuleResponseBodyResult() = default;
};
class ModifyAclRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyAclRuleResponseBodyResult> result{};

  ModifyAclRuleResponseBody() {}

  explicit ModifyAclRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ModifyAclRuleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ModifyAclRuleResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyAclRuleResponseBody() = default;
};
class ModifyAclRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAclRuleResponseBody> body{};

  ModifyAclRuleResponse() {}

  explicit ModifyAclRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAclRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAclRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAclRuleResponse() = default;
};
class ModifyDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<string> sourceIps{};
  shared_ptr<string> httpPort{};
  shared_ptr<string> httpsPort{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> isAccessProduct{};
  shared_ptr<string> protocols{};
  shared_ptr<long> loadBalancing{};
  shared_ptr<long> httpToUserIp{};
  shared_ptr<long> httpsRedirect{};

  ModifyDomainConfigRequest() {}

  explicit ModifyDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (isAccessProduct) {
      res["IsAccessProduct"] = boost::any(*isAccessProduct);
    }
    if (protocols) {
      res["Protocols"] = boost::any(*protocols);
    }
    if (loadBalancing) {
      res["LoadBalancing"] = boost::any(*loadBalancing);
    }
    if (httpToUserIp) {
      res["HttpToUserIp"] = boost::any(*httpToUserIp);
    }
    if (httpsRedirect) {
      res["HttpsRedirect"] = boost::any(*httpsRedirect);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      httpPort = make_shared<string>(boost::any_cast<string>(m["HttpPort"]));
    }
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      httpsPort = make_shared<string>(boost::any_cast<string>(m["HttpsPort"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("IsAccessProduct") != m.end() && !m["IsAccessProduct"].empty()) {
      isAccessProduct = make_shared<long>(boost::any_cast<long>(m["IsAccessProduct"]));
    }
    if (m.find("Protocols") != m.end() && !m["Protocols"].empty()) {
      protocols = make_shared<string>(boost::any_cast<string>(m["Protocols"]));
    }
    if (m.find("LoadBalancing") != m.end() && !m["LoadBalancing"].empty()) {
      loadBalancing = make_shared<long>(boost::any_cast<long>(m["LoadBalancing"]));
    }
    if (m.find("HttpToUserIp") != m.end() && !m["HttpToUserIp"].empty()) {
      httpToUserIp = make_shared<long>(boost::any_cast<long>(m["HttpToUserIp"]));
    }
    if (m.find("HttpsRedirect") != m.end() && !m["HttpsRedirect"].empty()) {
      httpsRedirect = make_shared<long>(boost::any_cast<long>(m["HttpsRedirect"]));
    }
  }


  virtual ~ModifyDomainConfigRequest() = default;
};
class ModifyDomainConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  ModifyDomainConfigResponseBodyResult() {}

  explicit ModifyDomainConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~ModifyDomainConfigResponseBodyResult() = default;
};
class ModifyDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyDomainConfigResponseBodyResult> result{};

  ModifyDomainConfigResponseBody() {}

  explicit ModifyDomainConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ModifyDomainConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ModifyDomainConfigResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyDomainConfigResponseBody() = default;
};
class ModifyDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDomainConfigResponseBody> body{};

  ModifyDomainConfigResponse() {}

  explicit ModifyDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDomainConfigResponse() = default;
};
class ModifyProtectionRuleCacheStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<long> id{};
  shared_ptr<string> defense{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  ModifyProtectionRuleCacheStatusRequest() {}

  explicit ModifyProtectionRuleCacheStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (defense) {
      res["Defense"] = boost::any(*defense);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Defense") != m.end() && !m["Defense"].empty()) {
      defense = make_shared<string>(boost::any_cast<string>(m["Defense"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ModifyProtectionRuleCacheStatusRequest() = default;
};
class ModifyProtectionRuleCacheStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> taskStatus{};
  shared_ptr<long> wafTaskId{};

  ModifyProtectionRuleCacheStatusResponseBody() {}

  explicit ModifyProtectionRuleCacheStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<long>(boost::any_cast<long>(m["WafTaskId"]));
    }
  }


  virtual ~ModifyProtectionRuleCacheStatusResponseBody() = default;
};
class ModifyProtectionRuleCacheStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyProtectionRuleCacheStatusResponseBody> body{};

  ModifyProtectionRuleCacheStatusResponse() {}

  explicit ModifyProtectionRuleCacheStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProtectionRuleCacheStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProtectionRuleCacheStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProtectionRuleCacheStatusResponse() = default;
};
class ModifyProtectionRuleStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> domain{};
  shared_ptr<string> defense{};
  shared_ptr<long> id{};
  shared_ptr<long> ruleStatus{};
  shared_ptr<long> lockVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  ModifyProtectionRuleStatusRequest() {}

  explicit ModifyProtectionRuleStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (defense) {
      res["Defense"] = boost::any(*defense);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ruleStatus) {
      res["RuleStatus"] = boost::any(*ruleStatus);
    }
    if (lockVersion) {
      res["LockVersion"] = boost::any(*lockVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Defense") != m.end() && !m["Defense"].empty()) {
      defense = make_shared<string>(boost::any_cast<string>(m["Defense"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RuleStatus") != m.end() && !m["RuleStatus"].empty()) {
      ruleStatus = make_shared<long>(boost::any_cast<long>(m["RuleStatus"]));
    }
    if (m.find("LockVersion") != m.end() && !m["LockVersion"].empty()) {
      lockVersion = make_shared<long>(boost::any_cast<long>(m["LockVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ModifyProtectionRuleStatusRequest() = default;
};
class ModifyProtectionRuleStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> taskStatus{};
  shared_ptr<long> wafTaskId{};

  ModifyProtectionRuleStatusResponseBody() {}

  explicit ModifyProtectionRuleStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<long>(boost::any_cast<long>(m["WafTaskId"]));
    }
  }


  virtual ~ModifyProtectionRuleStatusResponseBody() = default;
};
class ModifyProtectionRuleStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyProtectionRuleStatusResponseBody> body{};

  ModifyProtectionRuleStatusResponse() {}

  explicit ModifyProtectionRuleStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProtectionRuleStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProtectionRuleStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProtectionRuleStatusResponse() = default;
};
class ModifyWafSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> serviceOn{};

  ModifyWafSwitchRequest() {}

  explicit ModifyWafSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (serviceOn) {
      res["ServiceOn"] = boost::any(*serviceOn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ServiceOn") != m.end() && !m["ServiceOn"].empty()) {
      serviceOn = make_shared<long>(boost::any_cast<long>(m["ServiceOn"]));
    }
  }


  virtual ~ModifyWafSwitchRequest() = default;
};
class ModifyWafSwitchResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> wafTaskId{};

  ModifyWafSwitchResponseBodyResult() {}

  explicit ModifyWafSwitchResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wafTaskId) {
      res["WafTaskId"] = boost::any(*wafTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WafTaskId") != m.end() && !m["WafTaskId"].empty()) {
      wafTaskId = make_shared<string>(boost::any_cast<string>(m["WafTaskId"]));
    }
  }


  virtual ~ModifyWafSwitchResponseBodyResult() = default;
};
class ModifyWafSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyWafSwitchResponseBodyResult> result{};

  ModifyWafSwitchResponseBody() {}

  explicit ModifyWafSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ModifyWafSwitchResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ModifyWafSwitchResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyWafSwitchResponseBody() = default;
};
class ModifyWafSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyWafSwitchResponseBody> body{};

  ModifyWafSwitchResponse() {}

  explicit ModifyWafSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyWafSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyWafSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyWafSwitchResponse() = default;
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
  CreateAclRuleResponse createAclRuleWithOptions(shared_ptr<CreateAclRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAclRuleResponse createAclRule(shared_ptr<CreateAclRuleRequest> request);
  CreateCertAndKeyResponse createCertAndKeyWithOptions(shared_ptr<CreateCertAndKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertAndKeyResponse createCertAndKey(shared_ptr<CreateCertAndKeyRequest> request);
  CreateDomainConfigResponse createDomainConfigWithOptions(shared_ptr<CreateDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainConfigResponse createDomainConfig(shared_ptr<CreateDomainConfigRequest> request);
  CreateProtectionModuleRuleResponse createProtectionModuleRuleWithOptions(shared_ptr<CreateProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProtectionModuleRuleResponse createProtectionModuleRule(shared_ptr<CreateProtectionModuleRuleRequest> request);
  DeleteAclRuleResponse deleteAclRuleWithOptions(shared_ptr<DeleteAclRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAclRuleResponse deleteAclRule(shared_ptr<DeleteAclRuleRequest> request);
  DeleteDomainConfigResponse deleteDomainConfigWithOptions(shared_ptr<DeleteDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainConfigResponse deleteDomainConfig(shared_ptr<DeleteDomainConfigRequest> request);
  DescribeAclRulesResponse describeAclRulesWithOptions(shared_ptr<DescribeAclRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAclRulesResponse describeAclRules(shared_ptr<DescribeAclRulesRequest> request);
  DescribeAsyncTaskStatusResponse describeAsyncTaskStatusWithOptions(shared_ptr<DescribeAsyncTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAsyncTaskStatusResponse describeAsyncTaskStatus(shared_ptr<DescribeAsyncTaskStatusRequest> request);
  DescribeDomainConfigResponse describeDomainConfigWithOptions(shared_ptr<DescribeDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainConfigResponse describeDomainConfig(shared_ptr<DescribeDomainConfigRequest> request);
  DescribeDomainConfigStatusResponse describeDomainConfigStatusWithOptions(shared_ptr<DescribeDomainConfigStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainConfigStatusResponse describeDomainConfigStatus(shared_ptr<DescribeDomainConfigStatusRequest> request);
  DescribeDomainNamesResponse describeDomainNamesWithOptions(shared_ptr<DescribeDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainNamesResponse describeDomainNames(shared_ptr<DescribeDomainNamesRequest> request);
  DescribePayInfoResponse describePayInfoWithOptions(shared_ptr<DescribePayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePayInfoResponse describePayInfo(shared_ptr<DescribePayInfoRequest> request);
  DescribeProtectionModuleRulesResponse describeProtectionModuleRulesWithOptions(shared_ptr<DescribeProtectionModuleRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProtectionModuleRulesResponse describeProtectionModuleRules(shared_ptr<DescribeProtectionModuleRulesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeWafSourceIpSegmentResponse describeWafSourceIpSegmentWithOptions(shared_ptr<DescribeWafSourceIpSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWafSourceIpSegmentResponse describeWafSourceIpSegment(shared_ptr<DescribeWafSourceIpSegmentRequest> request);
  ModifyAclRuleResponse modifyAclRuleWithOptions(shared_ptr<ModifyAclRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAclRuleResponse modifyAclRule(shared_ptr<ModifyAclRuleRequest> request);
  ModifyDomainConfigResponse modifyDomainConfigWithOptions(shared_ptr<ModifyDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDomainConfigResponse modifyDomainConfig(shared_ptr<ModifyDomainConfigRequest> request);
  ModifyProtectionRuleCacheStatusResponse modifyProtectionRuleCacheStatusWithOptions(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtectionRuleCacheStatusResponse modifyProtectionRuleCacheStatus(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request);
  ModifyProtectionRuleStatusResponse modifyProtectionRuleStatusWithOptions(shared_ptr<ModifyProtectionRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtectionRuleStatusResponse modifyProtectionRuleStatus(shared_ptr<ModifyProtectionRuleStatusRequest> request);
  ModifyWafSwitchResponse modifyWafSwitchWithOptions(shared_ptr<ModifyWafSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyWafSwitchResponse modifyWafSwitch(shared_ptr<ModifyWafSwitchRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Waf-openapi20180117

#endif
