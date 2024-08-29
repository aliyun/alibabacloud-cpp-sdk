// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_HTTPDNS20160201_H_
#define ALIBABACLOUD_HTTPDNS20160201_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Httpdns20160201 {
class AddDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> domainName{};

  AddDomainRequest() {}

  explicit AddDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~AddDomainRequest() = default;
};
class AddDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> requestId{};

  AddDomainResponseBody() {}

  explicit AddDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDomainResponseBody() = default;
};
class AddDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDomainResponseBody> body{};

  AddDomainResponse() {}

  explicit AddDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDomainResponseBody>(model1);
      }
    }
  }


  virtual ~AddDomainResponse() = default;
};
class DeleteDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> domainName{};

  DeleteDomainRequest() {}

  explicit DeleteDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DeleteDomainRequest() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
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
class DescribeDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDomainsRequest() {}

  explicit DescribeDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDomainsRequest() = default;
};
class DescribeDomainsResponseBodyDomainsDomain : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  DescribeDomainsResponseBodyDomainsDomain() {}

  explicit DescribeDomainsResponseBodyDomainsDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribeDomainsResponseBodyDomainsDomain() = default;
};
class DescribeDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainsResponseBodyDomainsDomain>> domain{};

  DescribeDomainsResponseBodyDomains() {}

  explicit DescribeDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Domain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<DescribeDomainsResponseBodyDomainsDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsResponseBodyDomainsDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domain = make_shared<vector<DescribeDomainsResponseBodyDomainsDomain>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainsResponseBodyDomains() = default;
};
class DescribeDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainsResponseBodyDomains> domains{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class GetAccountInfoResponseBodyAccountInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> monthFreeCount{};
  shared_ptr<long> monthHttpsResolveCount{};
  shared_ptr<long> monthResolveCount{};
  shared_ptr<long> packageCount{};
  shared_ptr<string> signSecret{};
  shared_ptr<long> signedCount{};
  shared_ptr<long> unsignedCount{};
  shared_ptr<bool> unsignedEnabled{};
  shared_ptr<long> userStatus{};

  GetAccountInfoResponseBodyAccountInfo() {}

  explicit GetAccountInfoResponseBodyAccountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (monthFreeCount) {
      res["MonthFreeCount"] = boost::any(*monthFreeCount);
    }
    if (monthHttpsResolveCount) {
      res["MonthHttpsResolveCount"] = boost::any(*monthHttpsResolveCount);
    }
    if (monthResolveCount) {
      res["MonthResolveCount"] = boost::any(*monthResolveCount);
    }
    if (packageCount) {
      res["PackageCount"] = boost::any(*packageCount);
    }
    if (signSecret) {
      res["SignSecret"] = boost::any(*signSecret);
    }
    if (signedCount) {
      res["SignedCount"] = boost::any(*signedCount);
    }
    if (unsignedCount) {
      res["UnsignedCount"] = boost::any(*unsignedCount);
    }
    if (unsignedEnabled) {
      res["UnsignedEnabled"] = boost::any(*unsignedEnabled);
    }
    if (userStatus) {
      res["UserStatus"] = boost::any(*userStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("MonthFreeCount") != m.end() && !m["MonthFreeCount"].empty()) {
      monthFreeCount = make_shared<long>(boost::any_cast<long>(m["MonthFreeCount"]));
    }
    if (m.find("MonthHttpsResolveCount") != m.end() && !m["MonthHttpsResolveCount"].empty()) {
      monthHttpsResolveCount = make_shared<long>(boost::any_cast<long>(m["MonthHttpsResolveCount"]));
    }
    if (m.find("MonthResolveCount") != m.end() && !m["MonthResolveCount"].empty()) {
      monthResolveCount = make_shared<long>(boost::any_cast<long>(m["MonthResolveCount"]));
    }
    if (m.find("PackageCount") != m.end() && !m["PackageCount"].empty()) {
      packageCount = make_shared<long>(boost::any_cast<long>(m["PackageCount"]));
    }
    if (m.find("SignSecret") != m.end() && !m["SignSecret"].empty()) {
      signSecret = make_shared<string>(boost::any_cast<string>(m["SignSecret"]));
    }
    if (m.find("SignedCount") != m.end() && !m["SignedCount"].empty()) {
      signedCount = make_shared<long>(boost::any_cast<long>(m["SignedCount"]));
    }
    if (m.find("UnsignedCount") != m.end() && !m["UnsignedCount"].empty()) {
      unsignedCount = make_shared<long>(boost::any_cast<long>(m["UnsignedCount"]));
    }
    if (m.find("UnsignedEnabled") != m.end() && !m["UnsignedEnabled"].empty()) {
      unsignedEnabled = make_shared<bool>(boost::any_cast<bool>(m["UnsignedEnabled"]));
    }
    if (m.find("UserStatus") != m.end() && !m["UserStatus"].empty()) {
      userStatus = make_shared<long>(boost::any_cast<long>(m["UserStatus"]));
    }
  }


  virtual ~GetAccountInfoResponseBodyAccountInfo() = default;
};
class GetAccountInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountInfoResponseBodyAccountInfo> accountInfo{};
  shared_ptr<string> requestId{};

  GetAccountInfoResponseBody() {}

  explicit GetAccountInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfo) {
      res["AccountInfo"] = accountInfo ? boost::any(accountInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountInfo") != m.end() && !m["AccountInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountInfo"].type()) {
        GetAccountInfoResponseBodyAccountInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountInfo"]));
        accountInfo = make_shared<GetAccountInfoResponseBodyAccountInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountInfoResponseBody() = default;
};
class GetAccountInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountInfoResponseBody> body{};

  GetAccountInfoResponse() {}

  explicit GetAccountInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccountInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountInfoResponse() = default;
};
class GetResolveCountSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> granularity{};
  shared_ptr<long> timeSpan{};

  GetResolveCountSummaryRequest() {}

  explicit GetResolveCountSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (timeSpan) {
      res["TimeSpan"] = boost::any(*timeSpan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("TimeSpan") != m.end() && !m["TimeSpan"].empty()) {
      timeSpan = make_shared<long>(boost::any_cast<long>(m["TimeSpan"]));
    }
  }


  virtual ~GetResolveCountSummaryRequest() = default;
};
class GetResolveCountSummaryResponseBodyResolveSummary : public Darabonba::Model {
public:
  shared_ptr<long> http{};
  shared_ptr<long> http6{};
  shared_ptr<long> https{};
  shared_ptr<long> https6{};

  GetResolveCountSummaryResponseBodyResolveSummary() {}

  explicit GetResolveCountSummaryResponseBodyResolveSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (http) {
      res["Http"] = boost::any(*http);
    }
    if (http6) {
      res["Http6"] = boost::any(*http6);
    }
    if (https) {
      res["Https"] = boost::any(*https);
    }
    if (https6) {
      res["Https6"] = boost::any(*https6);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Http") != m.end() && !m["Http"].empty()) {
      http = make_shared<long>(boost::any_cast<long>(m["Http"]));
    }
    if (m.find("Http6") != m.end() && !m["Http6"].empty()) {
      http6 = make_shared<long>(boost::any_cast<long>(m["Http6"]));
    }
    if (m.find("Https") != m.end() && !m["Https"].empty()) {
      https = make_shared<long>(boost::any_cast<long>(m["Https"]));
    }
    if (m.find("Https6") != m.end() && !m["Https6"].empty()) {
      https6 = make_shared<long>(boost::any_cast<long>(m["Https6"]));
    }
  }


  virtual ~GetResolveCountSummaryResponseBodyResolveSummary() = default;
};
class GetResolveCountSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResolveCountSummaryResponseBodyResolveSummary> resolveSummary{};

  GetResolveCountSummaryResponseBody() {}

  explicit GetResolveCountSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resolveSummary) {
      res["ResolveSummary"] = resolveSummary ? boost::any(resolveSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResolveSummary") != m.end() && !m["ResolveSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResolveSummary"].type()) {
        GetResolveCountSummaryResponseBodyResolveSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResolveSummary"]));
        resolveSummary = make_shared<GetResolveCountSummaryResponseBodyResolveSummary>(model1);
      }
    }
  }


  virtual ~GetResolveCountSummaryResponseBody() = default;
};
class GetResolveCountSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResolveCountSummaryResponseBody> body{};

  GetResolveCountSummaryResponse() {}

  explicit GetResolveCountSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResolveCountSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResolveCountSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetResolveCountSummaryResponse() = default;
};
class GetResolveStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> granularity{};
  shared_ptr<string> protocolName{};
  shared_ptr<long> timeSpan{};

  GetResolveStatisticsRequest() {}

  explicit GetResolveStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (protocolName) {
      res["ProtocolName"] = boost::any(*protocolName);
    }
    if (timeSpan) {
      res["TimeSpan"] = boost::any(*timeSpan);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("ProtocolName") != m.end() && !m["ProtocolName"].empty()) {
      protocolName = make_shared<string>(boost::any_cast<string>(m["ProtocolName"]));
    }
    if (m.find("TimeSpan") != m.end() && !m["TimeSpan"].empty()) {
      timeSpan = make_shared<long>(boost::any_cast<long>(m["TimeSpan"]));
    }
  }


  virtual ~GetResolveStatisticsRequest() = default;
};
class GetResolveStatisticsResponseBodyDataPointsDataPoint : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> time{};

  GetResolveStatisticsResponseBodyDataPointsDataPoint() {}

  explicit GetResolveStatisticsResponseBodyDataPointsDataPoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~GetResolveStatisticsResponseBodyDataPointsDataPoint() = default;
};
class GetResolveStatisticsResponseBodyDataPoints : public Darabonba::Model {
public:
  shared_ptr<vector<GetResolveStatisticsResponseBodyDataPointsDataPoint>> dataPoint{};

  GetResolveStatisticsResponseBodyDataPoints() {}

  explicit GetResolveStatisticsResponseBodyDataPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPoint) {
      vector<boost::any> temp1;
      for(auto item1:*dataPoint){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataPoint"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPoint") != m.end() && !m["DataPoint"].empty()) {
      if (typeid(vector<boost::any>) == m["DataPoint"].type()) {
        vector<GetResolveStatisticsResponseBodyDataPointsDataPoint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataPoint"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResolveStatisticsResponseBodyDataPointsDataPoint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataPoint = make_shared<vector<GetResolveStatisticsResponseBodyDataPointsDataPoint>>(expect1);
      }
    }
  }


  virtual ~GetResolveStatisticsResponseBodyDataPoints() = default;
};
class GetResolveStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetResolveStatisticsResponseBodyDataPoints> dataPoints{};
  shared_ptr<string> requestId{};

  GetResolveStatisticsResponseBody() {}

  explicit GetResolveStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPoints) {
      res["DataPoints"] = dataPoints ? boost::any(dataPoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPoints") != m.end() && !m["DataPoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataPoints"].type()) {
        GetResolveStatisticsResponseBodyDataPoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataPoints"]));
        dataPoints = make_shared<GetResolveStatisticsResponseBodyDataPoints>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResolveStatisticsResponseBody() = default;
};
class GetResolveStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResolveStatisticsResponseBody> body{};

  GetResolveStatisticsResponse() {}

  explicit GetResolveStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResolveStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResolveStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetResolveStatisticsResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> search{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (search) {
      res["Search"] = boost::any(*search);
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
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBodyDomainInfosDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> resolved{};
  shared_ptr<long> resolved6{};
  shared_ptr<long> resolvedHttps{};
  shared_ptr<long> resolvedHttps6{};
  shared_ptr<long> timeModified{};

  ListDomainsResponseBodyDomainInfosDomainInfo() {}

  explicit ListDomainsResponseBodyDomainInfosDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (resolved) {
      res["Resolved"] = boost::any(*resolved);
    }
    if (resolved6) {
      res["Resolved6"] = boost::any(*resolved6);
    }
    if (resolvedHttps) {
      res["ResolvedHttps"] = boost::any(*resolvedHttps);
    }
    if (resolvedHttps6) {
      res["ResolvedHttps6"] = boost::any(*resolvedHttps6);
    }
    if (timeModified) {
      res["TimeModified"] = boost::any(*timeModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("Resolved") != m.end() && !m["Resolved"].empty()) {
      resolved = make_shared<long>(boost::any_cast<long>(m["Resolved"]));
    }
    if (m.find("Resolved6") != m.end() && !m["Resolved6"].empty()) {
      resolved6 = make_shared<long>(boost::any_cast<long>(m["Resolved6"]));
    }
    if (m.find("ResolvedHttps") != m.end() && !m["ResolvedHttps"].empty()) {
      resolvedHttps = make_shared<long>(boost::any_cast<long>(m["ResolvedHttps"]));
    }
    if (m.find("ResolvedHttps6") != m.end() && !m["ResolvedHttps6"].empty()) {
      resolvedHttps6 = make_shared<long>(boost::any_cast<long>(m["ResolvedHttps6"]));
    }
    if (m.find("TimeModified") != m.end() && !m["TimeModified"].empty()) {
      timeModified = make_shared<long>(boost::any_cast<long>(m["TimeModified"]));
    }
  }


  virtual ~ListDomainsResponseBodyDomainInfosDomainInfo() = default;
};
class ListDomainsResponseBodyDomainInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListDomainsResponseBodyDomainInfosDomainInfo>> domainInfo{};

  ListDomainsResponseBodyDomainInfos() {}

  explicit ListDomainsResponseBodyDomainInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInfo) {
      vector<boost::any> temp1;
      for(auto item1:*domainInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainInfo") != m.end() && !m["DomainInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainInfo"].type()) {
        vector<ListDomainsResponseBodyDomainInfosDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDomainsResponseBodyDomainInfosDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainInfo = make_shared<vector<ListDomainsResponseBodyDomainInfosDomainInfo>>(expect1);
      }
    }
  }


  virtual ~ListDomainsResponseBodyDomainInfos() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDomainsResponseBodyDomainInfos> domainInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInfos) {
      res["DomainInfos"] = domainInfos ? boost::any(domainInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainInfos") != m.end() && !m["DomainInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainInfos"].type()) {
        ListDomainsResponseBodyDomainInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainInfos"]));
        domainInfos = make_shared<ListDomainsResponseBodyDomainInfos>(model1);
      }
    }
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
  }


  virtual ~ListDomainsResponseBody() = default;
};
class ListDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainsResponseBody> body{};

  ListDomainsResponse() {}

  explicit ListDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainsResponse() = default;
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
  AddDomainResponse addDomainWithOptions(shared_ptr<AddDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDomainResponse addDomain(shared_ptr<AddDomainRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<DeleteDomainRequest> request);
  DescribeDomainsResponse describeDomainsWithOptions(shared_ptr<DescribeDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainsResponse describeDomains(shared_ptr<DescribeDomainsRequest> request);
  GetAccountInfoResponse getAccountInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountInfoResponse getAccountInfo();
  GetResolveCountSummaryResponse getResolveCountSummaryWithOptions(shared_ptr<GetResolveCountSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResolveCountSummaryResponse getResolveCountSummary(shared_ptr<GetResolveCountSummaryRequest> request);
  GetResolveStatisticsResponse getResolveStatisticsWithOptions(shared_ptr<GetResolveStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResolveStatisticsResponse getResolveStatistics(shared_ptr<GetResolveStatisticsRequest> request);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<ListDomainsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Httpdns20160201

#endif
