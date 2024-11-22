// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BDRC20230808_H_
#define ALIBABACLOUD_BDRC20230808_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BDRC20230808 {
class CheckRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};
  shared_ptr<string> ruleId{};

  CheckRulesRequest() {}

  explicit CheckRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CheckRulesRequest() = default;
};
class CheckRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  CheckRulesResponseBodyData() {}

  explicit CheckRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CheckRulesResponseBodyData() = default;
};
class CheckRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckRulesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckRulesResponseBody() {}

  explicit CheckRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CheckRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckRulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckRulesResponseBody() = default;
};
class CheckRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckRulesResponseBody> body{};

  CheckRulesResponse() {}

  explicit CheckRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckRulesResponseBody>(model1);
      }
    }
  }


  virtual ~CheckRulesResponse() = default;
};
class CloseBdrcServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CloseBdrcServiceResponseBody() {}

  explicit CloseBdrcServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseBdrcServiceResponseBody() = default;
};
class CloseBdrcServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseBdrcServiceResponseBody> body{};

  CloseBdrcServiceResponse() {}

  explicit CloseBdrcServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseBdrcServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseBdrcServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CloseBdrcServiceResponse() = default;
};
class DescribeCheckDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> ruleId{};

  DescribeCheckDetailsRequest() {}

  explicit DescribeCheckDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeCheckDetailsRequest() = default;
};
class DescribeCheckDetailsResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<long> checkTime{};
  shared_ptr<string> detail{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleTemplate{};

  DescribeCheckDetailsResponseBodyDataContent() {}

  explicit DescribeCheckDetailsResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkTime) {
      res["CheckTime"] = boost::any(*checkTime);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
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
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleTemplate) {
      res["RuleTemplate"] = boost::any(*ruleTemplate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckTime") != m.end() && !m["CheckTime"].empty()) {
      checkTime = make_shared<long>(boost::any_cast<long>(m["CheckTime"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
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
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleTemplate") != m.end() && !m["RuleTemplate"].empty()) {
      ruleTemplate = make_shared<string>(boost::any_cast<string>(m["RuleTemplate"]));
    }
  }


  virtual ~DescribeCheckDetailsResponseBodyDataContent() = default;
};
class DescribeCheckDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCheckDetailsResponseBodyDataContent>> content{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  DescribeCheckDetailsResponseBodyData() {}

  explicit DescribeCheckDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeCheckDetailsResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCheckDetailsResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeCheckDetailsResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCheckDetailsResponseBodyData() = default;
};
class DescribeCheckDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCheckDetailsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeCheckDetailsResponseBody() {}

  explicit DescribeCheckDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeCheckDetailsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCheckDetailsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCheckDetailsResponseBody() = default;
};
class DescribeCheckDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCheckDetailsResponseBody> body{};

  DescribeCheckDetailsResponse() {}

  explicit DescribeCheckDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCheckDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCheckDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCheckDetailsResponse() = default;
};
class DescribeProductsResponseBodyDataContentProtectionScoreDistributionRange : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> to{};

  DescribeProductsResponseBodyDataContentProtectionScoreDistributionRange() {}

  explicit DescribeProductsResponseBodyDataContentProtectionScoreDistributionRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~DescribeProductsResponseBodyDataContentProtectionScoreDistributionRange() = default;
};
class DescribeProductsResponseBodyDataContentProtectionScoreDistribution : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<DescribeProductsResponseBodyDataContentProtectionScoreDistributionRange> range{};

  DescribeProductsResponseBodyDataContentProtectionScoreDistribution() {}

  explicit DescribeProductsResponseBodyDataContentProtectionScoreDistribution(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (range) {
      res["Range"] = range ? boost::any(range->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      if (typeid(map<string, boost::any>) == m["Range"].type()) {
        DescribeProductsResponseBodyDataContentProtectionScoreDistributionRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Range"]));
        range = make_shared<DescribeProductsResponseBodyDataContentProtectionScoreDistributionRange>(model1);
      }
    }
  }


  virtual ~DescribeProductsResponseBodyDataContentProtectionScoreDistribution() = default;
};
class DescribeProductsResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<long> checkFailedCount{};
  shared_ptr<long> checkFailedResourceCount{};
  shared_ptr<long> disableCheckResourceCount{};
  shared_ptr<bool> enableCheck{};
  shared_ptr<string> productType{};
  shared_ptr<long> protectionScore{};
  shared_ptr<vector<DescribeProductsResponseBodyDataContentProtectionScoreDistribution>> protectionScoreDistribution{};
  shared_ptr<long> protectionScoreUpdatedTime{};
  shared_ptr<long> riskCount{};
  shared_ptr<long> riskyResourceCount{};
  shared_ptr<long> totalResourceCount{};

  DescribeProductsResponseBodyDataContent() {}

  explicit DescribeProductsResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkFailedCount) {
      res["CheckFailedCount"] = boost::any(*checkFailedCount);
    }
    if (checkFailedResourceCount) {
      res["CheckFailedResourceCount"] = boost::any(*checkFailedResourceCount);
    }
    if (disableCheckResourceCount) {
      res["DisableCheckResourceCount"] = boost::any(*disableCheckResourceCount);
    }
    if (enableCheck) {
      res["EnableCheck"] = boost::any(*enableCheck);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (protectionScore) {
      res["ProtectionScore"] = boost::any(*protectionScore);
    }
    if (protectionScoreDistribution) {
      vector<boost::any> temp1;
      for(auto item1:*protectionScoreDistribution){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProtectionScoreDistribution"] = boost::any(temp1);
    }
    if (protectionScoreUpdatedTime) {
      res["ProtectionScoreUpdatedTime"] = boost::any(*protectionScoreUpdatedTime);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (riskyResourceCount) {
      res["RiskyResourceCount"] = boost::any(*riskyResourceCount);
    }
    if (totalResourceCount) {
      res["TotalResourceCount"] = boost::any(*totalResourceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckFailedCount") != m.end() && !m["CheckFailedCount"].empty()) {
      checkFailedCount = make_shared<long>(boost::any_cast<long>(m["CheckFailedCount"]));
    }
    if (m.find("CheckFailedResourceCount") != m.end() && !m["CheckFailedResourceCount"].empty()) {
      checkFailedResourceCount = make_shared<long>(boost::any_cast<long>(m["CheckFailedResourceCount"]));
    }
    if (m.find("DisableCheckResourceCount") != m.end() && !m["DisableCheckResourceCount"].empty()) {
      disableCheckResourceCount = make_shared<long>(boost::any_cast<long>(m["DisableCheckResourceCount"]));
    }
    if (m.find("EnableCheck") != m.end() && !m["EnableCheck"].empty()) {
      enableCheck = make_shared<bool>(boost::any_cast<bool>(m["EnableCheck"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProtectionScore") != m.end() && !m["ProtectionScore"].empty()) {
      protectionScore = make_shared<long>(boost::any_cast<long>(m["ProtectionScore"]));
    }
    if (m.find("ProtectionScoreDistribution") != m.end() && !m["ProtectionScoreDistribution"].empty()) {
      if (typeid(vector<boost::any>) == m["ProtectionScoreDistribution"].type()) {
        vector<DescribeProductsResponseBodyDataContentProtectionScoreDistribution> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProtectionScoreDistribution"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductsResponseBodyDataContentProtectionScoreDistribution model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        protectionScoreDistribution = make_shared<vector<DescribeProductsResponseBodyDataContentProtectionScoreDistribution>>(expect1);
      }
    }
    if (m.find("ProtectionScoreUpdatedTime") != m.end() && !m["ProtectionScoreUpdatedTime"].empty()) {
      protectionScoreUpdatedTime = make_shared<long>(boost::any_cast<long>(m["ProtectionScoreUpdatedTime"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("RiskyResourceCount") != m.end() && !m["RiskyResourceCount"].empty()) {
      riskyResourceCount = make_shared<long>(boost::any_cast<long>(m["RiskyResourceCount"]));
    }
    if (m.find("TotalResourceCount") != m.end() && !m["TotalResourceCount"].empty()) {
      totalResourceCount = make_shared<long>(boost::any_cast<long>(m["TotalResourceCount"]));
    }
  }


  virtual ~DescribeProductsResponseBodyDataContent() = default;
};
class DescribeProductsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductsResponseBodyDataContent>> content{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  DescribeProductsResponseBodyData() {}

  explicit DescribeProductsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeProductsResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductsResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeProductsResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeProductsResponseBodyData() = default;
};
class DescribeProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeProductsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeProductsResponseBody() {}

  explicit DescribeProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeProductsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeProductsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProductsResponseBody() = default;
};
class DescribeProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProductsResponseBody> body{};

  DescribeProductsResponse() {}

  explicit DescribeProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProductsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProductsResponse() = default;
};
class DescribeResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<string> failedRuleTemplate{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> storageClass{};

  DescribeResourcesRequest() {}

  explicit DescribeResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (failedRuleTemplate) {
      res["FailedRuleTemplate"] = boost::any(*failedRuleTemplate);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
    if (m.find("FailedRuleTemplate") != m.end() && !m["FailedRuleTemplate"].empty()) {
      failedRuleTemplate = make_shared<string>(boost::any_cast<string>(m["FailedRuleTemplate"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
  }


  virtual ~DescribeResourcesRequest() = default;
};
class DescribeResourcesResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<long> archiveDataSize{};
  shared_ptr<long> checkFailedCount{};
  shared_ptr<long> coldArchiveDataSize{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<bool> enableCheck{};
  shared_ptr<long> iaDataSize{};
  shared_ptr<string> productType{};
  shared_ptr<long> protectionScore{};
  shared_ptr<long> protectionScoreUpdatedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> riskCount{};
  shared_ptr<long> standardDataSize{};
  shared_ptr<string> status{};
  shared_ptr<string> storageClass{};
  shared_ptr<long> totalDataSize{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeResourcesResponseBodyDataContent() {}

  explicit DescribeResourcesResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveDataSize) {
      res["ArchiveDataSize"] = boost::any(*archiveDataSize);
    }
    if (checkFailedCount) {
      res["CheckFailedCount"] = boost::any(*checkFailedCount);
    }
    if (coldArchiveDataSize) {
      res["ColdArchiveDataSize"] = boost::any(*coldArchiveDataSize);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (enableCheck) {
      res["EnableCheck"] = boost::any(*enableCheck);
    }
    if (iaDataSize) {
      res["IaDataSize"] = boost::any(*iaDataSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (protectionScore) {
      res["ProtectionScore"] = boost::any(*protectionScore);
    }
    if (protectionScoreUpdatedTime) {
      res["ProtectionScoreUpdatedTime"] = boost::any(*protectionScoreUpdatedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
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
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (standardDataSize) {
      res["StandardDataSize"] = boost::any(*standardDataSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (totalDataSize) {
      res["TotalDataSize"] = boost::any(*totalDataSize);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveDataSize") != m.end() && !m["ArchiveDataSize"].empty()) {
      archiveDataSize = make_shared<long>(boost::any_cast<long>(m["ArchiveDataSize"]));
    }
    if (m.find("CheckFailedCount") != m.end() && !m["CheckFailedCount"].empty()) {
      checkFailedCount = make_shared<long>(boost::any_cast<long>(m["CheckFailedCount"]));
    }
    if (m.find("ColdArchiveDataSize") != m.end() && !m["ColdArchiveDataSize"].empty()) {
      coldArchiveDataSize = make_shared<long>(boost::any_cast<long>(m["ColdArchiveDataSize"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
    if (m.find("EnableCheck") != m.end() && !m["EnableCheck"].empty()) {
      enableCheck = make_shared<bool>(boost::any_cast<bool>(m["EnableCheck"]));
    }
    if (m.find("IaDataSize") != m.end() && !m["IaDataSize"].empty()) {
      iaDataSize = make_shared<long>(boost::any_cast<long>(m["IaDataSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProtectionScore") != m.end() && !m["ProtectionScore"].empty()) {
      protectionScore = make_shared<long>(boost::any_cast<long>(m["ProtectionScore"]));
    }
    if (m.find("ProtectionScoreUpdatedTime") != m.end() && !m["ProtectionScoreUpdatedTime"].empty()) {
      protectionScoreUpdatedTime = make_shared<long>(boost::any_cast<long>(m["ProtectionScoreUpdatedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
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
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("StandardDataSize") != m.end() && !m["StandardDataSize"].empty()) {
      standardDataSize = make_shared<long>(boost::any_cast<long>(m["StandardDataSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("TotalDataSize") != m.end() && !m["TotalDataSize"].empty()) {
      totalDataSize = make_shared<long>(boost::any_cast<long>(m["TotalDataSize"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeResourcesResponseBodyDataContent() = default;
};
class DescribeResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResourcesResponseBodyDataContent>> content{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  DescribeResourcesResponseBodyData() {}

  explicit DescribeResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeResourcesResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourcesResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeResourcesResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeResourcesResponseBodyData() = default;
};
class DescribeResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeResourcesResponseBody() {}

  explicit DescribeResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeResourcesResponseBody() = default;
};
class DescribeResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourcesResponseBody> body{};

  DescribeResourcesResponse() {}

  explicit DescribeResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourcesResponse() = default;
};
class DescribeRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceType{};

  DescribeRulesRequest() {}

  explicit DescribeRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeRulesRequest() = default;
};
class DescribeRulesResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<long> checkFailedResourceCount{};
  shared_ptr<string> checkStatus{};
  shared_ptr<long> checkTime{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> riskyResourceCount{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleTemplate{};
  shared_ptr<long> totalResourceCount{};

  DescribeRulesResponseBodyDataContent() {}

  explicit DescribeRulesResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkFailedResourceCount) {
      res["CheckFailedResourceCount"] = boost::any(*checkFailedResourceCount);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkTime) {
      res["CheckTime"] = boost::any(*checkTime);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (riskyResourceCount) {
      res["RiskyResourceCount"] = boost::any(*riskyResourceCount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleTemplate) {
      res["RuleTemplate"] = boost::any(*ruleTemplate);
    }
    if (totalResourceCount) {
      res["TotalResourceCount"] = boost::any(*totalResourceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckFailedResourceCount") != m.end() && !m["CheckFailedResourceCount"].empty()) {
      checkFailedResourceCount = make_shared<long>(boost::any_cast<long>(m["CheckFailedResourceCount"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckTime") != m.end() && !m["CheckTime"].empty()) {
      checkTime = make_shared<long>(boost::any_cast<long>(m["CheckTime"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RiskyResourceCount") != m.end() && !m["RiskyResourceCount"].empty()) {
      riskyResourceCount = make_shared<long>(boost::any_cast<long>(m["RiskyResourceCount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleTemplate") != m.end() && !m["RuleTemplate"].empty()) {
      ruleTemplate = make_shared<string>(boost::any_cast<string>(m["RuleTemplate"]));
    }
    if (m.find("TotalResourceCount") != m.end() && !m["TotalResourceCount"].empty()) {
      totalResourceCount = make_shared<long>(boost::any_cast<long>(m["TotalResourceCount"]));
    }
  }


  virtual ~DescribeRulesResponseBodyDataContent() = default;
};
class DescribeRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRulesResponseBodyDataContent>> content{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  DescribeRulesResponseBodyData() {}

  explicit DescribeRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeRulesResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRulesResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeRulesResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRulesResponseBodyData() = default;
};
class DescribeRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRulesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeRulesResponseBody() {}

  explicit DescribeRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeRulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRulesResponseBody() = default;
};
class DescribeRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRulesResponseBody> body{};

  DescribeRulesResponse() {}

  explicit DescribeRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRulesResponse() = default;
};
class DescribeTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> completeTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> executionId{};
  shared_ptr<long> expireTime{};
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> taskDescription{};
  shared_ptr<string> taskDetail{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskPriority{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskType{};

  DescribeTaskResponseBodyData() {}

  explicit DescribeTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskDescription) {
      res["TaskDescription"] = boost::any(*taskDescription);
    }
    if (taskDetail) {
      res["TaskDetail"] = boost::any(*taskDetail);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskPriority) {
      res["TaskPriority"] = boost::any(*taskPriority);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TaskDescription") != m.end() && !m["TaskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["TaskDescription"]));
    }
    if (m.find("TaskDetail") != m.end() && !m["TaskDetail"].empty()) {
      taskDetail = make_shared<string>(boost::any_cast<string>(m["TaskDetail"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskPriority") != m.end() && !m["TaskPriority"].empty()) {
      taskPriority = make_shared<string>(boost::any_cast<string>(m["TaskPriority"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeTaskResponseBodyData() = default;
};
class DescribeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeTaskResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeTaskResponseBody() {}

  explicit DescribeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeTaskResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTaskResponseBody() = default;
};
class DescribeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTaskResponseBody> body{};

  DescribeTaskResponse() {}

  explicit DescribeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTaskResponse() = default;
};
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> taskStatus{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<long> completeTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> executionId{};
  shared_ptr<long> expireTime{};
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> taskDescription{};
  shared_ptr<string> taskDetail{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskPriority{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskType{};

  DescribeTasksResponseBodyDataContent() {}

  explicit DescribeTasksResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskDescription) {
      res["TaskDescription"] = boost::any(*taskDescription);
    }
    if (taskDetail) {
      res["TaskDetail"] = boost::any(*taskDetail);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskPriority) {
      res["TaskPriority"] = boost::any(*taskPriority);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TaskDescription") != m.end() && !m["TaskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["TaskDescription"]));
    }
    if (m.find("TaskDetail") != m.end() && !m["TaskDetail"].empty()) {
      taskDetail = make_shared<string>(boost::any_cast<string>(m["TaskDetail"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskPriority") != m.end() && !m["TaskPriority"].empty()) {
      taskPriority = make_shared<string>(boost::any_cast<string>(m["TaskPriority"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeTasksResponseBodyDataContent() = default;
};
class DescribeTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTasksResponseBodyDataContent>> content{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  DescribeTasksResponseBodyData() {}

  explicit DescribeTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeTasksResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTasksResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeTasksResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeTasksResponseBodyData() = default;
};
class DescribeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeTasksResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeTasksResponseBody() {}

  explicit DescribeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeTasksResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTasksResponseBody() = default;
};
class DescribeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTasksResponseBody> body{};

  DescribeTasksResponse() {}

  explicit DescribeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTasksResponse() = default;
};
class DescribeTopRiskyResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};

  DescribeTopRiskyResourcesRequest() {}

  explicit DescribeTopRiskyResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeTopRiskyResourcesRequest() = default;
};
class DescribeTopRiskyResourcesResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<long> archiveDataSize{};
  shared_ptr<long> checkFailedCount{};
  shared_ptr<long> coldArchiveDataSize{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<bool> enableCheck{};
  shared_ptr<long> iaDataSize{};
  shared_ptr<string> productType{};
  shared_ptr<long> protectionScore{};
  shared_ptr<long> protectionScoreUpdatedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> riskCount{};
  shared_ptr<long> standardDataSize{};
  shared_ptr<string> status{};
  shared_ptr<string> storageClass{};
  shared_ptr<long> totalDataSize{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeTopRiskyResourcesResponseBodyDataContent() {}

  explicit DescribeTopRiskyResourcesResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveDataSize) {
      res["ArchiveDataSize"] = boost::any(*archiveDataSize);
    }
    if (checkFailedCount) {
      res["CheckFailedCount"] = boost::any(*checkFailedCount);
    }
    if (coldArchiveDataSize) {
      res["ColdArchiveDataSize"] = boost::any(*coldArchiveDataSize);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (enableCheck) {
      res["EnableCheck"] = boost::any(*enableCheck);
    }
    if (iaDataSize) {
      res["IaDataSize"] = boost::any(*iaDataSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (protectionScore) {
      res["ProtectionScore"] = boost::any(*protectionScore);
    }
    if (protectionScoreUpdatedTime) {
      res["ProtectionScoreUpdatedTime"] = boost::any(*protectionScoreUpdatedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
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
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (standardDataSize) {
      res["StandardDataSize"] = boost::any(*standardDataSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (totalDataSize) {
      res["TotalDataSize"] = boost::any(*totalDataSize);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveDataSize") != m.end() && !m["ArchiveDataSize"].empty()) {
      archiveDataSize = make_shared<long>(boost::any_cast<long>(m["ArchiveDataSize"]));
    }
    if (m.find("CheckFailedCount") != m.end() && !m["CheckFailedCount"].empty()) {
      checkFailedCount = make_shared<long>(boost::any_cast<long>(m["CheckFailedCount"]));
    }
    if (m.find("ColdArchiveDataSize") != m.end() && !m["ColdArchiveDataSize"].empty()) {
      coldArchiveDataSize = make_shared<long>(boost::any_cast<long>(m["ColdArchiveDataSize"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
    if (m.find("EnableCheck") != m.end() && !m["EnableCheck"].empty()) {
      enableCheck = make_shared<bool>(boost::any_cast<bool>(m["EnableCheck"]));
    }
    if (m.find("IaDataSize") != m.end() && !m["IaDataSize"].empty()) {
      iaDataSize = make_shared<long>(boost::any_cast<long>(m["IaDataSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ProtectionScore") != m.end() && !m["ProtectionScore"].empty()) {
      protectionScore = make_shared<long>(boost::any_cast<long>(m["ProtectionScore"]));
    }
    if (m.find("ProtectionScoreUpdatedTime") != m.end() && !m["ProtectionScoreUpdatedTime"].empty()) {
      protectionScoreUpdatedTime = make_shared<long>(boost::any_cast<long>(m["ProtectionScoreUpdatedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
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
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("StandardDataSize") != m.end() && !m["StandardDataSize"].empty()) {
      standardDataSize = make_shared<long>(boost::any_cast<long>(m["StandardDataSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("TotalDataSize") != m.end() && !m["TotalDataSize"].empty()) {
      totalDataSize = make_shared<long>(boost::any_cast<long>(m["TotalDataSize"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeTopRiskyResourcesResponseBodyDataContent() = default;
};
class DescribeTopRiskyResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTopRiskyResourcesResponseBodyDataContent>> content{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  DescribeTopRiskyResourcesResponseBodyData() {}

  explicit DescribeTopRiskyResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeTopRiskyResourcesResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTopRiskyResourcesResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeTopRiskyResourcesResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeTopRiskyResourcesResponseBodyData() = default;
};
class DescribeTopRiskyResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeTopRiskyResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeTopRiskyResourcesResponseBody() {}

  explicit DescribeTopRiskyResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeTopRiskyResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeTopRiskyResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTopRiskyResourcesResponseBody() = default;
};
class DescribeTopRiskyResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTopRiskyResourcesResponseBody> body{};

  DescribeTopRiskyResourcesResponse() {}

  explicit DescribeTopRiskyResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTopRiskyResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTopRiskyResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTopRiskyResourcesResponse() = default;
};
class DisableCheckProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> productType{};

  DisableCheckProductRequest() {}

  explicit DisableCheckProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~DisableCheckProductRequest() = default;
};
class DisableCheckProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableCheckProductResponseBody() {}

  explicit DisableCheckProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableCheckProductResponseBody() = default;
};
class DisableCheckProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableCheckProductResponseBody> body{};

  DisableCheckProductResponse() {}

  explicit DisableCheckProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableCheckProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableCheckProductResponseBody>(model1);
      }
    }
  }


  virtual ~DisableCheckProductResponse() = default;
};
class DisableCheckResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};

  DisableCheckResourceRequest() {}

  explicit DisableCheckResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
  }


  virtual ~DisableCheckResourceRequest() = default;
};
class DisableCheckResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableCheckResourceResponseBody() {}

  explicit DisableCheckResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableCheckResourceResponseBody() = default;
};
class DisableCheckResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableCheckResourceResponseBody> body{};

  DisableCheckResourceResponse() {}

  explicit DisableCheckResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableCheckResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableCheckResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DisableCheckResourceResponse() = default;
};
class EnableCheckProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> productType{};

  EnableCheckProductRequest() {}

  explicit EnableCheckProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~EnableCheckProductRequest() = default;
};
class EnableCheckProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableCheckProductResponseBody() {}

  explicit EnableCheckProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableCheckProductResponseBody() = default;
};
class EnableCheckProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableCheckProductResponseBody> body{};

  EnableCheckProductResponse() {}

  explicit EnableCheckProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableCheckProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableCheckProductResponseBody>(model1);
      }
    }
  }


  virtual ~EnableCheckProductResponse() = default;
};
class EnableCheckResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};

  EnableCheckResourceRequest() {}

  explicit EnableCheckResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
  }


  virtual ~EnableCheckResourceRequest() = default;
};
class EnableCheckResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableCheckResourceResponseBody() {}

  explicit EnableCheckResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableCheckResourceResponseBody() = default;
};
class EnableCheckResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableCheckResourceResponseBody> body{};

  EnableCheckResourceResponse() {}

  explicit EnableCheckResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableCheckResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableCheckResourceResponseBody>(model1);
      }
    }
  }


  virtual ~EnableCheckResourceResponse() = default;
};
class GetBdrcServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> openTime{};
  shared_ptr<long> protectionScoreUpdatedTime{};
  shared_ptr<string> serviceInitializeStatus{};
  shared_ptr<string> serviceStatus{};

  GetBdrcServiceResponseBodyData() {}

  explicit GetBdrcServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    if (protectionScoreUpdatedTime) {
      res["ProtectionScoreUpdatedTime"] = boost::any(*protectionScoreUpdatedTime);
    }
    if (serviceInitializeStatus) {
      res["ServiceInitializeStatus"] = boost::any(*serviceInitializeStatus);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<long>(boost::any_cast<long>(m["OpenTime"]));
    }
    if (m.find("ProtectionScoreUpdatedTime") != m.end() && !m["ProtectionScoreUpdatedTime"].empty()) {
      protectionScoreUpdatedTime = make_shared<long>(boost::any_cast<long>(m["ProtectionScoreUpdatedTime"]));
    }
    if (m.find("ServiceInitializeStatus") != m.end() && !m["ServiceInitializeStatus"].empty()) {
      serviceInitializeStatus = make_shared<string>(boost::any_cast<string>(m["ServiceInitializeStatus"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
  }


  virtual ~GetBdrcServiceResponseBodyData() = default;
};
class GetBdrcServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetBdrcServiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetBdrcServiceResponseBody() {}

  explicit GetBdrcServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetBdrcServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetBdrcServiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBdrcServiceResponseBody() = default;
};
class GetBdrcServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBdrcServiceResponseBody> body{};

  GetBdrcServiceResponse() {}

  explicit GetBdrcServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBdrcServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBdrcServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetBdrcServiceResponse() = default;
};
class OpenBdrcServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenBdrcServiceResponseBody() {}

  explicit OpenBdrcServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenBdrcServiceResponseBody() = default;
};
class OpenBdrcServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenBdrcServiceResponseBody> body{};

  OpenBdrcServiceResponse() {}

  explicit OpenBdrcServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenBdrcServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenBdrcServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenBdrcServiceResponse() = default;
};
class UpdateResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};

  UpdateResourcesRequest() {}

  explicit UpdateResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~UpdateResourcesRequest() = default;
};
class UpdateResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  UpdateResourcesResponseBodyData() {}

  explicit UpdateResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateResourcesResponseBodyData() = default;
};
class UpdateResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateResourcesResponseBody() {}

  explicit UpdateResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateResourcesResponseBody() = default;
};
class UpdateResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourcesResponseBody> body{};

  UpdateResourcesResponse() {}

  explicit UpdateResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourcesResponse() = default;
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
  CheckRulesResponse checkRulesWithOptions(shared_ptr<CheckRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckRulesResponse checkRules(shared_ptr<CheckRulesRequest> request);
  CloseBdrcServiceResponse closeBdrcServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseBdrcServiceResponse closeBdrcService();
  DescribeCheckDetailsResponse describeCheckDetailsWithOptions(shared_ptr<DescribeCheckDetailsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCheckDetailsResponse describeCheckDetails(shared_ptr<DescribeCheckDetailsRequest> request);
  DescribeProductsResponse describeProductsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProductsResponse describeProducts();
  DescribeResourcesResponse describeResourcesWithOptions(shared_ptr<DescribeResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourcesResponse describeResources(shared_ptr<DescribeResourcesRequest> request);
  DescribeRulesResponse describeRulesWithOptions(shared_ptr<DescribeRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRulesResponse describeRules(shared_ptr<DescribeRulesRequest> request);
  DescribeTaskResponse describeTaskWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskResponse describeTask(shared_ptr<string> TaskId);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  DescribeTopRiskyResourcesResponse describeTopRiskyResourcesWithOptions(shared_ptr<DescribeTopRiskyResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTopRiskyResourcesResponse describeTopRiskyResources(shared_ptr<DescribeTopRiskyResourcesRequest> request);
  DisableCheckProductResponse disableCheckProductWithOptions(shared_ptr<DisableCheckProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableCheckProductResponse disableCheckProduct(shared_ptr<DisableCheckProductRequest> request);
  DisableCheckResourceResponse disableCheckResourceWithOptions(shared_ptr<DisableCheckResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableCheckResourceResponse disableCheckResource(shared_ptr<DisableCheckResourceRequest> request);
  EnableCheckProductResponse enableCheckProductWithOptions(shared_ptr<EnableCheckProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableCheckProductResponse enableCheckProduct(shared_ptr<EnableCheckProductRequest> request);
  EnableCheckResourceResponse enableCheckResourceWithOptions(shared_ptr<EnableCheckResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableCheckResourceResponse enableCheckResource(shared_ptr<EnableCheckResourceRequest> request);
  GetBdrcServiceResponse getBdrcServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBdrcServiceResponse getBdrcService();
  OpenBdrcServiceResponse openBdrcServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenBdrcServiceResponse openBdrcService();
  UpdateResourcesResponse updateResourcesWithOptions(shared_ptr<UpdateResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourcesResponse updateResources(shared_ptr<UpdateResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BDRC20230808

#endif
