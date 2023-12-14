// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WAF-OPENAPI20170930_H_
#define ALIBABACLOUD_WAF-OPENAPI20170930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Waf-openapi20170930 {
class AppOpenAckRequest : public Darabonba::Model {
public:
  shared_ptr<string> ack{};
  shared_ptr<string> appName{};
  shared_ptr<string> asyncMethod{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> serviceId{};

  AppOpenAckRequest() {}

  explicit AppOpenAckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ack) {
      res["Ack"] = boost::any(*ack);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (asyncMethod) {
      res["AsyncMethod"] = boost::any(*asyncMethod);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ack") != m.end() && !m["Ack"].empty()) {
      ack = make_shared<string>(boost::any_cast<string>(m["Ack"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AsyncMethod") != m.end() && !m["AsyncMethod"].empty()) {
      asyncMethod = make_shared<string>(boost::any_cast<string>(m["AsyncMethod"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~AppOpenAckRequest() = default;
};
class AppOpenAckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AppOpenAckResponseBody() {}

  explicit AppOpenAckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AppOpenAckResponseBody() = default;
};
class AppOpenAckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AppOpenAckResponseBody> body{};

  AppOpenAckResponse() {}

  explicit AppOpenAckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AppOpenAckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AppOpenAckResponseBody>(model1);
      }
    }
  }


  virtual ~AppOpenAckResponse() = default;
};
class CreateDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> domain{};
  shared_ptr<string> httpPort{};
  shared_ptr<long> httpToUserIp{};
  shared_ptr<string> httpsPort{};
  shared_ptr<long> httpsRedirect{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> isAccessProduct{};
  shared_ptr<long> isNonStandardPort{};
  shared_ptr<long> loadBalancing{};
  shared_ptr<string> protocols{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> rsType{};
  shared_ptr<string> sourceIps{};

  CreateDomainConfigRequest() {}

  explicit CreateDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
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
    if (isAccessProduct) {
      res["IsAccessProduct"] = boost::any(*isAccessProduct);
    }
    if (isNonStandardPort) {
      res["IsNonStandardPort"] = boost::any(*isNonStandardPort);
    }
    if (loadBalancing) {
      res["LoadBalancing"] = boost::any(*loadBalancing);
    }
    if (protocols) {
      res["Protocols"] = boost::any(*protocols);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (rsType) {
      res["RsType"] = boost::any(*rsType);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
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
    if (m.find("IsAccessProduct") != m.end() && !m["IsAccessProduct"].empty()) {
      isAccessProduct = make_shared<long>(boost::any_cast<long>(m["IsAccessProduct"]));
    }
    if (m.find("IsNonStandardPort") != m.end() && !m["IsNonStandardPort"].empty()) {
      isNonStandardPort = make_shared<long>(boost::any_cast<long>(m["IsNonStandardPort"]));
    }
    if (m.find("LoadBalancing") != m.end() && !m["LoadBalancing"].empty()) {
      loadBalancing = make_shared<long>(boost::any_cast<long>(m["LoadBalancing"]));
    }
    if (m.find("Protocols") != m.end() && !m["Protocols"].empty()) {
      protocols = make_shared<string>(boost::any_cast<string>(m["Protocols"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RsType") != m.end() && !m["RsType"].empty()) {
      rsType = make_shared<long>(boost::any_cast<long>(m["RsType"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
  }


  virtual ~CreateDomainConfigRequest() = default;
};
class CreateDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> requestId{};

  CreateDomainConfigResponseBody() {}

  explicit CreateDomainConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDomainConfigResponseBody() = default;
};
class CreateDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDomainConfigResponseBody> body{};

  CreateDomainConfigResponse() {}

  explicit CreateDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainConfigResponse() = default;
};
class DeleteDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDomainConfigRequest() {}

  explicit DeleteDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
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
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
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
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDomainConfigRequest() = default;
};
class DeleteDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDomainConfigResponseBody() = default;
};
class DeleteDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainConfigResponseBody> body{};

  DeleteDomainConfigResponse() {}

  explicit DeleteDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainConfigResponse() = default;
};
class DescribeDomainNamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

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
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDomainNamesRequest() = default;
};
class DescribeDomainNamesResponseBodyDomainNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainName{};

  DescribeDomainNamesResponseBodyDomainNames() {}

  explicit DescribeDomainNamesResponseBodyDomainNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDomainNamesResponseBodyDomainNames() = default;
};
class DescribeDomainNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainNamesResponseBodyDomainNames> domainNames{};
  shared_ptr<string> requestId{};

  DescribeDomainNamesResponseBody() {}

  explicit DescribeDomainNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainNames) {
      res["DomainNames"] = domainNames ? boost::any(domainNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainNames"].type()) {
        DescribeDomainNamesResponseBodyDomainNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainNames"]));
        domainNames = make_shared<DescribeDomainNamesResponseBodyDomainNames>(model1);
      }
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainNamesResponseBody> body{};

  DescribeDomainNamesResponse() {}

  explicit DescribeDomainNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainNamesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainNamesResponse() = default;
};
class DescribeDomainTransferConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> domain{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDomainTransferConfigRequest() {}

  explicit DescribeDomainTransferConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDomainTransferConfigRequest() = default;
};
class DescribeDomainTransferConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> httpPort{};
  shared_ptr<string> httpsPort{};
  shared_ptr<long> isOwned{};
  shared_ptr<long> isWafActive{};
  shared_ptr<long> protocolType{};
  shared_ptr<string> protocols{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceIps{};
  shared_ptr<long> wafAffectMode{};

  DescribeDomainTransferConfigResponseBody() {}

  explicit DescribeDomainTransferConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (isOwned) {
      res["IsOwned"] = boost::any(*isOwned);
    }
    if (isWafActive) {
      res["IsWafActive"] = boost::any(*isWafActive);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (protocols) {
      res["Protocols"] = boost::any(*protocols);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    if (wafAffectMode) {
      res["WafAffectMode"] = boost::any(*wafAffectMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      httpPort = make_shared<string>(boost::any_cast<string>(m["HttpPort"]));
    }
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      httpsPort = make_shared<string>(boost::any_cast<string>(m["HttpsPort"]));
    }
    if (m.find("IsOwned") != m.end() && !m["IsOwned"].empty()) {
      isOwned = make_shared<long>(boost::any_cast<long>(m["IsOwned"]));
    }
    if (m.find("IsWafActive") != m.end() && !m["IsWafActive"].empty()) {
      isWafActive = make_shared<long>(boost::any_cast<long>(m["IsWafActive"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<long>(boost::any_cast<long>(m["ProtocolType"]));
    }
    if (m.find("Protocols") != m.end() && !m["Protocols"].empty()) {
      protocols = make_shared<string>(boost::any_cast<string>(m["Protocols"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
    if (m.find("WafAffectMode") != m.end() && !m["WafAffectMode"].empty()) {
      wafAffectMode = make_shared<long>(boost::any_cast<long>(m["WafAffectMode"]));
    }
  }


  virtual ~DescribeDomainTransferConfigResponseBody() = default;
};
class DescribeDomainTransferConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainTransferConfigResponseBody> body{};

  DescribeDomainTransferConfigResponse() {}

  explicit DescribeDomainTransferConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainTransferConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainTransferConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainTransferConfigResponse() = default;
};
class DescribeDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDomainsRequest() {}

  explicit DescribeDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDomainsRequest() = default;
};
class DescribeDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domain{};

  DescribeDomainsResponseBodyDomains() {}

  explicit DescribeDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domain = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDomainsResponseBodyDomains() = default;
};
class DescribeDomainsResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  DescribeDomainsResponseBodyPageInfo() {}

  explicit DescribeDomainsResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeDomainsResponseBodyPageInfo() = default;
};
class DescribeDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainsResponseBodyDomains> domains{};
  shared_ptr<DescribeDomainsResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};

  DescribeDomainsResponseBody() {}

  explicit DescribeDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      res["Domains"] = domains ? boost::any(domains->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(map<string, boost::any>) == m["Domains"].type()) {
        DescribeDomainsResponseBodyDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Domains"]));
        domains = make_shared<DescribeDomainsResponseBodyDomains>(model1);
      }
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeDomainsResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeDomainsResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainsResponseBody() = default;
};
class DescribeDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainsResponseBody> body{};

  DescribeDomainsResponse() {}

  explicit DescribeDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainsResponse() = default;
};
class DescribeHttpsCertInUseRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  DescribeHttpsCertInUseRequest() {}

  explicit DescribeHttpsCertInUseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeHttpsCertInUseRequest() = default;
};
class DescribeHttpsCertInUseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certContent{};
  shared_ptr<string> certId{};
  shared_ptr<string> certKey{};
  shared_ptr<string> certName{};
  shared_ptr<string> requestId{};

  DescribeHttpsCertInUseResponseBody() {}

  explicit DescribeHttpsCertInUseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certContent) {
      res["CertContent"] = boost::any(*certContent);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (certKey) {
      res["CertKey"] = boost::any(*certKey);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertContent") != m.end() && !m["CertContent"].empty()) {
      certContent = make_shared<string>(boost::any_cast<string>(m["CertContent"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("CertKey") != m.end() && !m["CertKey"].empty()) {
      certKey = make_shared<string>(boost::any_cast<string>(m["CertKey"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHttpsCertInUseResponseBody() = default;
};
class DescribeHttpsCertInUseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHttpsCertInUseResponseBody> body{};

  DescribeHttpsCertInUseResponse() {}

  explicit DescribeHttpsCertInUseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHttpsCertInUseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHttpsCertInUseResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHttpsCertInUseResponse() = default;
};
class DescribeNeedUpgradeDomainLimitRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  DescribeNeedUpgradeDomainLimitRequest() {}

  explicit DescribeNeedUpgradeDomainLimitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeNeedUpgradeDomainLimitRequest() = default;
};
class DescribeNeedUpgradeDomainLimitResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> needUpgrade{};
  shared_ptr<string> requestId{};

  DescribeNeedUpgradeDomainLimitResponseBody() {}

  explicit DescribeNeedUpgradeDomainLimitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needUpgrade) {
      res["NeedUpgrade"] = boost::any(*needUpgrade);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedUpgrade") != m.end() && !m["NeedUpgrade"].empty()) {
      needUpgrade = make_shared<bool>(boost::any_cast<bool>(m["NeedUpgrade"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNeedUpgradeDomainLimitResponseBody() = default;
};
class DescribeNeedUpgradeDomainLimitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNeedUpgradeDomainLimitResponseBody> body{};

  DescribeNeedUpgradeDomainLimitResponse() {}

  explicit DescribeNeedUpgradeDomainLimitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNeedUpgradeDomainLimitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNeedUpgradeDomainLimitResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNeedUpgradeDomainLimitResponse() = default;
};
class DescribePackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  DescribePackageRequest() {}

  explicit DescribePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePackageRequest() = default;
};
class DescribePackageResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<string>> rule{};

  DescribePackageResponseBodyRules() {}

  explicit DescribePackageResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rule"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rule = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePackageResponseBodyRules() = default;
};
class DescribePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePackageResponseBodyRules> rules{};
  shared_ptr<string> version{};

  DescribePackageResponseBody() {}

  explicit DescribePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribePackageResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribePackageResponseBodyRules>(model1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribePackageResponseBody() = default;
};
class DescribePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePackageResponseBody> body{};

  DescribePackageResponse() {}

  explicit DescribePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePackageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePackageResponse() = default;
};
class DescribeQpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endMillisecond{};
  shared_ptr<vector<string>> field{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> interval{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> startMillisecond{};

  DescribeQpsRequest() {}

  explicit DescribeQpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endMillisecond) {
      res["EndMillisecond"] = boost::any(*endMillisecond);
    }
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startMillisecond) {
      res["StartMillisecond"] = boost::any(*startMillisecond);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndMillisecond") != m.end() && !m["EndMillisecond"].empty()) {
      endMillisecond = make_shared<long>(boost::any_cast<long>(m["EndMillisecond"]));
    }
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Field"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Field"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      field = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartMillisecond") != m.end() && !m["StartMillisecond"].empty()) {
      startMillisecond = make_shared<long>(boost::any_cast<long>(m["StartMillisecond"]));
    }
  }


  virtual ~DescribeQpsRequest() = default;
};
class DescribeQpsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<string>> qps{};

  DescribeQpsResponseBodyItems() {}

  explicit DescribeQpsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Qps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Qps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeQpsResponseBodyItems() = default;
};
class DescribeQpsResponseBodyTimeScope : public Darabonba::Model {
public:
  shared_ptr<long> end{};
  shared_ptr<long> start{};
  shared_ptr<long> step{};

  DescribeQpsResponseBodyTimeScope() {}

  explicit DescribeQpsResponseBodyTimeScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~DescribeQpsResponseBodyTimeScope() = default;
};
class DescribeQpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeQpsResponseBodyItems> items{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeQpsResponseBodyTimeScope> timeScope{};

  DescribeQpsResponseBody() {}

  explicit DescribeQpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeScope) {
      res["TimeScope"] = timeScope ? boost::any(timeScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeQpsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeQpsResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeScope") != m.end() && !m["TimeScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeScope"].type()) {
        DescribeQpsResponseBodyTimeScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeScope"]));
        timeScope = make_shared<DescribeQpsResponseBodyTimeScope>(model1);
      }
    }
  }


  virtual ~DescribeQpsResponseBody() = default;
};
class DescribeQpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQpsResponseBody> body{};

  DescribeQpsResponse() {}

  explicit DescribeQpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQpsResponse() = default;
};
class DescribeRegionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceSource{};
  shared_ptr<string> lang{};
  shared_ptr<string> region{};
  shared_ptr<string> sourceIp{};

  DescribeRegionStatusRequest() {}

  explicit DescribeRegionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeRegionStatusRequest() = default;
};
class DescribeRegionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> inDebt{};
  shared_ptr<long> payType{};
  shared_ptr<string> requestId{};

  DescribeRegionStatusResponseBody() {}

  explicit DescribeRegionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inDebt) {
      res["InDebt"] = boost::any(*inDebt);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InDebt") != m.end() && !m["InDebt"].empty()) {
      inDebt = make_shared<long>(boost::any_cast<long>(m["InDebt"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionStatusResponseBody() = default;
};
class DescribeRegionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionStatusResponseBody> body{};

  DescribeRegionStatusResponse() {}

  explicit DescribeRegionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionStatusResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Region"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      region = make_shared<vector<string>>(toVec1);
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeTransferConfigInWorkRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkRequestId{};
  shared_ptr<string> domain{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  DescribeTransferConfigInWorkRequest() {}

  explicit DescribeTransferConfigInWorkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkRequestId) {
      res["CheckRequestId"] = boost::any(*checkRequestId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckRequestId") != m.end() && !m["CheckRequestId"].empty()) {
      checkRequestId = make_shared<string>(boost::any_cast<string>(m["CheckRequestId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeTransferConfigInWorkRequest() = default;
};
class DescribeTransferConfigInWorkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> wafRequestId{};

  DescribeTransferConfigInWorkResponseBody() {}

  explicit DescribeTransferConfigInWorkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (wafRequestId) {
      res["WafRequestId"] = boost::any(*wafRequestId);
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
    if (m.find("WafRequestId") != m.end() && !m["WafRequestId"].empty()) {
      wafRequestId = make_shared<string>(boost::any_cast<string>(m["WafRequestId"]));
    }
  }


  virtual ~DescribeTransferConfigInWorkResponseBody() = default;
};
class DescribeTransferConfigInWorkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTransferConfigInWorkResponseBody> body{};

  DescribeTransferConfigInWorkResponse() {}

  explicit DescribeTransferConfigInWorkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTransferConfigInWorkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTransferConfigInWorkResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTransferConfigInWorkResponse() = default;
};
class GetQpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> e{};
  shared_ptr<vector<string>> f{};
  shared_ptr<string> n{};
  shared_ptr<long> s{};
  shared_ptr<long> x{};

  GetQpsRequest() {}

  explicit GetQpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (e) {
      res["e"] = boost::any(*e);
    }
    if (f) {
      res["f"] = boost::any(*f);
    }
    if (n) {
      res["n"] = boost::any(*n);
    }
    if (s) {
      res["s"] = boost::any(*s);
    }
    if (x) {
      res["x"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("e") != m.end() && !m["e"].empty()) {
      e = make_shared<long>(boost::any_cast<long>(m["e"]));
    }
    if (m.find("f") != m.end() && !m["f"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["f"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["f"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      f = make_shared<vector<string>>(toVec1);
    }
    if (m.find("n") != m.end() && !m["n"].empty()) {
      n = make_shared<string>(boost::any_cast<string>(m["n"]));
    }
    if (m.find("s") != m.end() && !m["s"].empty()) {
      s = make_shared<long>(boost::any_cast<long>(m["s"]));
    }
    if (m.find("x") != m.end() && !m["x"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["x"]));
    }
  }


  virtual ~GetQpsRequest() = default;
};
class GetQpsResponseBodyItemsQpsData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};

  GetQpsResponseBodyItemsQpsData() {}

  explicit GetQpsResponseBodyItemsQpsData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetQpsResponseBodyItemsQpsData() = default;
};
class GetQpsResponseBodyItemsQps : public Darabonba::Model {
public:
  shared_ptr<GetQpsResponseBodyItemsQpsData> data{};
  shared_ptr<string> name{};

  GetQpsResponseBodyItemsQps() {}

  explicit GetQpsResponseBodyItemsQps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQpsResponseBodyItemsQpsData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQpsResponseBodyItemsQpsData>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetQpsResponseBodyItemsQps() = default;
};
class GetQpsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<GetQpsResponseBodyItemsQps>> qps{};

  GetQpsResponseBodyItems() {}

  explicit GetQpsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qps) {
      vector<boost::any> temp1;
      for(auto item1:*qps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Qps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      if (typeid(vector<boost::any>) == m["Qps"].type()) {
        vector<GetQpsResponseBodyItemsQps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Qps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQpsResponseBodyItemsQps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qps = make_shared<vector<GetQpsResponseBodyItemsQps>>(expect1);
      }
    }
  }


  virtual ~GetQpsResponseBodyItems() = default;
};
class GetQpsResponseBodyTimeScope : public Darabonba::Model {
public:
  shared_ptr<long> end{};
  shared_ptr<long> start{};
  shared_ptr<long> step{};

  GetQpsResponseBodyTimeScope() {}

  explicit GetQpsResponseBodyTimeScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~GetQpsResponseBodyTimeScope() = default;
};
class GetQpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetQpsResponseBodyItems> items{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetQpsResponseBodyTimeScope> timeScope{};

  GetQpsResponseBody() {}

  explicit GetQpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (timeScope) {
      res["timeScope"] = timeScope ? boost::any(timeScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        GetQpsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<GetQpsResponseBodyItems>(model1);
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
    if (m.find("timeScope") != m.end() && !m["timeScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["timeScope"].type()) {
        GetQpsResponseBodyTimeScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["timeScope"]));
        timeScope = make_shared<GetQpsResponseBodyTimeScope>(model1);
      }
    }
  }


  virtual ~GetQpsResponseBody() = default;
};
class GetQpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQpsResponseBody> body{};

  GetQpsResponse() {}

  explicit GetQpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQpsResponseBody>(model1);
      }
    }
  }


  virtual ~GetQpsResponse() = default;
};
class GetQpsTotalRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> e{};
  shared_ptr<vector<string>> f{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> n{};
  shared_ptr<long> s{};
  shared_ptr<long> x{};

  GetQpsTotalRequest() {}

  explicit GetQpsTotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (e) {
      res["e"] = boost::any(*e);
    }
    if (f) {
      res["f"] = boost::any(*f);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (n) {
      res["n"] = boost::any(*n);
    }
    if (s) {
      res["s"] = boost::any(*s);
    }
    if (x) {
      res["x"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("e") != m.end() && !m["e"].empty()) {
      e = make_shared<long>(boost::any_cast<long>(m["e"]));
    }
    if (m.find("f") != m.end() && !m["f"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["f"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["f"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      f = make_shared<vector<string>>(toVec1);
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("n") != m.end() && !m["n"].empty()) {
      n = make_shared<string>(boost::any_cast<string>(m["n"]));
    }
    if (m.find("s") != m.end() && !m["s"].empty()) {
      s = make_shared<long>(boost::any_cast<long>(m["s"]));
    }
    if (m.find("x") != m.end() && !m["x"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["x"]));
    }
  }


  virtual ~GetQpsTotalRequest() = default;
};
class GetQpsTotalResponseBodyItemsQpsData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};

  GetQpsTotalResponseBodyItemsQpsData() {}

  explicit GetQpsTotalResponseBodyItemsQpsData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetQpsTotalResponseBodyItemsQpsData() = default;
};
class GetQpsTotalResponseBodyItemsQps : public Darabonba::Model {
public:
  shared_ptr<GetQpsTotalResponseBodyItemsQpsData> data{};
  shared_ptr<string> name{};

  GetQpsTotalResponseBodyItemsQps() {}

  explicit GetQpsTotalResponseBodyItemsQps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQpsTotalResponseBodyItemsQpsData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQpsTotalResponseBodyItemsQpsData>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetQpsTotalResponseBodyItemsQps() = default;
};
class GetQpsTotalResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<GetQpsTotalResponseBodyItemsQps>> qps{};

  GetQpsTotalResponseBodyItems() {}

  explicit GetQpsTotalResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qps) {
      vector<boost::any> temp1;
      for(auto item1:*qps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Qps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      if (typeid(vector<boost::any>) == m["Qps"].type()) {
        vector<GetQpsTotalResponseBodyItemsQps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Qps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQpsTotalResponseBodyItemsQps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qps = make_shared<vector<GetQpsTotalResponseBodyItemsQps>>(expect1);
      }
    }
  }


  virtual ~GetQpsTotalResponseBodyItems() = default;
};
class GetQpsTotalResponseBodyTimeScope : public Darabonba::Model {
public:
  shared_ptr<long> end{};
  shared_ptr<long> start{};
  shared_ptr<long> step{};

  GetQpsTotalResponseBodyTimeScope() {}

  explicit GetQpsTotalResponseBodyTimeScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~GetQpsTotalResponseBodyTimeScope() = default;
};
class GetQpsTotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetQpsTotalResponseBodyItems> items{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetQpsTotalResponseBodyTimeScope> timeScope{};

  GetQpsTotalResponseBody() {}

  explicit GetQpsTotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (timeScope) {
      res["timeScope"] = timeScope ? boost::any(timeScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        GetQpsTotalResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<GetQpsTotalResponseBodyItems>(model1);
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
    if (m.find("timeScope") != m.end() && !m["timeScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["timeScope"].type()) {
        GetQpsTotalResponseBodyTimeScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["timeScope"]));
        timeScope = make_shared<GetQpsTotalResponseBodyTimeScope>(model1);
      }
    }
  }


  virtual ~GetQpsTotalResponseBody() = default;
};
class GetQpsTotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQpsTotalResponseBody> body{};

  GetQpsTotalResponse() {}

  explicit GetQpsTotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQpsTotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQpsTotalResponseBody>(model1);
      }
    }
  }


  virtual ~GetQpsTotalResponse() = default;
};
class GetRegionListRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};

  GetRegionListRequest() {}

  explicit GetRegionListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetRegionListRequest() = default;
};
class GetRegionListResponseBodyDataRegionInfo : public Darabonba::Model {
public:
  shared_ptr<string> display{};
  shared_ptr<string> region{};

  GetRegionListResponseBodyDataRegionInfo() {}

  explicit GetRegionListResponseBodyDataRegionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<string>(boost::any_cast<string>(m["Display"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetRegionListResponseBodyDataRegionInfo() = default;
};
class GetRegionListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetRegionListResponseBodyDataRegionInfo>> regionInfo{};

  GetRegionListResponseBodyData() {}

  explicit GetRegionListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionInfo) {
      vector<boost::any> temp1;
      for(auto item1:*regionInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionInfo") != m.end() && !m["RegionInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionInfo"].type()) {
        vector<GetRegionListResponseBodyDataRegionInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegionListResponseBodyDataRegionInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionInfo = make_shared<vector<GetRegionListResponseBodyDataRegionInfo>>(expect1);
      }
    }
  }


  virtual ~GetRegionListResponseBodyData() = default;
};
class GetRegionListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetRegionListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRegionListResponseBody() {}

  explicit GetRegionListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRegionListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRegionListResponseBodyData>(model1);
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


  virtual ~GetRegionListResponseBody() = default;
};
class GetRegionListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRegionListResponseBody> body{};

  GetRegionListResponse() {}

  explicit GetRegionListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegionListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegionListResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegionListResponse() = default;
};
class ModifyCertAndKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> cert{};
  shared_ptr<string> domain{};
  shared_ptr<string> httpsCertId{};
  shared_ptr<string> httpsCertName{};
  shared_ptr<string> key{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  ModifyCertAndKeyRequest() {}

  explicit ModifyCertAndKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (httpsCertId) {
      res["HttpsCertId"] = boost::any(*httpsCertId);
    }
    if (httpsCertName) {
      res["HttpsCertName"] = boost::any(*httpsCertName);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("HttpsCertId") != m.end() && !m["HttpsCertId"].empty()) {
      httpsCertId = make_shared<string>(boost::any_cast<string>(m["HttpsCertId"]));
    }
    if (m.find("HttpsCertName") != m.end() && !m["HttpsCertName"].empty()) {
      httpsCertName = make_shared<string>(boost::any_cast<string>(m["HttpsCertName"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyCertAndKeyRequest() = default;
};
class ModifyCertAndKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyCertAndKeyResponseBody() {}

  explicit ModifyCertAndKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyCertAndKeyResponseBody() = default;
};
class ModifyCertAndKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCertAndKeyResponseBody> body{};

  ModifyCertAndKeyResponse() {}

  explicit ModifyCertAndKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCertAndKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCertAndKeyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCertAndKeyResponse() = default;
};
class ModifyDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> domain{};
  shared_ptr<string> httpPort{};
  shared_ptr<long> httpToUserIp{};
  shared_ptr<string> httpsPort{};
  shared_ptr<long> httpsRedirect{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> isAccessProduct{};
  shared_ptr<long> isNonStandardPort{};
  shared_ptr<long> loadBalancing{};
  shared_ptr<string> protocols{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> rsType{};
  shared_ptr<string> sourceIps{};

  ModifyDomainConfigRequest() {}

  explicit ModifyDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
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
    if (isAccessProduct) {
      res["IsAccessProduct"] = boost::any(*isAccessProduct);
    }
    if (isNonStandardPort) {
      res["IsNonStandardPort"] = boost::any(*isNonStandardPort);
    }
    if (loadBalancing) {
      res["LoadBalancing"] = boost::any(*loadBalancing);
    }
    if (protocols) {
      res["Protocols"] = boost::any(*protocols);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (rsType) {
      res["RsType"] = boost::any(*rsType);
    }
    if (sourceIps) {
      res["SourceIps"] = boost::any(*sourceIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
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
    if (m.find("IsAccessProduct") != m.end() && !m["IsAccessProduct"].empty()) {
      isAccessProduct = make_shared<long>(boost::any_cast<long>(m["IsAccessProduct"]));
    }
    if (m.find("IsNonStandardPort") != m.end() && !m["IsNonStandardPort"].empty()) {
      isNonStandardPort = make_shared<long>(boost::any_cast<long>(m["IsNonStandardPort"]));
    }
    if (m.find("LoadBalancing") != m.end() && !m["LoadBalancing"].empty()) {
      loadBalancing = make_shared<long>(boost::any_cast<long>(m["LoadBalancing"]));
    }
    if (m.find("Protocols") != m.end() && !m["Protocols"].empty()) {
      protocols = make_shared<string>(boost::any_cast<string>(m["Protocols"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RsType") != m.end() && !m["RsType"].empty()) {
      rsType = make_shared<long>(boost::any_cast<long>(m["RsType"]));
    }
    if (m.find("SourceIps") != m.end() && !m["SourceIps"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["SourceIps"]));
    }
  }


  virtual ~ModifyDomainConfigRequest() = default;
};
class ModifyDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDomainConfigResponseBody() = default;
};
class ModifyDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDomainConfigResponseBody> body{};

  ModifyDomainConfigResponse() {}

  explicit ModifyDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDomainConfigResponse() = default;
};
class ModifyDomainPackageCountRequest : public Darabonba::Model {
public:
  shared_ptr<long> domainPackageCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDomainPackageCountRequest() {}

  explicit ModifyDomainPackageCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainPackageCount) {
      res["DomainPackageCount"] = boost::any(*domainPackageCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainPackageCount") != m.end() && !m["DomainPackageCount"].empty()) {
      domainPackageCount = make_shared<long>(boost::any_cast<long>(m["DomainPackageCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDomainPackageCountRequest() = default;
};
class ModifyDomainPackageCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDomainPackageCountResponseBody() {}

  explicit ModifyDomainPackageCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDomainPackageCountResponseBody() = default;
};
class ModifyDomainPackageCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDomainPackageCountResponseBody> body{};

  ModifyDomainPackageCountResponse() {}

  explicit ModifyDomainPackageCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDomainPackageCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDomainPackageCountResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDomainPackageCountResponse() = default;
};
class ModifyWafSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> serviceOn{};

  ModifyWafSwitchRequest() {}

  explicit ModifyWafSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
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
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (serviceOn) {
      res["ServiceOn"] = boost::any(*serviceOn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
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
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ServiceOn") != m.end() && !m["ServiceOn"].empty()) {
      serviceOn = make_shared<long>(boost::any_cast<long>(m["ServiceOn"]));
    }
  }


  virtual ~ModifyWafSwitchRequest() = default;
};
class ModifyWafSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyWafSwitchResponseBody() = default;
};
class ModifyWafSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyWafSwitchResponseBody> body{};

  ModifyWafSwitchResponse() {}

  explicit ModifyWafSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  AppOpenAckResponse appOpenAckWithOptions(shared_ptr<AppOpenAckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AppOpenAckResponse appOpenAck(shared_ptr<AppOpenAckRequest> request);
  CreateDomainConfigResponse createDomainConfigWithOptions(shared_ptr<CreateDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainConfigResponse createDomainConfig(shared_ptr<CreateDomainConfigRequest> request);
  DeleteDomainConfigResponse deleteDomainConfigWithOptions(shared_ptr<DeleteDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainConfigResponse deleteDomainConfig(shared_ptr<DeleteDomainConfigRequest> request);
  DescribeDomainNamesResponse describeDomainNamesWithOptions(shared_ptr<DescribeDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainNamesResponse describeDomainNames(shared_ptr<DescribeDomainNamesRequest> request);
  DescribeDomainTransferConfigResponse describeDomainTransferConfigWithOptions(shared_ptr<DescribeDomainTransferConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainTransferConfigResponse describeDomainTransferConfig(shared_ptr<DescribeDomainTransferConfigRequest> request);
  DescribeDomainsResponse describeDomainsWithOptions(shared_ptr<DescribeDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainsResponse describeDomains(shared_ptr<DescribeDomainsRequest> request);
  DescribeHttpsCertInUseResponse describeHttpsCertInUseWithOptions(shared_ptr<DescribeHttpsCertInUseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHttpsCertInUseResponse describeHttpsCertInUse(shared_ptr<DescribeHttpsCertInUseRequest> request);
  DescribeNeedUpgradeDomainLimitResponse describeNeedUpgradeDomainLimitWithOptions(shared_ptr<DescribeNeedUpgradeDomainLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNeedUpgradeDomainLimitResponse describeNeedUpgradeDomainLimit(shared_ptr<DescribeNeedUpgradeDomainLimitRequest> request);
  DescribePackageResponse describePackageWithOptions(shared_ptr<DescribePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackageResponse describePackage(shared_ptr<DescribePackageRequest> request);
  DescribeQpsResponse describeQpsWithOptions(shared_ptr<DescribeQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQpsResponse describeQps(shared_ptr<DescribeQpsRequest> request);
  DescribeRegionStatusResponse describeRegionStatusWithOptions(shared_ptr<DescribeRegionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionStatusResponse describeRegionStatus(shared_ptr<DescribeRegionStatusRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeTransferConfigInWorkResponse describeTransferConfigInWorkWithOptions(shared_ptr<DescribeTransferConfigInWorkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTransferConfigInWorkResponse describeTransferConfigInWork(shared_ptr<DescribeTransferConfigInWorkRequest> request);
  GetQpsResponse getQpsWithOptions(shared_ptr<GetQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQpsResponse getQps(shared_ptr<GetQpsRequest> request);
  GetQpsTotalResponse getQpsTotalWithOptions(shared_ptr<GetQpsTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQpsTotalResponse getQpsTotal(shared_ptr<GetQpsTotalRequest> request);
  GetRegionListResponse getRegionListWithOptions(shared_ptr<GetRegionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegionListResponse getRegionList(shared_ptr<GetRegionListRequest> request);
  ModifyCertAndKeyResponse modifyCertAndKeyWithOptions(shared_ptr<ModifyCertAndKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCertAndKeyResponse modifyCertAndKey(shared_ptr<ModifyCertAndKeyRequest> request);
  ModifyDomainConfigResponse modifyDomainConfigWithOptions(shared_ptr<ModifyDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDomainConfigResponse modifyDomainConfig(shared_ptr<ModifyDomainConfigRequest> request);
  ModifyDomainPackageCountResponse modifyDomainPackageCountWithOptions(shared_ptr<ModifyDomainPackageCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDomainPackageCountResponse modifyDomainPackageCount(shared_ptr<ModifyDomainPackageCountRequest> request);
  ModifyWafSwitchResponse modifyWafSwitchWithOptions(shared_ptr<ModifyWafSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyWafSwitchResponse modifyWafSwitch(shared_ptr<ModifyWafSwitchRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Waf-openapi20170930

#endif
