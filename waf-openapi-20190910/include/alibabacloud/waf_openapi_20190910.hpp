// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WAF-OPENAPI20190910_H_
#define ALIBABACLOUD_WAF-OPENAPI20190910_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Waf-openapi20190910 {
class CreateCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> privateKey{};

  CreateCertificateRequest() {}

  explicit CreateCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
  }


  virtual ~CreateCertificateRequest() = default;
};
class CreateCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> certificateId{};
  shared_ptr<string> requestId{};

  CreateCertificateResponseBody() {}

  explicit CreateCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<long>(boost::any_cast<long>(m["CertificateId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateResponseBody() = default;
};
class CreateCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCertificateResponseBody> body{};

  CreateCertificateResponse() {}

  explicit CreateCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateResponse() = default;
};
class CreateCertificateByCertificateIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> certificateId{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};

  CreateCertificateByCertificateIdRequest() {}

  explicit CreateCertificateByCertificateIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<long>(boost::any_cast<long>(m["CertificateId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateCertificateByCertificateIdRequest() = default;
};
class CreateCertificateByCertificateIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> certificateId{};
  shared_ptr<string> requestId{};

  CreateCertificateByCertificateIdResponseBody() {}

  explicit CreateCertificateByCertificateIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<long>(boost::any_cast<long>(m["CertificateId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateByCertificateIdResponseBody() = default;
};
class CreateCertificateByCertificateIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCertificateByCertificateIdResponseBody> body{};

  CreateCertificateByCertificateIdResponse() {}

  explicit CreateCertificateByCertificateIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertificateByCertificateIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateByCertificateIdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateByCertificateIdResponse() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> accessHeaderMode{};
  shared_ptr<string> accessHeaders{};
  shared_ptr<string> accessType{};
  shared_ptr<string> cloudNativeInstances{};
  shared_ptr<long> clusterType{};
  shared_ptr<long> connectionTime{};
  shared_ptr<string> domain{};
  shared_ptr<string> http2Port{};
  shared_ptr<string> httpPort{};
  shared_ptr<long> httpToUserIp{};
  shared_ptr<string> httpsPort{};
  shared_ptr<long> httpsRedirect{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ipFollowStatus{};
  shared_ptr<long> isAccessProduct{};
  shared_ptr<long> loadBalancing{};
  shared_ptr<string> logHeaders{};
  shared_ptr<long> readTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sniHost{};
  shared_ptr<long> sniStatus{};
  shared_ptr<string> sourceIps{};
  shared_ptr<long> writeTime{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessHeaderMode) {
      res["AccessHeaderMode"] = boost::any(*accessHeaderMode);
    }
    if (accessHeaders) {
      res["AccessHeaders"] = boost::any(*accessHeaders);
    }
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (cloudNativeInstances) {
      res["CloudNativeInstances"] = boost::any(*cloudNativeInstances);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (connectionTime) {
      res["ConnectionTime"] = boost::any(*connectionTime);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (http2Port) {
      res["Http2Port"] = boost::any(*http2Port);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (httpToUserIp) {
      res["HttpToUserIp"] = boost::any(*httpToUserIp);
    }
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (httpsRedirect) {
      res["HttpsRedirect"] = boost::any(*httpsRedirect);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipFollowStatus) {
      res["IpFollowStatus"] = boost::any(*ipFollowStatus);
    }
    if (isAccessProduct) {
      res["IsAccessProduct"] = boost::any(*isAccessProduct);
    }
    if (loadBalancing) {
      res["LoadBalancing"] = boost::any(*loadBalancing);
    }
    if (logHeaders) {
      res["LogHeaders"] = boost::any(*logHeaders);
    }
    if (readTime) {
      res["ReadTime"] = boost::any(*readTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sniHost) {
      res["SniHost"] = boost::any(*sniHost);
    }
    if (sniStatus) {
      res["SniStatus"] = boost::any(*sniStatus);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    if (writeTime) {
      res["WriteTime"] = boost::any(*writeTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessHeaderMode") != m.end() && !m["AccessHeaderMode"].empty()) {
      accessHeaderMode = make_shared<long>(boost::any_cast<long>(m["AccessHeaderMode"]));
    }
    if (m.find("AccessHeaders") != m.end() && !m["AccessHeaders"].empty()) {
      accessHeaders = make_shared<string>(boost::any_cast<string>(m["AccessHeaders"]));
    }
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("CloudNativeInstances") != m.end() && !m["CloudNativeInstances"].empty()) {
      cloudNativeInstances = make_shared<string>(boost::any_cast<string>(m["CloudNativeInstances"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<long>(boost::any_cast<long>(m["ClusterType"]));
    }
    if (m.find("ConnectionTime") != m.end() && !m["ConnectionTime"].empty()) {
      connectionTime = make_shared<long>(boost::any_cast<long>(m["ConnectionTime"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Http2Port") != m.end() && !m["Http2Port"].empty()) {
      http2Port = make_shared<string>(boost::any_cast<string>(m["Http2Port"]));
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      httpPort = make_shared<string>(boost::any_cast<string>(m["HttpPort"]));
    }
    if (m.find("HttpToUserIp") != m.end() && !m["HttpToUserIp"].empty()) {
      httpToUserIp = make_shared<long>(boost::any_cast<long>(m["HttpToUserIp"]));
    }
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      httpsPort = make_shared<string>(boost::any_cast<string>(m["HttpsPort"]));
    }
    if (m.find("HttpsRedirect") != m.end() && !m["HttpsRedirect"].empty()) {
      httpsRedirect = make_shared<long>(boost::any_cast<long>(m["HttpsRedirect"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpFollowStatus") != m.end() && !m["IpFollowStatus"].empty()) {
      ipFollowStatus = make_shared<long>(boost::any_cast<long>(m["IpFollowStatus"]));
    }
    if (m.find("IsAccessProduct") != m.end() && !m["IsAccessProduct"].empty()) {
      isAccessProduct = make_shared<long>(boost::any_cast<long>(m["IsAccessProduct"]));
    }
    if (m.find("LoadBalancing") != m.end() && !m["LoadBalancing"].empty()) {
      loadBalancing = make_shared<long>(boost::any_cast<long>(m["LoadBalancing"]));
    }
    if (m.find("LogHeaders") != m.end() && !m["LogHeaders"].empty()) {
      logHeaders = make_shared<string>(boost::any_cast<string>(m["LogHeaders"]));
    }
    if (m.find("ReadTime") != m.end() && !m["ReadTime"].empty()) {
      readTime = make_shared<long>(boost::any_cast<long>(m["ReadTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SniHost") != m.end() && !m["SniHost"].empty()) {
      sniHost = make_shared<string>(boost::any_cast<string>(m["SniHost"]));
    }
    if (m.find("SniStatus") != m.end() && !m["SniStatus"].empty()) {
      sniStatus = make_shared<long>(boost::any_cast<long>(m["SniStatus"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
    if (m.find("WriteTime") != m.end() && !m["WriteTime"].empty()) {
      writeTime = make_shared<long>(boost::any_cast<long>(m["WriteTime"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
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
  shared_ptr<CreateDomainResponseBody> body{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateProtectionModuleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> rule{};

  CreateProtectionModuleRuleRequest() {}

  explicit CreateProtectionModuleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
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
class DeleteDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};

  DeleteDomainRequest() {}

  explicit DeleteDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
  shared_ptr<DeleteDomainResponseBody> body{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteProtectionModuleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ruleId{};

  DeleteProtectionModuleRuleRequest() {}

  explicit DeleteProtectionModuleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DeleteProtectionModuleRuleRequest() = default;
};
class DeleteProtectionModuleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProtectionModuleRuleResponseBody() {}

  explicit DeleteProtectionModuleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProtectionModuleRuleResponseBody() = default;
};
class DeleteProtectionModuleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteProtectionModuleRuleResponseBody> body{};

  DeleteProtectionModuleRuleResponse() {}

  explicit DeleteProtectionModuleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProtectionModuleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProtectionModuleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProtectionModuleRuleResponse() = default;
};
class DescribeCertMatchStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> privateKey{};

  DescribeCertMatchStatusRequest() {}

  explicit DescribeCertMatchStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
  }


  virtual ~DescribeCertMatchStatusRequest() = default;
};
class DescribeCertMatchStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> matchStatus{};
  shared_ptr<string> requestId{};

  DescribeCertMatchStatusResponseBody() {}

  explicit DescribeCertMatchStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchStatus) {
      res["MatchStatus"] = boost::any(*matchStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchStatus") != m.end() && !m["MatchStatus"].empty()) {
      matchStatus = make_shared<bool>(boost::any_cast<bool>(m["MatchStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCertMatchStatusResponseBody() = default;
};
class DescribeCertMatchStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCertMatchStatusResponseBody> body{};

  DescribeCertMatchStatusResponse() {}

  explicit DescribeCertMatchStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCertMatchStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCertMatchStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCertMatchStatusResponse() = default;
};
class DescribeCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};

  DescribeCertificatesRequest() {}

  explicit DescribeCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeCertificatesRequest() = default;
};
class DescribeCertificatesResponseBodyCertificates : public Darabonba::Model {
public:
  shared_ptr<long> certificateId{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> commonName{};
  shared_ptr<bool> isUsing{};
  shared_ptr<vector<string>> sans{};

  DescribeCertificatesResponseBodyCertificates() {}

  explicit DescribeCertificatesResponseBodyCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (isUsing) {
      res["IsUsing"] = boost::any(*isUsing);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<long>(boost::any_cast<long>(m["CertificateId"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("IsUsing") != m.end() && !m["IsUsing"].empty()) {
      isUsing = make_shared<bool>(boost::any_cast<bool>(m["IsUsing"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sans"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sans"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sans = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCertificatesResponseBodyCertificates() = default;
};
class DescribeCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCertificatesResponseBodyCertificates>> certificates{};
  shared_ptr<string> requestId{};

  DescribeCertificatesResponseBody() {}

  explicit DescribeCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<DescribeCertificatesResponseBodyCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCertificatesResponseBodyCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<DescribeCertificatesResponseBodyCertificates>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCertificatesResponseBody() = default;
};
class DescribeCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCertificatesResponseBody> body{};

  DescribeCertificatesResponse() {}

  explicit DescribeCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCertificatesResponse() = default;
};
class DescribeDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};

  DescribeDomainRequest() {}

  explicit DescribeDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeDomainRequest() = default;
};
class DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs : public Darabonba::Model {
public:
  shared_ptr<string> ports{};
  shared_ptr<string> protocol{};

  DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs() {}

  explicit DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs() = default;
};
class DescribeDomainResponseBodyDomainCloudNativeInstances : public Darabonba::Model {
public:
  shared_ptr<string> cloudNativeProductName{};
  shared_ptr<string> IPAddressList{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs>> protocolPortConfigs{};
  shared_ptr<string> redirectionTypeName{};

  DescribeDomainResponseBodyDomainCloudNativeInstances() {}

  explicit DescribeDomainResponseBodyDomainCloudNativeInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudNativeProductName) {
      res["CloudNativeProductName"] = boost::any(*cloudNativeProductName);
    }
    if (IPAddressList) {
      res["IPAddressList"] = boost::any(*IPAddressList);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (protocolPortConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*protocolPortConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProtocolPortConfigs"] = boost::any(temp1);
    }
    if (redirectionTypeName) {
      res["RedirectionTypeName"] = boost::any(*redirectionTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudNativeProductName") != m.end() && !m["CloudNativeProductName"].empty()) {
      cloudNativeProductName = make_shared<string>(boost::any_cast<string>(m["CloudNativeProductName"]));
    }
    if (m.find("IPAddressList") != m.end() && !m["IPAddressList"].empty()) {
      IPAddressList = make_shared<string>(boost::any_cast<string>(m["IPAddressList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProtocolPortConfigs") != m.end() && !m["ProtocolPortConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ProtocolPortConfigs"].type()) {
        vector<DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProtocolPortConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        protocolPortConfigs = make_shared<vector<DescribeDomainResponseBodyDomainCloudNativeInstancesProtocolPortConfigs>>(expect1);
      }
    }
    if (m.find("RedirectionTypeName") != m.end() && !m["RedirectionTypeName"].empty()) {
      redirectionTypeName = make_shared<string>(boost::any_cast<string>(m["RedirectionTypeName"]));
    }
  }


  virtual ~DescribeDomainResponseBodyDomainCloudNativeInstances() = default;
};
class DescribeDomainResponseBodyDomainLogHeaders : public Darabonba::Model {
public:
  shared_ptr<string> k{};
  shared_ptr<string> v{};

  DescribeDomainResponseBodyDomainLogHeaders() {}

  explicit DescribeDomainResponseBodyDomainLogHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (k) {
      res["k"] = boost::any(*k);
    }
    if (v) {
      res["v"] = boost::any(*v);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("k") != m.end() && !m["k"].empty()) {
      k = make_shared<string>(boost::any_cast<string>(m["k"]));
    }
    if (m.find("v") != m.end() && !m["v"].empty()) {
      v = make_shared<string>(boost::any_cast<string>(m["v"]));
    }
  }


  virtual ~DescribeDomainResponseBodyDomainLogHeaders() = default;
};
class DescribeDomainResponseBodyDomain : public Darabonba::Model {
public:
  shared_ptr<long> accessHeaderMode{};
  shared_ptr<vector<string>> accessHeaders{};
  shared_ptr<string> accessType{};
  shared_ptr<vector<DescribeDomainResponseBodyDomainCloudNativeInstances>> cloudNativeInstances{};
  shared_ptr<long> clusterType{};
  shared_ptr<string> cname{};
  shared_ptr<long> connectionTime{};
  shared_ptr<vector<string>> http2Port{};
  shared_ptr<vector<string>> httpPort{};
  shared_ptr<long> httpToUserIp{};
  shared_ptr<vector<string>> httpsPort{};
  shared_ptr<long> httpsRedirect{};
  shared_ptr<long> ipFollowStatus{};
  shared_ptr<long> isAccessProduct{};
  shared_ptr<long> loadBalancing{};
  shared_ptr<vector<DescribeDomainResponseBodyDomainLogHeaders>> logHeaders{};
  shared_ptr<long> readTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sniHost{};
  shared_ptr<long> sniStatus{};
  shared_ptr<vector<string>> sourceIps{};
  shared_ptr<long> version{};
  shared_ptr<long> writeTime{};

  DescribeDomainResponseBodyDomain() {}

  explicit DescribeDomainResponseBodyDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessHeaderMode) {
      res["AccessHeaderMode"] = boost::any(*accessHeaderMode);
    }
    if (accessHeaders) {
      res["AccessHeaders"] = boost::any(*accessHeaders);
    }
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (cloudNativeInstances) {
      vector<boost::any> temp1;
      for(auto item1:*cloudNativeInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudNativeInstances"] = boost::any(temp1);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (connectionTime) {
      res["ConnectionTime"] = boost::any(*connectionTime);
    }
    if (http2Port) {
      res["Http2Port"] = boost::any(*http2Port);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (httpToUserIp) {
      res["HttpToUserIp"] = boost::any(*httpToUserIp);
    }
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (httpsRedirect) {
      res["HttpsRedirect"] = boost::any(*httpsRedirect);
    }
    if (ipFollowStatus) {
      res["IpFollowStatus"] = boost::any(*ipFollowStatus);
    }
    if (isAccessProduct) {
      res["IsAccessProduct"] = boost::any(*isAccessProduct);
    }
    if (loadBalancing) {
      res["LoadBalancing"] = boost::any(*loadBalancing);
    }
    if (logHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*logHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogHeaders"] = boost::any(temp1);
    }
    if (readTime) {
      res["ReadTime"] = boost::any(*readTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sniHost) {
      res["SniHost"] = boost::any(*sniHost);
    }
    if (sniStatus) {
      res["SniStatus"] = boost::any(*sniStatus);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (writeTime) {
      res["WriteTime"] = boost::any(*writeTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessHeaderMode") != m.end() && !m["AccessHeaderMode"].empty()) {
      accessHeaderMode = make_shared<long>(boost::any_cast<long>(m["AccessHeaderMode"]));
    }
    if (m.find("AccessHeaders") != m.end() && !m["AccessHeaders"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessHeaders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessHeaders"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessHeaders = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("CloudNativeInstances") != m.end() && !m["CloudNativeInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudNativeInstances"].type()) {
        vector<DescribeDomainResponseBodyDomainCloudNativeInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudNativeInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainResponseBodyDomainCloudNativeInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudNativeInstances = make_shared<vector<DescribeDomainResponseBodyDomainCloudNativeInstances>>(expect1);
      }
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<long>(boost::any_cast<long>(m["ClusterType"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("ConnectionTime") != m.end() && !m["ConnectionTime"].empty()) {
      connectionTime = make_shared<long>(boost::any_cast<long>(m["ConnectionTime"]));
    }
    if (m.find("Http2Port") != m.end() && !m["Http2Port"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Http2Port"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Http2Port"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      http2Port = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HttpPort"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpPort"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      httpPort = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpToUserIp") != m.end() && !m["HttpToUserIp"].empty()) {
      httpToUserIp = make_shared<long>(boost::any_cast<long>(m["HttpToUserIp"]));
    }
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HttpsPort"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpsPort"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      httpsPort = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpsRedirect") != m.end() && !m["HttpsRedirect"].empty()) {
      httpsRedirect = make_shared<long>(boost::any_cast<long>(m["HttpsRedirect"]));
    }
    if (m.find("IpFollowStatus") != m.end() && !m["IpFollowStatus"].empty()) {
      ipFollowStatus = make_shared<long>(boost::any_cast<long>(m["IpFollowStatus"]));
    }
    if (m.find("IsAccessProduct") != m.end() && !m["IsAccessProduct"].empty()) {
      isAccessProduct = make_shared<long>(boost::any_cast<long>(m["IsAccessProduct"]));
    }
    if (m.find("LoadBalancing") != m.end() && !m["LoadBalancing"].empty()) {
      loadBalancing = make_shared<long>(boost::any_cast<long>(m["LoadBalancing"]));
    }
    if (m.find("LogHeaders") != m.end() && !m["LogHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["LogHeaders"].type()) {
        vector<DescribeDomainResponseBodyDomainLogHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainResponseBodyDomainLogHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logHeaders = make_shared<vector<DescribeDomainResponseBodyDomainLogHeaders>>(expect1);
      }
    }
    if (m.find("ReadTime") != m.end() && !m["ReadTime"].empty()) {
      readTime = make_shared<long>(boost::any_cast<long>(m["ReadTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SniHost") != m.end() && !m["SniHost"].empty()) {
      sniHost = make_shared<string>(boost::any_cast<string>(m["SniHost"]));
    }
    if (m.find("SniStatus") != m.end() && !m["SniStatus"].empty()) {
      sniStatus = make_shared<long>(boost::any_cast<long>(m["SniStatus"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("WriteTime") != m.end() && !m["WriteTime"].empty()) {
      writeTime = make_shared<long>(boost::any_cast<long>(m["WriteTime"]));
    }
  }


  virtual ~DescribeDomainResponseBodyDomain() = default;
};
class DescribeDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainResponseBodyDomain> domain{};
  shared_ptr<string> requestId{};

  DescribeDomainResponseBody() {}

  explicit DescribeDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = domain ? boost::any(domain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      if (typeid(map<string, boost::any>) == m["Domain"].type()) {
        DescribeDomainResponseBodyDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Domain"]));
        domain = make_shared<DescribeDomainResponseBodyDomain>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainResponseBody() = default;
};
class DescribeDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainResponseBody> body{};

  DescribeDomainResponse() {}

  explicit DescribeDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainResponse() = default;
};
class DescribeDomainAdvanceConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeDomainAdvanceConfigsRequest() {}

  explicit DescribeDomainAdvanceConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainList) {
      res["DomainList"] = boost::any(*domainList);
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
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      domainList = make_shared<string>(boost::any_cast<string>(m["DomainList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeDomainAdvanceConfigsRequest() = default;
};
class DescribeDomainAdvanceConfigsResponseBodyDomainConfigsProfile : public Darabonba::Model {
public:
  shared_ptr<long> certStatus{};
  shared_ptr<long> clusterType{};
  shared_ptr<string> cname{};
  shared_ptr<long> exclusiveVipStatus{};
  shared_ptr<string> GSLBStatus{};
  shared_ptr<vector<long>> http2Port{};
  shared_ptr<vector<long>> httpPort{};
  shared_ptr<vector<long>> httpsPort{};
  shared_ptr<long> ipv6Status{};
  shared_ptr<long> resolvedType{};
  shared_ptr<vector<string>> rs{};
  shared_ptr<long> vipServiceStatus{};

  DescribeDomainAdvanceConfigsResponseBodyDomainConfigsProfile() {}

  explicit DescribeDomainAdvanceConfigsResponseBodyDomainConfigsProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certStatus) {
      res["CertStatus"] = boost::any(*certStatus);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (exclusiveVipStatus) {
      res["ExclusiveVipStatus"] = boost::any(*exclusiveVipStatus);
    }
    if (GSLBStatus) {
      res["GSLBStatus"] = boost::any(*GSLBStatus);
    }
    if (http2Port) {
      res["Http2Port"] = boost::any(*http2Port);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (ipv6Status) {
      res["Ipv6Status"] = boost::any(*ipv6Status);
    }
    if (resolvedType) {
      res["ResolvedType"] = boost::any(*resolvedType);
    }
    if (rs) {
      res["Rs"] = boost::any(*rs);
    }
    if (vipServiceStatus) {
      res["VipServiceStatus"] = boost::any(*vipServiceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertStatus") != m.end() && !m["CertStatus"].empty()) {
      certStatus = make_shared<long>(boost::any_cast<long>(m["CertStatus"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<long>(boost::any_cast<long>(m["ClusterType"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("ExclusiveVipStatus") != m.end() && !m["ExclusiveVipStatus"].empty()) {
      exclusiveVipStatus = make_shared<long>(boost::any_cast<long>(m["ExclusiveVipStatus"]));
    }
    if (m.find("GSLBStatus") != m.end() && !m["GSLBStatus"].empty()) {
      GSLBStatus = make_shared<string>(boost::any_cast<string>(m["GSLBStatus"]));
    }
    if (m.find("Http2Port") != m.end() && !m["Http2Port"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Http2Port"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Http2Port"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      http2Port = make_shared<vector<long>>(toVec1);
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpPort"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpPort"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpPort = make_shared<vector<long>>(toVec1);
    }
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpsPort"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpsPort"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpsPort = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Ipv6Status") != m.end() && !m["Ipv6Status"].empty()) {
      ipv6Status = make_shared<long>(boost::any_cast<long>(m["Ipv6Status"]));
    }
    if (m.find("ResolvedType") != m.end() && !m["ResolvedType"].empty()) {
      resolvedType = make_shared<long>(boost::any_cast<long>(m["ResolvedType"]));
    }
    if (m.find("Rs") != m.end() && !m["Rs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Rs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VipServiceStatus") != m.end() && !m["VipServiceStatus"].empty()) {
      vipServiceStatus = make_shared<long>(boost::any_cast<long>(m["VipServiceStatus"]));
    }
  }


  virtual ~DescribeDomainAdvanceConfigsResponseBodyDomainConfigsProfile() = default;
};
class DescribeDomainAdvanceConfigsResponseBodyDomainConfigs : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<DescribeDomainAdvanceConfigsResponseBodyDomainConfigsProfile> profile{};

  DescribeDomainAdvanceConfigsResponseBodyDomainConfigs() {}

  explicit DescribeDomainAdvanceConfigsResponseBodyDomainConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (profile) {
      res["Profile"] = profile ? boost::any(profile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      if (typeid(map<string, boost::any>) == m["Profile"].type()) {
        DescribeDomainAdvanceConfigsResponseBodyDomainConfigsProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Profile"]));
        profile = make_shared<DescribeDomainAdvanceConfigsResponseBodyDomainConfigsProfile>(model1);
      }
    }
  }


  virtual ~DescribeDomainAdvanceConfigsResponseBodyDomainConfigs() = default;
};
class DescribeDomainAdvanceConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainAdvanceConfigsResponseBodyDomainConfigs>> domainConfigs{};
  shared_ptr<string> requestId{};

  DescribeDomainAdvanceConfigsResponseBody() {}

  explicit DescribeDomainAdvanceConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*domainConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainConfigs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainConfigs") != m.end() && !m["DomainConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainConfigs"].type()) {
        vector<DescribeDomainAdvanceConfigsResponseBodyDomainConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainAdvanceConfigsResponseBodyDomainConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainConfigs = make_shared<vector<DescribeDomainAdvanceConfigsResponseBodyDomainConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainAdvanceConfigsResponseBody() = default;
};
class DescribeDomainAdvanceConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainAdvanceConfigsResponseBody> body{};

  DescribeDomainAdvanceConfigsResponse() {}

  explicit DescribeDomainAdvanceConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainAdvanceConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainAdvanceConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainAdvanceConfigsResponse() = default;
};
class DescribeDomainBasicConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<long> cloudNativeProductId{};
  shared_ptr<string> domainKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};

  DescribeDomainBasicConfigsRequest() {}

  explicit DescribeDomainBasicConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (cloudNativeProductId) {
      res["CloudNativeProductId"] = boost::any(*cloudNativeProductId);
    }
    if (domainKey) {
      res["DomainKey"] = boost::any(*domainKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
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
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("CloudNativeProductId") != m.end() && !m["CloudNativeProductId"].empty()) {
      cloudNativeProductId = make_shared<long>(boost::any_cast<long>(m["CloudNativeProductId"]));
    }
    if (m.find("DomainKey") != m.end() && !m["DomainKey"].empty()) {
      domainKey = make_shared<string>(boost::any_cast<string>(m["DomainKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
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


  virtual ~DescribeDomainBasicConfigsRequest() = default;
};
class DescribeDomainBasicConfigsResponseBodyDomainConfigs : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<long> aclStatus{};
  shared_ptr<long> ccMode{};
  shared_ptr<long> ccStatus{};
  shared_ptr<string> domain{};
  shared_ptr<string> owner{};
  shared_ptr<long> status{};
  shared_ptr<long> version{};
  shared_ptr<long> wafMode{};
  shared_ptr<long> wafStatus{};

  DescribeDomainBasicConfigsResponseBodyDomainConfigs() {}

  explicit DescribeDomainBasicConfigsResponseBodyDomainConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (aclStatus) {
      res["AclStatus"] = boost::any(*aclStatus);
    }
    if (ccMode) {
      res["CcMode"] = boost::any(*ccMode);
    }
    if (ccStatus) {
      res["CcStatus"] = boost::any(*ccStatus);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (wafMode) {
      res["WafMode"] = boost::any(*wafMode);
    }
    if (wafStatus) {
      res["WafStatus"] = boost::any(*wafStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("AclStatus") != m.end() && !m["AclStatus"].empty()) {
      aclStatus = make_shared<long>(boost::any_cast<long>(m["AclStatus"]));
    }
    if (m.find("CcMode") != m.end() && !m["CcMode"].empty()) {
      ccMode = make_shared<long>(boost::any_cast<long>(m["CcMode"]));
    }
    if (m.find("CcStatus") != m.end() && !m["CcStatus"].empty()) {
      ccStatus = make_shared<long>(boost::any_cast<long>(m["CcStatus"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("WafMode") != m.end() && !m["WafMode"].empty()) {
      wafMode = make_shared<long>(boost::any_cast<long>(m["WafMode"]));
    }
    if (m.find("WafStatus") != m.end() && !m["WafStatus"].empty()) {
      wafStatus = make_shared<long>(boost::any_cast<long>(m["WafStatus"]));
    }
  }


  virtual ~DescribeDomainBasicConfigsResponseBodyDomainConfigs() = default;
};
class DescribeDomainBasicConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainBasicConfigsResponseBodyDomainConfigs>> domainConfigs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDomainBasicConfigsResponseBody() {}

  explicit DescribeDomainBasicConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*domainConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainConfigs"] = boost::any(temp1);
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
    if (m.find("DomainConfigs") != m.end() && !m["DomainConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainConfigs"].type()) {
        vector<DescribeDomainBasicConfigsResponseBodyDomainConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainBasicConfigsResponseBodyDomainConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainConfigs = make_shared<vector<DescribeDomainBasicConfigsResponseBodyDomainConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDomainBasicConfigsResponseBody() = default;
};
class DescribeDomainBasicConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainBasicConfigsResponseBody> body{};

  DescribeDomainBasicConfigsResponse() {}

  explicit DescribeDomainBasicConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainBasicConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainBasicConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainBasicConfigsResponse() = default;
};
class DescribeDomainListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<vector<string>> domainNames{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> isSub{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};

  DescribeDomainListRequest() {}

  explicit DescribeDomainListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSub) {
      res["IsSub"] = boost::any(*isSub);
    }
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
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSub") != m.end() && !m["IsSub"].empty()) {
      isSub = make_shared<long>(boost::any_cast<long>(m["IsSub"]));
    }
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


  virtual ~DescribeDomainListRequest() = default;
};
class DescribeDomainListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainNames{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDomainListResponseBody() {}

  explicit DescribeDomainListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDomainListResponseBody() = default;
};
class DescribeDomainListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainListResponseBody> body{};

  DescribeDomainListResponse() {}

  explicit DescribeDomainListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainListResponse() = default;
};
class DescribeDomainNamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeDomainNamesRequest() {}

  explicit DescribeDomainNamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeDomainNamesRequest() = default;
};
class DescribeDomainNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainNames{};
  shared_ptr<string> requestId{};

  DescribeDomainNamesResponseBody() {}

  explicit DescribeDomainNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DescribeDomainRuleGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};

  DescribeDomainRuleGroupRequest() {}

  explicit DescribeDomainRuleGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeDomainRuleGroupRequest() = default;
};
class DescribeDomainRuleGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> ruleGroupId{};

  DescribeDomainRuleGroupResponseBody() {}

  explicit DescribeDomainRuleGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleGroupId) {
      res["RuleGroupId"] = boost::any(*ruleGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleGroupId") != m.end() && !m["RuleGroupId"].empty()) {
      ruleGroupId = make_shared<long>(boost::any_cast<long>(m["RuleGroupId"]));
    }
  }


  virtual ~DescribeDomainRuleGroupResponseBody() = default;
};
class DescribeDomainRuleGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDomainRuleGroupResponseBody> body{};

  DescribeDomainRuleGroupResponse() {}

  explicit DescribeDomainRuleGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainRuleGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainRuleGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainRuleGroupResponse() = default;
};
class DescribeInstanceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeInstanceInfoRequest() {}

  explicit DescribeInstanceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeInstanceInfoRequest() = default;
};
class DescribeInstanceInfoResponseBodyInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<long> endDate{};
  shared_ptr<long> inDebt{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> payType{};
  shared_ptr<string> region{};
  shared_ptr<long> remainDay{};
  shared_ptr<long> status{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<long> trial{};
  shared_ptr<string> version{};

  DescribeInstanceInfoResponseBodyInstanceInfo() {}

  explicit DescribeInstanceInfoResponseBodyInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (inDebt) {
      res["InDebt"] = boost::any(*inDebt);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (remainDay) {
      res["RemainDay"] = boost::any(*remainDay);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (trial) {
      res["Trial"] = boost::any(*trial);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("InDebt") != m.end() && !m["InDebt"].empty()) {
      inDebt = make_shared<long>(boost::any_cast<long>(m["InDebt"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RemainDay") != m.end() && !m["RemainDay"].empty()) {
      remainDay = make_shared<long>(boost::any_cast<long>(m["RemainDay"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Trial") != m.end() && !m["Trial"].empty()) {
      trial = make_shared<long>(boost::any_cast<long>(m["Trial"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeInstanceInfoResponseBodyInstanceInfo() = default;
};
class DescribeInstanceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInstanceInfoResponseBodyInstanceInfo> instanceInfo{};
  shared_ptr<string> requestId{};

  DescribeInstanceInfoResponseBody() {}

  explicit DescribeInstanceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfo) {
      res["InstanceInfo"] = instanceInfo ? boost::any(instanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceInfo"].type()) {
        DescribeInstanceInfoResponseBodyInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceInfo"]));
        instanceInfo = make_shared<DescribeInstanceInfoResponseBodyInstanceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceInfoResponseBody() = default;
};
class DescribeInstanceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceInfoResponseBody> body{};

  DescribeInstanceInfoResponse() {}

  explicit DescribeInstanceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceInfoResponse() = default;
};
class DescribeInstanceSpecInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeInstanceSpecInfoRequest() {}

  explicit DescribeInstanceSpecInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeInstanceSpecInfoRequest() = default;
};
class DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> value{};

  DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos() {}

  explicit DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos() = default;
};
class DescribeInstanceSpecInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos>> instanceSpecInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<string> version{};

  DescribeInstanceSpecInfoResponseBody() {}

  explicit DescribeInstanceSpecInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSpecInfos) {
      vector<boost::any> temp1;
      for(auto item1:*instanceSpecInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceSpecInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSpecInfos") != m.end() && !m["InstanceSpecInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceSpecInfos"].type()) {
        vector<DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceSpecInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceSpecInfos = make_shared<vector<DescribeInstanceSpecInfoResponseBodyInstanceSpecInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeInstanceSpecInfoResponseBody() = default;
};
class DescribeInstanceSpecInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceSpecInfoResponseBody> body{};

  DescribeInstanceSpecInfoResponse() {}

  explicit DescribeInstanceSpecInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceSpecInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSpecInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSpecInfoResponse() = default;
};
class DescribeLogServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainNames{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};

  DescribeLogServiceStatusRequest() {}

  explicit DescribeLogServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeLogServiceStatusRequest() = default;
};
class DescribeLogServiceStatusResponseBodyDomainStatus : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> slsLogActive{};

  DescribeLogServiceStatusResponseBodyDomainStatus() {}

  explicit DescribeLogServiceStatusResponseBodyDomainStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (slsLogActive) {
      res["SlsLogActive"] = boost::any(*slsLogActive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SlsLogActive") != m.end() && !m["SlsLogActive"].empty()) {
      slsLogActive = make_shared<long>(boost::any_cast<long>(m["SlsLogActive"]));
    }
  }


  virtual ~DescribeLogServiceStatusResponseBodyDomainStatus() = default;
};
class DescribeLogServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLogServiceStatusResponseBodyDomainStatus>> domainStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeLogServiceStatusResponseBody() {}

  explicit DescribeLogServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainStatus) {
      vector<boost::any> temp1;
      for(auto item1:*domainStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainStatus"] = boost::any(temp1);
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
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainStatus"].type()) {
        vector<DescribeLogServiceStatusResponseBodyDomainStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogServiceStatusResponseBodyDomainStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainStatus = make_shared<vector<DescribeLogServiceStatusResponseBodyDomainStatus>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeLogServiceStatusResponseBody() = default;
};
class DescribeLogServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLogServiceStatusResponseBody> body{};

  DescribeLogServiceStatusResponse() {}

  explicit DescribeLogServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogServiceStatusResponse() = default;
};
class DescribeProtectionModuleCodeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> codeType{};
  shared_ptr<long> codeValue{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeProtectionModuleCodeConfigRequest() {}

  explicit DescribeProtectionModuleCodeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeType) {
      res["CodeType"] = boost::any(*codeType);
    }
    if (codeValue) {
      res["CodeValue"] = boost::any(*codeValue);
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
    if (m.find("CodeType") != m.end() && !m["CodeType"].empty()) {
      codeType = make_shared<long>(boost::any_cast<long>(m["CodeType"]));
    }
    if (m.find("CodeValue") != m.end() && !m["CodeValue"].empty()) {
      codeValue = make_shared<long>(boost::any_cast<long>(m["CodeValue"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeProtectionModuleCodeConfigRequest() = default;
};
class DescribeProtectionModuleCodeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeConfigs{};
  shared_ptr<string> requestId{};

  DescribeProtectionModuleCodeConfigResponseBody() {}

  explicit DescribeProtectionModuleCodeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeConfigs) {
      res["CodeConfigs"] = boost::any(*codeConfigs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeConfigs") != m.end() && !m["CodeConfigs"].empty()) {
      codeConfigs = make_shared<string>(boost::any_cast<string>(m["CodeConfigs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProtectionModuleCodeConfigResponseBody() = default;
};
class DescribeProtectionModuleCodeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProtectionModuleCodeConfigResponseBody> body{};

  DescribeProtectionModuleCodeConfigResponse() {}

  explicit DescribeProtectionModuleCodeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProtectionModuleCodeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProtectionModuleCodeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProtectionModuleCodeConfigResponse() = default;
};
class DescribeProtectionModuleRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> resourceGroupId{};

  DescribeProtectionModuleRulesRequest() {}

  explicit DescribeProtectionModuleRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeProtectionModuleRulesRequest() = default;
};
class DescribeProtectionModuleRulesResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> content{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> status{};
  shared_ptr<long> time{};
  shared_ptr<long> version{};

  DescribeProtectionModuleRulesResponseBodyRules() {}

  explicit DescribeProtectionModuleRulesResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Content"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~DescribeProtectionModuleRulesResponseBodyRules() = default;
};
class DescribeProtectionModuleRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeProtectionModuleRulesResponseBodyRules>> rules{};
  shared_ptr<long> totalCount{};

  DescribeProtectionModuleRulesResponseBody() {}

  explicit DescribeProtectionModuleRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
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
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeProtectionModuleRulesResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProtectionModuleRulesResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeProtectionModuleRulesResponseBodyRules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class DescribeProtectionModuleStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};

  DescribeProtectionModuleStatusRequest() {}

  explicit DescribeProtectionModuleStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeProtectionModuleStatusRequest() = default;
};
class DescribeProtectionModuleStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> moduleStatus{};
  shared_ptr<string> requestId{};

  DescribeProtectionModuleStatusResponseBody() {}

  explicit DescribeProtectionModuleStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleStatus) {
      res["ModuleStatus"] = boost::any(*moduleStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleStatus") != m.end() && !m["ModuleStatus"].empty()) {
      moduleStatus = make_shared<long>(boost::any_cast<long>(m["ModuleStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProtectionModuleStatusResponseBody() = default;
};
class DescribeProtectionModuleStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProtectionModuleStatusResponseBody> body{};

  DescribeProtectionModuleStatusResponse() {}

  explicit DescribeProtectionModuleStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProtectionModuleStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProtectionModuleStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProtectionModuleStatusResponse() = default;
};
class DescribeWafSourceIpSegmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeWafSourceIpSegmentRequest() {}

  explicit DescribeWafSourceIpSegmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeWafSourceIpSegmentRequest() = default;
};
class DescribeWafSourceIpSegmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ipV6s{};
  shared_ptr<string> ips{};
  shared_ptr<string> requestId{};

  DescribeWafSourceIpSegmentResponseBody() {}

  explicit DescribeWafSourceIpSegmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipV6s) {
      res["IpV6s"] = boost::any(*ipV6s);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpV6s") != m.end() && !m["IpV6s"].empty()) {
      ipV6s = make_shared<string>(boost::any_cast<string>(m["IpV6s"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      ips = make_shared<string>(boost::any_cast<string>(m["Ips"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ModifyDomainRequest : public Darabonba::Model {
public:
  shared_ptr<long> accessHeaderMode{};
  shared_ptr<string> accessHeaders{};
  shared_ptr<string> accessType{};
  shared_ptr<string> cloudNativeInstances{};
  shared_ptr<long> clusterType{};
  shared_ptr<long> connectionTime{};
  shared_ptr<string> domain{};
  shared_ptr<string> http2Port{};
  shared_ptr<string> httpPort{};
  shared_ptr<long> httpToUserIp{};
  shared_ptr<string> httpsPort{};
  shared_ptr<long> httpsRedirect{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ipFollowStatus{};
  shared_ptr<long> isAccessProduct{};
  shared_ptr<long> loadBalancing{};
  shared_ptr<string> logHeaders{};
  shared_ptr<long> readTime{};
  shared_ptr<string> sniHost{};
  shared_ptr<long> sniStatus{};
  shared_ptr<string> sourceIps{};
  shared_ptr<long> writeTime{};

  ModifyDomainRequest() {}

  explicit ModifyDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessHeaderMode) {
      res["AccessHeaderMode"] = boost::any(*accessHeaderMode);
    }
    if (accessHeaders) {
      res["AccessHeaders"] = boost::any(*accessHeaders);
    }
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (cloudNativeInstances) {
      res["CloudNativeInstances"] = boost::any(*cloudNativeInstances);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (connectionTime) {
      res["ConnectionTime"] = boost::any(*connectionTime);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (http2Port) {
      res["Http2Port"] = boost::any(*http2Port);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (httpToUserIp) {
      res["HttpToUserIp"] = boost::any(*httpToUserIp);
    }
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (httpsRedirect) {
      res["HttpsRedirect"] = boost::any(*httpsRedirect);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipFollowStatus) {
      res["IpFollowStatus"] = boost::any(*ipFollowStatus);
    }
    if (isAccessProduct) {
      res["IsAccessProduct"] = boost::any(*isAccessProduct);
    }
    if (loadBalancing) {
      res["LoadBalancing"] = boost::any(*loadBalancing);
    }
    if (logHeaders) {
      res["LogHeaders"] = boost::any(*logHeaders);
    }
    if (readTime) {
      res["ReadTime"] = boost::any(*readTime);
    }
    if (sniHost) {
      res["SniHost"] = boost::any(*sniHost);
    }
    if (sniStatus) {
      res["SniStatus"] = boost::any(*sniStatus);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    if (writeTime) {
      res["WriteTime"] = boost::any(*writeTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessHeaderMode") != m.end() && !m["AccessHeaderMode"].empty()) {
      accessHeaderMode = make_shared<long>(boost::any_cast<long>(m["AccessHeaderMode"]));
    }
    if (m.find("AccessHeaders") != m.end() && !m["AccessHeaders"].empty()) {
      accessHeaders = make_shared<string>(boost::any_cast<string>(m["AccessHeaders"]));
    }
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("CloudNativeInstances") != m.end() && !m["CloudNativeInstances"].empty()) {
      cloudNativeInstances = make_shared<string>(boost::any_cast<string>(m["CloudNativeInstances"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<long>(boost::any_cast<long>(m["ClusterType"]));
    }
    if (m.find("ConnectionTime") != m.end() && !m["ConnectionTime"].empty()) {
      connectionTime = make_shared<long>(boost::any_cast<long>(m["ConnectionTime"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Http2Port") != m.end() && !m["Http2Port"].empty()) {
      http2Port = make_shared<string>(boost::any_cast<string>(m["Http2Port"]));
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      httpPort = make_shared<string>(boost::any_cast<string>(m["HttpPort"]));
    }
    if (m.find("HttpToUserIp") != m.end() && !m["HttpToUserIp"].empty()) {
      httpToUserIp = make_shared<long>(boost::any_cast<long>(m["HttpToUserIp"]));
    }
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      httpsPort = make_shared<string>(boost::any_cast<string>(m["HttpsPort"]));
    }
    if (m.find("HttpsRedirect") != m.end() && !m["HttpsRedirect"].empty()) {
      httpsRedirect = make_shared<long>(boost::any_cast<long>(m["HttpsRedirect"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpFollowStatus") != m.end() && !m["IpFollowStatus"].empty()) {
      ipFollowStatus = make_shared<long>(boost::any_cast<long>(m["IpFollowStatus"]));
    }
    if (m.find("IsAccessProduct") != m.end() && !m["IsAccessProduct"].empty()) {
      isAccessProduct = make_shared<long>(boost::any_cast<long>(m["IsAccessProduct"]));
    }
    if (m.find("LoadBalancing") != m.end() && !m["LoadBalancing"].empty()) {
      loadBalancing = make_shared<long>(boost::any_cast<long>(m["LoadBalancing"]));
    }
    if (m.find("LogHeaders") != m.end() && !m["LogHeaders"].empty()) {
      logHeaders = make_shared<string>(boost::any_cast<string>(m["LogHeaders"]));
    }
    if (m.find("ReadTime") != m.end() && !m["ReadTime"].empty()) {
      readTime = make_shared<long>(boost::any_cast<long>(m["ReadTime"]));
    }
    if (m.find("SniHost") != m.end() && !m["SniHost"].empty()) {
      sniHost = make_shared<string>(boost::any_cast<string>(m["SniHost"]));
    }
    if (m.find("SniStatus") != m.end() && !m["SniStatus"].empty()) {
      sniStatus = make_shared<long>(boost::any_cast<long>(m["SniStatus"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
    if (m.find("WriteTime") != m.end() && !m["WriteTime"].empty()) {
      writeTime = make_shared<long>(boost::any_cast<long>(m["WriteTime"]));
    }
  }


  virtual ~ModifyDomainRequest() = default;
};
class ModifyDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDomainResponseBody() {}

  explicit ModifyDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDomainResponseBody() = default;
};
class ModifyDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDomainResponseBody> body{};

  ModifyDomainResponse() {}

  explicit ModifyDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDomainResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDomainResponse() = default;
};
class ModifyDomainIpv6StatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> enabled{};
  shared_ptr<string> instanceId{};

  ModifyDomainIpv6StatusRequest() {}

  explicit ModifyDomainIpv6StatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ModifyDomainIpv6StatusRequest() = default;
};
class ModifyDomainIpv6StatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDomainIpv6StatusResponseBody() {}

  explicit ModifyDomainIpv6StatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDomainIpv6StatusResponseBody() = default;
};
class ModifyDomainIpv6StatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDomainIpv6StatusResponseBody> body{};

  ModifyDomainIpv6StatusResponse() {}

  explicit ModifyDomainIpv6StatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDomainIpv6StatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDomainIpv6StatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDomainIpv6StatusResponse() = default;
};
class ModifyLogRetrievalStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> enabled{};
  shared_ptr<string> instanceId{};

  ModifyLogRetrievalStatusRequest() {}

  explicit ModifyLogRetrievalStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<long>(boost::any_cast<long>(m["Enabled"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ModifyLogRetrievalStatusRequest() = default;
};
class ModifyLogRetrievalStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyLogRetrievalStatusResponseBody() {}

  explicit ModifyLogRetrievalStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyLogRetrievalStatusResponseBody() = default;
};
class ModifyLogRetrievalStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLogRetrievalStatusResponseBody> body{};

  ModifyLogRetrievalStatusResponse() {}

  explicit ModifyLogRetrievalStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLogRetrievalStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLogRetrievalStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLogRetrievalStatusResponse() = default;
};
class ModifyLogServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> enabled{};
  shared_ptr<string> instanceId{};

  ModifyLogServiceStatusRequest() {}

  explicit ModifyLogServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<long>(boost::any_cast<long>(m["Enabled"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ModifyLogServiceStatusRequest() = default;
};
class ModifyLogServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyLogServiceStatusResponseBody() {}

  explicit ModifyLogServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyLogServiceStatusResponseBody() = default;
};
class ModifyLogServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLogServiceStatusResponseBody> body{};

  ModifyLogServiceStatusResponse() {}

  explicit ModifyLogServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLogServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLogServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLogServiceStatusResponse() = default;
};
class ModifyProtectionModuleModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> mode{};

  ModifyProtectionModuleModeRequest() {}

  explicit ModifyProtectionModuleModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<long>(boost::any_cast<long>(m["Mode"]));
    }
  }


  virtual ~ModifyProtectionModuleModeRequest() = default;
};
class ModifyProtectionModuleModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyProtectionModuleModeResponseBody() {}

  explicit ModifyProtectionModuleModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyProtectionModuleModeResponseBody() = default;
};
class ModifyProtectionModuleModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyProtectionModuleModeResponseBody> body{};

  ModifyProtectionModuleModeResponse() {}

  explicit ModifyProtectionModuleModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProtectionModuleModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProtectionModuleModeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProtectionModuleModeResponse() = default;
};
class ModifyProtectionModuleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lockVersion{};
  shared_ptr<string> rule{};
  shared_ptr<long> ruleId{};

  ModifyProtectionModuleRuleRequest() {}

  explicit ModifyProtectionModuleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lockVersion) {
      res["LockVersion"] = boost::any(*lockVersion);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LockVersion") != m.end() && !m["LockVersion"].empty()) {
      lockVersion = make_shared<long>(boost::any_cast<long>(m["LockVersion"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~ModifyProtectionModuleRuleRequest() = default;
};
class ModifyProtectionModuleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyProtectionModuleRuleResponseBody() {}

  explicit ModifyProtectionModuleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyProtectionModuleRuleResponseBody() = default;
};
class ModifyProtectionModuleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyProtectionModuleRuleResponseBody> body{};

  ModifyProtectionModuleRuleResponse() {}

  explicit ModifyProtectionModuleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProtectionModuleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProtectionModuleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProtectionModuleRuleResponse() = default;
};
class ModifyProtectionModuleStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> moduleStatus{};

  ModifyProtectionModuleStatusRequest() {}

  explicit ModifyProtectionModuleStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleStatus) {
      res["ModuleStatus"] = boost::any(*moduleStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleStatus") != m.end() && !m["ModuleStatus"].empty()) {
      moduleStatus = make_shared<long>(boost::any_cast<long>(m["ModuleStatus"]));
    }
  }


  virtual ~ModifyProtectionModuleStatusRequest() = default;
};
class ModifyProtectionModuleStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyProtectionModuleStatusResponseBody() {}

  explicit ModifyProtectionModuleStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyProtectionModuleStatusResponseBody() = default;
};
class ModifyProtectionModuleStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyProtectionModuleStatusResponseBody> body{};

  ModifyProtectionModuleStatusResponse() {}

  explicit ModifyProtectionModuleStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyProtectionModuleStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyProtectionModuleStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyProtectionModuleStatusResponse() = default;
};
class ModifyProtectionRuleCacheStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ruleId{};

  ModifyProtectionRuleCacheStatusRequest() {}

  explicit ModifyProtectionRuleCacheStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~ModifyProtectionRuleCacheStatusRequest() = default;
};
class ModifyProtectionRuleCacheStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> defenseType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lockVersion{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> ruleStatus{};

  ModifyProtectionRuleStatusRequest() {}

  explicit ModifyProtectionRuleStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseType) {
      res["DefenseType"] = boost::any(*defenseType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lockVersion) {
      res["LockVersion"] = boost::any(*lockVersion);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleStatus) {
      res["RuleStatus"] = boost::any(*ruleStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseType") != m.end() && !m["DefenseType"].empty()) {
      defenseType = make_shared<string>(boost::any_cast<string>(m["DefenseType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LockVersion") != m.end() && !m["LockVersion"].empty()) {
      lockVersion = make_shared<long>(boost::any_cast<long>(m["LockVersion"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleStatus") != m.end() && !m["RuleStatus"].empty()) {
      ruleStatus = make_shared<long>(boost::any_cast<long>(m["RuleStatus"]));
    }
  }


  virtual ~ModifyProtectionRuleStatusRequest() = default;
};
class ModifyProtectionRuleStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
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
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class SetDomainRuleGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> domains{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> ruleGroupId{};
  shared_ptr<long> wafVersion{};

  SetDomainRuleGroupRequest() {}

  explicit SetDomainRuleGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      res["Domains"] = boost::any(*domains);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (ruleGroupId) {
      res["RuleGroupId"] = boost::any(*ruleGroupId);
    }
    if (wafVersion) {
      res["WafVersion"] = boost::any(*wafVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      domains = make_shared<string>(boost::any_cast<string>(m["Domains"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RuleGroupId") != m.end() && !m["RuleGroupId"].empty()) {
      ruleGroupId = make_shared<long>(boost::any_cast<long>(m["RuleGroupId"]));
    }
    if (m.find("WafVersion") != m.end() && !m["WafVersion"].empty()) {
      wafVersion = make_shared<long>(boost::any_cast<long>(m["WafVersion"]));
    }
  }


  virtual ~SetDomainRuleGroupRequest() = default;
};
class SetDomainRuleGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDomainRuleGroupResponseBody() {}

  explicit SetDomainRuleGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDomainRuleGroupResponseBody() = default;
};
class SetDomainRuleGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDomainRuleGroupResponseBody> body{};

  SetDomainRuleGroupResponse() {}

  explicit SetDomainRuleGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDomainRuleGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDomainRuleGroupResponseBody>(model1);
      }
    }
  }


  virtual ~SetDomainRuleGroupResponse() = default;
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
  CreateCertificateResponse createCertificateWithOptions(shared_ptr<CreateCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateResponse createCertificate(shared_ptr<CreateCertificateRequest> request);
  CreateCertificateByCertificateIdResponse createCertificateByCertificateIdWithOptions(shared_ptr<CreateCertificateByCertificateIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateByCertificateIdResponse createCertificateByCertificateId(shared_ptr<CreateCertificateByCertificateIdRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateProtectionModuleRuleResponse createProtectionModuleRuleWithOptions(shared_ptr<CreateProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProtectionModuleRuleResponse createProtectionModuleRule(shared_ptr<CreateProtectionModuleRuleRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<DeleteDomainRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteProtectionModuleRuleResponse deleteProtectionModuleRuleWithOptions(shared_ptr<DeleteProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProtectionModuleRuleResponse deleteProtectionModuleRule(shared_ptr<DeleteProtectionModuleRuleRequest> request);
  DescribeCertMatchStatusResponse describeCertMatchStatusWithOptions(shared_ptr<DescribeCertMatchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertMatchStatusResponse describeCertMatchStatus(shared_ptr<DescribeCertMatchStatusRequest> request);
  DescribeCertificatesResponse describeCertificatesWithOptions(shared_ptr<DescribeCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertificatesResponse describeCertificates(shared_ptr<DescribeCertificatesRequest> request);
  DescribeDomainResponse describeDomainWithOptions(shared_ptr<DescribeDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainResponse describeDomain(shared_ptr<DescribeDomainRequest> request);
  DescribeDomainAdvanceConfigsResponse describeDomainAdvanceConfigsWithOptions(shared_ptr<DescribeDomainAdvanceConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainAdvanceConfigsResponse describeDomainAdvanceConfigs(shared_ptr<DescribeDomainAdvanceConfigsRequest> request);
  DescribeDomainBasicConfigsResponse describeDomainBasicConfigsWithOptions(shared_ptr<DescribeDomainBasicConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainBasicConfigsResponse describeDomainBasicConfigs(shared_ptr<DescribeDomainBasicConfigsRequest> request);
  DescribeDomainListResponse describeDomainListWithOptions(shared_ptr<DescribeDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainListResponse describeDomainList(shared_ptr<DescribeDomainListRequest> request);
  DescribeDomainNamesResponse describeDomainNamesWithOptions(shared_ptr<DescribeDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainNamesResponse describeDomainNames(shared_ptr<DescribeDomainNamesRequest> request);
  DescribeDomainRuleGroupResponse describeDomainRuleGroupWithOptions(shared_ptr<DescribeDomainRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainRuleGroupResponse describeDomainRuleGroup(shared_ptr<DescribeDomainRuleGroupRequest> request);
  DescribeInstanceInfoResponse describeInstanceInfoWithOptions(shared_ptr<DescribeInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceInfoResponse describeInstanceInfo(shared_ptr<DescribeInstanceInfoRequest> request);
  DescribeInstanceSpecInfoResponse describeInstanceSpecInfoWithOptions(shared_ptr<DescribeInstanceSpecInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSpecInfoResponse describeInstanceSpecInfo(shared_ptr<DescribeInstanceSpecInfoRequest> request);
  DescribeLogServiceStatusResponse describeLogServiceStatusWithOptions(shared_ptr<DescribeLogServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogServiceStatusResponse describeLogServiceStatus(shared_ptr<DescribeLogServiceStatusRequest> request);
  DescribeProtectionModuleCodeConfigResponse describeProtectionModuleCodeConfigWithOptions(shared_ptr<DescribeProtectionModuleCodeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProtectionModuleCodeConfigResponse describeProtectionModuleCodeConfig(shared_ptr<DescribeProtectionModuleCodeConfigRequest> request);
  DescribeProtectionModuleRulesResponse describeProtectionModuleRulesWithOptions(shared_ptr<DescribeProtectionModuleRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProtectionModuleRulesResponse describeProtectionModuleRules(shared_ptr<DescribeProtectionModuleRulesRequest> request);
  DescribeProtectionModuleStatusResponse describeProtectionModuleStatusWithOptions(shared_ptr<DescribeProtectionModuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProtectionModuleStatusResponse describeProtectionModuleStatus(shared_ptr<DescribeProtectionModuleStatusRequest> request);
  DescribeWafSourceIpSegmentResponse describeWafSourceIpSegmentWithOptions(shared_ptr<DescribeWafSourceIpSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWafSourceIpSegmentResponse describeWafSourceIpSegment(shared_ptr<DescribeWafSourceIpSegmentRequest> request);
  ModifyDomainResponse modifyDomainWithOptions(shared_ptr<ModifyDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDomainResponse modifyDomain(shared_ptr<ModifyDomainRequest> request);
  ModifyDomainIpv6StatusResponse modifyDomainIpv6StatusWithOptions(shared_ptr<ModifyDomainIpv6StatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDomainIpv6StatusResponse modifyDomainIpv6Status(shared_ptr<ModifyDomainIpv6StatusRequest> request);
  ModifyLogRetrievalStatusResponse modifyLogRetrievalStatusWithOptions(shared_ptr<ModifyLogRetrievalStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLogRetrievalStatusResponse modifyLogRetrievalStatus(shared_ptr<ModifyLogRetrievalStatusRequest> request);
  ModifyLogServiceStatusResponse modifyLogServiceStatusWithOptions(shared_ptr<ModifyLogServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLogServiceStatusResponse modifyLogServiceStatus(shared_ptr<ModifyLogServiceStatusRequest> request);
  ModifyProtectionModuleModeResponse modifyProtectionModuleModeWithOptions(shared_ptr<ModifyProtectionModuleModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtectionModuleModeResponse modifyProtectionModuleMode(shared_ptr<ModifyProtectionModuleModeRequest> request);
  ModifyProtectionModuleRuleResponse modifyProtectionModuleRuleWithOptions(shared_ptr<ModifyProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtectionModuleRuleResponse modifyProtectionModuleRule(shared_ptr<ModifyProtectionModuleRuleRequest> request);
  ModifyProtectionModuleStatusResponse modifyProtectionModuleStatusWithOptions(shared_ptr<ModifyProtectionModuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtectionModuleStatusResponse modifyProtectionModuleStatus(shared_ptr<ModifyProtectionModuleStatusRequest> request);
  ModifyProtectionRuleCacheStatusResponse modifyProtectionRuleCacheStatusWithOptions(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtectionRuleCacheStatusResponse modifyProtectionRuleCacheStatus(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request);
  ModifyProtectionRuleStatusResponse modifyProtectionRuleStatusWithOptions(shared_ptr<ModifyProtectionRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyProtectionRuleStatusResponse modifyProtectionRuleStatus(shared_ptr<ModifyProtectionRuleStatusRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  SetDomainRuleGroupResponse setDomainRuleGroupWithOptions(shared_ptr<SetDomainRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDomainRuleGroupResponse setDomainRuleGroup(shared_ptr<SetDomainRuleGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Waf-openapi20190910

#endif
