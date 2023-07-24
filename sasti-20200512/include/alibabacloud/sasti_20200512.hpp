// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SASTI20200512_H_
#define ALIBABACLOUD_SASTI20200512_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sasti20200512 {
class DescribeDomainReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> field{};
  shared_ptr<string> serviceLang{};

  DescribeDomainReportRequest() {}

  explicit DescribeDomainReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (serviceLang) {
      res["ServiceLang"] = boost::any(*serviceLang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("ServiceLang") != m.end() && !m["ServiceLang"].empty()) {
      serviceLang = make_shared<string>(boost::any_cast<string>(m["ServiceLang"]));
    }
  }


  virtual ~DescribeDomainReportRequest() = default;
};
class DescribeDomainReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> attackCntByThreatType{};
  shared_ptr<string> attackPreferenceTop5{};
  shared_ptr<string> basic{};
  shared_ptr<string> confidence{};
  shared_ptr<string> context{};
  shared_ptr<string> domain{};
  shared_ptr<string> group{};
  shared_ptr<string> intelligences{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> sslCert{};
  shared_ptr<string> threatLevel{};
  shared_ptr<string> threatTypes{};
  shared_ptr<string> whois{};

  DescribeDomainReportResponseBody() {}

  explicit DescribeDomainReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackCntByThreatType) {
      res["AttackCntByThreatType"] = boost::any(*attackCntByThreatType);
    }
    if (attackPreferenceTop5) {
      res["AttackPreferenceTop5"] = boost::any(*attackPreferenceTop5);
    }
    if (basic) {
      res["Basic"] = boost::any(*basic);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (context) {
      res["Context"] = boost::any(*context);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (intelligences) {
      res["Intelligences"] = boost::any(*intelligences);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scenario) {
      res["Scenario"] = boost::any(*scenario);
    }
    if (sslCert) {
      res["SslCert"] = boost::any(*sslCert);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    if (threatTypes) {
      res["ThreatTypes"] = boost::any(*threatTypes);
    }
    if (whois) {
      res["Whois"] = boost::any(*whois);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackCntByThreatType") != m.end() && !m["AttackCntByThreatType"].empty()) {
      attackCntByThreatType = make_shared<string>(boost::any_cast<string>(m["AttackCntByThreatType"]));
    }
    if (m.find("AttackPreferenceTop5") != m.end() && !m["AttackPreferenceTop5"].empty()) {
      attackPreferenceTop5 = make_shared<string>(boost::any_cast<string>(m["AttackPreferenceTop5"]));
    }
    if (m.find("Basic") != m.end() && !m["Basic"].empty()) {
      basic = make_shared<string>(boost::any_cast<string>(m["Basic"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<string>(boost::any_cast<string>(m["Confidence"]));
    }
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Intelligences") != m.end() && !m["Intelligences"].empty()) {
      intelligences = make_shared<string>(boost::any_cast<string>(m["Intelligences"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Scenario") != m.end() && !m["Scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["Scenario"]));
    }
    if (m.find("SslCert") != m.end() && !m["SslCert"].empty()) {
      sslCert = make_shared<string>(boost::any_cast<string>(m["SslCert"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
    if (m.find("ThreatTypes") != m.end() && !m["ThreatTypes"].empty()) {
      threatTypes = make_shared<string>(boost::any_cast<string>(m["ThreatTypes"]));
    }
    if (m.find("Whois") != m.end() && !m["Whois"].empty()) {
      whois = make_shared<string>(boost::any_cast<string>(m["Whois"]));
    }
  }


  virtual ~DescribeDomainReportResponseBody() = default;
};
class DescribeDomainReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainReportResponseBody> body{};

  DescribeDomainReportResponse() {}

  explicit DescribeDomainReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainReportResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainReportResponse() = default;
};
class DescribeFileReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> fileHash{};
  shared_ptr<string> serviceLang{};

  DescribeFileReportRequest() {}

  explicit DescribeFileReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (fileHash) {
      res["FileHash"] = boost::any(*fileHash);
    }
    if (serviceLang) {
      res["ServiceLang"] = boost::any(*serviceLang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("FileHash") != m.end() && !m["FileHash"].empty()) {
      fileHash = make_shared<string>(boost::any_cast<string>(m["FileHash"]));
    }
    if (m.find("ServiceLang") != m.end() && !m["ServiceLang"].empty()) {
      serviceLang = make_shared<string>(boost::any_cast<string>(m["ServiceLang"]));
    }
  }


  virtual ~DescribeFileReportRequest() = default;
};
class DescribeFileReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> basic{};
  shared_ptr<string> fileHash{};
  shared_ptr<string> intelligences{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sandbox{};
  shared_ptr<string> threatLevel{};
  shared_ptr<string> threatTypes{};

  DescribeFileReportResponseBody() {}

  explicit DescribeFileReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basic) {
      res["Basic"] = boost::any(*basic);
    }
    if (fileHash) {
      res["FileHash"] = boost::any(*fileHash);
    }
    if (intelligences) {
      res["Intelligences"] = boost::any(*intelligences);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sandbox) {
      res["Sandbox"] = boost::any(*sandbox);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    if (threatTypes) {
      res["ThreatTypes"] = boost::any(*threatTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Basic") != m.end() && !m["Basic"].empty()) {
      basic = make_shared<string>(boost::any_cast<string>(m["Basic"]));
    }
    if (m.find("FileHash") != m.end() && !m["FileHash"].empty()) {
      fileHash = make_shared<string>(boost::any_cast<string>(m["FileHash"]));
    }
    if (m.find("Intelligences") != m.end() && !m["Intelligences"].empty()) {
      intelligences = make_shared<string>(boost::any_cast<string>(m["Intelligences"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sandbox") != m.end() && !m["Sandbox"].empty()) {
      sandbox = make_shared<string>(boost::any_cast<string>(m["Sandbox"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
    if (m.find("ThreatTypes") != m.end() && !m["ThreatTypes"].empty()) {
      threatTypes = make_shared<string>(boost::any_cast<string>(m["ThreatTypes"]));
    }
  }


  virtual ~DescribeFileReportResponseBody() = default;
};
class DescribeFileReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFileReportResponseBody> body{};

  DescribeFileReportResponse() {}

  explicit DescribeFileReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFileReportResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFileReportResponse() = default;
};
class DescribeIpReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> ip{};
  shared_ptr<string> serviceLang{};

  DescribeIpReportRequest() {}

  explicit DescribeIpReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (serviceLang) {
      res["ServiceLang"] = boost::any(*serviceLang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("ServiceLang") != m.end() && !m["ServiceLang"].empty()) {
      serviceLang = make_shared<string>(boost::any_cast<string>(m["ServiceLang"]));
    }
  }


  virtual ~DescribeIpReportRequest() = default;
};
class DescribeIpReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> attackCntByThreatType{};
  shared_ptr<string> attackPreferenceTop5{};
  shared_ptr<string> confidence{};
  shared_ptr<string> context{};
  shared_ptr<string> group{};
  shared_ptr<string> intelligences{};
  shared_ptr<string> ip{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> threatLevel{};
  shared_ptr<string> threatTypes{};
  shared_ptr<string> whois{};

  DescribeIpReportResponseBody() {}

  explicit DescribeIpReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackCntByThreatType) {
      res["AttackCntByThreatType"] = boost::any(*attackCntByThreatType);
    }
    if (attackPreferenceTop5) {
      res["AttackPreferenceTop5"] = boost::any(*attackPreferenceTop5);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (context) {
      res["Context"] = boost::any(*context);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (intelligences) {
      res["Intelligences"] = boost::any(*intelligences);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scenario) {
      res["Scenario"] = boost::any(*scenario);
    }
    if (threatLevel) {
      res["ThreatLevel"] = boost::any(*threatLevel);
    }
    if (threatTypes) {
      res["ThreatTypes"] = boost::any(*threatTypes);
    }
    if (whois) {
      res["Whois"] = boost::any(*whois);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackCntByThreatType") != m.end() && !m["AttackCntByThreatType"].empty()) {
      attackCntByThreatType = make_shared<string>(boost::any_cast<string>(m["AttackCntByThreatType"]));
    }
    if (m.find("AttackPreferenceTop5") != m.end() && !m["AttackPreferenceTop5"].empty()) {
      attackPreferenceTop5 = make_shared<string>(boost::any_cast<string>(m["AttackPreferenceTop5"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<string>(boost::any_cast<string>(m["Confidence"]));
    }
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Intelligences") != m.end() && !m["Intelligences"].empty()) {
      intelligences = make_shared<string>(boost::any_cast<string>(m["Intelligences"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Scenario") != m.end() && !m["Scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["Scenario"]));
    }
    if (m.find("ThreatLevel") != m.end() && !m["ThreatLevel"].empty()) {
      threatLevel = make_shared<string>(boost::any_cast<string>(m["ThreatLevel"]));
    }
    if (m.find("ThreatTypes") != m.end() && !m["ThreatTypes"].empty()) {
      threatTypes = make_shared<string>(boost::any_cast<string>(m["ThreatTypes"]));
    }
    if (m.find("Whois") != m.end() && !m["Whois"].empty()) {
      whois = make_shared<string>(boost::any_cast<string>(m["Whois"]));
    }
  }


  virtual ~DescribeIpReportResponseBody() = default;
};
class DescribeIpReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIpReportResponseBody> body{};

  DescribeIpReportResponse() {}

  explicit DescribeIpReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIpReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpReportResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpReportResponse() = default;
};
class GetGraphQueryTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> serviceUnit{};

  GetGraphQueryTemplatesRequest() {}

  explicit GetGraphQueryTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (serviceUnit) {
      res["ServiceUnit"] = boost::any(*serviceUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ServiceUnit") != m.end() && !m["ServiceUnit"].empty()) {
      serviceUnit = make_shared<string>(boost::any_cast<string>(m["ServiceUnit"]));
    }
  }


  virtual ~GetGraphQueryTemplatesRequest() = default;
};
class GetGraphQueryTemplatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> gremlinTemplate{};
  shared_ptr<long> id{};
  shared_ptr<string> lastModifier{};
  shared_ptr<string> scenario{};
  shared_ptr<string> scenarioDesc{};
  shared_ptr<long> status{};

  GetGraphQueryTemplatesResponseBodyData() {}

  explicit GetGraphQueryTemplatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (gremlinTemplate) {
      res["GremlinTemplate"] = boost::any(*gremlinTemplate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifier) {
      res["LastModifier"] = boost::any(*lastModifier);
    }
    if (scenario) {
      res["Scenario"] = boost::any(*scenario);
    }
    if (scenarioDesc) {
      res["ScenarioDesc"] = boost::any(*scenarioDesc);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("GremlinTemplate") != m.end() && !m["GremlinTemplate"].empty()) {
      gremlinTemplate = make_shared<string>(boost::any_cast<string>(m["GremlinTemplate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LastModifier") != m.end() && !m["LastModifier"].empty()) {
      lastModifier = make_shared<string>(boost::any_cast<string>(m["LastModifier"]));
    }
    if (m.find("Scenario") != m.end() && !m["Scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["Scenario"]));
    }
    if (m.find("ScenarioDesc") != m.end() && !m["ScenarioDesc"].empty()) {
      scenarioDesc = make_shared<string>(boost::any_cast<string>(m["ScenarioDesc"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetGraphQueryTemplatesResponseBodyData() = default;
};
class GetGraphQueryTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetGraphQueryTemplatesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetGraphQueryTemplatesResponseBody() {}

  explicit GetGraphQueryTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetGraphQueryTemplatesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGraphQueryTemplatesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetGraphQueryTemplatesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGraphQueryTemplatesResponseBody() = default;
};
class GetGraphQueryTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGraphQueryTemplatesResponseBody> body{};

  GetGraphQueryTemplatesResponse() {}

  explicit GetGraphQueryTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGraphQueryTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGraphQueryTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~GetGraphQueryTemplatesResponse() = default;
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
  DescribeDomainReportResponse describeDomainReportWithOptions(shared_ptr<DescribeDomainReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainReportResponse describeDomainReport(shared_ptr<DescribeDomainReportRequest> request);
  DescribeFileReportResponse describeFileReportWithOptions(shared_ptr<DescribeFileReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileReportResponse describeFileReport(shared_ptr<DescribeFileReportRequest> request);
  DescribeIpReportResponse describeIpReportWithOptions(shared_ptr<DescribeIpReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpReportResponse describeIpReport(shared_ptr<DescribeIpReportRequest> request);
  GetGraphQueryTemplatesResponse getGraphQueryTemplatesWithOptions(shared_ptr<GetGraphQueryTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGraphQueryTemplatesResponse getGraphQueryTemplates(shared_ptr<GetGraphQueryTemplatesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sasti20200512

#endif
