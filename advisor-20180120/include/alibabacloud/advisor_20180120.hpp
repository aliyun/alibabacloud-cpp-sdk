// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADVISOR20180120_H_
#define ALIBABACLOUD_ADVISOR20180120_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Advisor20180120 {
class DescribeAdvicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> adviceId{};
  shared_ptr<string> checkId{};
  shared_ptr<long> clientUid{};
  shared_ptr<long> excludeAdviceId{};
  shared_ptr<string> filterType{};
  shared_ptr<string> filterValue{};
  shared_ptr<string> language{};
  shared_ptr<string> product{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> token{};

  DescribeAdvicesRequest() {}

  explicit DescribeAdvicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceId) {
      res["AdviceId"] = boost::any(*adviceId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (clientUid) {
      res["ClientUid"] = boost::any(*clientUid);
    }
    if (excludeAdviceId) {
      res["ExcludeAdviceId"] = boost::any(*excludeAdviceId);
    }
    if (filterType) {
      res["FilterType"] = boost::any(*filterType);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceId") != m.end() && !m["AdviceId"].empty()) {
      adviceId = make_shared<long>(boost::any_cast<long>(m["AdviceId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("ClientUid") != m.end() && !m["ClientUid"].empty()) {
      clientUid = make_shared<long>(boost::any_cast<long>(m["ClientUid"]));
    }
    if (m.find("ExcludeAdviceId") != m.end() && !m["ExcludeAdviceId"].empty()) {
      excludeAdviceId = make_shared<long>(boost::any_cast<long>(m["ExcludeAdviceId"]));
    }
    if (m.find("FilterType") != m.end() && !m["FilterType"].empty()) {
      filterType = make_shared<string>(boost::any_cast<string>(m["FilterType"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeAdvicesRequest() = default;
};
class DescribeAdvicesResponseBodyDataAdvice : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<long> aliyunId{};
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> details{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> links{};
  shared_ptr<string> product{};
  shared_ptr<string> reason{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> severity{};

  DescribeAdvicesResponseBodyDataAdvice() {}

  explicit DescribeAdvicesResponseBodyDataAdvice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (links) {
      res["Links"] = boost::any(*links);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<long>(boost::any_cast<long>(m["AliyunId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Links") != m.end() && !m["Links"].empty()) {
      links = make_shared<string>(boost::any_cast<string>(m["Links"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
  }


  virtual ~DescribeAdvicesResponseBodyDataAdvice() = default;
};
class DescribeAdvicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAdvicesResponseBodyDataAdvice>> advice{};

  DescribeAdvicesResponseBodyData() {}

  explicit DescribeAdvicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advice) {
      vector<boost::any> temp1;
      for(auto item1:*advice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Advice"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Advice") != m.end() && !m["Advice"].empty()) {
      if (typeid(vector<boost::any>) == m["Advice"].type()) {
        vector<DescribeAdvicesResponseBodyDataAdvice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Advice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvicesResponseBodyDataAdvice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        advice = make_shared<vector<DescribeAdvicesResponseBodyDataAdvice>>(expect1);
      }
    }
  }


  virtual ~DescribeAdvicesResponseBodyData() = default;
};
class DescribeAdvicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAdvicesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvicesResponseBody() {}

  explicit DescribeAdvicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvicesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvicesResponseBody() = default;
};
class DescribeAdvicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvicesResponseBody> body{};

  DescribeAdvicesResponse() {}

  explicit DescribeAdvicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvicesResponse() = default;
};
class DescribeAdvicesPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> adviceId{};
  shared_ptr<long> associateUid{};
  shared_ptr<string> checkId{};
  shared_ptr<string> excludeAdviceId{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  DescribeAdvicesPageRequest() {}

  explicit DescribeAdvicesPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceId) {
      res["AdviceId"] = boost::any(*adviceId);
    }
    if (associateUid) {
      res["AssociateUid"] = boost::any(*associateUid);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (excludeAdviceId) {
      res["ExcludeAdviceId"] = boost::any(*excludeAdviceId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceId") != m.end() && !m["AdviceId"].empty()) {
      adviceId = make_shared<long>(boost::any_cast<long>(m["AdviceId"]));
    }
    if (m.find("AssociateUid") != m.end() && !m["AssociateUid"].empty()) {
      associateUid = make_shared<long>(boost::any_cast<long>(m["AssociateUid"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("ExcludeAdviceId") != m.end() && !m["ExcludeAdviceId"].empty()) {
      excludeAdviceId = make_shared<string>(boost::any_cast<string>(m["ExcludeAdviceId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~DescribeAdvicesPageRequest() = default;
};
class DescribeAdvicesPageResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<long> aliyunId{};
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> details{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> links{};
  shared_ptr<string> product{};
  shared_ptr<string> reason{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> severity{};

  DescribeAdvicesPageResponseBodyDataResult() {}

  explicit DescribeAdvicesPageResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (details) {
      res["Details"] = boost::any(*details);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (links) {
      res["Links"] = boost::any(*links);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<long>(boost::any_cast<long>(m["AliyunId"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      details = make_shared<string>(boost::any_cast<string>(m["Details"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Links") != m.end() && !m["Links"].empty()) {
      links = make_shared<string>(boost::any_cast<string>(m["Links"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
  }


  virtual ~DescribeAdvicesPageResponseBodyDataResult() = default;
};
class DescribeAdvicesPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeAdvicesPageResponseBodyDataResult>> result{};
  shared_ptr<long> total{};

  DescribeAdvicesPageResponseBodyData() {}

  explicit DescribeAdvicesPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeAdvicesPageResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvicesPageResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeAdvicesPageResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeAdvicesPageResponseBodyData() = default;
};
class DescribeAdvicesPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAdvicesPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvicesPageResponseBody() {}

  explicit DescribeAdvicesPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvicesPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvicesPageResponseBody() = default;
};
class DescribeAdvicesPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvicesPageResponseBody> body{};

  DescribeAdvicesPageResponse() {}

  explicit DescribeAdvicesPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvicesPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvicesPageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvicesPageResponse() = default;
};
class DescribeAdvisorChecksRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkId{};
  shared_ptr<string> language{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  DescribeAdvisorChecksRequest() {}

  explicit DescribeAdvisorChecksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~DescribeAdvisorChecksRequest() = default;
};
class DescribeAdvisorChecksResponseBodyDataAdvisorCheck : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> operateColumn{};
  shared_ptr<string> product{};
  shared_ptr<string> status{};
  shared_ptr<string> suppResources{};
  shared_ptr<string> tips{};
  shared_ptr<string> viewColumn{};

  DescribeAdvisorChecksResponseBodyDataAdvisorCheck() {}

  explicit DescribeAdvisorChecksResponseBodyDataAdvisorCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operateColumn) {
      res["OperateColumn"] = boost::any(*operateColumn);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (suppResources) {
      res["SuppResources"] = boost::any(*suppResources);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (viewColumn) {
      res["ViewColumn"] = boost::any(*viewColumn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperateColumn") != m.end() && !m["OperateColumn"].empty()) {
      operateColumn = make_shared<string>(boost::any_cast<string>(m["OperateColumn"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SuppResources") != m.end() && !m["SuppResources"].empty()) {
      suppResources = make_shared<string>(boost::any_cast<string>(m["SuppResources"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("ViewColumn") != m.end() && !m["ViewColumn"].empty()) {
      viewColumn = make_shared<string>(boost::any_cast<string>(m["ViewColumn"]));
    }
  }


  virtual ~DescribeAdvisorChecksResponseBodyDataAdvisorCheck() = default;
};
class DescribeAdvisorChecksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAdvisorChecksResponseBodyDataAdvisorCheck>> advisorCheck{};

  DescribeAdvisorChecksResponseBodyData() {}

  explicit DescribeAdvisorChecksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advisorCheck) {
      vector<boost::any> temp1;
      for(auto item1:*advisorCheck){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdvisorCheck"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvisorCheck") != m.end() && !m["AdvisorCheck"].empty()) {
      if (typeid(vector<boost::any>) == m["AdvisorCheck"].type()) {
        vector<DescribeAdvisorChecksResponseBodyDataAdvisorCheck> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdvisorCheck"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdvisorChecksResponseBodyDataAdvisorCheck model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        advisorCheck = make_shared<vector<DescribeAdvisorChecksResponseBodyDataAdvisorCheck>>(expect1);
      }
    }
  }


  virtual ~DescribeAdvisorChecksResponseBodyData() = default;
};
class DescribeAdvisorChecksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeAdvisorChecksResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAdvisorChecksResponseBody() {}

  explicit DescribeAdvisorChecksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvisorChecksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAdvisorChecksResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAdvisorChecksResponseBody() = default;
};
class DescribeAdvisorChecksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdvisorChecksResponseBody> body{};

  DescribeAdvisorChecksResponse() {}

  explicit DescribeAdvisorChecksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdvisorChecksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdvisorChecksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdvisorChecksResponse() = default;
};
class GetHistoryAdvicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> associateUid{};
  shared_ptr<string> checkId{};
  shared_ptr<long> clientUid{};
  shared_ptr<string> endDate{};
  shared_ptr<string> filterType{};
  shared_ptr<string> filterValue{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> language{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> severity{};
  shared_ptr<string> startDate{};

  GetHistoryAdvicesRequest() {}

  explicit GetHistoryAdvicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associateUid) {
      res["AssociateUid"] = boost::any(*associateUid);
    }
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (clientUid) {
      res["ClientUid"] = boost::any(*clientUid);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (filterType) {
      res["FilterType"] = boost::any(*filterType);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociateUid") != m.end() && !m["AssociateUid"].empty()) {
      associateUid = make_shared<long>(boost::any_cast<long>(m["AssociateUid"]));
    }
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("ClientUid") != m.end() && !m["ClientUid"].empty()) {
      clientUid = make_shared<long>(boost::any_cast<long>(m["ClientUid"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FilterType") != m.end() && !m["FilterType"].empty()) {
      filterType = make_shared<string>(boost::any_cast<string>(m["FilterType"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetHistoryAdvicesRequest() = default;
};
class GetHistoryAdvicesResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> severity{};
  shared_ptr<string> url{};

  GetHistoryAdvicesResponseBodyDataResult() {}

  explicit GetHistoryAdvicesResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["Severity"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetHistoryAdvicesResponseBodyDataResult() = default;
};
class GetHistoryAdvicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<vector<GetHistoryAdvicesResponseBodyDataResult>> result{};
  shared_ptr<long> total{};

  GetHistoryAdvicesResponseBodyData() {}

  explicit GetHistoryAdvicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetHistoryAdvicesResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHistoryAdvicesResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetHistoryAdvicesResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetHistoryAdvicesResponseBodyData() = default;
};
class GetHistoryAdvicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetHistoryAdvicesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetHistoryAdvicesResponseBody() {}

  explicit GetHistoryAdvicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryAdvicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHistoryAdvicesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHistoryAdvicesResponseBody() = default;
};
class GetHistoryAdvicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistoryAdvicesResponseBody> body{};

  GetHistoryAdvicesResponse() {}

  explicit GetHistoryAdvicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryAdvicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistoryAdvicesResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistoryAdvicesResponse() = default;
};
class RefreshAdvisorCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkId{};
  shared_ptr<string> language{};
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  RefreshAdvisorCheckRequest() {}

  explicit RefreshAdvisorCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~RefreshAdvisorCheckRequest() = default;
};
class RefreshAdvisorCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<long> taskId{};
  shared_ptr<string> traceId{};

  RefreshAdvisorCheckResponseBodyData() {}

  explicit RefreshAdvisorCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~RefreshAdvisorCheckResponseBodyData() = default;
};
class RefreshAdvisorCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<RefreshAdvisorCheckResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RefreshAdvisorCheckResponseBody() {}

  explicit RefreshAdvisorCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RefreshAdvisorCheckResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshAdvisorCheckResponseBody() = default;
};
class RefreshAdvisorCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshAdvisorCheckResponseBody> body{};

  RefreshAdvisorCheckResponse() {}

  explicit RefreshAdvisorCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshAdvisorCheckResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshAdvisorCheckResponse() = default;
};
class RefreshAdvisorResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> product{};
  shared_ptr<string> resourceId{};

  RefreshAdvisorResourceRequest() {}

  explicit RefreshAdvisorResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~RefreshAdvisorResourceRequest() = default;
};
class RefreshAdvisorResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  RefreshAdvisorResourceResponseBody() {}

  explicit RefreshAdvisorResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshAdvisorResourceResponseBody() = default;
};
class RefreshAdvisorResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshAdvisorResourceResponseBody> body{};

  RefreshAdvisorResourceResponse() {}

  explicit RefreshAdvisorResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshAdvisorResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshAdvisorResourceResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshAdvisorResourceResponse() = default;
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
  DescribeAdvicesResponse describeAdvicesWithOptions(shared_ptr<DescribeAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvicesResponse describeAdvices(shared_ptr<DescribeAdvicesRequest> request);
  DescribeAdvicesPageResponse describeAdvicesPageWithOptions(shared_ptr<DescribeAdvicesPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvicesPageResponse describeAdvicesPage(shared_ptr<DescribeAdvicesPageRequest> request);
  DescribeAdvisorChecksResponse describeAdvisorChecksWithOptions(shared_ptr<DescribeAdvisorChecksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdvisorChecksResponse describeAdvisorChecks(shared_ptr<DescribeAdvisorChecksRequest> request);
  GetHistoryAdvicesResponse getHistoryAdvicesWithOptions(shared_ptr<GetHistoryAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistoryAdvicesResponse getHistoryAdvices(shared_ptr<GetHistoryAdvicesRequest> request);
  RefreshAdvisorCheckResponse refreshAdvisorCheckWithOptions(shared_ptr<RefreshAdvisorCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshAdvisorCheckResponse refreshAdvisorCheck(shared_ptr<RefreshAdvisorCheckRequest> request);
  RefreshAdvisorResourceResponse refreshAdvisorResourceWithOptions(shared_ptr<RefreshAdvisorResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshAdvisorResourceResponse refreshAdvisorResource(shared_ptr<RefreshAdvisorResourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Advisor20180120

#endif
