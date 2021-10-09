// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CONFIG20190108_H_
#define ALIBABACLOUD_CONFIG20190108_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Config20190108 {
class ListConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleState{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> riskLevel{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> compliancePackId{};

  ListConfigRulesRequest() {}

  explicit ListConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleState) {
      res["ConfigRuleState"] = boost::any(*configRuleState);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleState") != m.end() && !m["ConfigRuleState"].empty()) {
      configRuleState = make_shared<string>(boost::any_cast<string>(m["ConfigRuleState"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
  }


  virtual ~ListConfigRulesRequest() = default;
};
class ListConfigRulesResponseBodyConfigRulesConfigRuleListCompliance : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<long> count{};

  ListConfigRulesResponseBodyConfigRulesConfigRuleListCompliance() {}

  explicit ListConfigRulesResponseBodyConfigRulesConfigRuleListCompliance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~ListConfigRulesResponseBodyConfigRulesConfigRuleListCompliance() = default;
};
class ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<string> compliancePackName{};

  ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy() {}

  explicit ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (compliancePackName) {
      res["CompliancePackName"] = boost::any(*compliancePackName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("CompliancePackName") != m.end() && !m["CompliancePackName"].empty()) {
      compliancePackName = make_shared<string>(boost::any_cast<string>(m["CompliancePackName"]));
    }
  }


  virtual ~ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy() = default;
};
class ListConfigRulesResponseBodyConfigRulesConfigRuleList : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackId{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> sourceOwner{};
  shared_ptr<long> accountId{};
  shared_ptr<string> configRuleState{};
  shared_ptr<ListConfigRulesResponseBodyConfigRulesConfigRuleListCompliance> compliance{};
  shared_ptr<string> sourceIdentifier{};
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> description{};
  shared_ptr<ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy> createBy{};
  shared_ptr<string> automationType{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> configRuleId{};

  ListConfigRulesResponseBodyConfigRulesConfigRuleList() {}

  explicit ListConfigRulesResponseBodyConfigRulesConfigRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePackId) {
      res["CompliancePackId"] = boost::any(*compliancePackId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (sourceOwner) {
      res["SourceOwner"] = boost::any(*sourceOwner);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (configRuleState) {
      res["ConfigRuleState"] = boost::any(*configRuleState);
    }
    if (compliance) {
      res["Compliance"] = compliance ? boost::any(compliance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceIdentifier) {
      res["SourceIdentifier"] = boost::any(*sourceIdentifier);
    }
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (createBy) {
      res["CreateBy"] = createBy ? boost::any(createBy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (automationType) {
      res["AutomationType"] = boost::any(*automationType);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePackId") != m.end() && !m["CompliancePackId"].empty()) {
      compliancePackId = make_shared<string>(boost::any_cast<string>(m["CompliancePackId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("SourceOwner") != m.end() && !m["SourceOwner"].empty()) {
      sourceOwner = make_shared<string>(boost::any_cast<string>(m["SourceOwner"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ConfigRuleState") != m.end() && !m["ConfigRuleState"].empty()) {
      configRuleState = make_shared<string>(boost::any_cast<string>(m["ConfigRuleState"]));
    }
    if (m.find("Compliance") != m.end() && !m["Compliance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compliance"].type()) {
        ListConfigRulesResponseBodyConfigRulesConfigRuleListCompliance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compliance"]));
        compliance = make_shared<ListConfigRulesResponseBodyConfigRulesConfigRuleListCompliance>(model1);
      }
    }
    if (m.find("SourceIdentifier") != m.end() && !m["SourceIdentifier"].empty()) {
      sourceIdentifier = make_shared<string>(boost::any_cast<string>(m["SourceIdentifier"]));
    }
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateBy") != m.end() && !m["CreateBy"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateBy"].type()) {
        ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateBy"]));
        createBy = make_shared<ListConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy>(model1);
      }
    }
    if (m.find("AutomationType") != m.end() && !m["AutomationType"].empty()) {
      automationType = make_shared<string>(boost::any_cast<string>(m["AutomationType"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~ListConfigRulesResponseBodyConfigRulesConfigRuleList() = default;
};
class ListConfigRulesResponseBodyConfigRules : public Darabonba::Model {
public:
  shared_ptr<vector<ListConfigRulesResponseBodyConfigRulesConfigRuleList>> configRuleList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListConfigRulesResponseBodyConfigRules() {}

  explicit ListConfigRulesResponseBodyConfigRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*configRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigRuleList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("ConfigRuleList") != m.end() && !m["ConfigRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigRuleList"].type()) {
        vector<ListConfigRulesResponseBodyConfigRulesConfigRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConfigRulesResponseBodyConfigRulesConfigRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configRuleList = make_shared<vector<ListConfigRulesResponseBodyConfigRulesConfigRuleList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListConfigRulesResponseBodyConfigRules() = default;
};
class ListConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListConfigRulesResponseBodyConfigRules> configRules{};

  ListConfigRulesResponseBody() {}

  explicit ListConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configRules) {
      res["ConfigRules"] = configRules ? boost::any(configRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConfigRules") != m.end() && !m["ConfigRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRules"].type()) {
        ListConfigRulesResponseBodyConfigRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRules"]));
        configRules = make_shared<ListConfigRulesResponseBodyConfigRules>(model1);
      }
    }
  }


  virtual ~ListConfigRulesResponseBody() = default;
};
class ListConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConfigRulesResponseBody> body{};

  ListConfigRulesResponse() {}

  explicit ListConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigRulesResponse() = default;
};
class DescribeComplianceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> complianceType{};
  shared_ptr<string> configRuleId{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  DescribeComplianceRequest() {}

  explicit DescribeComplianceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~DescribeComplianceRequest() = default;
};
class DescribeComplianceResponseBodyComplianceResultCompliances : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<long> count{};

  DescribeComplianceResponseBodyComplianceResultCompliances() {}

  explicit DescribeComplianceResponseBodyComplianceResultCompliances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DescribeComplianceResponseBodyComplianceResultCompliances() = default;
};
class DescribeComplianceResponseBodyComplianceResult : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeComplianceResponseBodyComplianceResultCompliances>> compliances{};

  DescribeComplianceResponseBodyComplianceResult() {}

  explicit DescribeComplianceResponseBodyComplianceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (compliances) {
      vector<boost::any> temp1;
      for(auto item1:*compliances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Compliances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Compliances") != m.end() && !m["Compliances"].empty()) {
      if (typeid(vector<boost::any>) == m["Compliances"].type()) {
        vector<DescribeComplianceResponseBodyComplianceResultCompliances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Compliances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeComplianceResponseBodyComplianceResultCompliances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compliances = make_shared<vector<DescribeComplianceResponseBodyComplianceResultCompliances>>(expect1);
      }
    }
  }


  virtual ~DescribeComplianceResponseBodyComplianceResult() = default;
};
class DescribeComplianceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeComplianceResponseBodyComplianceResult> complianceResult{};
  shared_ptr<string> requestId{};

  DescribeComplianceResponseBody() {}

  explicit DescribeComplianceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceResult) {
      res["ComplianceResult"] = complianceResult ? boost::any(complianceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceResult") != m.end() && !m["ComplianceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceResult"].type()) {
        DescribeComplianceResponseBodyComplianceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceResult"]));
        complianceResult = make_shared<DescribeComplianceResponseBodyComplianceResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeComplianceResponseBody() = default;
};
class DescribeComplianceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeComplianceResponseBody> body{};

  DescribeComplianceResponse() {}

  explicit DescribeComplianceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComplianceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComplianceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComplianceResponse() = default;
};
class GetResourceConfigurationTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> region{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};
  shared_ptr<string> nextToken{};

  GetResourceConfigurationTimelineRequest() {}

  explicit GetResourceConfigurationTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetResourceConfigurationTimelineRequest() = default;
};
class GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList : public Darabonba::Model {
public:
  shared_ptr<string> tags{};
  shared_ptr<long> accountId{};
  shared_ptr<string> resourceEventType{};
  shared_ptr<string> availabilityZone{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceCreateTime{};
  shared_ptr<string> region{};
  shared_ptr<string> captureTime{};
  shared_ptr<string> configurationDiff{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};

  GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() {}

  explicit GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceEventType) {
      res["ResourceEventType"] = boost::any(*resourceEventType);
    }
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (configurationDiff) {
      res["ConfigurationDiff"] = boost::any(*configurationDiff);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceEventType") != m.end() && !m["ResourceEventType"].empty()) {
      resourceEventType = make_shared<string>(boost::any_cast<string>(m["ResourceEventType"]));
    }
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<string>(boost::any_cast<string>(m["ResourceCreateTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<string>(boost::any_cast<string>(m["CaptureTime"]));
    }
    if (m.find("ConfigurationDiff") != m.end() && !m["ConfigurationDiff"].empty()) {
      configurationDiff = make_shared<string>(boost::any_cast<string>(m["ConfigurationDiff"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
  }


  virtual ~GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() = default;
};
class GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> limit{};
  shared_ptr<vector<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>> configurationList{};
  shared_ptr<long> totalCount{};

  GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() {}

  explicit GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (configurationList) {
      vector<boost::any> temp1;
      for(auto item1:*configurationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigurationList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("ConfigurationList") != m.end() && !m["ConfigurationList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigurationList"].type()) {
        vector<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigurationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurationList = make_shared<vector<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline() = default;
};
class GetResourceConfigurationTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline> resourceConfigurationTimeline{};

  GetResourceConfigurationTimelineResponseBody() {}

  explicit GetResourceConfigurationTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceConfigurationTimeline) {
      res["ResourceConfigurationTimeline"] = resourceConfigurationTimeline ? boost::any(resourceConfigurationTimeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceConfigurationTimeline") != m.end() && !m["ResourceConfigurationTimeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceConfigurationTimeline"].type()) {
        GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceConfigurationTimeline"]));
        resourceConfigurationTimeline = make_shared<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline>(model1);
      }
    }
  }


  virtual ~GetResourceConfigurationTimelineResponseBody() = default;
};
class GetResourceConfigurationTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceConfigurationTimelineResponseBody> body{};

  GetResourceConfigurationTimelineResponse() {}

  explicit GetResourceConfigurationTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceConfigurationTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceConfigurationTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceConfigurationTimelineResponse() = default;
};
class PutConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> description{};
  shared_ptr<string> inputParameters{};
  shared_ptr<string> sourceOwner{};
  shared_ptr<string> sourceIdentifier{};
  shared_ptr<string> sourceDetailMessageType{};
  shared_ptr<string> sourceMaximumExecutionFrequency{};
  shared_ptr<string> scopeComplianceResourceId{};
  shared_ptr<string> scopeComplianceResourceTypes{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  PutConfigRuleRequest() {}

  explicit PutConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (sourceOwner) {
      res["SourceOwner"] = boost::any(*sourceOwner);
    }
    if (sourceIdentifier) {
      res["SourceIdentifier"] = boost::any(*sourceIdentifier);
    }
    if (sourceDetailMessageType) {
      res["SourceDetailMessageType"] = boost::any(*sourceDetailMessageType);
    }
    if (sourceMaximumExecutionFrequency) {
      res["SourceMaximumExecutionFrequency"] = boost::any(*sourceMaximumExecutionFrequency);
    }
    if (scopeComplianceResourceId) {
      res["ScopeComplianceResourceId"] = boost::any(*scopeComplianceResourceId);
    }
    if (scopeComplianceResourceTypes) {
      res["ScopeComplianceResourceTypes"] = boost::any(*scopeComplianceResourceTypes);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      inputParameters = make_shared<string>(boost::any_cast<string>(m["InputParameters"]));
    }
    if (m.find("SourceOwner") != m.end() && !m["SourceOwner"].empty()) {
      sourceOwner = make_shared<string>(boost::any_cast<string>(m["SourceOwner"]));
    }
    if (m.find("SourceIdentifier") != m.end() && !m["SourceIdentifier"].empty()) {
      sourceIdentifier = make_shared<string>(boost::any_cast<string>(m["SourceIdentifier"]));
    }
    if (m.find("SourceDetailMessageType") != m.end() && !m["SourceDetailMessageType"].empty()) {
      sourceDetailMessageType = make_shared<string>(boost::any_cast<string>(m["SourceDetailMessageType"]));
    }
    if (m.find("SourceMaximumExecutionFrequency") != m.end() && !m["SourceMaximumExecutionFrequency"].empty()) {
      sourceMaximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["SourceMaximumExecutionFrequency"]));
    }
    if (m.find("ScopeComplianceResourceId") != m.end() && !m["ScopeComplianceResourceId"].empty()) {
      scopeComplianceResourceId = make_shared<string>(boost::any_cast<string>(m["ScopeComplianceResourceId"]));
    }
    if (m.find("ScopeComplianceResourceTypes") != m.end() && !m["ScopeComplianceResourceTypes"].empty()) {
      scopeComplianceResourceTypes = make_shared<string>(boost::any_cast<string>(m["ScopeComplianceResourceTypes"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~PutConfigRuleRequest() = default;
};
class PutConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<string> requestId{};

  PutConfigRuleResponseBody() {}

  explicit PutConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutConfigRuleResponseBody() = default;
};
class PutConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutConfigRuleResponseBody> body{};

  PutConfigRuleResponse() {}

  explicit PutConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~PutConfigRuleResponse() = default;
};
class GetDiscoveredResourceSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  GetDiscoveredResourceSummaryRequest() {}

  explicit GetDiscoveredResourceSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~GetDiscoveredResourceSummaryRequest() = default;
};
class GetDiscoveredResourceSummaryResponseBodyDiscoveredResourceSummary : public Darabonba::Model {
public:
  shared_ptr<long> regionCount{};
  shared_ptr<long> resourceCount{};
  shared_ptr<long> resourceTypeCount{};

  GetDiscoveredResourceSummaryResponseBodyDiscoveredResourceSummary() {}

  explicit GetDiscoveredResourceSummaryResponseBodyDiscoveredResourceSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionCount) {
      res["RegionCount"] = boost::any(*regionCount);
    }
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (resourceTypeCount) {
      res["ResourceTypeCount"] = boost::any(*resourceTypeCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionCount") != m.end() && !m["RegionCount"].empty()) {
      regionCount = make_shared<long>(boost::any_cast<long>(m["RegionCount"]));
    }
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("ResourceTypeCount") != m.end() && !m["ResourceTypeCount"].empty()) {
      resourceTypeCount = make_shared<long>(boost::any_cast<long>(m["ResourceTypeCount"]));
    }
  }


  virtual ~GetDiscoveredResourceSummaryResponseBodyDiscoveredResourceSummary() = default;
};
class GetDiscoveredResourceSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDiscoveredResourceSummaryResponseBodyDiscoveredResourceSummary> discoveredResourceSummary{};
  shared_ptr<string> requestId{};

  GetDiscoveredResourceSummaryResponseBody() {}

  explicit GetDiscoveredResourceSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceSummary) {
      res["DiscoveredResourceSummary"] = discoveredResourceSummary ? boost::any(discoveredResourceSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscoveredResourceSummary") != m.end() && !m["DiscoveredResourceSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiscoveredResourceSummary"].type()) {
        GetDiscoveredResourceSummaryResponseBodyDiscoveredResourceSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiscoveredResourceSummary"]));
        discoveredResourceSummary = make_shared<GetDiscoveredResourceSummaryResponseBodyDiscoveredResourceSummary>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDiscoveredResourceSummaryResponseBody() = default;
};
class GetDiscoveredResourceSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDiscoveredResourceSummaryResponseBody> body{};

  GetDiscoveredResourceSummaryResponse() {}

  explicit GetDiscoveredResourceSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDiscoveredResourceSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiscoveredResourceSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiscoveredResourceSummaryResponse() = default;
};
class StartConfigurationRecorderRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enterpriseEdition{};

  StartConfigurationRecorderRequest() {}

  explicit StartConfigurationRecorderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enterpriseEdition) {
      res["EnterpriseEdition"] = boost::any(*enterpriseEdition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnterpriseEdition") != m.end() && !m["EnterpriseEdition"].empty()) {
      enterpriseEdition = make_shared<bool>(boost::any_cast<bool>(m["EnterpriseEdition"]));
    }
  }


  virtual ~StartConfigurationRecorderRequest() = default;
};
class StartConfigurationRecorderResponseBodyConfigurationRecorder : public Darabonba::Model {
public:
  shared_ptr<string> organizationEnableStatus{};
  shared_ptr<string> configurationRecorderStatus{};
  shared_ptr<long> organizationMasterId{};
  shared_ptr<long> accountId{};
  shared_ptr<vector<string>> resourceTypes{};

  StartConfigurationRecorderResponseBodyConfigurationRecorder() {}

  explicit StartConfigurationRecorderResponseBodyConfigurationRecorder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationEnableStatus) {
      res["OrganizationEnableStatus"] = boost::any(*organizationEnableStatus);
    }
    if (configurationRecorderStatus) {
      res["ConfigurationRecorderStatus"] = boost::any(*configurationRecorderStatus);
    }
    if (organizationMasterId) {
      res["OrganizationMasterId"] = boost::any(*organizationMasterId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrganizationEnableStatus") != m.end() && !m["OrganizationEnableStatus"].empty()) {
      organizationEnableStatus = make_shared<string>(boost::any_cast<string>(m["OrganizationEnableStatus"]));
    }
    if (m.find("ConfigurationRecorderStatus") != m.end() && !m["ConfigurationRecorderStatus"].empty()) {
      configurationRecorderStatus = make_shared<string>(boost::any_cast<string>(m["ConfigurationRecorderStatus"]));
    }
    if (m.find("OrganizationMasterId") != m.end() && !m["OrganizationMasterId"].empty()) {
      organizationMasterId = make_shared<long>(boost::any_cast<long>(m["OrganizationMasterId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StartConfigurationRecorderResponseBodyConfigurationRecorder() = default;
};
class StartConfigurationRecorderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<StartConfigurationRecorderResponseBodyConfigurationRecorder> configurationRecorder{};

  StartConfigurationRecorderResponseBody() {}

  explicit StartConfigurationRecorderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configurationRecorder) {
      res["ConfigurationRecorder"] = configurationRecorder ? boost::any(configurationRecorder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConfigurationRecorder") != m.end() && !m["ConfigurationRecorder"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigurationRecorder"].type()) {
        StartConfigurationRecorderResponseBodyConfigurationRecorder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigurationRecorder"]));
        configurationRecorder = make_shared<StartConfigurationRecorderResponseBodyConfigurationRecorder>(model1);
      }
    }
  }


  virtual ~StartConfigurationRecorderResponseBody() = default;
};
class StartConfigurationRecorderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartConfigurationRecorderResponseBody> body{};

  StartConfigurationRecorderResponse() {}

  explicit StartConfigurationRecorderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartConfigurationRecorderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartConfigurationRecorderResponseBody>(model1);
      }
    }
  }


  virtual ~StartConfigurationRecorderResponse() = default;
};
class DescribeConfigurationRecorderResponseBodyConfigurationRecorder : public Darabonba::Model {
public:
  shared_ptr<string> configurationRecorderStatus{};
  shared_ptr<long> accountId{};
  shared_ptr<vector<string>> resourceTypes{};

  DescribeConfigurationRecorderResponseBodyConfigurationRecorder() {}

  explicit DescribeConfigurationRecorderResponseBodyConfigurationRecorder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurationRecorderStatus) {
      res["ConfigurationRecorderStatus"] = boost::any(*configurationRecorderStatus);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigurationRecorderStatus") != m.end() && !m["ConfigurationRecorderStatus"].empty()) {
      configurationRecorderStatus = make_shared<string>(boost::any_cast<string>(m["ConfigurationRecorderStatus"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeConfigurationRecorderResponseBodyConfigurationRecorder() = default;
};
class DescribeConfigurationRecorderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeConfigurationRecorderResponseBodyConfigurationRecorder> configurationRecorder{};

  DescribeConfigurationRecorderResponseBody() {}

  explicit DescribeConfigurationRecorderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configurationRecorder) {
      res["ConfigurationRecorder"] = configurationRecorder ? boost::any(configurationRecorder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConfigurationRecorder") != m.end() && !m["ConfigurationRecorder"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigurationRecorder"].type()) {
        DescribeConfigurationRecorderResponseBodyConfigurationRecorder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigurationRecorder"]));
        configurationRecorder = make_shared<DescribeConfigurationRecorderResponseBodyConfigurationRecorder>(model1);
      }
    }
  }


  virtual ~DescribeConfigurationRecorderResponseBody() = default;
};
class DescribeConfigurationRecorderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConfigurationRecorderResponseBody> body{};

  DescribeConfigurationRecorderResponse() {}

  explicit DescribeConfigurationRecorderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigurationRecorderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigurationRecorderResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigurationRecorderResponse() = default;
};
class StartConfigRuleEvaluationRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};

  StartConfigRuleEvaluationRequest() {}

  explicit StartConfigRuleEvaluationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~StartConfigRuleEvaluationRequest() = default;
};
class StartConfigRuleEvaluationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  StartConfigRuleEvaluationResponseBody() {}

  explicit StartConfigRuleEvaluationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~StartConfigRuleEvaluationResponseBody() = default;
};
class StartConfigRuleEvaluationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartConfigRuleEvaluationResponseBody> body{};

  StartConfigRuleEvaluationResponse() {}

  explicit StartConfigRuleEvaluationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartConfigRuleEvaluationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartConfigRuleEvaluationResponseBody>(model1);
      }
    }
  }


  virtual ~StartConfigRuleEvaluationResponse() = default;
};
class PutDeliveryChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<string> deliveryChannelType{};
  shared_ptr<string> deliveryChannelTargetArn{};
  shared_ptr<string> deliveryChannelAssumeRoleArn{};
  shared_ptr<string> deliveryChannelCondition{};
  shared_ptr<string> description{};
  shared_ptr<long> status{};

  PutDeliveryChannelRequest() {}

  explicit PutDeliveryChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (deliveryChannelType) {
      res["DeliveryChannelType"] = boost::any(*deliveryChannelType);
    }
    if (deliveryChannelTargetArn) {
      res["DeliveryChannelTargetArn"] = boost::any(*deliveryChannelTargetArn);
    }
    if (deliveryChannelAssumeRoleArn) {
      res["DeliveryChannelAssumeRoleArn"] = boost::any(*deliveryChannelAssumeRoleArn);
    }
    if (deliveryChannelCondition) {
      res["DeliveryChannelCondition"] = boost::any(*deliveryChannelCondition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("DeliveryChannelType") != m.end() && !m["DeliveryChannelType"].empty()) {
      deliveryChannelType = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelType"]));
    }
    if (m.find("DeliveryChannelTargetArn") != m.end() && !m["DeliveryChannelTargetArn"].empty()) {
      deliveryChannelTargetArn = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelTargetArn"]));
    }
    if (m.find("DeliveryChannelAssumeRoleArn") != m.end() && !m["DeliveryChannelAssumeRoleArn"].empty()) {
      deliveryChannelAssumeRoleArn = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelAssumeRoleArn"]));
    }
    if (m.find("DeliveryChannelCondition") != m.end() && !m["DeliveryChannelCondition"].empty()) {
      deliveryChannelCondition = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelCondition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~PutDeliveryChannelRequest() = default;
};
class PutDeliveryChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> deliveryChannelId{};

  PutDeliveryChannelResponseBody() {}

  explicit PutDeliveryChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
  }


  virtual ~PutDeliveryChannelResponseBody() = default;
};
class PutDeliveryChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutDeliveryChannelResponseBody> body{};

  PutDeliveryChannelResponse() {}

  explicit PutDeliveryChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutDeliveryChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutDeliveryChannelResponseBody>(model1);
      }
    }
  }


  virtual ~PutDeliveryChannelResponse() = default;
};
class GetResourceComplianceTimelineRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<string> memberId{};
  shared_ptr<string> region{};
  shared_ptr<string> nextToken{};

  GetResourceComplianceTimelineRequest() {}

  explicit GetResourceComplianceTimelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~GetResourceComplianceTimelineRequest() = default;
};
class GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList : public Darabonba::Model {
public:
  shared_ptr<string> tags{};
  shared_ptr<string> accountId{};
  shared_ptr<string> availabilityZone{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> resourceCreateTime{};
  shared_ptr<string> region{};
  shared_ptr<string> configuration{};
  shared_ptr<long> captureTime{};
  shared_ptr<string> configurationDiff{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceStatus{};

  GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() {}

  explicit GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (configurationDiff) {
      res["ConfigurationDiff"] = boost::any(*configurationDiff);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreateTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      configuration = make_shared<string>(boost::any_cast<string>(m["Configuration"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<long>(boost::any_cast<long>(m["CaptureTime"]));
    }
    if (m.find("ConfigurationDiff") != m.end() && !m["ConfigurationDiff"].empty()) {
      configurationDiff = make_shared<string>(boost::any_cast<string>(m["ConfigurationDiff"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
  }


  virtual ~GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() = default;
};
class GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> limit{};
  shared_ptr<vector<GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>> complianceList{};
  shared_ptr<long> totalCount{};

  GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline() {}

  explicit GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (complianceList) {
      vector<boost::any> temp1;
      for(auto item1:*complianceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComplianceList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("ComplianceList") != m.end() && !m["ComplianceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ComplianceList"].type()) {
        vector<GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComplianceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        complianceList = make_shared<vector<GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline() = default;
};
class GetResourceComplianceTimelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline> resourceComplianceTimeline{};

  GetResourceComplianceTimelineResponseBody() {}

  explicit GetResourceComplianceTimelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceComplianceTimeline) {
      res["ResourceComplianceTimeline"] = resourceComplianceTimeline ? boost::any(resourceComplianceTimeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceComplianceTimeline") != m.end() && !m["ResourceComplianceTimeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceComplianceTimeline"].type()) {
        GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceComplianceTimeline"]));
        resourceComplianceTimeline = make_shared<GetResourceComplianceTimelineResponseBodyResourceComplianceTimeline>(model1);
      }
    }
  }


  virtual ~GetResourceComplianceTimelineResponseBody() = default;
};
class GetResourceComplianceTimelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceComplianceTimelineResponseBody> body{};

  GetResourceComplianceTimelineResponse() {}

  explicit GetResourceComplianceTimelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceComplianceTimelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceComplianceTimelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceComplianceTimelineResponse() = default;
};
class GetAggregateDiscoveredResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> region{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<long> resourceOwnerId{};

  GetAggregateDiscoveredResourceRequest() {}

  explicit GetAggregateDiscoveredResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetAggregateDiscoveredResourceRequest() = default;
};
class GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail : public Darabonba::Model {
public:
  shared_ptr<string> availabilityZone{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> configuration{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreationTime{};
  shared_ptr<string> tags{};
  shared_ptr<long> accountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceDeleted{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceStatus{};

  GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail() {}

  explicit GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreationTime) {
      res["ResourceCreationTime"] = boost::any(*resourceCreationTime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceDeleted) {
      res["ResourceDeleted"] = boost::any(*resourceDeleted);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      configuration = make_shared<string>(boost::any_cast<string>(m["Configuration"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreationTime") != m.end() && !m["ResourceCreationTime"].empty()) {
      resourceCreationTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreationTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceDeleted") != m.end() && !m["ResourceDeleted"].empty()) {
      resourceDeleted = make_shared<long>(boost::any_cast<long>(m["ResourceDeleted"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
  }


  virtual ~GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail() = default;
};
class GetAggregateDiscoveredResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail> discoveredResourceDetail{};

  GetAggregateDiscoveredResourceResponseBody() {}

  explicit GetAggregateDiscoveredResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (discoveredResourceDetail) {
      res["DiscoveredResourceDetail"] = discoveredResourceDetail ? boost::any(discoveredResourceDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DiscoveredResourceDetail") != m.end() && !m["DiscoveredResourceDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiscoveredResourceDetail"].type()) {
        GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiscoveredResourceDetail"]));
        discoveredResourceDetail = make_shared<GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail>(model1);
      }
    }
  }


  virtual ~GetAggregateDiscoveredResourceResponseBody() = default;
};
class GetAggregateDiscoveredResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAggregateDiscoveredResourceResponseBody> body{};

  GetAggregateDiscoveredResourceResponse() {}

  explicit GetAggregateDiscoveredResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAggregateDiscoveredResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAggregateDiscoveredResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetAggregateDiscoveredResourceResponse() = default;
};
class ListRemediationTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> remediationType{};
  shared_ptr<string> managedRuleIdentifier{};

  ListRemediationTemplatesRequest() {}

  explicit ListRemediationTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remediationType) {
      res["RemediationType"] = boost::any(*remediationType);
    }
    if (managedRuleIdentifier) {
      res["ManagedRuleIdentifier"] = boost::any(*managedRuleIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemediationType") != m.end() && !m["RemediationType"].empty()) {
      remediationType = make_shared<string>(boost::any_cast<string>(m["RemediationType"]));
    }
    if (m.find("ManagedRuleIdentifier") != m.end() && !m["ManagedRuleIdentifier"].empty()) {
      managedRuleIdentifier = make_shared<string>(boost::any_cast<string>(m["ManagedRuleIdentifier"]));
    }
  }


  virtual ~ListRemediationTemplatesRequest() = default;
};
class ListRemediationTemplatesResponseBodyRemediationTemplates : public Darabonba::Model {
public:
  shared_ptr<string> remediationType{};
  shared_ptr<string> templateIdentifier{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateDefinition{};

  ListRemediationTemplatesResponseBodyRemediationTemplates() {}

  explicit ListRemediationTemplatesResponseBodyRemediationTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remediationType) {
      res["RemediationType"] = boost::any(*remediationType);
    }
    if (templateIdentifier) {
      res["TemplateIdentifier"] = boost::any(*templateIdentifier);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateDefinition) {
      res["TemplateDefinition"] = boost::any(*templateDefinition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemediationType") != m.end() && !m["RemediationType"].empty()) {
      remediationType = make_shared<string>(boost::any_cast<string>(m["RemediationType"]));
    }
    if (m.find("TemplateIdentifier") != m.end() && !m["TemplateIdentifier"].empty()) {
      templateIdentifier = make_shared<string>(boost::any_cast<string>(m["TemplateIdentifier"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateDefinition") != m.end() && !m["TemplateDefinition"].empty()) {
      templateDefinition = make_shared<string>(boost::any_cast<string>(m["TemplateDefinition"]));
    }
  }


  virtual ~ListRemediationTemplatesResponseBodyRemediationTemplates() = default;
};
class ListRemediationTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRemediationTemplatesResponseBodyRemediationTemplates>> remediationTemplates{};

  ListRemediationTemplatesResponseBody() {}

  explicit ListRemediationTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (remediationTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*remediationTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RemediationTemplates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RemediationTemplates") != m.end() && !m["RemediationTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["RemediationTemplates"].type()) {
        vector<ListRemediationTemplatesResponseBodyRemediationTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RemediationTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRemediationTemplatesResponseBodyRemediationTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        remediationTemplates = make_shared<vector<ListRemediationTemplatesResponseBodyRemediationTemplates>>(expect1);
      }
    }
  }


  virtual ~ListRemediationTemplatesResponseBody() = default;
};
class ListRemediationTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRemediationTemplatesResponseBody> body{};

  ListRemediationTemplatesResponse() {}

  explicit ListRemediationTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRemediationTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRemediationTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRemediationTemplatesResponse() = default;
};
class DescribeEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> configRuleId{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  DescribeEvaluationResultsRequest() {}

  explicit DescribeEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~DescribeEvaluationResultsRequest() = default;
};
class DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier : public Darabonba::Model {
public:
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> configRuleName{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> configRuleId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> regionId{};

  DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() {}

  explicit DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier() = default;
};
class DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier : public Darabonba::Model {
public:
  shared_ptr<long> orderingTimestamp{};
  shared_ptr<DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier> evaluationResultQualifier{};

  DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() {}

  explicit DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderingTimestamp) {
      res["OrderingTimestamp"] = boost::any(*orderingTimestamp);
    }
    if (evaluationResultQualifier) {
      res["EvaluationResultQualifier"] = evaluationResultQualifier ? boost::any(evaluationResultQualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderingTimestamp") != m.end() && !m["OrderingTimestamp"].empty()) {
      orderingTimestamp = make_shared<long>(boost::any_cast<long>(m["OrderingTimestamp"]));
    }
    if (m.find("EvaluationResultQualifier") != m.end() && !m["EvaluationResultQualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultQualifier"].type()) {
        DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultQualifier"]));
        evaluationResultQualifier = make_shared<DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifierEvaluationResultQualifier>(model1);
      }
    }
  }


  virtual ~DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier() = default;
};
class DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList : public Darabonba::Model {
public:
  shared_ptr<long> riskLevel{};
  shared_ptr<string> complianceType{};
  shared_ptr<long> resultRecordedTimestamp{};
  shared_ptr<string> annotation{};
  shared_ptr<long> configRuleInvokedTimestamp{};
  shared_ptr<string> invokingEventMessageType{};
  shared_ptr<DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier> evaluationResultIdentifier{};
  shared_ptr<bool> remediationEnabled{};

  DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() {}

  explicit DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (resultRecordedTimestamp) {
      res["ResultRecordedTimestamp"] = boost::any(*resultRecordedTimestamp);
    }
    if (annotation) {
      res["Annotation"] = boost::any(*annotation);
    }
    if (configRuleInvokedTimestamp) {
      res["ConfigRuleInvokedTimestamp"] = boost::any(*configRuleInvokedTimestamp);
    }
    if (invokingEventMessageType) {
      res["InvokingEventMessageType"] = boost::any(*invokingEventMessageType);
    }
    if (evaluationResultIdentifier) {
      res["EvaluationResultIdentifier"] = evaluationResultIdentifier ? boost::any(evaluationResultIdentifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remediationEnabled) {
      res["RemediationEnabled"] = boost::any(*remediationEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("ResultRecordedTimestamp") != m.end() && !m["ResultRecordedTimestamp"].empty()) {
      resultRecordedTimestamp = make_shared<long>(boost::any_cast<long>(m["ResultRecordedTimestamp"]));
    }
    if (m.find("Annotation") != m.end() && !m["Annotation"].empty()) {
      annotation = make_shared<string>(boost::any_cast<string>(m["Annotation"]));
    }
    if (m.find("ConfigRuleInvokedTimestamp") != m.end() && !m["ConfigRuleInvokedTimestamp"].empty()) {
      configRuleInvokedTimestamp = make_shared<long>(boost::any_cast<long>(m["ConfigRuleInvokedTimestamp"]));
    }
    if (m.find("InvokingEventMessageType") != m.end() && !m["InvokingEventMessageType"].empty()) {
      invokingEventMessageType = make_shared<string>(boost::any_cast<string>(m["InvokingEventMessageType"]));
    }
    if (m.find("EvaluationResultIdentifier") != m.end() && !m["EvaluationResultIdentifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResultIdentifier"].type()) {
        DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResultIdentifier"]));
        evaluationResultIdentifier = make_shared<DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultListEvaluationResultIdentifier>(model1);
      }
    }
    if (m.find("RemediationEnabled") != m.end() && !m["RemediationEnabled"].empty()) {
      remediationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RemediationEnabled"]));
    }
  }


  virtual ~DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList() = default;
};
class DescribeEvaluationResultsResponseBodyEvaluationResults : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>> evaluationResultList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeEvaluationResultsResponseBodyEvaluationResults() {}

  explicit DescribeEvaluationResultsResponseBodyEvaluationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationResultList) {
      vector<boost::any> temp1;
      for(auto item1:*evaluationResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EvaluationResultList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("EvaluationResultList") != m.end() && !m["EvaluationResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["EvaluationResultList"].type()) {
        vector<DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EvaluationResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        evaluationResultList = make_shared<vector<DescribeEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeEvaluationResultsResponseBodyEvaluationResults() = default;
};
class DescribeEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeEvaluationResultsResponseBodyEvaluationResults> evaluationResults{};

  DescribeEvaluationResultsResponseBody() {}

  explicit DescribeEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (evaluationResults) {
      res["EvaluationResults"] = evaluationResults ? boost::any(evaluationResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EvaluationResults") != m.end() && !m["EvaluationResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationResults"].type()) {
        DescribeEvaluationResultsResponseBodyEvaluationResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationResults"]));
        evaluationResults = make_shared<DescribeEvaluationResultsResponseBodyEvaluationResults>(model1);
      }
    }
  }


  virtual ~DescribeEvaluationResultsResponseBody() = default;
};
class DescribeEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEvaluationResultsResponseBody> body{};

  DescribeEvaluationResultsResponse() {}

  explicit DescribeEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEvaluationResultsResponse() = default;
};
class ListDiscoveredResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceDeleted{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> resourceTypes{};
  shared_ptr<string> regions{};
  shared_ptr<string> complianceType{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  ListDiscoveredResourcesRequest() {}

  explicit ListDiscoveredResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceDeleted) {
      res["ResourceDeleted"] = boost::any(*resourceDeleted);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (regions) {
      res["Regions"] = boost::any(*regions);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceDeleted") != m.end() && !m["ResourceDeleted"].empty()) {
      resourceDeleted = make_shared<long>(boost::any_cast<long>(m["ResourceDeleted"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      resourceTypes = make_shared<string>(boost::any_cast<string>(m["ResourceTypes"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      regions = make_shared<string>(boost::any_cast<string>(m["Regions"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~ListDiscoveredResourcesRequest() = default;
};
class ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreationTime{};
  shared_ptr<string> tags{};
  shared_ptr<long> accountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<long> resourceDeleted{};
  shared_ptr<string> resourceStatus{};

  ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList() {}

  explicit ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreationTime) {
      res["ResourceCreationTime"] = boost::any(*resourceCreationTime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceDeleted) {
      res["ResourceDeleted"] = boost::any(*resourceDeleted);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreationTime") != m.end() && !m["ResourceCreationTime"].empty()) {
      resourceCreationTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreationTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceDeleted") != m.end() && !m["ResourceDeleted"].empty()) {
      resourceDeleted = make_shared<long>(boost::any_cast<long>(m["ResourceDeleted"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
  }


  virtual ~ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList() = default;
};
class ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles : public Darabonba::Model {
public:
  shared_ptr<vector<ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList>> discoveredResourceProfileList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles() {}

  explicit ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceProfileList) {
      vector<boost::any> temp1;
      for(auto item1:*discoveredResourceProfileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiscoveredResourceProfileList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("DiscoveredResourceProfileList") != m.end() && !m["DiscoveredResourceProfileList"].empty()) {
      if (typeid(vector<boost::any>) == m["DiscoveredResourceProfileList"].type()) {
        vector<ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiscoveredResourceProfileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discoveredResourceProfileList = make_shared<vector<ListDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles() = default;
};
class ListDiscoveredResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles> discoveredResourceProfiles{};
  shared_ptr<string> requestId{};

  ListDiscoveredResourcesResponseBody() {}

  explicit ListDiscoveredResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceProfiles) {
      res["DiscoveredResourceProfiles"] = discoveredResourceProfiles ? boost::any(discoveredResourceProfiles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscoveredResourceProfiles") != m.end() && !m["DiscoveredResourceProfiles"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiscoveredResourceProfiles"].type()) {
        ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiscoveredResourceProfiles"]));
        discoveredResourceProfiles = make_shared<ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDiscoveredResourcesResponseBody() = default;
};
class ListDiscoveredResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDiscoveredResourcesResponseBody> body{};

  ListDiscoveredResourcesResponse() {}

  explicit ListDiscoveredResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDiscoveredResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDiscoveredResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDiscoveredResourcesResponse() = default;
};
class GetDiscoveredResourceCountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupByKey{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  GetDiscoveredResourceCountsRequest() {}

  explicit GetDiscoveredResourceCountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupByKey) {
      res["GroupByKey"] = boost::any(*groupByKey);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupByKey") != m.end() && !m["GroupByKey"].empty()) {
      groupByKey = make_shared<string>(boost::any_cast<string>(m["GroupByKey"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsRequest() = default;
};
class GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList : public Darabonba::Model {
public:
  shared_ptr<long> resourceCount{};
  shared_ptr<string> groupName{};

  GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList() {}

  explicit GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList() = default;
};
class GetDiscoveredResourceCountsResponseBodyGroupedResourceCounts : public Darabonba::Model {
public:
  shared_ptr<vector<GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList>> groupedResourceCountList{};
  shared_ptr<string> groupByKey{};

  GetDiscoveredResourceCountsResponseBodyGroupedResourceCounts() {}

  explicit GetDiscoveredResourceCountsResponseBodyGroupedResourceCounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupedResourceCountList) {
      vector<boost::any> temp1;
      for(auto item1:*groupedResourceCountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupedResourceCountList"] = boost::any(temp1);
    }
    if (groupByKey) {
      res["GroupByKey"] = boost::any(*groupByKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupedResourceCountList") != m.end() && !m["GroupedResourceCountList"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupedResourceCountList"].type()) {
        vector<GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupedResourceCountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupedResourceCountList = make_shared<vector<GetDiscoveredResourceCountsResponseBodyGroupedResourceCountsGroupedResourceCountList>>(expect1);
      }
    }
    if (m.find("GroupByKey") != m.end() && !m["GroupByKey"].empty()) {
      groupByKey = make_shared<string>(boost::any_cast<string>(m["GroupByKey"]));
    }
  }


  virtual ~GetDiscoveredResourceCountsResponseBodyGroupedResourceCounts() = default;
};
class GetDiscoveredResourceCountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDiscoveredResourceCountsResponseBodyGroupedResourceCounts> groupedResourceCounts{};

  GetDiscoveredResourceCountsResponseBody() {}

  explicit GetDiscoveredResourceCountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (groupedResourceCounts) {
      res["GroupedResourceCounts"] = groupedResourceCounts ? boost::any(groupedResourceCounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("GroupedResourceCounts") != m.end() && !m["GroupedResourceCounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["GroupedResourceCounts"].type()) {
        GetDiscoveredResourceCountsResponseBodyGroupedResourceCounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GroupedResourceCounts"]));
        groupedResourceCounts = make_shared<GetDiscoveredResourceCountsResponseBodyGroupedResourceCounts>(model1);
      }
    }
  }


  virtual ~GetDiscoveredResourceCountsResponseBody() = default;
};
class GetDiscoveredResourceCountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDiscoveredResourceCountsResponseBody> body{};

  GetDiscoveredResourceCountsResponse() {}

  explicit GetDiscoveredResourceCountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDiscoveredResourceCountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiscoveredResourceCountsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiscoveredResourceCountsResponse() = default;
};
class DescribeDeliveryChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryChannelIds{};

  DescribeDeliveryChannelsRequest() {}

  explicit DescribeDeliveryChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannelIds) {
      res["DeliveryChannelIds"] = boost::any(*deliveryChannelIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannelIds") != m.end() && !m["DeliveryChannelIds"].empty()) {
      deliveryChannelIds = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelIds"]));
    }
  }


  virtual ~DescribeDeliveryChannelsRequest() = default;
};
class DescribeDeliveryChannelsResponseBodyDeliveryChannels : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> deliveryChannelName{};
  shared_ptr<string> deliveryChannelId{};
  shared_ptr<string> deliveryChannelType{};
  shared_ptr<string> deliveryChannelAssumeRoleArn{};
  shared_ptr<string> description{};
  shared_ptr<string> deliveryChannelCondition{};
  shared_ptr<string> deliveryChannelTargetArn{};
  shared_ptr<bool> configurationSnapshot{};
  shared_ptr<bool> configurationItemChangeNotification{};
  shared_ptr<bool> nonCompliantNotification{};
  shared_ptr<string> oversizedDataOSSTargetArn{};

  DescribeDeliveryChannelsResponseBodyDeliveryChannels() {}

  explicit DescribeDeliveryChannelsResponseBodyDeliveryChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (deliveryChannelName) {
      res["DeliveryChannelName"] = boost::any(*deliveryChannelName);
    }
    if (deliveryChannelId) {
      res["DeliveryChannelId"] = boost::any(*deliveryChannelId);
    }
    if (deliveryChannelType) {
      res["DeliveryChannelType"] = boost::any(*deliveryChannelType);
    }
    if (deliveryChannelAssumeRoleArn) {
      res["DeliveryChannelAssumeRoleArn"] = boost::any(*deliveryChannelAssumeRoleArn);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deliveryChannelCondition) {
      res["DeliveryChannelCondition"] = boost::any(*deliveryChannelCondition);
    }
    if (deliveryChannelTargetArn) {
      res["DeliveryChannelTargetArn"] = boost::any(*deliveryChannelTargetArn);
    }
    if (configurationSnapshot) {
      res["ConfigurationSnapshot"] = boost::any(*configurationSnapshot);
    }
    if (configurationItemChangeNotification) {
      res["ConfigurationItemChangeNotification"] = boost::any(*configurationItemChangeNotification);
    }
    if (nonCompliantNotification) {
      res["NonCompliantNotification"] = boost::any(*nonCompliantNotification);
    }
    if (oversizedDataOSSTargetArn) {
      res["OversizedDataOSSTargetArn"] = boost::any(*oversizedDataOSSTargetArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("DeliveryChannelName") != m.end() && !m["DeliveryChannelName"].empty()) {
      deliveryChannelName = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelName"]));
    }
    if (m.find("DeliveryChannelId") != m.end() && !m["DeliveryChannelId"].empty()) {
      deliveryChannelId = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelId"]));
    }
    if (m.find("DeliveryChannelType") != m.end() && !m["DeliveryChannelType"].empty()) {
      deliveryChannelType = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelType"]));
    }
    if (m.find("DeliveryChannelAssumeRoleArn") != m.end() && !m["DeliveryChannelAssumeRoleArn"].empty()) {
      deliveryChannelAssumeRoleArn = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelAssumeRoleArn"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeliveryChannelCondition") != m.end() && !m["DeliveryChannelCondition"].empty()) {
      deliveryChannelCondition = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelCondition"]));
    }
    if (m.find("DeliveryChannelTargetArn") != m.end() && !m["DeliveryChannelTargetArn"].empty()) {
      deliveryChannelTargetArn = make_shared<string>(boost::any_cast<string>(m["DeliveryChannelTargetArn"]));
    }
    if (m.find("ConfigurationSnapshot") != m.end() && !m["ConfigurationSnapshot"].empty()) {
      configurationSnapshot = make_shared<bool>(boost::any_cast<bool>(m["ConfigurationSnapshot"]));
    }
    if (m.find("ConfigurationItemChangeNotification") != m.end() && !m["ConfigurationItemChangeNotification"].empty()) {
      configurationItemChangeNotification = make_shared<bool>(boost::any_cast<bool>(m["ConfigurationItemChangeNotification"]));
    }
    if (m.find("NonCompliantNotification") != m.end() && !m["NonCompliantNotification"].empty()) {
      nonCompliantNotification = make_shared<bool>(boost::any_cast<bool>(m["NonCompliantNotification"]));
    }
    if (m.find("OversizedDataOSSTargetArn") != m.end() && !m["OversizedDataOSSTargetArn"].empty()) {
      oversizedDataOSSTargetArn = make_shared<string>(boost::any_cast<string>(m["OversizedDataOSSTargetArn"]));
    }
  }


  virtual ~DescribeDeliveryChannelsResponseBodyDeliveryChannels() = default;
};
class DescribeDeliveryChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeliveryChannelsResponseBodyDeliveryChannels>> deliveryChannels{};
  shared_ptr<string> requestId{};

  DescribeDeliveryChannelsResponseBody() {}

  explicit DescribeDeliveryChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryChannels) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryChannels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeliveryChannels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryChannels") != m.end() && !m["DeliveryChannels"].empty()) {
      if (typeid(vector<boost::any>) == m["DeliveryChannels"].type()) {
        vector<DescribeDeliveryChannelsResponseBodyDeliveryChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeliveryChannels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeliveryChannelsResponseBodyDeliveryChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryChannels = make_shared<vector<DescribeDeliveryChannelsResponseBodyDeliveryChannels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDeliveryChannelsResponseBody() = default;
};
class DescribeDeliveryChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDeliveryChannelsResponseBody> body{};

  DescribeDeliveryChannelsResponse() {}

  explicit DescribeDeliveryChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeliveryChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeliveryChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeliveryChannelsResponse() = default;
};
class ListAggregateDiscoveredResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceDeleted{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> resourceTypes{};
  shared_ptr<string> regions{};
  shared_ptr<string> complianceType{};
  shared_ptr<string> aggregatorId{};
  shared_ptr<long> resourceOwnerId{};

  ListAggregateDiscoveredResourcesRequest() {}

  explicit ListAggregateDiscoveredResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceDeleted) {
      res["ResourceDeleted"] = boost::any(*resourceDeleted);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (regions) {
      res["Regions"] = boost::any(*regions);
    }
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (aggregatorId) {
      res["AggregatorId"] = boost::any(*aggregatorId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceDeleted") != m.end() && !m["ResourceDeleted"].empty()) {
      resourceDeleted = make_shared<long>(boost::any_cast<long>(m["ResourceDeleted"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      resourceTypes = make_shared<string>(boost::any_cast<string>(m["ResourceTypes"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      regions = make_shared<string>(boost::any_cast<string>(m["Regions"]));
    }
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("AggregatorId") != m.end() && !m["AggregatorId"].empty()) {
      aggregatorId = make_shared<string>(boost::any_cast<string>(m["AggregatorId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListAggregateDiscoveredResourcesRequest() = default;
};
class ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreationTime{};
  shared_ptr<string> tags{};
  shared_ptr<long> accountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<long> resourceDeleted{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<long> resourceOwnerId{};

  ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList() {}

  explicit ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreationTime) {
      res["ResourceCreationTime"] = boost::any(*resourceCreationTime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceDeleted) {
      res["ResourceDeleted"] = boost::any(*resourceDeleted);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreationTime") != m.end() && !m["ResourceCreationTime"].empty()) {
      resourceCreationTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreationTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceDeleted") != m.end() && !m["ResourceDeleted"].empty()) {
      resourceDeleted = make_shared<long>(boost::any_cast<long>(m["ResourceDeleted"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList() = default;
};
class ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles : public Darabonba::Model {
public:
  shared_ptr<vector<ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList>> discoveredResourceProfileList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles() {}

  explicit ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceProfileList) {
      vector<boost::any> temp1;
      for(auto item1:*discoveredResourceProfileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiscoveredResourceProfileList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("DiscoveredResourceProfileList") != m.end() && !m["DiscoveredResourceProfileList"].empty()) {
      if (typeid(vector<boost::any>) == m["DiscoveredResourceProfileList"].type()) {
        vector<ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiscoveredResourceProfileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        discoveredResourceProfileList = make_shared<vector<ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfilesDiscoveredResourceProfileList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles() = default;
};
class ListAggregateDiscoveredResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles> discoveredResourceProfiles{};
  shared_ptr<string> requestId{};

  ListAggregateDiscoveredResourcesResponseBody() {}

  explicit ListAggregateDiscoveredResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discoveredResourceProfiles) {
      res["DiscoveredResourceProfiles"] = discoveredResourceProfiles ? boost::any(discoveredResourceProfiles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscoveredResourceProfiles") != m.end() && !m["DiscoveredResourceProfiles"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiscoveredResourceProfiles"].type()) {
        ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiscoveredResourceProfiles"]));
        discoveredResourceProfiles = make_shared<ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAggregateDiscoveredResourcesResponseBody() = default;
};
class ListAggregateDiscoveredResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAggregateDiscoveredResourcesResponseBody> body{};

  ListAggregateDiscoveredResourcesResponse() {}

  explicit ListAggregateDiscoveredResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAggregateDiscoveredResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAggregateDiscoveredResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAggregateDiscoveredResourcesResponse() = default;
};
class DescribeDiscoveredResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> region{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  DescribeDiscoveredResourceRequest() {}

  explicit DescribeDiscoveredResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
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
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~DescribeDiscoveredResourceRequest() = default;
};
class DescribeDiscoveredResourceResponseBodyDiscoveredResourceDetail : public Darabonba::Model {
public:
  shared_ptr<string> availabilityZone{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> configuration{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreationTime{};
  shared_ptr<string> tags{};
  shared_ptr<long> accountId{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceDeleted{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceStatus{};

  DescribeDiscoveredResourceResponseBodyDiscoveredResourceDetail() {}

  explicit DescribeDiscoveredResourceResponseBodyDiscoveredResourceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availabilityZone) {
      res["AvailabilityZone"] = boost::any(*availabilityZone);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreationTime) {
      res["ResourceCreationTime"] = boost::any(*resourceCreationTime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceDeleted) {
      res["ResourceDeleted"] = boost::any(*resourceDeleted);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailabilityZone") != m.end() && !m["AvailabilityZone"].empty()) {
      availabilityZone = make_shared<string>(boost::any_cast<string>(m["AvailabilityZone"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      configuration = make_shared<string>(boost::any_cast<string>(m["Configuration"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreationTime") != m.end() && !m["ResourceCreationTime"].empty()) {
      resourceCreationTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreationTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceDeleted") != m.end() && !m["ResourceDeleted"].empty()) {
      resourceDeleted = make_shared<long>(boost::any_cast<long>(m["ResourceDeleted"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
  }


  virtual ~DescribeDiscoveredResourceResponseBodyDiscoveredResourceDetail() = default;
};
class DescribeDiscoveredResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDiscoveredResourceResponseBodyDiscoveredResourceDetail> discoveredResourceDetail{};

  DescribeDiscoveredResourceResponseBody() {}

  explicit DescribeDiscoveredResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (discoveredResourceDetail) {
      res["DiscoveredResourceDetail"] = discoveredResourceDetail ? boost::any(discoveredResourceDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DiscoveredResourceDetail") != m.end() && !m["DiscoveredResourceDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiscoveredResourceDetail"].type()) {
        DescribeDiscoveredResourceResponseBodyDiscoveredResourceDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiscoveredResourceDetail"]));
        discoveredResourceDetail = make_shared<DescribeDiscoveredResourceResponseBodyDiscoveredResourceDetail>(model1);
      }
    }
  }


  virtual ~DescribeDiscoveredResourceResponseBody() = default;
};
class DescribeDiscoveredResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDiscoveredResourceResponseBody> body{};

  DescribeDiscoveredResourceResponse() {}

  explicit DescribeDiscoveredResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiscoveredResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiscoveredResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiscoveredResourceResponse() = default;
};
class DescribeComplianceSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  DescribeComplianceSummaryRequest() {}

  explicit DescribeComplianceSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~DescribeComplianceSummaryRequest() = default;
};
class DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource : public Darabonba::Model {
public:
  shared_ptr<long> compliantCount{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> complianceSummaryTimestamp{};
  shared_ptr<long> totalCount{};

  DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource() {}

  explicit DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliantCount) {
      res["CompliantCount"] = boost::any(*compliantCount);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (complianceSummaryTimestamp) {
      res["ComplianceSummaryTimestamp"] = boost::any(*complianceSummaryTimestamp);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliantCount") != m.end() && !m["CompliantCount"].empty()) {
      compliantCount = make_shared<long>(boost::any_cast<long>(m["CompliantCount"]));
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("ComplianceSummaryTimestamp") != m.end() && !m["ComplianceSummaryTimestamp"].empty()) {
      complianceSummaryTimestamp = make_shared<long>(boost::any_cast<long>(m["ComplianceSummaryTimestamp"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource() = default;
};
class DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule : public Darabonba::Model {
public:
  shared_ptr<long> compliantCount{};
  shared_ptr<long> nonCompliantCount{};
  shared_ptr<long> complianceSummaryTimestamp{};
  shared_ptr<long> totalCount{};

  DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule() {}

  explicit DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliantCount) {
      res["CompliantCount"] = boost::any(*compliantCount);
    }
    if (nonCompliantCount) {
      res["NonCompliantCount"] = boost::any(*nonCompliantCount);
    }
    if (complianceSummaryTimestamp) {
      res["ComplianceSummaryTimestamp"] = boost::any(*complianceSummaryTimestamp);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliantCount") != m.end() && !m["CompliantCount"].empty()) {
      compliantCount = make_shared<long>(boost::any_cast<long>(m["CompliantCount"]));
    }
    if (m.find("NonCompliantCount") != m.end() && !m["NonCompliantCount"].empty()) {
      nonCompliantCount = make_shared<long>(boost::any_cast<long>(m["NonCompliantCount"]));
    }
    if (m.find("ComplianceSummaryTimestamp") != m.end() && !m["ComplianceSummaryTimestamp"].empty()) {
      complianceSummaryTimestamp = make_shared<long>(boost::any_cast<long>(m["ComplianceSummaryTimestamp"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule() = default;
};
class DescribeComplianceSummaryResponseBodyComplianceSummary : public Darabonba::Model {
public:
  shared_ptr<DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource> complianceSummaryByResource{};
  shared_ptr<DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule> complianceSummaryByConfigRule{};

  DescribeComplianceSummaryResponseBodyComplianceSummary() {}

  explicit DescribeComplianceSummaryResponseBodyComplianceSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceSummaryByResource) {
      res["ComplianceSummaryByResource"] = complianceSummaryByResource ? boost::any(complianceSummaryByResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complianceSummaryByConfigRule) {
      res["ComplianceSummaryByConfigRule"] = complianceSummaryByConfigRule ? boost::any(complianceSummaryByConfigRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceSummaryByResource") != m.end() && !m["ComplianceSummaryByResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceSummaryByResource"].type()) {
        DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceSummaryByResource"]));
        complianceSummaryByResource = make_shared<DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource>(model1);
      }
    }
    if (m.find("ComplianceSummaryByConfigRule") != m.end() && !m["ComplianceSummaryByConfigRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceSummaryByConfigRule"].type()) {
        DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceSummaryByConfigRule"]));
        complianceSummaryByConfigRule = make_shared<DescribeComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule>(model1);
      }
    }
  }


  virtual ~DescribeComplianceSummaryResponseBodyComplianceSummary() = default;
};
class DescribeComplianceSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeComplianceSummaryResponseBodyComplianceSummary> complianceSummary{};

  DescribeComplianceSummaryResponseBody() {}

  explicit DescribeComplianceSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (complianceSummary) {
      res["ComplianceSummary"] = complianceSummary ? boost::any(complianceSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ComplianceSummary") != m.end() && !m["ComplianceSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceSummary"].type()) {
        DescribeComplianceSummaryResponseBodyComplianceSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceSummary"]));
        complianceSummary = make_shared<DescribeComplianceSummaryResponseBodyComplianceSummary>(model1);
      }
    }
  }


  virtual ~DescribeComplianceSummaryResponseBody() = default;
};
class DescribeComplianceSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeComplianceSummaryResponseBody> body{};

  DescribeComplianceSummaryResponse() {}

  explicit DescribeComplianceSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeComplianceSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeComplianceSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeComplianceSummaryResponse() = default;
};
class PutEvaluationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> resultToken{};
  shared_ptr<string> evaluations{};

  PutEvaluationsRequest() {}

  explicit PutEvaluationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultToken) {
      res["ResultToken"] = boost::any(*resultToken);
    }
    if (evaluations) {
      res["Evaluations"] = boost::any(*evaluations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultToken") != m.end() && !m["ResultToken"].empty()) {
      resultToken = make_shared<string>(boost::any_cast<string>(m["ResultToken"]));
    }
    if (m.find("Evaluations") != m.end() && !m["Evaluations"].empty()) {
      evaluations = make_shared<string>(boost::any_cast<string>(m["Evaluations"]));
    }
  }


  virtual ~PutEvaluationsRequest() = default;
};
class PutEvaluationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  PutEvaluationsResponseBody() {}

  explicit PutEvaluationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~PutEvaluationsResponseBody() = default;
};
class PutEvaluationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutEvaluationsResponseBody> body{};

  PutEvaluationsResponse() {}

  explicit PutEvaluationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutEvaluationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutEvaluationsResponseBody>(model1);
      }
    }
  }


  virtual ~PutEvaluationsResponse() = default;
};
class GetSupportedResourceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceTypes{};
  shared_ptr<string> requestId{};

  GetSupportedResourceTypesResponseBody() {}

  explicit GetSupportedResourceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSupportedResourceTypesResponseBody() = default;
};
class GetSupportedResourceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSupportedResourceTypesResponseBody> body{};

  GetSupportedResourceTypesResponse() {}

  explicit GetSupportedResourceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSupportedResourceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSupportedResourceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~GetSupportedResourceTypesResponse() = default;
};
class ActiveConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleIds{};

  ActiveConfigRulesRequest() {}

  explicit ActiveConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~ActiveConfigRulesRequest() = default;
};
class ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> configRuleId{};

  ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class ActiveConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  ActiveConfigRulesResponseBodyOperateRuleResult() {}

  explicit ActiveConfigRulesResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~ActiveConfigRulesResponseBodyOperateRuleResult() = default;
};
class ActiveConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ActiveConfigRulesResponseBodyOperateRuleResult> operateRuleResult{};

  ActiveConfigRulesResponseBody() {}

  explicit ActiveConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        ActiveConfigRulesResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<ActiveConfigRulesResponseBodyOperateRuleResult>(model1);
      }
    }
  }


  virtual ~ActiveConfigRulesResponseBody() = default;
};
class ActiveConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ActiveConfigRulesResponseBody> body{};

  ActiveConfigRulesResponse() {}

  explicit ActiveConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActiveConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActiveConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ActiveConfigRulesResponse() = default;
};
class DescribeConfigRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleId{};
  shared_ptr<bool> multiAccount{};
  shared_ptr<long> memberId{};

  DescribeConfigRuleRequest() {}

  explicit DescribeConfigRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (multiAccount) {
      res["MultiAccount"] = boost::any(*multiAccount);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("MultiAccount") != m.end() && !m["MultiAccount"].empty()) {
      multiAccount = make_shared<bool>(boost::any_cast<bool>(m["MultiAccount"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<long>(boost::any_cast<long>(m["MemberId"]));
    }
  }


  virtual ~DescribeConfigRuleRequest() = default;
};
class DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> messageType{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> maximumExecutionFrequency{};

  DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails() {}

  explicit DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails() = default;
};
class DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions : public Darabonba::Model {
public:
  shared_ptr<string> desiredValue{};
  shared_ptr<string> tips{};
  shared_ptr<string> operator_{};
  shared_ptr<string> name{};

  DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions() {}

  explicit DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desiredValue) {
      res["DesiredValue"] = boost::any(*desiredValue);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesiredValue") != m.end() && !m["DesiredValue"].empty()) {
      desiredValue = make_shared<string>(boost::any_cast<string>(m["DesiredValue"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions() = default;
};
class DescribeConfigRuleResponseBodyConfigRuleSource : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails>> sourceDetails{};
  shared_ptr<string> owner{};
  shared_ptr<vector<DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions>> sourceConditions{};
  shared_ptr<string> identifier{};

  DescribeConfigRuleResponseBodyConfigRuleSource() {}

  explicit DescribeConfigRuleResponseBodyConfigRuleSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDetails"] = boost::any(temp1);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (sourceConditions) {
      vector<boost::any> temp1;
      for(auto item1:*sourceConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceConditions"] = boost::any(temp1);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceDetails") != m.end() && !m["SourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDetails"].type()) {
        vector<DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDetails = make_shared<vector<DescribeConfigRuleResponseBodyConfigRuleSourceSourceDetails>>(expect1);
      }
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("SourceConditions") != m.end() && !m["SourceConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceConditions"].type()) {
        vector<DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceConditions = make_shared<vector<DescribeConfigRuleResponseBodyConfigRuleSourceSourceConditions>>(expect1);
      }
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRuleSource() = default;
};
class DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> messageType{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> maximumExecutionFrequency{};

  DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() {}

  explicit DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() = default;
};
class DescribeConfigRuleResponseBodyConfigRuleManagedRule : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>> sourceDetails{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> identifier{};
  shared_ptr<map<string, boost::any>> optionalInputParameterDetails{};
  shared_ptr<string> managedRuleName{};
  shared_ptr<map<string, boost::any>> compulsoryInputParameterDetails{};

  DescribeConfigRuleResponseBodyConfigRuleManagedRule() {}

  explicit DescribeConfigRuleResponseBodyConfigRuleManagedRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDetails"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (optionalInputParameterDetails) {
      res["OptionalInputParameterDetails"] = boost::any(*optionalInputParameterDetails);
    }
    if (managedRuleName) {
      res["ManagedRuleName"] = boost::any(*managedRuleName);
    }
    if (compulsoryInputParameterDetails) {
      res["CompulsoryInputParameterDetails"] = boost::any(*compulsoryInputParameterDetails);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceDetails") != m.end() && !m["SourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDetails"].type()) {
        vector<DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDetails = make_shared<vector<DescribeConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("OptionalInputParameterDetails") != m.end() && !m["OptionalInputParameterDetails"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OptionalInputParameterDetails"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      optionalInputParameterDetails = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ManagedRuleName") != m.end() && !m["ManagedRuleName"].empty()) {
      managedRuleName = make_shared<string>(boost::any_cast<string>(m["ManagedRuleName"]));
    }
    if (m.find("CompulsoryInputParameterDetails") != m.end() && !m["CompulsoryInputParameterDetails"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompulsoryInputParameterDetails"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compulsoryInputParameterDetails = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRuleManagedRule() = default;
};
class DescribeConfigRuleResponseBodyConfigRuleScope : public Darabonba::Model {
public:
  shared_ptr<vector<string>> complianceResourceTypes{};
  shared_ptr<string> complianceResourceId{};

  DescribeConfigRuleResponseBodyConfigRuleScope() {}

  explicit DescribeConfigRuleResponseBodyConfigRuleScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceResourceTypes) {
      res["ComplianceResourceTypes"] = boost::any(*complianceResourceTypes);
    }
    if (complianceResourceId) {
      res["ComplianceResourceId"] = boost::any(*complianceResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceResourceTypes") != m.end() && !m["ComplianceResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComplianceResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComplianceResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      complianceResourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ComplianceResourceId") != m.end() && !m["ComplianceResourceId"].empty()) {
      complianceResourceId = make_shared<string>(boost::any_cast<string>(m["ComplianceResourceId"]));
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRuleScope() = default;
};
class DescribeConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus : public Darabonba::Model {
public:
  shared_ptr<string> lastErrorCode{};
  shared_ptr<long> lastSuccessfulEvaluationTimestamp{};
  shared_ptr<long> firstActivatedTimestamp{};
  shared_ptr<bool> firstEvaluationStarted{};
  shared_ptr<long> lastSuccessfulInvocationTimestamp{};
  shared_ptr<string> lastErrorMessage{};
  shared_ptr<long> lastFailedEvaluationTimestamp{};
  shared_ptr<long> lastFailedInvocationTimestamp{};

  DescribeConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() {}

  explicit DescribeConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastErrorCode) {
      res["LastErrorCode"] = boost::any(*lastErrorCode);
    }
    if (lastSuccessfulEvaluationTimestamp) {
      res["LastSuccessfulEvaluationTimestamp"] = boost::any(*lastSuccessfulEvaluationTimestamp);
    }
    if (firstActivatedTimestamp) {
      res["FirstActivatedTimestamp"] = boost::any(*firstActivatedTimestamp);
    }
    if (firstEvaluationStarted) {
      res["FirstEvaluationStarted"] = boost::any(*firstEvaluationStarted);
    }
    if (lastSuccessfulInvocationTimestamp) {
      res["LastSuccessfulInvocationTimestamp"] = boost::any(*lastSuccessfulInvocationTimestamp);
    }
    if (lastErrorMessage) {
      res["LastErrorMessage"] = boost::any(*lastErrorMessage);
    }
    if (lastFailedEvaluationTimestamp) {
      res["LastFailedEvaluationTimestamp"] = boost::any(*lastFailedEvaluationTimestamp);
    }
    if (lastFailedInvocationTimestamp) {
      res["LastFailedInvocationTimestamp"] = boost::any(*lastFailedInvocationTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastErrorCode") != m.end() && !m["LastErrorCode"].empty()) {
      lastErrorCode = make_shared<string>(boost::any_cast<string>(m["LastErrorCode"]));
    }
    if (m.find("LastSuccessfulEvaluationTimestamp") != m.end() && !m["LastSuccessfulEvaluationTimestamp"].empty()) {
      lastSuccessfulEvaluationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastSuccessfulEvaluationTimestamp"]));
    }
    if (m.find("FirstActivatedTimestamp") != m.end() && !m["FirstActivatedTimestamp"].empty()) {
      firstActivatedTimestamp = make_shared<long>(boost::any_cast<long>(m["FirstActivatedTimestamp"]));
    }
    if (m.find("FirstEvaluationStarted") != m.end() && !m["FirstEvaluationStarted"].empty()) {
      firstEvaluationStarted = make_shared<bool>(boost::any_cast<bool>(m["FirstEvaluationStarted"]));
    }
    if (m.find("LastSuccessfulInvocationTimestamp") != m.end() && !m["LastSuccessfulInvocationTimestamp"].empty()) {
      lastSuccessfulInvocationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastSuccessfulInvocationTimestamp"]));
    }
    if (m.find("LastErrorMessage") != m.end() && !m["LastErrorMessage"].empty()) {
      lastErrorMessage = make_shared<string>(boost::any_cast<string>(m["LastErrorMessage"]));
    }
    if (m.find("LastFailedEvaluationTimestamp") != m.end() && !m["LastFailedEvaluationTimestamp"].empty()) {
      lastFailedEvaluationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastFailedEvaluationTimestamp"]));
    }
    if (m.find("LastFailedInvocationTimestamp") != m.end() && !m["LastFailedInvocationTimestamp"].empty()) {
      lastFailedInvocationTimestamp = make_shared<long>(boost::any_cast<long>(m["LastFailedInvocationTimestamp"]));
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() = default;
};
class DescribeConfigRuleResponseBodyConfigRule : public Darabonba::Model {
public:
  shared_ptr<long> riskLevel{};
  shared_ptr<map<string, boost::any>> inputParameters{};
  shared_ptr<DescribeConfigRuleResponseBodyConfigRuleSource> source{};
  shared_ptr<string> configRuleState{};
  shared_ptr<string> maximumExecutionFrequency{};
  shared_ptr<DescribeConfigRuleResponseBodyConfigRuleManagedRule> managedRule{};
  shared_ptr<string> configRuleArn{};
  shared_ptr<string> description{};
  shared_ptr<string> configRuleName{};
  shared_ptr<DescribeConfigRuleResponseBodyConfigRuleScope> scope{};
  shared_ptr<DescribeConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus> configRuleEvaluationStatus{};
  shared_ptr<string> configRuleId{};
  shared_ptr<long> modifiedTimestamp{};
  shared_ptr<long> createTimestamp{};

  DescribeConfigRuleResponseBodyConfigRule() {}

  explicit DescribeConfigRuleResponseBodyConfigRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (inputParameters) {
      res["InputParameters"] = boost::any(*inputParameters);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configRuleState) {
      res["ConfigRuleState"] = boost::any(*configRuleState);
    }
    if (maximumExecutionFrequency) {
      res["MaximumExecutionFrequency"] = boost::any(*maximumExecutionFrequency);
    }
    if (managedRule) {
      res["ManagedRule"] = managedRule ? boost::any(managedRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configRuleArn) {
      res["ConfigRuleArn"] = boost::any(*configRuleArn);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (configRuleName) {
      res["ConfigRuleName"] = boost::any(*configRuleName);
    }
    if (scope) {
      res["Scope"] = scope ? boost::any(scope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configRuleEvaluationStatus) {
      res["ConfigRuleEvaluationStatus"] = configRuleEvaluationStatus ? boost::any(configRuleEvaluationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    if (modifiedTimestamp) {
      res["ModifiedTimestamp"] = boost::any(*modifiedTimestamp);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("InputParameters") != m.end() && !m["InputParameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InputParameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputParameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        DescribeConfigRuleResponseBodyConfigRuleSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<DescribeConfigRuleResponseBodyConfigRuleSource>(model1);
      }
    }
    if (m.find("ConfigRuleState") != m.end() && !m["ConfigRuleState"].empty()) {
      configRuleState = make_shared<string>(boost::any_cast<string>(m["ConfigRuleState"]));
    }
    if (m.find("MaximumExecutionFrequency") != m.end() && !m["MaximumExecutionFrequency"].empty()) {
      maximumExecutionFrequency = make_shared<string>(boost::any_cast<string>(m["MaximumExecutionFrequency"]));
    }
    if (m.find("ManagedRule") != m.end() && !m["ManagedRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManagedRule"].type()) {
        DescribeConfigRuleResponseBodyConfigRuleManagedRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManagedRule"]));
        managedRule = make_shared<DescribeConfigRuleResponseBodyConfigRuleManagedRule>(model1);
      }
    }
    if (m.find("ConfigRuleArn") != m.end() && !m["ConfigRuleArn"].empty()) {
      configRuleArn = make_shared<string>(boost::any_cast<string>(m["ConfigRuleArn"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ConfigRuleName") != m.end() && !m["ConfigRuleName"].empty()) {
      configRuleName = make_shared<string>(boost::any_cast<string>(m["ConfigRuleName"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scope"].type()) {
        DescribeConfigRuleResponseBodyConfigRuleScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scope"]));
        scope = make_shared<DescribeConfigRuleResponseBodyConfigRuleScope>(model1);
      }
    }
    if (m.find("ConfigRuleEvaluationStatus") != m.end() && !m["ConfigRuleEvaluationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRuleEvaluationStatus"].type()) {
        DescribeConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRuleEvaluationStatus"]));
        configRuleEvaluationStatus = make_shared<DescribeConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus>(model1);
      }
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
    if (m.find("ModifiedTimestamp") != m.end() && !m["ModifiedTimestamp"].empty()) {
      modifiedTimestamp = make_shared<long>(boost::any_cast<long>(m["ModifiedTimestamp"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
  }


  virtual ~DescribeConfigRuleResponseBodyConfigRule() = default;
};
class DescribeConfigRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeConfigRuleResponseBodyConfigRule> configRule{};

  DescribeConfigRuleResponseBody() {}

  explicit DescribeConfigRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configRule) {
      res["ConfigRule"] = configRule ? boost::any(configRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConfigRule") != m.end() && !m["ConfigRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigRule"].type()) {
        DescribeConfigRuleResponseBodyConfigRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigRule"]));
        configRule = make_shared<DescribeConfigRuleResponseBodyConfigRule>(model1);
      }
    }
  }


  virtual ~DescribeConfigRuleResponseBody() = default;
};
class DescribeConfigRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConfigRuleResponseBody> body{};

  DescribeConfigRuleResponse() {}

  explicit DescribeConfigRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigRuleResponse() = default;
};
class DeleteConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleIds{};

  DeleteConfigRulesRequest() {}

  explicit DeleteConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~DeleteConfigRulesRequest() = default;
};
class DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> configRuleId{};

  DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class DeleteConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  DeleteConfigRulesResponseBodyOperateRuleResult() {}

  explicit DeleteConfigRulesResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~DeleteConfigRulesResponseBodyOperateRuleResult() = default;
};
class DeleteConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteConfigRulesResponseBodyOperateRuleResult> operateRuleResult{};

  DeleteConfigRulesResponseBody() {}

  explicit DeleteConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        DeleteConfigRulesResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<DeleteConfigRulesResponseBodyOperateRuleResult>(model1);
      }
    }
  }


  virtual ~DeleteConfigRulesResponseBody() = default;
};
class DeleteConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteConfigRulesResponseBody> body{};

  DeleteConfigRulesResponse() {}

  explicit DeleteConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConfigRulesResponse() = default;
};
class StopConfigRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> configRuleIds{};

  StopConfigRulesRequest() {}

  explicit StopConfigRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configRuleIds) {
      res["ConfigRuleIds"] = boost::any(*configRuleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigRuleIds") != m.end() && !m["ConfigRuleIds"].empty()) {
      configRuleIds = make_shared<string>(boost::any_cast<string>(m["ConfigRuleIds"]));
    }
  }


  virtual ~StopConfigRulesRequest() = default;
};
class StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> configRuleId{};

  StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() {}

  explicit StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (configRuleId) {
      res["ConfigRuleId"] = boost::any(*configRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ConfigRuleId") != m.end() && !m["ConfigRuleId"].empty()) {
      configRuleId = make_shared<string>(boost::any_cast<string>(m["ConfigRuleId"]));
    }
  }


  virtual ~StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList() = default;
};
class StopConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
public:
  shared_ptr<vector<StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList{};

  StopConfigRulesResponseBodyOperateRuleResult() {}

  explicit StopConfigRulesResponseBodyOperateRuleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateRuleItemList) {
      vector<boost::any> temp1;
      for(auto item1:*operateRuleItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperateRuleItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateRuleItemList") != m.end() && !m["OperateRuleItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperateRuleItemList"].type()) {
        vector<StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperateRuleItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operateRuleItemList = make_shared<vector<StopConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>>(expect1);
      }
    }
  }


  virtual ~StopConfigRulesResponseBodyOperateRuleResult() = default;
};
class StopConfigRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<StopConfigRulesResponseBodyOperateRuleResult> operateRuleResult{};

  StopConfigRulesResponseBody() {}

  explicit StopConfigRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (operateRuleResult) {
      res["OperateRuleResult"] = operateRuleResult ? boost::any(operateRuleResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OperateRuleResult") != m.end() && !m["OperateRuleResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateRuleResult"].type()) {
        StopConfigRulesResponseBodyOperateRuleResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateRuleResult"]));
        operateRuleResult = make_shared<StopConfigRulesResponseBodyOperateRuleResult>(model1);
      }
    }
  }


  virtual ~StopConfigRulesResponseBody() = default;
};
class StopConfigRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopConfigRulesResponseBody> body{};

  StopConfigRulesResponse() {}

  explicit StopConfigRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopConfigRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopConfigRulesResponseBody>(model1);
      }
    }
  }


  virtual ~StopConfigRulesResponse() = default;
};
class PutConfigurationRecorderRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceTypes{};

  PutConfigurationRecorderRequest() {}

  explicit PutConfigurationRecorderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      resourceTypes = make_shared<string>(boost::any_cast<string>(m["ResourceTypes"]));
    }
  }


  virtual ~PutConfigurationRecorderRequest() = default;
};
class PutConfigurationRecorderResponseBodyConfigurationRecorder : public Darabonba::Model {
public:
  shared_ptr<string> configurationRecorderStatus{};
  shared_ptr<long> accountId{};
  shared_ptr<vector<string>> resourceTypes{};

  PutConfigurationRecorderResponseBodyConfigurationRecorder() {}

  explicit PutConfigurationRecorderResponseBodyConfigurationRecorder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurationRecorderStatus) {
      res["ConfigurationRecorderStatus"] = boost::any(*configurationRecorderStatus);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigurationRecorderStatus") != m.end() && !m["ConfigurationRecorderStatus"].empty()) {
      configurationRecorderStatus = make_shared<string>(boost::any_cast<string>(m["ConfigurationRecorderStatus"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PutConfigurationRecorderResponseBodyConfigurationRecorder() = default;
};
class PutConfigurationRecorderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PutConfigurationRecorderResponseBodyConfigurationRecorder> configurationRecorder{};

  PutConfigurationRecorderResponseBody() {}

  explicit PutConfigurationRecorderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configurationRecorder) {
      res["ConfigurationRecorder"] = configurationRecorder ? boost::any(configurationRecorder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConfigurationRecorder") != m.end() && !m["ConfigurationRecorder"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigurationRecorder"].type()) {
        PutConfigurationRecorderResponseBodyConfigurationRecorder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigurationRecorder"]));
        configurationRecorder = make_shared<PutConfigurationRecorderResponseBodyConfigurationRecorder>(model1);
      }
    }
  }


  virtual ~PutConfigurationRecorderResponseBody() = default;
};
class PutConfigurationRecorderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutConfigurationRecorderResponseBody> body{};

  PutConfigurationRecorderResponse() {}

  explicit PutConfigurationRecorderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutConfigurationRecorderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutConfigurationRecorderResponseBody>(model1);
      }
    }
  }


  virtual ~PutConfigurationRecorderResponse() = default;
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
  ListConfigRulesResponse listConfigRulesWithOptions(shared_ptr<ListConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigRulesResponse listConfigRules(shared_ptr<ListConfigRulesRequest> request);
  DescribeComplianceResponse describeComplianceWithOptions(shared_ptr<DescribeComplianceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComplianceResponse describeCompliance(shared_ptr<DescribeComplianceRequest> request);
  GetResourceConfigurationTimelineResponse getResourceConfigurationTimelineWithOptions(shared_ptr<GetResourceConfigurationTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceConfigurationTimelineResponse getResourceConfigurationTimeline(shared_ptr<GetResourceConfigurationTimelineRequest> request);
  PutConfigRuleResponse putConfigRuleWithOptions(shared_ptr<PutConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutConfigRuleResponse putConfigRule(shared_ptr<PutConfigRuleRequest> request);
  GetDiscoveredResourceSummaryResponse getDiscoveredResourceSummaryWithOptions(shared_ptr<GetDiscoveredResourceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiscoveredResourceSummaryResponse getDiscoveredResourceSummary(shared_ptr<GetDiscoveredResourceSummaryRequest> request);
  StartConfigurationRecorderResponse startConfigurationRecorderWithOptions(shared_ptr<StartConfigurationRecorderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartConfigurationRecorderResponse startConfigurationRecorder(shared_ptr<StartConfigurationRecorderRequest> request);
  DescribeConfigurationRecorderResponse describeConfigurationRecorderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigurationRecorderResponse describeConfigurationRecorder();
  StartConfigRuleEvaluationResponse startConfigRuleEvaluationWithOptions(shared_ptr<StartConfigRuleEvaluationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartConfigRuleEvaluationResponse startConfigRuleEvaluation(shared_ptr<StartConfigRuleEvaluationRequest> request);
  PutDeliveryChannelResponse putDeliveryChannelWithOptions(shared_ptr<PutDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutDeliveryChannelResponse putDeliveryChannel(shared_ptr<PutDeliveryChannelRequest> request);
  GetResourceComplianceTimelineResponse getResourceComplianceTimelineWithOptions(shared_ptr<GetResourceComplianceTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceComplianceTimelineResponse getResourceComplianceTimeline(shared_ptr<GetResourceComplianceTimelineRequest> request);
  GetAggregateDiscoveredResourceResponse getAggregateDiscoveredResourceWithOptions(shared_ptr<GetAggregateDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAggregateDiscoveredResourceResponse getAggregateDiscoveredResource(shared_ptr<GetAggregateDiscoveredResourceRequest> request);
  ListRemediationTemplatesResponse listRemediationTemplatesWithOptions(shared_ptr<ListRemediationTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRemediationTemplatesResponse listRemediationTemplates(shared_ptr<ListRemediationTemplatesRequest> request);
  DescribeEvaluationResultsResponse describeEvaluationResultsWithOptions(shared_ptr<DescribeEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEvaluationResultsResponse describeEvaluationResults(shared_ptr<DescribeEvaluationResultsRequest> request);
  ListDiscoveredResourcesResponse listDiscoveredResourcesWithOptions(shared_ptr<ListDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDiscoveredResourcesResponse listDiscoveredResources(shared_ptr<ListDiscoveredResourcesRequest> request);
  GetDiscoveredResourceCountsResponse getDiscoveredResourceCountsWithOptions(shared_ptr<GetDiscoveredResourceCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiscoveredResourceCountsResponse getDiscoveredResourceCounts(shared_ptr<GetDiscoveredResourceCountsRequest> request);
  DescribeDeliveryChannelsResponse describeDeliveryChannelsWithOptions(shared_ptr<DescribeDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeliveryChannelsResponse describeDeliveryChannels(shared_ptr<DescribeDeliveryChannelsRequest> request);
  ListAggregateDiscoveredResourcesResponse listAggregateDiscoveredResourcesWithOptions(shared_ptr<ListAggregateDiscoveredResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAggregateDiscoveredResourcesResponse listAggregateDiscoveredResources(shared_ptr<ListAggregateDiscoveredResourcesRequest> request);
  DescribeDiscoveredResourceResponse describeDiscoveredResourceWithOptions(shared_ptr<DescribeDiscoveredResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiscoveredResourceResponse describeDiscoveredResource(shared_ptr<DescribeDiscoveredResourceRequest> request);
  DescribeComplianceSummaryResponse describeComplianceSummaryWithOptions(shared_ptr<DescribeComplianceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeComplianceSummaryResponse describeComplianceSummary(shared_ptr<DescribeComplianceSummaryRequest> request);
  PutEvaluationsResponse putEvaluationsWithOptions(shared_ptr<PutEvaluationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEvaluationsResponse putEvaluations(shared_ptr<PutEvaluationsRequest> request);
  GetSupportedResourceTypesResponse getSupportedResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSupportedResourceTypesResponse getSupportedResourceTypes();
  ActiveConfigRulesResponse activeConfigRulesWithOptions(shared_ptr<ActiveConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActiveConfigRulesResponse activeConfigRules(shared_ptr<ActiveConfigRulesRequest> request);
  DescribeConfigRuleResponse describeConfigRuleWithOptions(shared_ptr<DescribeConfigRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigRuleResponse describeConfigRule(shared_ptr<DescribeConfigRuleRequest> request);
  DeleteConfigRulesResponse deleteConfigRulesWithOptions(shared_ptr<DeleteConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConfigRulesResponse deleteConfigRules(shared_ptr<DeleteConfigRulesRequest> request);
  StopConfigRulesResponse stopConfigRulesWithOptions(shared_ptr<StopConfigRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopConfigRulesResponse stopConfigRules(shared_ptr<StopConfigRulesRequest> request);
  PutConfigurationRecorderResponse putConfigurationRecorderWithOptions(shared_ptr<PutConfigurationRecorderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutConfigurationRecorderResponse putConfigurationRecorder(shared_ptr<PutConfigurationRecorderRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Config20190108

#endif
