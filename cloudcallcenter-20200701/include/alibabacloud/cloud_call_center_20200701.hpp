// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDCALLCENTER20200701_H_
#define ALIBABACLOUD_CLOUDCALLCENTER20200701_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CloudCallCenter20200701 {
class CampaignDetail : public Darabonba::Model {
public:
  shared_ptr<long> actualEndTime{};
  shared_ptr<long> actualStartTime{};
  shared_ptr<long> casesAborted{};
  shared_ptr<long> casesConnected{};
  shared_ptr<long> casesUncompleted{};
  shared_ptr<long> completedRate{};
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> maxAttemptCount{};
  shared_ptr<long> minAttemptInterval{};
  shared_ptr<string> name{};
  shared_ptr<long> planedEndTime{};
  shared_ptr<long> planedStartTime{};
  shared_ptr<string> queueName{};
  shared_ptr<string> state{};
  shared_ptr<long> totalCases{};
  shared_ptr<long> updateTime{};

  CampaignDetail() {}

  explicit CampaignDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualEndTime) {
      res["ActualEndTime"] = boost::any(*actualEndTime);
    }
    if (actualStartTime) {
      res["ActualStartTime"] = boost::any(*actualStartTime);
    }
    if (casesAborted) {
      res["CasesAborted"] = boost::any(*casesAborted);
    }
    if (casesConnected) {
      res["CasesConnected"] = boost::any(*casesConnected);
    }
    if (casesUncompleted) {
      res["CasesUncompleted"] = boost::any(*casesUncompleted);
    }
    if (completedRate) {
      res["CompletedRate"] = boost::any(*completedRate);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (maxAttemptCount) {
      res["MaxAttemptCount"] = boost::any(*maxAttemptCount);
    }
    if (minAttemptInterval) {
      res["MinAttemptInterval"] = boost::any(*minAttemptInterval);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planedEndTime) {
      res["PlanedEndTime"] = boost::any(*planedEndTime);
    }
    if (planedStartTime) {
      res["PlanedStartTime"] = boost::any(*planedStartTime);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (totalCases) {
      res["TotalCases"] = boost::any(*totalCases);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualEndTime") != m.end() && !m["ActualEndTime"].empty()) {
      actualEndTime = make_shared<long>(boost::any_cast<long>(m["ActualEndTime"]));
    }
    if (m.find("ActualStartTime") != m.end() && !m["ActualStartTime"].empty()) {
      actualStartTime = make_shared<long>(boost::any_cast<long>(m["ActualStartTime"]));
    }
    if (m.find("CasesAborted") != m.end() && !m["CasesAborted"].empty()) {
      casesAborted = make_shared<long>(boost::any_cast<long>(m["CasesAborted"]));
    }
    if (m.find("CasesConnected") != m.end() && !m["CasesConnected"].empty()) {
      casesConnected = make_shared<long>(boost::any_cast<long>(m["CasesConnected"]));
    }
    if (m.find("CasesUncompleted") != m.end() && !m["CasesUncompleted"].empty()) {
      casesUncompleted = make_shared<long>(boost::any_cast<long>(m["CasesUncompleted"]));
    }
    if (m.find("CompletedRate") != m.end() && !m["CompletedRate"].empty()) {
      completedRate = make_shared<long>(boost::any_cast<long>(m["CompletedRate"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MaxAttemptCount") != m.end() && !m["MaxAttemptCount"].empty()) {
      maxAttemptCount = make_shared<long>(boost::any_cast<long>(m["MaxAttemptCount"]));
    }
    if (m.find("MinAttemptInterval") != m.end() && !m["MinAttemptInterval"].empty()) {
      minAttemptInterval = make_shared<long>(boost::any_cast<long>(m["MinAttemptInterval"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanedEndTime") != m.end() && !m["PlanedEndTime"].empty()) {
      planedEndTime = make_shared<long>(boost::any_cast<long>(m["PlanedEndTime"]));
    }
    if (m.find("PlanedStartTime") != m.end() && !m["PlanedStartTime"].empty()) {
      planedStartTime = make_shared<long>(boost::any_cast<long>(m["PlanedStartTime"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("TotalCases") != m.end() && !m["TotalCases"].empty()) {
      totalCases = make_shared<long>(boost::any_cast<long>(m["TotalCases"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~CampaignDetail() = default;
};
class AbortCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};

  AbortCampaignRequest() {}

  explicit AbortCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~AbortCampaignRequest() = default;
};
class AbortCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AbortCampaignResponseBody() {}

  explicit AbortCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbortCampaignResponseBody() = default;
};
class AbortCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbortCampaignResponseBody> body{};

  AbortCampaignResponse() {}

  explicit AbortCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbortCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbortCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~AbortCampaignResponse() = default;
};
class AbortCasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> phoneNumberList{};

  AbortCasesRequest() {}

  explicit AbortCasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (phoneNumberList) {
      res["PhoneNumberList"] = boost::any(*phoneNumberList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PhoneNumberList") != m.end() && !m["PhoneNumberList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumberList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumberList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumberList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AbortCasesRequest() = default;
};
class AbortCasesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> phoneNumberListShrink{};

  AbortCasesShrinkRequest() {}

  explicit AbortCasesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (phoneNumberListShrink) {
      res["PhoneNumberList"] = boost::any(*phoneNumberListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PhoneNumberList") != m.end() && !m["PhoneNumberList"].empty()) {
      phoneNumberListShrink = make_shared<string>(boost::any_cast<string>(m["PhoneNumberList"]));
    }
  }


  virtual ~AbortCasesShrinkRequest() = default;
};
class AbortCasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AbortCasesResponseBody() {}

  explicit AbortCasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbortCasesResponseBody() = default;
};
class AbortCasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbortCasesResponseBody> body{};

  AbortCasesResponse() {}

  explicit AbortCasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbortCasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbortCasesResponseBody>(model1);
      }
    }
  }


  virtual ~AbortCasesResponse() = default;
};
class CheckDemoInstanceExistsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<string>> params{};
  shared_ptr<string> requestId{};

  CheckDemoInstanceExistsResponseBody() {}

  explicit CheckDemoInstanceExistsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (params) {
      res["Params"] = boost::any(*params);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Params"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      params = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDemoInstanceExistsResponseBody() = default;
};
class CheckDemoInstanceExistsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDemoInstanceExistsResponseBody> body{};

  CheckDemoInstanceExistsResponse() {}

  explicit CheckDemoInstanceExistsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDemoInstanceExistsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDemoInstanceExistsResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDemoInstanceExistsResponse() = default;
};
class CheckMQRoleAssumptionAuthorityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<string>> params{};
  shared_ptr<string> requestId{};

  CheckMQRoleAssumptionAuthorityResponseBody() {}

  explicit CheckMQRoleAssumptionAuthorityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (params) {
      res["Params"] = boost::any(*params);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Params"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      params = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckMQRoleAssumptionAuthorityResponseBody() = default;
};
class CheckMQRoleAssumptionAuthorityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckMQRoleAssumptionAuthorityResponseBody> body{};

  CheckMQRoleAssumptionAuthorityResponse() {}

  explicit CheckMQRoleAssumptionAuthorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckMQRoleAssumptionAuthorityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMQRoleAssumptionAuthorityResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMQRoleAssumptionAuthorityResponse() = default;
};
class CreateCampaignRequestCaseList : public Darabonba::Model {
public:
  shared_ptr<string> customVariables{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> referenceId{};

  CreateCampaignRequestCaseList() {}

  explicit CreateCampaignRequestCaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customVariables) {
      res["CustomVariables"] = boost::any(*customVariables);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (referenceId) {
      res["ReferenceId"] = boost::any(*referenceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomVariables") != m.end() && !m["CustomVariables"].empty()) {
      customVariables = make_shared<string>(boost::any_cast<string>(m["CustomVariables"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ReferenceId") != m.end() && !m["ReferenceId"].empty()) {
      referenceId = make_shared<string>(boost::any_cast<string>(m["ReferenceId"]));
    }
  }


  virtual ~CreateCampaignRequestCaseList() = default;
};
class CreateCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> callableTime{};
  shared_ptr<string> caseFileKey{};
  shared_ptr<vector<CreateCampaignRequestCaseList>> caseList{};
  shared_ptr<string> contactFlowId{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> executingUntilTimeout{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxAttemptCount{};
  shared_ptr<long> minAttemptInterval{};
  shared_ptr<string> name{};
  shared_ptr<string> queueId{};
  shared_ptr<bool> simulation{};
  shared_ptr<string> simulationParameters{};
  shared_ptr<string> startTime{};
  shared_ptr<string> strategyParameters{};
  shared_ptr<string> strategyType{};

  CreateCampaignRequest() {}

  explicit CreateCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callableTime) {
      res["CallableTime"] = boost::any(*callableTime);
    }
    if (caseFileKey) {
      res["CaseFileKey"] = boost::any(*caseFileKey);
    }
    if (caseList) {
      vector<boost::any> temp1;
      for(auto item1:*caseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CaseList"] = boost::any(temp1);
    }
    if (contactFlowId) {
      res["ContactFlowId"] = boost::any(*contactFlowId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executingUntilTimeout) {
      res["ExecutingUntilTimeout"] = boost::any(*executingUntilTimeout);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxAttemptCount) {
      res["MaxAttemptCount"] = boost::any(*maxAttemptCount);
    }
    if (minAttemptInterval) {
      res["MinAttemptInterval"] = boost::any(*minAttemptInterval);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (simulation) {
      res["Simulation"] = boost::any(*simulation);
    }
    if (simulationParameters) {
      res["SimulationParameters"] = boost::any(*simulationParameters);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (strategyParameters) {
      res["StrategyParameters"] = boost::any(*strategyParameters);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallableTime") != m.end() && !m["CallableTime"].empty()) {
      callableTime = make_shared<string>(boost::any_cast<string>(m["CallableTime"]));
    }
    if (m.find("CaseFileKey") != m.end() && !m["CaseFileKey"].empty()) {
      caseFileKey = make_shared<string>(boost::any_cast<string>(m["CaseFileKey"]));
    }
    if (m.find("CaseList") != m.end() && !m["CaseList"].empty()) {
      if (typeid(vector<boost::any>) == m["CaseList"].type()) {
        vector<CreateCampaignRequestCaseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CaseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCampaignRequestCaseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        caseList = make_shared<vector<CreateCampaignRequestCaseList>>(expect1);
      }
    }
    if (m.find("ContactFlowId") != m.end() && !m["ContactFlowId"].empty()) {
      contactFlowId = make_shared<string>(boost::any_cast<string>(m["ContactFlowId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecutingUntilTimeout") != m.end() && !m["ExecutingUntilTimeout"].empty()) {
      executingUntilTimeout = make_shared<bool>(boost::any_cast<bool>(m["ExecutingUntilTimeout"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxAttemptCount") != m.end() && !m["MaxAttemptCount"].empty()) {
      maxAttemptCount = make_shared<long>(boost::any_cast<long>(m["MaxAttemptCount"]));
    }
    if (m.find("MinAttemptInterval") != m.end() && !m["MinAttemptInterval"].empty()) {
      minAttemptInterval = make_shared<long>(boost::any_cast<long>(m["MinAttemptInterval"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
    if (m.find("Simulation") != m.end() && !m["Simulation"].empty()) {
      simulation = make_shared<bool>(boost::any_cast<bool>(m["Simulation"]));
    }
    if (m.find("SimulationParameters") != m.end() && !m["SimulationParameters"].empty()) {
      simulationParameters = make_shared<string>(boost::any_cast<string>(m["SimulationParameters"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StrategyParameters") != m.end() && !m["StrategyParameters"].empty()) {
      strategyParameters = make_shared<string>(boost::any_cast<string>(m["StrategyParameters"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
  }


  virtual ~CreateCampaignRequest() = default;
};
class CreateCampaignShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> callableTime{};
  shared_ptr<string> caseFileKey{};
  shared_ptr<string> caseListShrink{};
  shared_ptr<string> contactFlowId{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> executingUntilTimeout{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxAttemptCount{};
  shared_ptr<long> minAttemptInterval{};
  shared_ptr<string> name{};
  shared_ptr<string> queueId{};
  shared_ptr<bool> simulation{};
  shared_ptr<string> simulationParameters{};
  shared_ptr<string> startTime{};
  shared_ptr<string> strategyParameters{};
  shared_ptr<string> strategyType{};

  CreateCampaignShrinkRequest() {}

  explicit CreateCampaignShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callableTime) {
      res["CallableTime"] = boost::any(*callableTime);
    }
    if (caseFileKey) {
      res["CaseFileKey"] = boost::any(*caseFileKey);
    }
    if (caseListShrink) {
      res["CaseList"] = boost::any(*caseListShrink);
    }
    if (contactFlowId) {
      res["ContactFlowId"] = boost::any(*contactFlowId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executingUntilTimeout) {
      res["ExecutingUntilTimeout"] = boost::any(*executingUntilTimeout);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxAttemptCount) {
      res["MaxAttemptCount"] = boost::any(*maxAttemptCount);
    }
    if (minAttemptInterval) {
      res["MinAttemptInterval"] = boost::any(*minAttemptInterval);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (simulation) {
      res["Simulation"] = boost::any(*simulation);
    }
    if (simulationParameters) {
      res["SimulationParameters"] = boost::any(*simulationParameters);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (strategyParameters) {
      res["StrategyParameters"] = boost::any(*strategyParameters);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallableTime") != m.end() && !m["CallableTime"].empty()) {
      callableTime = make_shared<string>(boost::any_cast<string>(m["CallableTime"]));
    }
    if (m.find("CaseFileKey") != m.end() && !m["CaseFileKey"].empty()) {
      caseFileKey = make_shared<string>(boost::any_cast<string>(m["CaseFileKey"]));
    }
    if (m.find("CaseList") != m.end() && !m["CaseList"].empty()) {
      caseListShrink = make_shared<string>(boost::any_cast<string>(m["CaseList"]));
    }
    if (m.find("ContactFlowId") != m.end() && !m["ContactFlowId"].empty()) {
      contactFlowId = make_shared<string>(boost::any_cast<string>(m["ContactFlowId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecutingUntilTimeout") != m.end() && !m["ExecutingUntilTimeout"].empty()) {
      executingUntilTimeout = make_shared<bool>(boost::any_cast<bool>(m["ExecutingUntilTimeout"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxAttemptCount") != m.end() && !m["MaxAttemptCount"].empty()) {
      maxAttemptCount = make_shared<long>(boost::any_cast<long>(m["MaxAttemptCount"]));
    }
    if (m.find("MinAttemptInterval") != m.end() && !m["MinAttemptInterval"].empty()) {
      minAttemptInterval = make_shared<long>(boost::any_cast<long>(m["MinAttemptInterval"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
    if (m.find("Simulation") != m.end() && !m["Simulation"].empty()) {
      simulation = make_shared<bool>(boost::any_cast<bool>(m["Simulation"]));
    }
    if (m.find("SimulationParameters") != m.end() && !m["SimulationParameters"].empty()) {
      simulationParameters = make_shared<string>(boost::any_cast<string>(m["SimulationParameters"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StrategyParameters") != m.end() && !m["StrategyParameters"].empty()) {
      strategyParameters = make_shared<string>(boost::any_cast<string>(m["StrategyParameters"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
  }


  virtual ~CreateCampaignShrinkRequest() = default;
};
class CreateCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateCampaignResponseBody() {}

  explicit CreateCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCampaignResponseBody() = default;
};
class CreateCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCampaignResponseBody> body{};

  CreateCampaignResponse() {}

  explicit CreateCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCampaignResponse() = default;
};
class CreateCorpNumberGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateCorpNumberGroupRequest() {}

  explicit CreateCorpNumberGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateCorpNumberGroupRequest() = default;
};
class CreateCorpNumberGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> description{};
  shared_ptr<string> numberCount{};
  shared_ptr<string> numberGroupId{};
  shared_ptr<string> numberGroupName{};

  CreateCorpNumberGroupResponseBodyData() {}

  explicit CreateCorpNumberGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (numberCount) {
      res["NumberCount"] = boost::any(*numberCount);
    }
    if (numberGroupId) {
      res["NumberGroupId"] = boost::any(*numberGroupId);
    }
    if (numberGroupName) {
      res["NumberGroupName"] = boost::any(*numberGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NumberCount") != m.end() && !m["NumberCount"].empty()) {
      numberCount = make_shared<string>(boost::any_cast<string>(m["NumberCount"]));
    }
    if (m.find("NumberGroupId") != m.end() && !m["NumberGroupId"].empty()) {
      numberGroupId = make_shared<string>(boost::any_cast<string>(m["NumberGroupId"]));
    }
    if (m.find("NumberGroupName") != m.end() && !m["NumberGroupName"].empty()) {
      numberGroupName = make_shared<string>(boost::any_cast<string>(m["NumberGroupName"]));
    }
  }


  virtual ~CreateCorpNumberGroupResponseBodyData() = default;
};
class CreateCorpNumberGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateCorpNumberGroupResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateCorpNumberGroupResponseBody() {}

  explicit CreateCorpNumberGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
        CreateCorpNumberGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateCorpNumberGroupResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCorpNumberGroupResponseBody() = default;
};
class CreateCorpNumberGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCorpNumberGroupResponseBody> body{};

  CreateCorpNumberGroupResponse() {}

  explicit CreateCorpNumberGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCorpNumberGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCorpNumberGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCorpNumberGroupResponse() = default;
};
class CreateDemoInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> outboundCallWhitelist{};

  CreateDemoInstanceRequest() {}

  explicit CreateDemoInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outboundCallWhitelist) {
      res["OutboundCallWhitelist"] = boost::any(*outboundCallWhitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutboundCallWhitelist") != m.end() && !m["OutboundCallWhitelist"].empty()) {
      outboundCallWhitelist = make_shared<string>(boost::any_cast<string>(m["OutboundCallWhitelist"]));
    }
  }


  virtual ~CreateDemoInstanceRequest() = default;
};
class CreateDemoInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<string>> params{};
  shared_ptr<string> requestId{};

  CreateDemoInstanceResponseBody() {}

  explicit CreateDemoInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (params) {
      res["Params"] = boost::any(*params);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Params"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      params = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDemoInstanceResponseBody() = default;
};
class CreateDemoInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDemoInstanceResponseBody> body{};

  CreateDemoInstanceResponse() {}

  explicit CreateDemoInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDemoInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDemoInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDemoInstanceResponse() = default;
};
class GetCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};

  GetCampaignRequest() {}

  explicit GetCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetCampaignRequest() = default;
};
class GetCampaignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> actualEndTime{};
  shared_ptr<long> actualStartTime{};
  shared_ptr<string> campaignId{};
  shared_ptr<long> casesAborted{};
  shared_ptr<long> casesConnected{};
  shared_ptr<long> casesUncompleted{};
  shared_ptr<long> completedRate{};
  shared_ptr<long> maxAttemptCount{};
  shared_ptr<long> minAttemptInterval{};
  shared_ptr<string> name{};
  shared_ptr<long> planedEndTime{};
  shared_ptr<long> planedStartTime{};
  shared_ptr<string> queueId{};
  shared_ptr<string> queueName{};
  shared_ptr<bool> simulation{};
  shared_ptr<string> simulationParameters{};
  shared_ptr<string> state{};
  shared_ptr<string> strategyParameters{};
  shared_ptr<string> strategyType{};
  shared_ptr<long> totalCases{};

  GetCampaignResponseBodyData() {}

  explicit GetCampaignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualEndTime) {
      res["ActualEndTime"] = boost::any(*actualEndTime);
    }
    if (actualStartTime) {
      res["ActualStartTime"] = boost::any(*actualStartTime);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (casesAborted) {
      res["CasesAborted"] = boost::any(*casesAborted);
    }
    if (casesConnected) {
      res["CasesConnected"] = boost::any(*casesConnected);
    }
    if (casesUncompleted) {
      res["CasesUncompleted"] = boost::any(*casesUncompleted);
    }
    if (completedRate) {
      res["CompletedRate"] = boost::any(*completedRate);
    }
    if (maxAttemptCount) {
      res["MaxAttemptCount"] = boost::any(*maxAttemptCount);
    }
    if (minAttemptInterval) {
      res["MinAttemptInterval"] = boost::any(*minAttemptInterval);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planedEndTime) {
      res["PlanedEndTime"] = boost::any(*planedEndTime);
    }
    if (planedStartTime) {
      res["PlanedStartTime"] = boost::any(*planedStartTime);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (simulation) {
      res["Simulation"] = boost::any(*simulation);
    }
    if (simulationParameters) {
      res["SimulationParameters"] = boost::any(*simulationParameters);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (strategyParameters) {
      res["StrategyParameters"] = boost::any(*strategyParameters);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (totalCases) {
      res["TotalCases"] = boost::any(*totalCases);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualEndTime") != m.end() && !m["ActualEndTime"].empty()) {
      actualEndTime = make_shared<long>(boost::any_cast<long>(m["ActualEndTime"]));
    }
    if (m.find("ActualStartTime") != m.end() && !m["ActualStartTime"].empty()) {
      actualStartTime = make_shared<long>(boost::any_cast<long>(m["ActualStartTime"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CasesAborted") != m.end() && !m["CasesAborted"].empty()) {
      casesAborted = make_shared<long>(boost::any_cast<long>(m["CasesAborted"]));
    }
    if (m.find("CasesConnected") != m.end() && !m["CasesConnected"].empty()) {
      casesConnected = make_shared<long>(boost::any_cast<long>(m["CasesConnected"]));
    }
    if (m.find("CasesUncompleted") != m.end() && !m["CasesUncompleted"].empty()) {
      casesUncompleted = make_shared<long>(boost::any_cast<long>(m["CasesUncompleted"]));
    }
    if (m.find("CompletedRate") != m.end() && !m["CompletedRate"].empty()) {
      completedRate = make_shared<long>(boost::any_cast<long>(m["CompletedRate"]));
    }
    if (m.find("MaxAttemptCount") != m.end() && !m["MaxAttemptCount"].empty()) {
      maxAttemptCount = make_shared<long>(boost::any_cast<long>(m["MaxAttemptCount"]));
    }
    if (m.find("MinAttemptInterval") != m.end() && !m["MinAttemptInterval"].empty()) {
      minAttemptInterval = make_shared<long>(boost::any_cast<long>(m["MinAttemptInterval"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanedEndTime") != m.end() && !m["PlanedEndTime"].empty()) {
      planedEndTime = make_shared<long>(boost::any_cast<long>(m["PlanedEndTime"]));
    }
    if (m.find("PlanedStartTime") != m.end() && !m["PlanedStartTime"].empty()) {
      planedStartTime = make_shared<long>(boost::any_cast<long>(m["PlanedStartTime"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("Simulation") != m.end() && !m["Simulation"].empty()) {
      simulation = make_shared<bool>(boost::any_cast<bool>(m["Simulation"]));
    }
    if (m.find("SimulationParameters") != m.end() && !m["SimulationParameters"].empty()) {
      simulationParameters = make_shared<string>(boost::any_cast<string>(m["SimulationParameters"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StrategyParameters") != m.end() && !m["StrategyParameters"].empty()) {
      strategyParameters = make_shared<string>(boost::any_cast<string>(m["StrategyParameters"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("TotalCases") != m.end() && !m["TotalCases"].empty()) {
      totalCases = make_shared<long>(boost::any_cast<long>(m["TotalCases"]));
    }
  }


  virtual ~GetCampaignResponseBodyData() = default;
};
class GetCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCampaignResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCampaignResponseBody() {}

  explicit GetCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        GetCampaignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCampaignResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCampaignResponseBody() = default;
};
class GetCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCampaignResponseBody> body{};

  GetCampaignResponse() {}

  explicit GetCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~GetCampaignResponse() = default;
};
class GetHistoricalCampaignReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};

  GetHistoricalCampaignReportRequest() {}

  explicit GetHistoricalCampaignReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetHistoricalCampaignReportRequest() = default;
};
class GetHistoricalCampaignReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> abandonedRate{};
  shared_ptr<long> callsAbandoned{};
  shared_ptr<long> callsConnected{};
  shared_ptr<long> callsDialed{};
  shared_ptr<double> connectedRate{};
  shared_ptr<double> occupancyRate{};

  GetHistoricalCampaignReportResponseBodyData() {}

  explicit GetHistoricalCampaignReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonedRate) {
      res["AbandonedRate"] = boost::any(*abandonedRate);
    }
    if (callsAbandoned) {
      res["CallsAbandoned"] = boost::any(*callsAbandoned);
    }
    if (callsConnected) {
      res["CallsConnected"] = boost::any(*callsConnected);
    }
    if (callsDialed) {
      res["CallsDialed"] = boost::any(*callsDialed);
    }
    if (connectedRate) {
      res["ConnectedRate"] = boost::any(*connectedRate);
    }
    if (occupancyRate) {
      res["OccupancyRate"] = boost::any(*occupancyRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonedRate") != m.end() && !m["AbandonedRate"].empty()) {
      abandonedRate = make_shared<double>(boost::any_cast<double>(m["AbandonedRate"]));
    }
    if (m.find("CallsAbandoned") != m.end() && !m["CallsAbandoned"].empty()) {
      callsAbandoned = make_shared<long>(boost::any_cast<long>(m["CallsAbandoned"]));
    }
    if (m.find("CallsConnected") != m.end() && !m["CallsConnected"].empty()) {
      callsConnected = make_shared<long>(boost::any_cast<long>(m["CallsConnected"]));
    }
    if (m.find("CallsDialed") != m.end() && !m["CallsDialed"].empty()) {
      callsDialed = make_shared<long>(boost::any_cast<long>(m["CallsDialed"]));
    }
    if (m.find("ConnectedRate") != m.end() && !m["ConnectedRate"].empty()) {
      connectedRate = make_shared<double>(boost::any_cast<double>(m["ConnectedRate"]));
    }
    if (m.find("OccupancyRate") != m.end() && !m["OccupancyRate"].empty()) {
      occupancyRate = make_shared<double>(boost::any_cast<double>(m["OccupancyRate"]));
    }
  }


  virtual ~GetHistoricalCampaignReportResponseBodyData() = default;
};
class GetHistoricalCampaignReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetHistoricalCampaignReportResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHistoricalCampaignReportResponseBody() {}

  explicit GetHistoricalCampaignReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
        GetHistoricalCampaignReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHistoricalCampaignReportResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHistoricalCampaignReportResponseBody() = default;
};
class GetHistoricalCampaignReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistoricalCampaignReportResponseBody> body{};

  GetHistoricalCampaignReportResponse() {}

  explicit GetHistoricalCampaignReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoricalCampaignReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistoricalCampaignReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistoricalCampaignReportResponse() = default;
};
class GetInstanceIdsByAliyunUidV2Request : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};

  GetInstanceIdsByAliyunUidV2Request() {}

  explicit GetInstanceIdsByAliyunUidV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
  }


  virtual ~GetInstanceIdsByAliyunUidV2Request() = default;
};
class GetInstanceIdsByAliyunUidV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceIdsByAliyunUidV2ResponseBody() {}

  explicit GetInstanceIdsByAliyunUidV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
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


  virtual ~GetInstanceIdsByAliyunUidV2ResponseBody() = default;
};
class GetInstanceIdsByAliyunUidV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceIdsByAliyunUidV2ResponseBody> body{};

  GetInstanceIdsByAliyunUidV2Response() {}

  explicit GetInstanceIdsByAliyunUidV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceIdsByAliyunUidV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceIdsByAliyunUidV2ResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceIdsByAliyunUidV2Response() = default;
};
class GetRealtimeCampaignStatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueId{};

  GetRealtimeCampaignStatsRequest() {}

  explicit GetRealtimeCampaignStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
  }


  virtual ~GetRealtimeCampaignStatsRequest() = default;
};
class GetRealtimeCampaignStatsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> breakingAgents{};
  shared_ptr<long> caps{};
  shared_ptr<long> loggedInAgents{};
  shared_ptr<long> outboundScenarioBreakingAgents{};
  shared_ptr<long> outboundScenarioReadyAgents{};
  shared_ptr<long> outboundScenarioTalkingAgents{};
  shared_ptr<long> outboundScenarioWorkingAgents{};
  shared_ptr<long> readyAgents{};
  shared_ptr<long> talkingAgents{};
  shared_ptr<long> totalAgents{};
  shared_ptr<long> workingAgents{};

  GetRealtimeCampaignStatsResponseBodyData() {}

  explicit GetRealtimeCampaignStatsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (breakingAgents) {
      res["BreakingAgents"] = boost::any(*breakingAgents);
    }
    if (caps) {
      res["Caps"] = boost::any(*caps);
    }
    if (loggedInAgents) {
      res["LoggedInAgents"] = boost::any(*loggedInAgents);
    }
    if (outboundScenarioBreakingAgents) {
      res["OutboundScenarioBreakingAgents"] = boost::any(*outboundScenarioBreakingAgents);
    }
    if (outboundScenarioReadyAgents) {
      res["OutboundScenarioReadyAgents"] = boost::any(*outboundScenarioReadyAgents);
    }
    if (outboundScenarioTalkingAgents) {
      res["OutboundScenarioTalkingAgents"] = boost::any(*outboundScenarioTalkingAgents);
    }
    if (outboundScenarioWorkingAgents) {
      res["OutboundScenarioWorkingAgents"] = boost::any(*outboundScenarioWorkingAgents);
    }
    if (readyAgents) {
      res["ReadyAgents"] = boost::any(*readyAgents);
    }
    if (talkingAgents) {
      res["TalkingAgents"] = boost::any(*talkingAgents);
    }
    if (totalAgents) {
      res["TotalAgents"] = boost::any(*totalAgents);
    }
    if (workingAgents) {
      res["WorkingAgents"] = boost::any(*workingAgents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BreakingAgents") != m.end() && !m["BreakingAgents"].empty()) {
      breakingAgents = make_shared<long>(boost::any_cast<long>(m["BreakingAgents"]));
    }
    if (m.find("Caps") != m.end() && !m["Caps"].empty()) {
      caps = make_shared<long>(boost::any_cast<long>(m["Caps"]));
    }
    if (m.find("LoggedInAgents") != m.end() && !m["LoggedInAgents"].empty()) {
      loggedInAgents = make_shared<long>(boost::any_cast<long>(m["LoggedInAgents"]));
    }
    if (m.find("OutboundScenarioBreakingAgents") != m.end() && !m["OutboundScenarioBreakingAgents"].empty()) {
      outboundScenarioBreakingAgents = make_shared<long>(boost::any_cast<long>(m["OutboundScenarioBreakingAgents"]));
    }
    if (m.find("OutboundScenarioReadyAgents") != m.end() && !m["OutboundScenarioReadyAgents"].empty()) {
      outboundScenarioReadyAgents = make_shared<long>(boost::any_cast<long>(m["OutboundScenarioReadyAgents"]));
    }
    if (m.find("OutboundScenarioTalkingAgents") != m.end() && !m["OutboundScenarioTalkingAgents"].empty()) {
      outboundScenarioTalkingAgents = make_shared<long>(boost::any_cast<long>(m["OutboundScenarioTalkingAgents"]));
    }
    if (m.find("OutboundScenarioWorkingAgents") != m.end() && !m["OutboundScenarioWorkingAgents"].empty()) {
      outboundScenarioWorkingAgents = make_shared<long>(boost::any_cast<long>(m["OutboundScenarioWorkingAgents"]));
    }
    if (m.find("ReadyAgents") != m.end() && !m["ReadyAgents"].empty()) {
      readyAgents = make_shared<long>(boost::any_cast<long>(m["ReadyAgents"]));
    }
    if (m.find("TalkingAgents") != m.end() && !m["TalkingAgents"].empty()) {
      talkingAgents = make_shared<long>(boost::any_cast<long>(m["TalkingAgents"]));
    }
    if (m.find("TotalAgents") != m.end() && !m["TotalAgents"].empty()) {
      totalAgents = make_shared<long>(boost::any_cast<long>(m["TotalAgents"]));
    }
    if (m.find("WorkingAgents") != m.end() && !m["WorkingAgents"].empty()) {
      workingAgents = make_shared<long>(boost::any_cast<long>(m["WorkingAgents"]));
    }
  }


  virtual ~GetRealtimeCampaignStatsResponseBodyData() = default;
};
class GetRealtimeCampaignStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetRealtimeCampaignStatsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetRealtimeCampaignStatsResponseBody() {}

  explicit GetRealtimeCampaignStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
        GetRealtimeCampaignStatsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRealtimeCampaignStatsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRealtimeCampaignStatsResponseBody() = default;
};
class GetRealtimeCampaignStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRealtimeCampaignStatsResponseBody> body{};

  GetRealtimeCampaignStatsResponse() {}

  explicit GetRealtimeCampaignStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRealtimeCampaignStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRealtimeCampaignStatsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRealtimeCampaignStatsResponse() = default;
};
class ImportAdminsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ramIdList{};

  ImportAdminsRequest() {}

  explicit ImportAdminsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ramIdList) {
      res["RamIdList"] = boost::any(*ramIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RamIdList") != m.end() && !m["RamIdList"].empty()) {
      ramIdList = make_shared<string>(boost::any_cast<string>(m["RamIdList"]));
    }
  }


  virtual ~ImportAdminsRequest() = default;
};
class ImportAdminsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> extension{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ramId{};
  shared_ptr<string> roleId{};
  shared_ptr<string> userId{};

  ImportAdminsResponseBodyData() {}

  explicit ImportAdminsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ramId) {
      res["RamId"] = boost::any(*ramId);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RamId") != m.end() && !m["RamId"].empty()) {
      ramId = make_shared<string>(boost::any_cast<string>(m["RamId"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ImportAdminsResponseBodyData() = default;
};
class ImportAdminsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ImportAdminsResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ImportAdminsResponseBody() {}

  explicit ImportAdminsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ImportAdminsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportAdminsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ImportAdminsResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImportAdminsResponseBody() = default;
};
class ImportAdminsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportAdminsResponseBody> body{};

  ImportAdminsResponse() {}

  explicit ImportAdminsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportAdminsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportAdminsResponseBody>(model1);
      }
    }
  }


  virtual ~ImportAdminsResponse() = default;
};
class IssueSoftphoneCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  IssueSoftphoneCommandRequest() {}

  explicit IssueSoftphoneCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~IssueSoftphoneCommandRequest() = default;
};
class IssueSoftphoneCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  IssueSoftphoneCommandResponseBody() {}

  explicit IssueSoftphoneCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IssueSoftphoneCommandResponseBody() = default;
};
class IssueSoftphoneCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IssueSoftphoneCommandResponseBody> body{};

  IssueSoftphoneCommandResponse() {}

  explicit IssueSoftphoneCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IssueSoftphoneCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IssueSoftphoneCommandResponseBody>(model1);
      }
    }
  }


  virtual ~IssueSoftphoneCommandResponse() = default;
};
class ListAttemptsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> attemptId{};
  shared_ptr<string> callee{};
  shared_ptr<string> caller{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> caseId{};
  shared_ptr<string> contactId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queueId{};
  shared_ptr<long> startTime{};

  ListAttemptsRequest() {}

  explicit ListAttemptsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (attemptId) {
      res["AttemptId"] = boost::any(*attemptId);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("AttemptId") != m.end() && !m["AttemptId"].empty()) {
      attemptId = make_shared<string>(boost::any_cast<string>(m["AttemptId"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<string>(boost::any_cast<string>(m["CaseId"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
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
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListAttemptsRequest() = default;
};
class ListAttemptsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> agentEstablishedTime{};
  shared_ptr<string> agentId{};
  shared_ptr<long> agentRingDuration{};
  shared_ptr<long> assignAgentTime{};
  shared_ptr<string> attemptId{};
  shared_ptr<string> callee{};
  shared_ptr<string> caller{};
  shared_ptr<string> campaignId{};
  shared_ptr<string> caseId{};
  shared_ptr<string> contactId{};
  shared_ptr<long> customerEstablishedTime{};
  shared_ptr<long> customerReleasedTime{};
  shared_ptr<long> dialDuration{};
  shared_ptr<long> dialTime{};
  shared_ptr<long> enqueueTime{};
  shared_ptr<long> enterIvrTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ivrDuration{};
  shared_ptr<long> queueDuration{};
  shared_ptr<string> queueId{};

  ListAttemptsResponseBodyDataList() {}

  explicit ListAttemptsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentEstablishedTime) {
      res["AgentEstablishedTime"] = boost::any(*agentEstablishedTime);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentRingDuration) {
      res["AgentRingDuration"] = boost::any(*agentRingDuration);
    }
    if (assignAgentTime) {
      res["AssignAgentTime"] = boost::any(*assignAgentTime);
    }
    if (attemptId) {
      res["AttemptId"] = boost::any(*attemptId);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (customerEstablishedTime) {
      res["CustomerEstablishedTime"] = boost::any(*customerEstablishedTime);
    }
    if (customerReleasedTime) {
      res["CustomerReleasedTime"] = boost::any(*customerReleasedTime);
    }
    if (dialDuration) {
      res["DialDuration"] = boost::any(*dialDuration);
    }
    if (dialTime) {
      res["DialTime"] = boost::any(*dialTime);
    }
    if (enqueueTime) {
      res["EnqueueTime"] = boost::any(*enqueueTime);
    }
    if (enterIvrTime) {
      res["EnterIvrTime"] = boost::any(*enterIvrTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ivrDuration) {
      res["IvrDuration"] = boost::any(*ivrDuration);
    }
    if (queueDuration) {
      res["QueueDuration"] = boost::any(*queueDuration);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentEstablishedTime") != m.end() && !m["AgentEstablishedTime"].empty()) {
      agentEstablishedTime = make_shared<long>(boost::any_cast<long>(m["AgentEstablishedTime"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("AgentRingDuration") != m.end() && !m["AgentRingDuration"].empty()) {
      agentRingDuration = make_shared<long>(boost::any_cast<long>(m["AgentRingDuration"]));
    }
    if (m.find("AssignAgentTime") != m.end() && !m["AssignAgentTime"].empty()) {
      assignAgentTime = make_shared<long>(boost::any_cast<long>(m["AssignAgentTime"]));
    }
    if (m.find("AttemptId") != m.end() && !m["AttemptId"].empty()) {
      attemptId = make_shared<string>(boost::any_cast<string>(m["AttemptId"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<string>(boost::any_cast<string>(m["CaseId"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("CustomerEstablishedTime") != m.end() && !m["CustomerEstablishedTime"].empty()) {
      customerEstablishedTime = make_shared<long>(boost::any_cast<long>(m["CustomerEstablishedTime"]));
    }
    if (m.find("CustomerReleasedTime") != m.end() && !m["CustomerReleasedTime"].empty()) {
      customerReleasedTime = make_shared<long>(boost::any_cast<long>(m["CustomerReleasedTime"]));
    }
    if (m.find("DialDuration") != m.end() && !m["DialDuration"].empty()) {
      dialDuration = make_shared<long>(boost::any_cast<long>(m["DialDuration"]));
    }
    if (m.find("DialTime") != m.end() && !m["DialTime"].empty()) {
      dialTime = make_shared<long>(boost::any_cast<long>(m["DialTime"]));
    }
    if (m.find("EnqueueTime") != m.end() && !m["EnqueueTime"].empty()) {
      enqueueTime = make_shared<long>(boost::any_cast<long>(m["EnqueueTime"]));
    }
    if (m.find("EnterIvrTime") != m.end() && !m["EnterIvrTime"].empty()) {
      enterIvrTime = make_shared<long>(boost::any_cast<long>(m["EnterIvrTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IvrDuration") != m.end() && !m["IvrDuration"].empty()) {
      ivrDuration = make_shared<long>(boost::any_cast<long>(m["IvrDuration"]));
    }
    if (m.find("QueueDuration") != m.end() && !m["QueueDuration"].empty()) {
      queueDuration = make_shared<long>(boost::any_cast<long>(m["QueueDuration"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
  }


  virtual ~ListAttemptsResponseBodyDataList() = default;
};
class ListAttemptsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAttemptsResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAttemptsResponseBodyData() {}

  explicit ListAttemptsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
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
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListAttemptsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAttemptsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListAttemptsResponseBodyDataList>>(expect1);
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


  virtual ~ListAttemptsResponseBodyData() = default;
};
class ListAttemptsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListAttemptsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListAttemptsResponseBody() {}

  explicit ListAttemptsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
        ListAttemptsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAttemptsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAttemptsResponseBody() = default;
};
class ListAttemptsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAttemptsResponseBody> body{};

  ListAttemptsResponse() {}

  explicit ListAttemptsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAttemptsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAttemptsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAttemptsResponse() = default;
};
class ListCampaignTrendingReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> startTime{};

  ListCampaignTrendingReportRequest() {}

  explicit ListCampaignTrendingReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListCampaignTrendingReportRequest() = default;
};
class ListCampaignTrendingReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> breakAgents{};
  shared_ptr<long> concurrency{};
  shared_ptr<long> datetime{};
  shared_ptr<long> loggedInAgents{};
  shared_ptr<string> outboundScenarioBreakingAgents{};
  shared_ptr<string> outboundScenarioReadyAgents{};
  shared_ptr<string> outboundScenarioTalkingAgents{};
  shared_ptr<string> outboundScenarioWorkingAgents{};
  shared_ptr<long> readyAgents{};
  shared_ptr<long> talkAgents{};
  shared_ptr<long> workAgents{};

  ListCampaignTrendingReportResponseBodyData() {}

  explicit ListCampaignTrendingReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (breakAgents) {
      res["BreakAgents"] = boost::any(*breakAgents);
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (datetime) {
      res["Datetime"] = boost::any(*datetime);
    }
    if (loggedInAgents) {
      res["LoggedInAgents"] = boost::any(*loggedInAgents);
    }
    if (outboundScenarioBreakingAgents) {
      res["OutboundScenarioBreakingAgents"] = boost::any(*outboundScenarioBreakingAgents);
    }
    if (outboundScenarioReadyAgents) {
      res["OutboundScenarioReadyAgents"] = boost::any(*outboundScenarioReadyAgents);
    }
    if (outboundScenarioTalkingAgents) {
      res["OutboundScenarioTalkingAgents"] = boost::any(*outboundScenarioTalkingAgents);
    }
    if (outboundScenarioWorkingAgents) {
      res["OutboundScenarioWorkingAgents"] = boost::any(*outboundScenarioWorkingAgents);
    }
    if (readyAgents) {
      res["ReadyAgents"] = boost::any(*readyAgents);
    }
    if (talkAgents) {
      res["TalkAgents"] = boost::any(*talkAgents);
    }
    if (workAgents) {
      res["WorkAgents"] = boost::any(*workAgents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BreakAgents") != m.end() && !m["BreakAgents"].empty()) {
      breakAgents = make_shared<long>(boost::any_cast<long>(m["BreakAgents"]));
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("Datetime") != m.end() && !m["Datetime"].empty()) {
      datetime = make_shared<long>(boost::any_cast<long>(m["Datetime"]));
    }
    if (m.find("LoggedInAgents") != m.end() && !m["LoggedInAgents"].empty()) {
      loggedInAgents = make_shared<long>(boost::any_cast<long>(m["LoggedInAgents"]));
    }
    if (m.find("OutboundScenarioBreakingAgents") != m.end() && !m["OutboundScenarioBreakingAgents"].empty()) {
      outboundScenarioBreakingAgents = make_shared<string>(boost::any_cast<string>(m["OutboundScenarioBreakingAgents"]));
    }
    if (m.find("OutboundScenarioReadyAgents") != m.end() && !m["OutboundScenarioReadyAgents"].empty()) {
      outboundScenarioReadyAgents = make_shared<string>(boost::any_cast<string>(m["OutboundScenarioReadyAgents"]));
    }
    if (m.find("OutboundScenarioTalkingAgents") != m.end() && !m["OutboundScenarioTalkingAgents"].empty()) {
      outboundScenarioTalkingAgents = make_shared<string>(boost::any_cast<string>(m["OutboundScenarioTalkingAgents"]));
    }
    if (m.find("OutboundScenarioWorkingAgents") != m.end() && !m["OutboundScenarioWorkingAgents"].empty()) {
      outboundScenarioWorkingAgents = make_shared<string>(boost::any_cast<string>(m["OutboundScenarioWorkingAgents"]));
    }
    if (m.find("ReadyAgents") != m.end() && !m["ReadyAgents"].empty()) {
      readyAgents = make_shared<long>(boost::any_cast<long>(m["ReadyAgents"]));
    }
    if (m.find("TalkAgents") != m.end() && !m["TalkAgents"].empty()) {
      talkAgents = make_shared<long>(boost::any_cast<long>(m["TalkAgents"]));
    }
    if (m.find("WorkAgents") != m.end() && !m["WorkAgents"].empty()) {
      workAgents = make_shared<long>(boost::any_cast<long>(m["WorkAgents"]));
    }
  }


  virtual ~ListCampaignTrendingReportResponseBodyData() = default;
};
class ListCampaignTrendingReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListCampaignTrendingReportResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListCampaignTrendingReportResponseBody() {}

  explicit ListCampaignTrendingReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCampaignTrendingReportResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCampaignTrendingReportResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCampaignTrendingReportResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCampaignTrendingReportResponseBody() = default;
};
class ListCampaignTrendingReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCampaignTrendingReportResponseBody> body{};

  ListCampaignTrendingReportResponse() {}

  explicit ListCampaignTrendingReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCampaignTrendingReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCampaignTrendingReportResponseBody>(model1);
      }
    }
  }


  virtual ~ListCampaignTrendingReportResponse() = default;
};
class ListCampaignsRequest : public Darabonba::Model {
public:
  shared_ptr<string> actualStartTimeFrom{};
  shared_ptr<string> actualStartTimeTo{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> planedStartTimeFrom{};
  shared_ptr<string> planedStartTimeTo{};
  shared_ptr<string> queueId{};
  shared_ptr<string> state{};

  ListCampaignsRequest() {}

  explicit ListCampaignsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualStartTimeFrom) {
      res["ActualStartTimeFrom"] = boost::any(*actualStartTimeFrom);
    }
    if (actualStartTimeTo) {
      res["ActualStartTimeTo"] = boost::any(*actualStartTimeTo);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (planedStartTimeFrom) {
      res["PlanedStartTimeFrom"] = boost::any(*planedStartTimeFrom);
    }
    if (planedStartTimeTo) {
      res["PlanedStartTimeTo"] = boost::any(*planedStartTimeTo);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualStartTimeFrom") != m.end() && !m["ActualStartTimeFrom"].empty()) {
      actualStartTimeFrom = make_shared<string>(boost::any_cast<string>(m["ActualStartTimeFrom"]));
    }
    if (m.find("ActualStartTimeTo") != m.end() && !m["ActualStartTimeTo"].empty()) {
      actualStartTimeTo = make_shared<string>(boost::any_cast<string>(m["ActualStartTimeTo"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlanedStartTimeFrom") != m.end() && !m["PlanedStartTimeFrom"].empty()) {
      planedStartTimeFrom = make_shared<string>(boost::any_cast<string>(m["PlanedStartTimeFrom"]));
    }
    if (m.find("PlanedStartTimeTo") != m.end() && !m["PlanedStartTimeTo"].empty()) {
      planedStartTimeTo = make_shared<string>(boost::any_cast<string>(m["PlanedStartTimeTo"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListCampaignsRequest() = default;
};
class ListCampaignsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> actualEndTime{};
  shared_ptr<long> actualStartTime{};
  shared_ptr<string> campaignId{};
  shared_ptr<long> casesAborted{};
  shared_ptr<long> casesConnected{};
  shared_ptr<long> casesUncompleted{};
  shared_ptr<long> completedRate{};
  shared_ptr<long> maxAttemptCount{};
  shared_ptr<long> minAttemptInterval{};
  shared_ptr<string> name{};
  shared_ptr<long> planedEndTime{};
  shared_ptr<long> planedStartTime{};
  shared_ptr<string> queueId{};
  shared_ptr<string> queueName{};
  shared_ptr<bool> simulation{};
  shared_ptr<string> state{};
  shared_ptr<string> strategyParameters{};
  shared_ptr<string> strategyType{};
  shared_ptr<long> totalCases{};

  ListCampaignsResponseBodyDataList() {}

  explicit ListCampaignsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualEndTime) {
      res["ActualEndTime"] = boost::any(*actualEndTime);
    }
    if (actualStartTime) {
      res["ActualStartTime"] = boost::any(*actualStartTime);
    }
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (casesAborted) {
      res["CasesAborted"] = boost::any(*casesAborted);
    }
    if (casesConnected) {
      res["CasesConnected"] = boost::any(*casesConnected);
    }
    if (casesUncompleted) {
      res["CasesUncompleted"] = boost::any(*casesUncompleted);
    }
    if (completedRate) {
      res["CompletedRate"] = boost::any(*completedRate);
    }
    if (maxAttemptCount) {
      res["MaxAttemptCount"] = boost::any(*maxAttemptCount);
    }
    if (minAttemptInterval) {
      res["MinAttemptInterval"] = boost::any(*minAttemptInterval);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planedEndTime) {
      res["PlanedEndTime"] = boost::any(*planedEndTime);
    }
    if (planedStartTime) {
      res["PlanedStartTime"] = boost::any(*planedStartTime);
    }
    if (queueId) {
      res["QueueId"] = boost::any(*queueId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (simulation) {
      res["Simulation"] = boost::any(*simulation);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (strategyParameters) {
      res["StrategyParameters"] = boost::any(*strategyParameters);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (totalCases) {
      res["TotalCases"] = boost::any(*totalCases);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualEndTime") != m.end() && !m["ActualEndTime"].empty()) {
      actualEndTime = make_shared<long>(boost::any_cast<long>(m["ActualEndTime"]));
    }
    if (m.find("ActualStartTime") != m.end() && !m["ActualStartTime"].empty()) {
      actualStartTime = make_shared<long>(boost::any_cast<long>(m["ActualStartTime"]));
    }
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("CasesAborted") != m.end() && !m["CasesAborted"].empty()) {
      casesAborted = make_shared<long>(boost::any_cast<long>(m["CasesAborted"]));
    }
    if (m.find("CasesConnected") != m.end() && !m["CasesConnected"].empty()) {
      casesConnected = make_shared<long>(boost::any_cast<long>(m["CasesConnected"]));
    }
    if (m.find("CasesUncompleted") != m.end() && !m["CasesUncompleted"].empty()) {
      casesUncompleted = make_shared<long>(boost::any_cast<long>(m["CasesUncompleted"]));
    }
    if (m.find("CompletedRate") != m.end() && !m["CompletedRate"].empty()) {
      completedRate = make_shared<long>(boost::any_cast<long>(m["CompletedRate"]));
    }
    if (m.find("MaxAttemptCount") != m.end() && !m["MaxAttemptCount"].empty()) {
      maxAttemptCount = make_shared<long>(boost::any_cast<long>(m["MaxAttemptCount"]));
    }
    if (m.find("MinAttemptInterval") != m.end() && !m["MinAttemptInterval"].empty()) {
      minAttemptInterval = make_shared<long>(boost::any_cast<long>(m["MinAttemptInterval"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanedEndTime") != m.end() && !m["PlanedEndTime"].empty()) {
      planedEndTime = make_shared<long>(boost::any_cast<long>(m["PlanedEndTime"]));
    }
    if (m.find("PlanedStartTime") != m.end() && !m["PlanedStartTime"].empty()) {
      planedStartTime = make_shared<long>(boost::any_cast<long>(m["PlanedStartTime"]));
    }
    if (m.find("QueueId") != m.end() && !m["QueueId"].empty()) {
      queueId = make_shared<string>(boost::any_cast<string>(m["QueueId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("Simulation") != m.end() && !m["Simulation"].empty()) {
      simulation = make_shared<bool>(boost::any_cast<bool>(m["Simulation"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StrategyParameters") != m.end() && !m["StrategyParameters"].empty()) {
      strategyParameters = make_shared<string>(boost::any_cast<string>(m["StrategyParameters"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("TotalCases") != m.end() && !m["TotalCases"].empty()) {
      totalCases = make_shared<long>(boost::any_cast<long>(m["TotalCases"]));
    }
  }


  virtual ~ListCampaignsResponseBodyDataList() = default;
};
class ListCampaignsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListCampaignsResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCampaignsResponseBodyData() {}

  explicit ListCampaignsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
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
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListCampaignsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCampaignsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListCampaignsResponseBodyDataList>>(expect1);
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


  virtual ~ListCampaignsResponseBodyData() = default;
};
class ListCampaignsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListCampaignsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCampaignsResponseBody() {}

  explicit ListCampaignsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        ListCampaignsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCampaignsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ListCampaignsResponseBody() = default;
};
class ListCampaignsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCampaignsResponseBody> body{};

  ListCampaignsResponse() {}

  explicit ListCampaignsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCampaignsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCampaignsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCampaignsResponse() = default;
};
class ListCasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNumber{};

  ListCasesRequest() {}

  explicit ListCasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~ListCasesRequest() = default;
};
class ListCasesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> abandonType{};
  shared_ptr<long> attemptCount{};
  shared_ptr<string> caseId{};
  shared_ptr<string> customVariables{};
  shared_ptr<string> expandInfo{};
  shared_ptr<string> failureReason{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> state{};

  ListCasesResponseBodyDataList() {}

  explicit ListCasesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonType) {
      res["AbandonType"] = boost::any(*abandonType);
    }
    if (attemptCount) {
      res["AttemptCount"] = boost::any(*attemptCount);
    }
    if (caseId) {
      res["CaseId"] = boost::any(*caseId);
    }
    if (customVariables) {
      res["CustomVariables"] = boost::any(*customVariables);
    }
    if (expandInfo) {
      res["ExpandInfo"] = boost::any(*expandInfo);
    }
    if (failureReason) {
      res["FailureReason"] = boost::any(*failureReason);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonType") != m.end() && !m["AbandonType"].empty()) {
      abandonType = make_shared<string>(boost::any_cast<string>(m["AbandonType"]));
    }
    if (m.find("AttemptCount") != m.end() && !m["AttemptCount"].empty()) {
      attemptCount = make_shared<long>(boost::any_cast<long>(m["AttemptCount"]));
    }
    if (m.find("CaseId") != m.end() && !m["CaseId"].empty()) {
      caseId = make_shared<string>(boost::any_cast<string>(m["CaseId"]));
    }
    if (m.find("CustomVariables") != m.end() && !m["CustomVariables"].empty()) {
      customVariables = make_shared<string>(boost::any_cast<string>(m["CustomVariables"]));
    }
    if (m.find("ExpandInfo") != m.end() && !m["ExpandInfo"].empty()) {
      expandInfo = make_shared<string>(boost::any_cast<string>(m["ExpandInfo"]));
    }
    if (m.find("FailureReason") != m.end() && !m["FailureReason"].empty()) {
      failureReason = make_shared<string>(boost::any_cast<string>(m["FailureReason"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListCasesResponseBodyDataList() = default;
};
class ListCasesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListCasesResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCasesResponseBodyData() {}

  explicit ListCasesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
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
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListCasesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCasesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListCasesResponseBodyDataList>>(expect1);
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


  virtual ~ListCasesResponseBodyData() = default;
};
class ListCasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListCasesResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCasesResponseBody() {}

  explicit ListCasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        ListCasesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCasesResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ListCasesResponseBody() = default;
};
class ListCasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCasesResponseBody> body{};

  ListCasesResponse() {}

  explicit ListCasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCasesResponse() = default;
};
class ListHistoricalAgentSkillGroupReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentIdList{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mediaType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> skillGroupIdList{};
  shared_ptr<long> startTime{};

  ListHistoricalAgentSkillGroupReportRequest() {}

  explicit ListHistoricalAgentSkillGroupReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentIdList) {
      res["AgentIdList"] = boost::any(*agentIdList);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (skillGroupIdList) {
      res["SkillGroupIdList"] = boost::any(*skillGroupIdList);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentIdList") != m.end() && !m["AgentIdList"].empty()) {
      agentIdList = make_shared<string>(boost::any_cast<string>(m["AgentIdList"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SkillGroupIdList") != m.end() && !m["SkillGroupIdList"].empty()) {
      skillGroupIdList = make_shared<string>(boost::any_cast<string>(m["SkillGroupIdList"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportRequest() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back : public Darabonba::Model {
public:
  shared_ptr<double> agentAnswerRate{};
  shared_ptr<double> answerRate{};
  shared_ptr<double> averageCustomerRingTime{};
  shared_ptr<double> averageRingTime{};
  shared_ptr<long> averageTalkTime{};
  shared_ptr<long> callsAnswered{};
  shared_ptr<long> callsCustomerHandled{};
  shared_ptr<long> callsDialed{};
  shared_ptr<double> customerHandleRate{};
  shared_ptr<long> maxCustomerRingTime{};
  shared_ptr<long> maxRingTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> totalCustomerRingTime{};
  shared_ptr<long> totalRingTime{};
  shared_ptr<long> totalTalkTime{};

  ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentAnswerRate) {
      res["AgentAnswerRate"] = boost::any(*agentAnswerRate);
    }
    if (answerRate) {
      res["AnswerRate"] = boost::any(*answerRate);
    }
    if (averageCustomerRingTime) {
      res["AverageCustomerRingTime"] = boost::any(*averageCustomerRingTime);
    }
    if (averageRingTime) {
      res["AverageRingTime"] = boost::any(*averageRingTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (callsAnswered) {
      res["CallsAnswered"] = boost::any(*callsAnswered);
    }
    if (callsCustomerHandled) {
      res["CallsCustomerHandled"] = boost::any(*callsCustomerHandled);
    }
    if (callsDialed) {
      res["CallsDialed"] = boost::any(*callsDialed);
    }
    if (customerHandleRate) {
      res["CustomerHandleRate"] = boost::any(*customerHandleRate);
    }
    if (maxCustomerRingTime) {
      res["MaxCustomerRingTime"] = boost::any(*maxCustomerRingTime);
    }
    if (maxRingTime) {
      res["MaxRingTime"] = boost::any(*maxRingTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (totalCustomerRingTime) {
      res["TotalCustomerRingTime"] = boost::any(*totalCustomerRingTime);
    }
    if (totalRingTime) {
      res["TotalRingTime"] = boost::any(*totalRingTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentAnswerRate") != m.end() && !m["AgentAnswerRate"].empty()) {
      agentAnswerRate = make_shared<double>(boost::any_cast<double>(m["AgentAnswerRate"]));
    }
    if (m.find("AnswerRate") != m.end() && !m["AnswerRate"].empty()) {
      answerRate = make_shared<double>(boost::any_cast<double>(m["AnswerRate"]));
    }
    if (m.find("AverageCustomerRingTime") != m.end() && !m["AverageCustomerRingTime"].empty()) {
      averageCustomerRingTime = make_shared<double>(boost::any_cast<double>(m["AverageCustomerRingTime"]));
    }
    if (m.find("AverageRingTime") != m.end() && !m["AverageRingTime"].empty()) {
      averageRingTime = make_shared<double>(boost::any_cast<double>(m["AverageRingTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<long>(boost::any_cast<long>(m["AverageTalkTime"]));
    }
    if (m.find("CallsAnswered") != m.end() && !m["CallsAnswered"].empty()) {
      callsAnswered = make_shared<long>(boost::any_cast<long>(m["CallsAnswered"]));
    }
    if (m.find("CallsCustomerHandled") != m.end() && !m["CallsCustomerHandled"].empty()) {
      callsCustomerHandled = make_shared<long>(boost::any_cast<long>(m["CallsCustomerHandled"]));
    }
    if (m.find("CallsDialed") != m.end() && !m["CallsDialed"].empty()) {
      callsDialed = make_shared<long>(boost::any_cast<long>(m["CallsDialed"]));
    }
    if (m.find("CustomerHandleRate") != m.end() && !m["CustomerHandleRate"].empty()) {
      customerHandleRate = make_shared<double>(boost::any_cast<double>(m["CustomerHandleRate"]));
    }
    if (m.find("MaxCustomerRingTime") != m.end() && !m["MaxCustomerRingTime"].empty()) {
      maxCustomerRingTime = make_shared<long>(boost::any_cast<long>(m["MaxCustomerRingTime"]));
    }
    if (m.find("MaxRingTime") != m.end() && !m["MaxRingTime"].empty()) {
      maxRingTime = make_shared<long>(boost::any_cast<long>(m["MaxRingTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("TotalCustomerRingTime") != m.end() && !m["TotalCustomerRingTime"].empty()) {
      totalCustomerRingTime = make_shared<long>(boost::any_cast<long>(m["TotalCustomerRingTime"]));
    }
    if (m.find("TotalRingTime") != m.end() && !m["TotalRingTime"].empty()) {
      totalRingTime = make_shared<long>(boost::any_cast<long>(m["TotalRingTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound : public Darabonba::Model {
public:
  shared_ptr<double> averageFirstResponseTime{};
  shared_ptr<double> averageHoldTime{};
  shared_ptr<double> averageResponseTime{};
  shared_ptr<double> averageRingTime{};
  shared_ptr<double> averageTalkTime{};
  shared_ptr<double> averageWorkTime{};
  shared_ptr<long> callsAttendedTransferIn{};
  shared_ptr<long> callsAttendedTransferOut{};
  shared_ptr<long> callsBlindTransferIn{};
  shared_ptr<long> callsBlindTransferOut{};
  shared_ptr<long> callsHandled{};
  shared_ptr<long> callsHold{};
  shared_ptr<long> callsOffered{};
  shared_ptr<long> callsRinged{};
  shared_ptr<double> handleRate{};
  shared_ptr<long> maxHoldTime{};
  shared_ptr<long> maxRingTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> maxWorkTime{};
  shared_ptr<double> satisfactionIndex{};
  shared_ptr<double> satisfactionRate{};
  shared_ptr<long> satisfactionSurveysOffered{};
  shared_ptr<long> satisfactionSurveysResponded{};
  shared_ptr<long> totalHoldTime{};
  shared_ptr<long> totalMessagesSent{};
  shared_ptr<long> totalMessagesSentByAgent{};
  shared_ptr<long> totalMessagesSentByCustomer{};
  shared_ptr<long> totalRingTime{};
  shared_ptr<long> totalTalkTime{};
  shared_ptr<long> totalWorkTime{};

  ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageFirstResponseTime) {
      res["AverageFirstResponseTime"] = boost::any(*averageFirstResponseTime);
    }
    if (averageHoldTime) {
      res["AverageHoldTime"] = boost::any(*averageHoldTime);
    }
    if (averageResponseTime) {
      res["AverageResponseTime"] = boost::any(*averageResponseTime);
    }
    if (averageRingTime) {
      res["AverageRingTime"] = boost::any(*averageRingTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (averageWorkTime) {
      res["AverageWorkTime"] = boost::any(*averageWorkTime);
    }
    if (callsAttendedTransferIn) {
      res["CallsAttendedTransferIn"] = boost::any(*callsAttendedTransferIn);
    }
    if (callsAttendedTransferOut) {
      res["CallsAttendedTransferOut"] = boost::any(*callsAttendedTransferOut);
    }
    if (callsBlindTransferIn) {
      res["CallsBlindTransferIn"] = boost::any(*callsBlindTransferIn);
    }
    if (callsBlindTransferOut) {
      res["CallsBlindTransferOut"] = boost::any(*callsBlindTransferOut);
    }
    if (callsHandled) {
      res["CallsHandled"] = boost::any(*callsHandled);
    }
    if (callsHold) {
      res["CallsHold"] = boost::any(*callsHold);
    }
    if (callsOffered) {
      res["CallsOffered"] = boost::any(*callsOffered);
    }
    if (callsRinged) {
      res["CallsRinged"] = boost::any(*callsRinged);
    }
    if (handleRate) {
      res["HandleRate"] = boost::any(*handleRate);
    }
    if (maxHoldTime) {
      res["MaxHoldTime"] = boost::any(*maxHoldTime);
    }
    if (maxRingTime) {
      res["MaxRingTime"] = boost::any(*maxRingTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (maxWorkTime) {
      res["MaxWorkTime"] = boost::any(*maxWorkTime);
    }
    if (satisfactionIndex) {
      res["SatisfactionIndex"] = boost::any(*satisfactionIndex);
    }
    if (satisfactionRate) {
      res["SatisfactionRate"] = boost::any(*satisfactionRate);
    }
    if (satisfactionSurveysOffered) {
      res["SatisfactionSurveysOffered"] = boost::any(*satisfactionSurveysOffered);
    }
    if (satisfactionSurveysResponded) {
      res["SatisfactionSurveysResponded"] = boost::any(*satisfactionSurveysResponded);
    }
    if (totalHoldTime) {
      res["TotalHoldTime"] = boost::any(*totalHoldTime);
    }
    if (totalMessagesSent) {
      res["TotalMessagesSent"] = boost::any(*totalMessagesSent);
    }
    if (totalMessagesSentByAgent) {
      res["TotalMessagesSentByAgent"] = boost::any(*totalMessagesSentByAgent);
    }
    if (totalMessagesSentByCustomer) {
      res["TotalMessagesSentByCustomer"] = boost::any(*totalMessagesSentByCustomer);
    }
    if (totalRingTime) {
      res["TotalRingTime"] = boost::any(*totalRingTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    if (totalWorkTime) {
      res["TotalWorkTime"] = boost::any(*totalWorkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageFirstResponseTime") != m.end() && !m["AverageFirstResponseTime"].empty()) {
      averageFirstResponseTime = make_shared<double>(boost::any_cast<double>(m["AverageFirstResponseTime"]));
    }
    if (m.find("AverageHoldTime") != m.end() && !m["AverageHoldTime"].empty()) {
      averageHoldTime = make_shared<double>(boost::any_cast<double>(m["AverageHoldTime"]));
    }
    if (m.find("AverageResponseTime") != m.end() && !m["AverageResponseTime"].empty()) {
      averageResponseTime = make_shared<double>(boost::any_cast<double>(m["AverageResponseTime"]));
    }
    if (m.find("AverageRingTime") != m.end() && !m["AverageRingTime"].empty()) {
      averageRingTime = make_shared<double>(boost::any_cast<double>(m["AverageRingTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<double>(boost::any_cast<double>(m["AverageTalkTime"]));
    }
    if (m.find("AverageWorkTime") != m.end() && !m["AverageWorkTime"].empty()) {
      averageWorkTime = make_shared<double>(boost::any_cast<double>(m["AverageWorkTime"]));
    }
    if (m.find("CallsAttendedTransferIn") != m.end() && !m["CallsAttendedTransferIn"].empty()) {
      callsAttendedTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferIn"]));
    }
    if (m.find("CallsAttendedTransferOut") != m.end() && !m["CallsAttendedTransferOut"].empty()) {
      callsAttendedTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferOut"]));
    }
    if (m.find("CallsBlindTransferIn") != m.end() && !m["CallsBlindTransferIn"].empty()) {
      callsBlindTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferIn"]));
    }
    if (m.find("CallsBlindTransferOut") != m.end() && !m["CallsBlindTransferOut"].empty()) {
      callsBlindTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferOut"]));
    }
    if (m.find("CallsHandled") != m.end() && !m["CallsHandled"].empty()) {
      callsHandled = make_shared<long>(boost::any_cast<long>(m["CallsHandled"]));
    }
    if (m.find("CallsHold") != m.end() && !m["CallsHold"].empty()) {
      callsHold = make_shared<long>(boost::any_cast<long>(m["CallsHold"]));
    }
    if (m.find("CallsOffered") != m.end() && !m["CallsOffered"].empty()) {
      callsOffered = make_shared<long>(boost::any_cast<long>(m["CallsOffered"]));
    }
    if (m.find("CallsRinged") != m.end() && !m["CallsRinged"].empty()) {
      callsRinged = make_shared<long>(boost::any_cast<long>(m["CallsRinged"]));
    }
    if (m.find("HandleRate") != m.end() && !m["HandleRate"].empty()) {
      handleRate = make_shared<double>(boost::any_cast<double>(m["HandleRate"]));
    }
    if (m.find("MaxHoldTime") != m.end() && !m["MaxHoldTime"].empty()) {
      maxHoldTime = make_shared<long>(boost::any_cast<long>(m["MaxHoldTime"]));
    }
    if (m.find("MaxRingTime") != m.end() && !m["MaxRingTime"].empty()) {
      maxRingTime = make_shared<long>(boost::any_cast<long>(m["MaxRingTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("MaxWorkTime") != m.end() && !m["MaxWorkTime"].empty()) {
      maxWorkTime = make_shared<long>(boost::any_cast<long>(m["MaxWorkTime"]));
    }
    if (m.find("SatisfactionIndex") != m.end() && !m["SatisfactionIndex"].empty()) {
      satisfactionIndex = make_shared<double>(boost::any_cast<double>(m["SatisfactionIndex"]));
    }
    if (m.find("SatisfactionRate") != m.end() && !m["SatisfactionRate"].empty()) {
      satisfactionRate = make_shared<double>(boost::any_cast<double>(m["SatisfactionRate"]));
    }
    if (m.find("SatisfactionSurveysOffered") != m.end() && !m["SatisfactionSurveysOffered"].empty()) {
      satisfactionSurveysOffered = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysOffered"]));
    }
    if (m.find("SatisfactionSurveysResponded") != m.end() && !m["SatisfactionSurveysResponded"].empty()) {
      satisfactionSurveysResponded = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysResponded"]));
    }
    if (m.find("TotalHoldTime") != m.end() && !m["TotalHoldTime"].empty()) {
      totalHoldTime = make_shared<long>(boost::any_cast<long>(m["TotalHoldTime"]));
    }
    if (m.find("TotalMessagesSent") != m.end() && !m["TotalMessagesSent"].empty()) {
      totalMessagesSent = make_shared<long>(boost::any_cast<long>(m["TotalMessagesSent"]));
    }
    if (m.find("TotalMessagesSentByAgent") != m.end() && !m["TotalMessagesSentByAgent"].empty()) {
      totalMessagesSentByAgent = make_shared<long>(boost::any_cast<long>(m["TotalMessagesSentByAgent"]));
    }
    if (m.find("TotalMessagesSentByCustomer") != m.end() && !m["TotalMessagesSentByCustomer"].empty()) {
      totalMessagesSentByCustomer = make_shared<long>(boost::any_cast<long>(m["TotalMessagesSentByCustomer"]));
    }
    if (m.find("TotalRingTime") != m.end() && !m["TotalRingTime"].empty()) {
      totalRingTime = make_shared<long>(boost::any_cast<long>(m["TotalRingTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
    if (m.find("TotalWorkTime") != m.end() && !m["TotalWorkTime"].empty()) {
      totalWorkTime = make_shared<long>(boost::any_cast<long>(m["TotalWorkTime"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal : public Darabonba::Model {
public:
  shared_ptr<long> averageTalkTime{};
  shared_ptr<long> callsAnswered{};
  shared_ptr<long> callsDialed{};
  shared_ptr<long> callsHandled{};
  shared_ptr<long> callsOffered{};
  shared_ptr<long> callsTalk{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> totalTalkTime{};

  ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (callsAnswered) {
      res["CallsAnswered"] = boost::any(*callsAnswered);
    }
    if (callsDialed) {
      res["CallsDialed"] = boost::any(*callsDialed);
    }
    if (callsHandled) {
      res["CallsHandled"] = boost::any(*callsHandled);
    }
    if (callsOffered) {
      res["CallsOffered"] = boost::any(*callsOffered);
    }
    if (callsTalk) {
      res["CallsTalk"] = boost::any(*callsTalk);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<long>(boost::any_cast<long>(m["AverageTalkTime"]));
    }
    if (m.find("CallsAnswered") != m.end() && !m["CallsAnswered"].empty()) {
      callsAnswered = make_shared<long>(boost::any_cast<long>(m["CallsAnswered"]));
    }
    if (m.find("CallsDialed") != m.end() && !m["CallsDialed"].empty()) {
      callsDialed = make_shared<long>(boost::any_cast<long>(m["CallsDialed"]));
    }
    if (m.find("CallsHandled") != m.end() && !m["CallsHandled"].empty()) {
      callsHandled = make_shared<long>(boost::any_cast<long>(m["CallsHandled"]));
    }
    if (m.find("CallsOffered") != m.end() && !m["CallsOffered"].empty()) {
      callsOffered = make_shared<long>(boost::any_cast<long>(m["CallsOffered"]));
    }
    if (m.find("CallsTalk") != m.end() && !m["CallsTalk"].empty()) {
      callsTalk = make_shared<long>(boost::any_cast<long>(m["CallsTalk"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound : public Darabonba::Model {
public:
  shared_ptr<double> answerRate{};
  shared_ptr<double> averageDialingTime{};
  shared_ptr<double> averageHoldTime{};
  shared_ptr<double> averageRingTime{};
  shared_ptr<double> averageTalkTime{};
  shared_ptr<double> averageWorkTime{};
  shared_ptr<long> callsAnswered{};
  shared_ptr<long> callsAttendedTransferIn{};
  shared_ptr<long> callsAttendedTransferOut{};
  shared_ptr<long> callsBlindTransferIn{};
  shared_ptr<long> callsBlindTransferOut{};
  shared_ptr<long> callsDialed{};
  shared_ptr<long> callsHold{};
  shared_ptr<long> callsRinged{};
  shared_ptr<long> maxDialingTime{};
  shared_ptr<long> maxHoldTime{};
  shared_ptr<long> maxRingTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> maxWorkTime{};
  shared_ptr<double> satisfactionIndex{};
  shared_ptr<double> satisfactionRate{};
  shared_ptr<long> satisfactionSurveysOffered{};
  shared_ptr<long> satisfactionSurveysResponded{};
  shared_ptr<long> totalDialingTime{};
  shared_ptr<long> totalHoldTime{};
  shared_ptr<long> totalRingTime{};
  shared_ptr<long> totalTalkTime{};
  shared_ptr<long> totalWorkTime{};

  ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerRate) {
      res["AnswerRate"] = boost::any(*answerRate);
    }
    if (averageDialingTime) {
      res["AverageDialingTime"] = boost::any(*averageDialingTime);
    }
    if (averageHoldTime) {
      res["AverageHoldTime"] = boost::any(*averageHoldTime);
    }
    if (averageRingTime) {
      res["AverageRingTime"] = boost::any(*averageRingTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (averageWorkTime) {
      res["AverageWorkTime"] = boost::any(*averageWorkTime);
    }
    if (callsAnswered) {
      res["CallsAnswered"] = boost::any(*callsAnswered);
    }
    if (callsAttendedTransferIn) {
      res["CallsAttendedTransferIn"] = boost::any(*callsAttendedTransferIn);
    }
    if (callsAttendedTransferOut) {
      res["CallsAttendedTransferOut"] = boost::any(*callsAttendedTransferOut);
    }
    if (callsBlindTransferIn) {
      res["CallsBlindTransferIn"] = boost::any(*callsBlindTransferIn);
    }
    if (callsBlindTransferOut) {
      res["CallsBlindTransferOut"] = boost::any(*callsBlindTransferOut);
    }
    if (callsDialed) {
      res["CallsDialed"] = boost::any(*callsDialed);
    }
    if (callsHold) {
      res["CallsHold"] = boost::any(*callsHold);
    }
    if (callsRinged) {
      res["CallsRinged"] = boost::any(*callsRinged);
    }
    if (maxDialingTime) {
      res["MaxDialingTime"] = boost::any(*maxDialingTime);
    }
    if (maxHoldTime) {
      res["MaxHoldTime"] = boost::any(*maxHoldTime);
    }
    if (maxRingTime) {
      res["MaxRingTime"] = boost::any(*maxRingTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (maxWorkTime) {
      res["MaxWorkTime"] = boost::any(*maxWorkTime);
    }
    if (satisfactionIndex) {
      res["SatisfactionIndex"] = boost::any(*satisfactionIndex);
    }
    if (satisfactionRate) {
      res["SatisfactionRate"] = boost::any(*satisfactionRate);
    }
    if (satisfactionSurveysOffered) {
      res["SatisfactionSurveysOffered"] = boost::any(*satisfactionSurveysOffered);
    }
    if (satisfactionSurveysResponded) {
      res["SatisfactionSurveysResponded"] = boost::any(*satisfactionSurveysResponded);
    }
    if (totalDialingTime) {
      res["TotalDialingTime"] = boost::any(*totalDialingTime);
    }
    if (totalHoldTime) {
      res["TotalHoldTime"] = boost::any(*totalHoldTime);
    }
    if (totalRingTime) {
      res["TotalRingTime"] = boost::any(*totalRingTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    if (totalWorkTime) {
      res["TotalWorkTime"] = boost::any(*totalWorkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerRate") != m.end() && !m["AnswerRate"].empty()) {
      answerRate = make_shared<double>(boost::any_cast<double>(m["AnswerRate"]));
    }
    if (m.find("AverageDialingTime") != m.end() && !m["AverageDialingTime"].empty()) {
      averageDialingTime = make_shared<double>(boost::any_cast<double>(m["AverageDialingTime"]));
    }
    if (m.find("AverageHoldTime") != m.end() && !m["AverageHoldTime"].empty()) {
      averageHoldTime = make_shared<double>(boost::any_cast<double>(m["AverageHoldTime"]));
    }
    if (m.find("AverageRingTime") != m.end() && !m["AverageRingTime"].empty()) {
      averageRingTime = make_shared<double>(boost::any_cast<double>(m["AverageRingTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<double>(boost::any_cast<double>(m["AverageTalkTime"]));
    }
    if (m.find("AverageWorkTime") != m.end() && !m["AverageWorkTime"].empty()) {
      averageWorkTime = make_shared<double>(boost::any_cast<double>(m["AverageWorkTime"]));
    }
    if (m.find("CallsAnswered") != m.end() && !m["CallsAnswered"].empty()) {
      callsAnswered = make_shared<long>(boost::any_cast<long>(m["CallsAnswered"]));
    }
    if (m.find("CallsAttendedTransferIn") != m.end() && !m["CallsAttendedTransferIn"].empty()) {
      callsAttendedTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferIn"]));
    }
    if (m.find("CallsAttendedTransferOut") != m.end() && !m["CallsAttendedTransferOut"].empty()) {
      callsAttendedTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferOut"]));
    }
    if (m.find("CallsBlindTransferIn") != m.end() && !m["CallsBlindTransferIn"].empty()) {
      callsBlindTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferIn"]));
    }
    if (m.find("CallsBlindTransferOut") != m.end() && !m["CallsBlindTransferOut"].empty()) {
      callsBlindTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferOut"]));
    }
    if (m.find("CallsDialed") != m.end() && !m["CallsDialed"].empty()) {
      callsDialed = make_shared<long>(boost::any_cast<long>(m["CallsDialed"]));
    }
    if (m.find("CallsHold") != m.end() && !m["CallsHold"].empty()) {
      callsHold = make_shared<long>(boost::any_cast<long>(m["CallsHold"]));
    }
    if (m.find("CallsRinged") != m.end() && !m["CallsRinged"].empty()) {
      callsRinged = make_shared<long>(boost::any_cast<long>(m["CallsRinged"]));
    }
    if (m.find("MaxDialingTime") != m.end() && !m["MaxDialingTime"].empty()) {
      maxDialingTime = make_shared<long>(boost::any_cast<long>(m["MaxDialingTime"]));
    }
    if (m.find("MaxHoldTime") != m.end() && !m["MaxHoldTime"].empty()) {
      maxHoldTime = make_shared<long>(boost::any_cast<long>(m["MaxHoldTime"]));
    }
    if (m.find("MaxRingTime") != m.end() && !m["MaxRingTime"].empty()) {
      maxRingTime = make_shared<long>(boost::any_cast<long>(m["MaxRingTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("MaxWorkTime") != m.end() && !m["MaxWorkTime"].empty()) {
      maxWorkTime = make_shared<long>(boost::any_cast<long>(m["MaxWorkTime"]));
    }
    if (m.find("SatisfactionIndex") != m.end() && !m["SatisfactionIndex"].empty()) {
      satisfactionIndex = make_shared<double>(boost::any_cast<double>(m["SatisfactionIndex"]));
    }
    if (m.find("SatisfactionRate") != m.end() && !m["SatisfactionRate"].empty()) {
      satisfactionRate = make_shared<double>(boost::any_cast<double>(m["SatisfactionRate"]));
    }
    if (m.find("SatisfactionSurveysOffered") != m.end() && !m["SatisfactionSurveysOffered"].empty()) {
      satisfactionSurveysOffered = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysOffered"]));
    }
    if (m.find("SatisfactionSurveysResponded") != m.end() && !m["SatisfactionSurveysResponded"].empty()) {
      satisfactionSurveysResponded = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysResponded"]));
    }
    if (m.find("TotalDialingTime") != m.end() && !m["TotalDialingTime"].empty()) {
      totalDialingTime = make_shared<long>(boost::any_cast<long>(m["TotalDialingTime"]));
    }
    if (m.find("TotalHoldTime") != m.end() && !m["TotalHoldTime"].empty()) {
      totalHoldTime = make_shared<long>(boost::any_cast<long>(m["TotalHoldTime"]));
    }
    if (m.find("TotalRingTime") != m.end() && !m["TotalRingTime"].empty()) {
      totalRingTime = make_shared<long>(boost::any_cast<long>(m["TotalRingTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
    if (m.find("TotalWorkTime") != m.end() && !m["TotalWorkTime"].empty()) {
      totalWorkTime = make_shared<long>(boost::any_cast<long>(m["TotalWorkTime"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList : public Darabonba::Model {
public:
  shared_ptr<string> breakCode{};
  shared_ptr<long> count{};
  shared_ptr<long> duration{};

  ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (breakCode) {
      res["BreakCode"] = boost::any(*breakCode);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BreakCode") != m.end() && !m["BreakCode"].empty()) {
      breakCode = make_shared<string>(boost::any_cast<string>(m["BreakCode"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall : public Darabonba::Model {
public:
  shared_ptr<double> averageBreakTime{};
  shared_ptr<double> averageHoldTime{};
  shared_ptr<double> averageReadyTime{};
  shared_ptr<double> averageTalkTime{};
  shared_ptr<double> averageWorkTime{};
  shared_ptr<vector<ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList>> breakCodeDetailList{};
  shared_ptr<long> firstCheckInTime{};
  shared_ptr<long> lastCheckOutTime{};
  shared_ptr<long> maxBreakTime{};
  shared_ptr<long> maxHoldTime{};
  shared_ptr<long> maxReadyTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> maxWorkTime{};
  shared_ptr<double> occupancyRate{};
  shared_ptr<double> satisfactionIndex{};
  shared_ptr<double> satisfactionRate{};
  shared_ptr<long> satisfactionSurveysOffered{};
  shared_ptr<long> satisfactionSurveysResponded{};
  shared_ptr<long> totalBreakTime{};
  shared_ptr<long> totalCalls{};
  shared_ptr<long> totalHoldTime{};
  shared_ptr<long> totalLoggedInTime{};
  shared_ptr<long> totalOffSiteOnlineTime{};
  shared_ptr<long> totalOfficePhoneOnlineTime{};
  shared_ptr<long> totalOnSiteOnlineTime{};
  shared_ptr<long> totalOutboundScenarioReadyTime{};
  shared_ptr<long> totalOutboundScenarioTime{};
  shared_ptr<long> totalReadyTime{};
  shared_ptr<long> totalTalkTime{};
  shared_ptr<long> totalWorkTime{};

  ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageBreakTime) {
      res["AverageBreakTime"] = boost::any(*averageBreakTime);
    }
    if (averageHoldTime) {
      res["AverageHoldTime"] = boost::any(*averageHoldTime);
    }
    if (averageReadyTime) {
      res["AverageReadyTime"] = boost::any(*averageReadyTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (averageWorkTime) {
      res["AverageWorkTime"] = boost::any(*averageWorkTime);
    }
    if (breakCodeDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*breakCodeDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BreakCodeDetailList"] = boost::any(temp1);
    }
    if (firstCheckInTime) {
      res["FirstCheckInTime"] = boost::any(*firstCheckInTime);
    }
    if (lastCheckOutTime) {
      res["LastCheckOutTime"] = boost::any(*lastCheckOutTime);
    }
    if (maxBreakTime) {
      res["MaxBreakTime"] = boost::any(*maxBreakTime);
    }
    if (maxHoldTime) {
      res["MaxHoldTime"] = boost::any(*maxHoldTime);
    }
    if (maxReadyTime) {
      res["MaxReadyTime"] = boost::any(*maxReadyTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (maxWorkTime) {
      res["MaxWorkTime"] = boost::any(*maxWorkTime);
    }
    if (occupancyRate) {
      res["OccupancyRate"] = boost::any(*occupancyRate);
    }
    if (satisfactionIndex) {
      res["SatisfactionIndex"] = boost::any(*satisfactionIndex);
    }
    if (satisfactionRate) {
      res["SatisfactionRate"] = boost::any(*satisfactionRate);
    }
    if (satisfactionSurveysOffered) {
      res["SatisfactionSurveysOffered"] = boost::any(*satisfactionSurveysOffered);
    }
    if (satisfactionSurveysResponded) {
      res["SatisfactionSurveysResponded"] = boost::any(*satisfactionSurveysResponded);
    }
    if (totalBreakTime) {
      res["TotalBreakTime"] = boost::any(*totalBreakTime);
    }
    if (totalCalls) {
      res["TotalCalls"] = boost::any(*totalCalls);
    }
    if (totalHoldTime) {
      res["TotalHoldTime"] = boost::any(*totalHoldTime);
    }
    if (totalLoggedInTime) {
      res["TotalLoggedInTime"] = boost::any(*totalLoggedInTime);
    }
    if (totalOffSiteOnlineTime) {
      res["TotalOffSiteOnlineTime"] = boost::any(*totalOffSiteOnlineTime);
    }
    if (totalOfficePhoneOnlineTime) {
      res["TotalOfficePhoneOnlineTime"] = boost::any(*totalOfficePhoneOnlineTime);
    }
    if (totalOnSiteOnlineTime) {
      res["TotalOnSiteOnlineTime"] = boost::any(*totalOnSiteOnlineTime);
    }
    if (totalOutboundScenarioReadyTime) {
      res["TotalOutboundScenarioReadyTime"] = boost::any(*totalOutboundScenarioReadyTime);
    }
    if (totalOutboundScenarioTime) {
      res["TotalOutboundScenarioTime"] = boost::any(*totalOutboundScenarioTime);
    }
    if (totalReadyTime) {
      res["TotalReadyTime"] = boost::any(*totalReadyTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    if (totalWorkTime) {
      res["TotalWorkTime"] = boost::any(*totalWorkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageBreakTime") != m.end() && !m["AverageBreakTime"].empty()) {
      averageBreakTime = make_shared<double>(boost::any_cast<double>(m["AverageBreakTime"]));
    }
    if (m.find("AverageHoldTime") != m.end() && !m["AverageHoldTime"].empty()) {
      averageHoldTime = make_shared<double>(boost::any_cast<double>(m["AverageHoldTime"]));
    }
    if (m.find("AverageReadyTime") != m.end() && !m["AverageReadyTime"].empty()) {
      averageReadyTime = make_shared<double>(boost::any_cast<double>(m["AverageReadyTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<double>(boost::any_cast<double>(m["AverageTalkTime"]));
    }
    if (m.find("AverageWorkTime") != m.end() && !m["AverageWorkTime"].empty()) {
      averageWorkTime = make_shared<double>(boost::any_cast<double>(m["AverageWorkTime"]));
    }
    if (m.find("BreakCodeDetailList") != m.end() && !m["BreakCodeDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["BreakCodeDetailList"].type()) {
        vector<ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BreakCodeDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        breakCodeDetailList = make_shared<vector<ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList>>(expect1);
      }
    }
    if (m.find("FirstCheckInTime") != m.end() && !m["FirstCheckInTime"].empty()) {
      firstCheckInTime = make_shared<long>(boost::any_cast<long>(m["FirstCheckInTime"]));
    }
    if (m.find("LastCheckOutTime") != m.end() && !m["LastCheckOutTime"].empty()) {
      lastCheckOutTime = make_shared<long>(boost::any_cast<long>(m["LastCheckOutTime"]));
    }
    if (m.find("MaxBreakTime") != m.end() && !m["MaxBreakTime"].empty()) {
      maxBreakTime = make_shared<long>(boost::any_cast<long>(m["MaxBreakTime"]));
    }
    if (m.find("MaxHoldTime") != m.end() && !m["MaxHoldTime"].empty()) {
      maxHoldTime = make_shared<long>(boost::any_cast<long>(m["MaxHoldTime"]));
    }
    if (m.find("MaxReadyTime") != m.end() && !m["MaxReadyTime"].empty()) {
      maxReadyTime = make_shared<long>(boost::any_cast<long>(m["MaxReadyTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("MaxWorkTime") != m.end() && !m["MaxWorkTime"].empty()) {
      maxWorkTime = make_shared<long>(boost::any_cast<long>(m["MaxWorkTime"]));
    }
    if (m.find("OccupancyRate") != m.end() && !m["OccupancyRate"].empty()) {
      occupancyRate = make_shared<double>(boost::any_cast<double>(m["OccupancyRate"]));
    }
    if (m.find("SatisfactionIndex") != m.end() && !m["SatisfactionIndex"].empty()) {
      satisfactionIndex = make_shared<double>(boost::any_cast<double>(m["SatisfactionIndex"]));
    }
    if (m.find("SatisfactionRate") != m.end() && !m["SatisfactionRate"].empty()) {
      satisfactionRate = make_shared<double>(boost::any_cast<double>(m["SatisfactionRate"]));
    }
    if (m.find("SatisfactionSurveysOffered") != m.end() && !m["SatisfactionSurveysOffered"].empty()) {
      satisfactionSurveysOffered = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysOffered"]));
    }
    if (m.find("SatisfactionSurveysResponded") != m.end() && !m["SatisfactionSurveysResponded"].empty()) {
      satisfactionSurveysResponded = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysResponded"]));
    }
    if (m.find("TotalBreakTime") != m.end() && !m["TotalBreakTime"].empty()) {
      totalBreakTime = make_shared<long>(boost::any_cast<long>(m["TotalBreakTime"]));
    }
    if (m.find("TotalCalls") != m.end() && !m["TotalCalls"].empty()) {
      totalCalls = make_shared<long>(boost::any_cast<long>(m["TotalCalls"]));
    }
    if (m.find("TotalHoldTime") != m.end() && !m["TotalHoldTime"].empty()) {
      totalHoldTime = make_shared<long>(boost::any_cast<long>(m["TotalHoldTime"]));
    }
    if (m.find("TotalLoggedInTime") != m.end() && !m["TotalLoggedInTime"].empty()) {
      totalLoggedInTime = make_shared<long>(boost::any_cast<long>(m["TotalLoggedInTime"]));
    }
    if (m.find("TotalOffSiteOnlineTime") != m.end() && !m["TotalOffSiteOnlineTime"].empty()) {
      totalOffSiteOnlineTime = make_shared<long>(boost::any_cast<long>(m["TotalOffSiteOnlineTime"]));
    }
    if (m.find("TotalOfficePhoneOnlineTime") != m.end() && !m["TotalOfficePhoneOnlineTime"].empty()) {
      totalOfficePhoneOnlineTime = make_shared<long>(boost::any_cast<long>(m["TotalOfficePhoneOnlineTime"]));
    }
    if (m.find("TotalOnSiteOnlineTime") != m.end() && !m["TotalOnSiteOnlineTime"].empty()) {
      totalOnSiteOnlineTime = make_shared<long>(boost::any_cast<long>(m["TotalOnSiteOnlineTime"]));
    }
    if (m.find("TotalOutboundScenarioReadyTime") != m.end() && !m["TotalOutboundScenarioReadyTime"].empty()) {
      totalOutboundScenarioReadyTime = make_shared<long>(boost::any_cast<long>(m["TotalOutboundScenarioReadyTime"]));
    }
    if (m.find("TotalOutboundScenarioTime") != m.end() && !m["TotalOutboundScenarioTime"].empty()) {
      totalOutboundScenarioTime = make_shared<long>(boost::any_cast<long>(m["TotalOutboundScenarioTime"]));
    }
    if (m.find("TotalReadyTime") != m.end() && !m["TotalReadyTime"].empty()) {
      totalReadyTime = make_shared<long>(boost::any_cast<long>(m["TotalReadyTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
    if (m.find("TotalWorkTime") != m.end() && !m["TotalWorkTime"].empty()) {
      totalWorkTime = make_shared<long>(boost::any_cast<long>(m["TotalWorkTime"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentName{};
  shared_ptr<ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back> back2Back{};
  shared_ptr<string> displayId{};
  shared_ptr<ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound> inbound{};
  shared_ptr<ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal> internal{};
  shared_ptr<ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound> outbound{};
  shared_ptr<ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall> overall{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<string> skillGroupName{};

  ListHistoricalAgentSkillGroupReportResponseBodyDataList() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentName) {
      res["AgentName"] = boost::any(*agentName);
    }
    if (back2Back) {
      res["Back2Back"] = back2Back ? boost::any(back2Back->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayId) {
      res["DisplayId"] = boost::any(*displayId);
    }
    if (inbound) {
      res["Inbound"] = inbound ? boost::any(inbound->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internal) {
      res["Internal"] = internal ? boost::any(internal->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outbound) {
      res["Outbound"] = outbound ? boost::any(outbound->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (overall) {
      res["Overall"] = overall ? boost::any(overall->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (skillGroupName) {
      res["SkillGroupName"] = boost::any(*skillGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("AgentName") != m.end() && !m["AgentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["AgentName"]));
    }
    if (m.find("Back2Back") != m.end() && !m["Back2Back"].empty()) {
      if (typeid(map<string, boost::any>) == m["Back2Back"].type()) {
        ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Back2Back"]));
        back2Back = make_shared<ListHistoricalAgentSkillGroupReportResponseBodyDataListBack2Back>(model1);
      }
    }
    if (m.find("DisplayId") != m.end() && !m["DisplayId"].empty()) {
      displayId = make_shared<string>(boost::any_cast<string>(m["DisplayId"]));
    }
    if (m.find("Inbound") != m.end() && !m["Inbound"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inbound"].type()) {
        ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inbound"]));
        inbound = make_shared<ListHistoricalAgentSkillGroupReportResponseBodyDataListInbound>(model1);
      }
    }
    if (m.find("Internal") != m.end() && !m["Internal"].empty()) {
      if (typeid(map<string, boost::any>) == m["Internal"].type()) {
        ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Internal"]));
        internal = make_shared<ListHistoricalAgentSkillGroupReportResponseBodyDataListInternal>(model1);
      }
    }
    if (m.find("Outbound") != m.end() && !m["Outbound"].empty()) {
      if (typeid(map<string, boost::any>) == m["Outbound"].type()) {
        ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Outbound"]));
        outbound = make_shared<ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound>(model1);
      }
    }
    if (m.find("Overall") != m.end() && !m["Overall"].empty()) {
      if (typeid(map<string, boost::any>) == m["Overall"].type()) {
        ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Overall"]));
        overall = make_shared<ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall>(model1);
      }
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("SkillGroupName") != m.end() && !m["SkillGroupName"].empty()) {
      skillGroupName = make_shared<string>(boost::any_cast<string>(m["SkillGroupName"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataList() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListHistoricalAgentSkillGroupReportResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListHistoricalAgentSkillGroupReportResponseBodyData() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
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
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListHistoricalAgentSkillGroupReportResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHistoricalAgentSkillGroupReportResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListHistoricalAgentSkillGroupReportResponseBodyDataList>>(expect1);
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


  virtual ~ListHistoricalAgentSkillGroupReportResponseBodyData() = default;
};
class ListHistoricalAgentSkillGroupReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHistoricalAgentSkillGroupReportResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHistoricalAgentSkillGroupReportResponseBody() {}

  explicit ListHistoricalAgentSkillGroupReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
        ListHistoricalAgentSkillGroupReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHistoricalAgentSkillGroupReportResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponseBody() = default;
};
class ListHistoricalAgentSkillGroupReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHistoricalAgentSkillGroupReportResponseBody> body{};

  ListHistoricalAgentSkillGroupReportResponse() {}

  explicit ListHistoricalAgentSkillGroupReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHistoricalAgentSkillGroupReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHistoricalAgentSkillGroupReportResponseBody>(model1);
      }
    }
  }


  virtual ~ListHistoricalAgentSkillGroupReportResponse() = default;
};
class ListIntervalAgentSkillGroupReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> interval{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<long> startTime{};

  ListIntervalAgentSkillGroupReportRequest() {}

  explicit ListIntervalAgentSkillGroupReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportRequest() = default;
};
class ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back : public Darabonba::Model {
public:
  shared_ptr<double> agentAnswerRate{};
  shared_ptr<double> answerRate{};
  shared_ptr<double> averageCustomerRingTime{};
  shared_ptr<double> averageRingTime{};
  shared_ptr<long> averageTalkTime{};
  shared_ptr<long> callsAnswered{};
  shared_ptr<long> callsCustomerHandled{};
  shared_ptr<long> callsDialed{};
  shared_ptr<double> customerHandleRate{};
  shared_ptr<long> maxCustomerRingTime{};
  shared_ptr<long> maxRingTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> totalCustomerRingTime{};
  shared_ptr<long> totalRingTime{};
  shared_ptr<long> totalTalkTime{};

  ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back() {}

  explicit ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentAnswerRate) {
      res["AgentAnswerRate"] = boost::any(*agentAnswerRate);
    }
    if (answerRate) {
      res["AnswerRate"] = boost::any(*answerRate);
    }
    if (averageCustomerRingTime) {
      res["AverageCustomerRingTime"] = boost::any(*averageCustomerRingTime);
    }
    if (averageRingTime) {
      res["AverageRingTime"] = boost::any(*averageRingTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (callsAnswered) {
      res["CallsAnswered"] = boost::any(*callsAnswered);
    }
    if (callsCustomerHandled) {
      res["CallsCustomerHandled"] = boost::any(*callsCustomerHandled);
    }
    if (callsDialed) {
      res["CallsDialed"] = boost::any(*callsDialed);
    }
    if (customerHandleRate) {
      res["CustomerHandleRate"] = boost::any(*customerHandleRate);
    }
    if (maxCustomerRingTime) {
      res["MaxCustomerRingTime"] = boost::any(*maxCustomerRingTime);
    }
    if (maxRingTime) {
      res["MaxRingTime"] = boost::any(*maxRingTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (totalCustomerRingTime) {
      res["TotalCustomerRingTime"] = boost::any(*totalCustomerRingTime);
    }
    if (totalRingTime) {
      res["TotalRingTime"] = boost::any(*totalRingTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentAnswerRate") != m.end() && !m["AgentAnswerRate"].empty()) {
      agentAnswerRate = make_shared<double>(boost::any_cast<double>(m["AgentAnswerRate"]));
    }
    if (m.find("AnswerRate") != m.end() && !m["AnswerRate"].empty()) {
      answerRate = make_shared<double>(boost::any_cast<double>(m["AnswerRate"]));
    }
    if (m.find("AverageCustomerRingTime") != m.end() && !m["AverageCustomerRingTime"].empty()) {
      averageCustomerRingTime = make_shared<double>(boost::any_cast<double>(m["AverageCustomerRingTime"]));
    }
    if (m.find("AverageRingTime") != m.end() && !m["AverageRingTime"].empty()) {
      averageRingTime = make_shared<double>(boost::any_cast<double>(m["AverageRingTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<long>(boost::any_cast<long>(m["AverageTalkTime"]));
    }
    if (m.find("CallsAnswered") != m.end() && !m["CallsAnswered"].empty()) {
      callsAnswered = make_shared<long>(boost::any_cast<long>(m["CallsAnswered"]));
    }
    if (m.find("CallsCustomerHandled") != m.end() && !m["CallsCustomerHandled"].empty()) {
      callsCustomerHandled = make_shared<long>(boost::any_cast<long>(m["CallsCustomerHandled"]));
    }
    if (m.find("CallsDialed") != m.end() && !m["CallsDialed"].empty()) {
      callsDialed = make_shared<long>(boost::any_cast<long>(m["CallsDialed"]));
    }
    if (m.find("CustomerHandleRate") != m.end() && !m["CustomerHandleRate"].empty()) {
      customerHandleRate = make_shared<double>(boost::any_cast<double>(m["CustomerHandleRate"]));
    }
    if (m.find("MaxCustomerRingTime") != m.end() && !m["MaxCustomerRingTime"].empty()) {
      maxCustomerRingTime = make_shared<long>(boost::any_cast<long>(m["MaxCustomerRingTime"]));
    }
    if (m.find("MaxRingTime") != m.end() && !m["MaxRingTime"].empty()) {
      maxRingTime = make_shared<long>(boost::any_cast<long>(m["MaxRingTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("TotalCustomerRingTime") != m.end() && !m["TotalCustomerRingTime"].empty()) {
      totalCustomerRingTime = make_shared<long>(boost::any_cast<long>(m["TotalCustomerRingTime"]));
    }
    if (m.find("TotalRingTime") != m.end() && !m["TotalRingTime"].empty()) {
      totalRingTime = make_shared<long>(boost::any_cast<long>(m["TotalRingTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back() = default;
};
class ListIntervalAgentSkillGroupReportResponseBodyDataInbound : public Darabonba::Model {
public:
  shared_ptr<double> averageFirstResponseTime{};
  shared_ptr<double> averageHoldTime{};
  shared_ptr<double> averageResponseTime{};
  shared_ptr<double> averageRingTime{};
  shared_ptr<double> averageTalkTime{};
  shared_ptr<double> averageWorkTime{};
  shared_ptr<long> callsAttendedTransferIn{};
  shared_ptr<long> callsAttendedTransferOut{};
  shared_ptr<long> callsBlindTransferIn{};
  shared_ptr<long> callsBlindTransferOut{};
  shared_ptr<long> callsHandled{};
  shared_ptr<long> callsHold{};
  shared_ptr<long> callsOffered{};
  shared_ptr<long> callsRinged{};
  shared_ptr<double> handleRate{};
  shared_ptr<long> maxHoldTime{};
  shared_ptr<long> maxRingTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> maxWorkTime{};
  shared_ptr<double> satisfactionIndex{};
  shared_ptr<double> satisfactionRate{};
  shared_ptr<long> satisfactionSurveysOffered{};
  shared_ptr<long> satisfactionSurveysResponded{};
  shared_ptr<long> totalHoldTime{};
  shared_ptr<long> totalMessagesSent{};
  shared_ptr<long> totalMessagesSentByAgent{};
  shared_ptr<long> totalMessagesSentByCustomer{};
  shared_ptr<long> totalRingTime{};
  shared_ptr<long> totalTalkTime{};
  shared_ptr<long> totalWorkTime{};

  ListIntervalAgentSkillGroupReportResponseBodyDataInbound() {}

  explicit ListIntervalAgentSkillGroupReportResponseBodyDataInbound(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageFirstResponseTime) {
      res["AverageFirstResponseTime"] = boost::any(*averageFirstResponseTime);
    }
    if (averageHoldTime) {
      res["AverageHoldTime"] = boost::any(*averageHoldTime);
    }
    if (averageResponseTime) {
      res["AverageResponseTime"] = boost::any(*averageResponseTime);
    }
    if (averageRingTime) {
      res["AverageRingTime"] = boost::any(*averageRingTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (averageWorkTime) {
      res["AverageWorkTime"] = boost::any(*averageWorkTime);
    }
    if (callsAttendedTransferIn) {
      res["CallsAttendedTransferIn"] = boost::any(*callsAttendedTransferIn);
    }
    if (callsAttendedTransferOut) {
      res["CallsAttendedTransferOut"] = boost::any(*callsAttendedTransferOut);
    }
    if (callsBlindTransferIn) {
      res["CallsBlindTransferIn"] = boost::any(*callsBlindTransferIn);
    }
    if (callsBlindTransferOut) {
      res["CallsBlindTransferOut"] = boost::any(*callsBlindTransferOut);
    }
    if (callsHandled) {
      res["CallsHandled"] = boost::any(*callsHandled);
    }
    if (callsHold) {
      res["CallsHold"] = boost::any(*callsHold);
    }
    if (callsOffered) {
      res["CallsOffered"] = boost::any(*callsOffered);
    }
    if (callsRinged) {
      res["CallsRinged"] = boost::any(*callsRinged);
    }
    if (handleRate) {
      res["HandleRate"] = boost::any(*handleRate);
    }
    if (maxHoldTime) {
      res["MaxHoldTime"] = boost::any(*maxHoldTime);
    }
    if (maxRingTime) {
      res["MaxRingTime"] = boost::any(*maxRingTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (maxWorkTime) {
      res["MaxWorkTime"] = boost::any(*maxWorkTime);
    }
    if (satisfactionIndex) {
      res["SatisfactionIndex"] = boost::any(*satisfactionIndex);
    }
    if (satisfactionRate) {
      res["SatisfactionRate"] = boost::any(*satisfactionRate);
    }
    if (satisfactionSurveysOffered) {
      res["SatisfactionSurveysOffered"] = boost::any(*satisfactionSurveysOffered);
    }
    if (satisfactionSurveysResponded) {
      res["SatisfactionSurveysResponded"] = boost::any(*satisfactionSurveysResponded);
    }
    if (totalHoldTime) {
      res["TotalHoldTime"] = boost::any(*totalHoldTime);
    }
    if (totalMessagesSent) {
      res["TotalMessagesSent"] = boost::any(*totalMessagesSent);
    }
    if (totalMessagesSentByAgent) {
      res["TotalMessagesSentByAgent"] = boost::any(*totalMessagesSentByAgent);
    }
    if (totalMessagesSentByCustomer) {
      res["TotalMessagesSentByCustomer"] = boost::any(*totalMessagesSentByCustomer);
    }
    if (totalRingTime) {
      res["TotalRingTime"] = boost::any(*totalRingTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    if (totalWorkTime) {
      res["TotalWorkTime"] = boost::any(*totalWorkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageFirstResponseTime") != m.end() && !m["AverageFirstResponseTime"].empty()) {
      averageFirstResponseTime = make_shared<double>(boost::any_cast<double>(m["AverageFirstResponseTime"]));
    }
    if (m.find("AverageHoldTime") != m.end() && !m["AverageHoldTime"].empty()) {
      averageHoldTime = make_shared<double>(boost::any_cast<double>(m["AverageHoldTime"]));
    }
    if (m.find("AverageResponseTime") != m.end() && !m["AverageResponseTime"].empty()) {
      averageResponseTime = make_shared<double>(boost::any_cast<double>(m["AverageResponseTime"]));
    }
    if (m.find("AverageRingTime") != m.end() && !m["AverageRingTime"].empty()) {
      averageRingTime = make_shared<double>(boost::any_cast<double>(m["AverageRingTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<double>(boost::any_cast<double>(m["AverageTalkTime"]));
    }
    if (m.find("AverageWorkTime") != m.end() && !m["AverageWorkTime"].empty()) {
      averageWorkTime = make_shared<double>(boost::any_cast<double>(m["AverageWorkTime"]));
    }
    if (m.find("CallsAttendedTransferIn") != m.end() && !m["CallsAttendedTransferIn"].empty()) {
      callsAttendedTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferIn"]));
    }
    if (m.find("CallsAttendedTransferOut") != m.end() && !m["CallsAttendedTransferOut"].empty()) {
      callsAttendedTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferOut"]));
    }
    if (m.find("CallsBlindTransferIn") != m.end() && !m["CallsBlindTransferIn"].empty()) {
      callsBlindTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferIn"]));
    }
    if (m.find("CallsBlindTransferOut") != m.end() && !m["CallsBlindTransferOut"].empty()) {
      callsBlindTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferOut"]));
    }
    if (m.find("CallsHandled") != m.end() && !m["CallsHandled"].empty()) {
      callsHandled = make_shared<long>(boost::any_cast<long>(m["CallsHandled"]));
    }
    if (m.find("CallsHold") != m.end() && !m["CallsHold"].empty()) {
      callsHold = make_shared<long>(boost::any_cast<long>(m["CallsHold"]));
    }
    if (m.find("CallsOffered") != m.end() && !m["CallsOffered"].empty()) {
      callsOffered = make_shared<long>(boost::any_cast<long>(m["CallsOffered"]));
    }
    if (m.find("CallsRinged") != m.end() && !m["CallsRinged"].empty()) {
      callsRinged = make_shared<long>(boost::any_cast<long>(m["CallsRinged"]));
    }
    if (m.find("HandleRate") != m.end() && !m["HandleRate"].empty()) {
      handleRate = make_shared<double>(boost::any_cast<double>(m["HandleRate"]));
    }
    if (m.find("MaxHoldTime") != m.end() && !m["MaxHoldTime"].empty()) {
      maxHoldTime = make_shared<long>(boost::any_cast<long>(m["MaxHoldTime"]));
    }
    if (m.find("MaxRingTime") != m.end() && !m["MaxRingTime"].empty()) {
      maxRingTime = make_shared<long>(boost::any_cast<long>(m["MaxRingTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("MaxWorkTime") != m.end() && !m["MaxWorkTime"].empty()) {
      maxWorkTime = make_shared<long>(boost::any_cast<long>(m["MaxWorkTime"]));
    }
    if (m.find("SatisfactionIndex") != m.end() && !m["SatisfactionIndex"].empty()) {
      satisfactionIndex = make_shared<double>(boost::any_cast<double>(m["SatisfactionIndex"]));
    }
    if (m.find("SatisfactionRate") != m.end() && !m["SatisfactionRate"].empty()) {
      satisfactionRate = make_shared<double>(boost::any_cast<double>(m["SatisfactionRate"]));
    }
    if (m.find("SatisfactionSurveysOffered") != m.end() && !m["SatisfactionSurveysOffered"].empty()) {
      satisfactionSurveysOffered = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysOffered"]));
    }
    if (m.find("SatisfactionSurveysResponded") != m.end() && !m["SatisfactionSurveysResponded"].empty()) {
      satisfactionSurveysResponded = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysResponded"]));
    }
    if (m.find("TotalHoldTime") != m.end() && !m["TotalHoldTime"].empty()) {
      totalHoldTime = make_shared<long>(boost::any_cast<long>(m["TotalHoldTime"]));
    }
    if (m.find("TotalMessagesSent") != m.end() && !m["TotalMessagesSent"].empty()) {
      totalMessagesSent = make_shared<long>(boost::any_cast<long>(m["TotalMessagesSent"]));
    }
    if (m.find("TotalMessagesSentByAgent") != m.end() && !m["TotalMessagesSentByAgent"].empty()) {
      totalMessagesSentByAgent = make_shared<long>(boost::any_cast<long>(m["TotalMessagesSentByAgent"]));
    }
    if (m.find("TotalMessagesSentByCustomer") != m.end() && !m["TotalMessagesSentByCustomer"].empty()) {
      totalMessagesSentByCustomer = make_shared<long>(boost::any_cast<long>(m["TotalMessagesSentByCustomer"]));
    }
    if (m.find("TotalRingTime") != m.end() && !m["TotalRingTime"].empty()) {
      totalRingTime = make_shared<long>(boost::any_cast<long>(m["TotalRingTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
    if (m.find("TotalWorkTime") != m.end() && !m["TotalWorkTime"].empty()) {
      totalWorkTime = make_shared<long>(boost::any_cast<long>(m["TotalWorkTime"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBodyDataInbound() = default;
};
class ListIntervalAgentSkillGroupReportResponseBodyDataInternal : public Darabonba::Model {
public:
  shared_ptr<double> averageTalkTime{};
  shared_ptr<long> callsAnswered{};
  shared_ptr<long> callsDialed{};
  shared_ptr<long> callsHandled{};
  shared_ptr<long> callsOffered{};
  shared_ptr<long> callsTalk{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> totalTalkTime{};

  ListIntervalAgentSkillGroupReportResponseBodyDataInternal() {}

  explicit ListIntervalAgentSkillGroupReportResponseBodyDataInternal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (callsAnswered) {
      res["CallsAnswered"] = boost::any(*callsAnswered);
    }
    if (callsDialed) {
      res["CallsDialed"] = boost::any(*callsDialed);
    }
    if (callsHandled) {
      res["CallsHandled"] = boost::any(*callsHandled);
    }
    if (callsOffered) {
      res["CallsOffered"] = boost::any(*callsOffered);
    }
    if (callsTalk) {
      res["CallsTalk"] = boost::any(*callsTalk);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<double>(boost::any_cast<double>(m["AverageTalkTime"]));
    }
    if (m.find("CallsAnswered") != m.end() && !m["CallsAnswered"].empty()) {
      callsAnswered = make_shared<long>(boost::any_cast<long>(m["CallsAnswered"]));
    }
    if (m.find("CallsDialed") != m.end() && !m["CallsDialed"].empty()) {
      callsDialed = make_shared<long>(boost::any_cast<long>(m["CallsDialed"]));
    }
    if (m.find("CallsHandled") != m.end() && !m["CallsHandled"].empty()) {
      callsHandled = make_shared<long>(boost::any_cast<long>(m["CallsHandled"]));
    }
    if (m.find("CallsOffered") != m.end() && !m["CallsOffered"].empty()) {
      callsOffered = make_shared<long>(boost::any_cast<long>(m["CallsOffered"]));
    }
    if (m.find("CallsTalk") != m.end() && !m["CallsTalk"].empty()) {
      callsTalk = make_shared<long>(boost::any_cast<long>(m["CallsTalk"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBodyDataInternal() = default;
};
class ListIntervalAgentSkillGroupReportResponseBodyDataOutbound : public Darabonba::Model {
public:
  shared_ptr<double> answerRate{};
  shared_ptr<double> averageDialingTime{};
  shared_ptr<double> averageHoldTime{};
  shared_ptr<double> averageRingTime{};
  shared_ptr<double> averageTalkTime{};
  shared_ptr<double> averageWorkTime{};
  shared_ptr<long> callsAnswered{};
  shared_ptr<long> callsAttendedTransferIn{};
  shared_ptr<long> callsAttendedTransferOut{};
  shared_ptr<long> callsBlindTransferIn{};
  shared_ptr<long> callsBlindTransferOut{};
  shared_ptr<long> callsDialed{};
  shared_ptr<long> callsHold{};
  shared_ptr<long> callsRinged{};
  shared_ptr<long> maxDialingTime{};
  shared_ptr<long> maxHoldTime{};
  shared_ptr<long> maxRingTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> maxWorkTime{};
  shared_ptr<double> satisfactionIndex{};
  shared_ptr<double> satisfactionRate{};
  shared_ptr<long> satisfactionSurveysOffered{};
  shared_ptr<long> satisfactionSurveysResponded{};
  shared_ptr<long> totalDialingTime{};
  shared_ptr<long> totalHoldTime{};
  shared_ptr<long> totalRingTime{};
  shared_ptr<long> totalTalkTime{};
  shared_ptr<long> totalWorkTime{};

  ListIntervalAgentSkillGroupReportResponseBodyDataOutbound() {}

  explicit ListIntervalAgentSkillGroupReportResponseBodyDataOutbound(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerRate) {
      res["AnswerRate"] = boost::any(*answerRate);
    }
    if (averageDialingTime) {
      res["AverageDialingTime"] = boost::any(*averageDialingTime);
    }
    if (averageHoldTime) {
      res["AverageHoldTime"] = boost::any(*averageHoldTime);
    }
    if (averageRingTime) {
      res["AverageRingTime"] = boost::any(*averageRingTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (averageWorkTime) {
      res["AverageWorkTime"] = boost::any(*averageWorkTime);
    }
    if (callsAnswered) {
      res["CallsAnswered"] = boost::any(*callsAnswered);
    }
    if (callsAttendedTransferIn) {
      res["CallsAttendedTransferIn"] = boost::any(*callsAttendedTransferIn);
    }
    if (callsAttendedTransferOut) {
      res["CallsAttendedTransferOut"] = boost::any(*callsAttendedTransferOut);
    }
    if (callsBlindTransferIn) {
      res["CallsBlindTransferIn"] = boost::any(*callsBlindTransferIn);
    }
    if (callsBlindTransferOut) {
      res["CallsBlindTransferOut"] = boost::any(*callsBlindTransferOut);
    }
    if (callsDialed) {
      res["CallsDialed"] = boost::any(*callsDialed);
    }
    if (callsHold) {
      res["CallsHold"] = boost::any(*callsHold);
    }
    if (callsRinged) {
      res["CallsRinged"] = boost::any(*callsRinged);
    }
    if (maxDialingTime) {
      res["MaxDialingTime"] = boost::any(*maxDialingTime);
    }
    if (maxHoldTime) {
      res["MaxHoldTime"] = boost::any(*maxHoldTime);
    }
    if (maxRingTime) {
      res["MaxRingTime"] = boost::any(*maxRingTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (maxWorkTime) {
      res["MaxWorkTime"] = boost::any(*maxWorkTime);
    }
    if (satisfactionIndex) {
      res["SatisfactionIndex"] = boost::any(*satisfactionIndex);
    }
    if (satisfactionRate) {
      res["SatisfactionRate"] = boost::any(*satisfactionRate);
    }
    if (satisfactionSurveysOffered) {
      res["SatisfactionSurveysOffered"] = boost::any(*satisfactionSurveysOffered);
    }
    if (satisfactionSurveysResponded) {
      res["SatisfactionSurveysResponded"] = boost::any(*satisfactionSurveysResponded);
    }
    if (totalDialingTime) {
      res["TotalDialingTime"] = boost::any(*totalDialingTime);
    }
    if (totalHoldTime) {
      res["TotalHoldTime"] = boost::any(*totalHoldTime);
    }
    if (totalRingTime) {
      res["TotalRingTime"] = boost::any(*totalRingTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    if (totalWorkTime) {
      res["TotalWorkTime"] = boost::any(*totalWorkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerRate") != m.end() && !m["AnswerRate"].empty()) {
      answerRate = make_shared<double>(boost::any_cast<double>(m["AnswerRate"]));
    }
    if (m.find("AverageDialingTime") != m.end() && !m["AverageDialingTime"].empty()) {
      averageDialingTime = make_shared<double>(boost::any_cast<double>(m["AverageDialingTime"]));
    }
    if (m.find("AverageHoldTime") != m.end() && !m["AverageHoldTime"].empty()) {
      averageHoldTime = make_shared<double>(boost::any_cast<double>(m["AverageHoldTime"]));
    }
    if (m.find("AverageRingTime") != m.end() && !m["AverageRingTime"].empty()) {
      averageRingTime = make_shared<double>(boost::any_cast<double>(m["AverageRingTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<double>(boost::any_cast<double>(m["AverageTalkTime"]));
    }
    if (m.find("AverageWorkTime") != m.end() && !m["AverageWorkTime"].empty()) {
      averageWorkTime = make_shared<double>(boost::any_cast<double>(m["AverageWorkTime"]));
    }
    if (m.find("CallsAnswered") != m.end() && !m["CallsAnswered"].empty()) {
      callsAnswered = make_shared<long>(boost::any_cast<long>(m["CallsAnswered"]));
    }
    if (m.find("CallsAttendedTransferIn") != m.end() && !m["CallsAttendedTransferIn"].empty()) {
      callsAttendedTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferIn"]));
    }
    if (m.find("CallsAttendedTransferOut") != m.end() && !m["CallsAttendedTransferOut"].empty()) {
      callsAttendedTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsAttendedTransferOut"]));
    }
    if (m.find("CallsBlindTransferIn") != m.end() && !m["CallsBlindTransferIn"].empty()) {
      callsBlindTransferIn = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferIn"]));
    }
    if (m.find("CallsBlindTransferOut") != m.end() && !m["CallsBlindTransferOut"].empty()) {
      callsBlindTransferOut = make_shared<long>(boost::any_cast<long>(m["CallsBlindTransferOut"]));
    }
    if (m.find("CallsDialed") != m.end() && !m["CallsDialed"].empty()) {
      callsDialed = make_shared<long>(boost::any_cast<long>(m["CallsDialed"]));
    }
    if (m.find("CallsHold") != m.end() && !m["CallsHold"].empty()) {
      callsHold = make_shared<long>(boost::any_cast<long>(m["CallsHold"]));
    }
    if (m.find("CallsRinged") != m.end() && !m["CallsRinged"].empty()) {
      callsRinged = make_shared<long>(boost::any_cast<long>(m["CallsRinged"]));
    }
    if (m.find("MaxDialingTime") != m.end() && !m["MaxDialingTime"].empty()) {
      maxDialingTime = make_shared<long>(boost::any_cast<long>(m["MaxDialingTime"]));
    }
    if (m.find("MaxHoldTime") != m.end() && !m["MaxHoldTime"].empty()) {
      maxHoldTime = make_shared<long>(boost::any_cast<long>(m["MaxHoldTime"]));
    }
    if (m.find("MaxRingTime") != m.end() && !m["MaxRingTime"].empty()) {
      maxRingTime = make_shared<long>(boost::any_cast<long>(m["MaxRingTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("MaxWorkTime") != m.end() && !m["MaxWorkTime"].empty()) {
      maxWorkTime = make_shared<long>(boost::any_cast<long>(m["MaxWorkTime"]));
    }
    if (m.find("SatisfactionIndex") != m.end() && !m["SatisfactionIndex"].empty()) {
      satisfactionIndex = make_shared<double>(boost::any_cast<double>(m["SatisfactionIndex"]));
    }
    if (m.find("SatisfactionRate") != m.end() && !m["SatisfactionRate"].empty()) {
      satisfactionRate = make_shared<double>(boost::any_cast<double>(m["SatisfactionRate"]));
    }
    if (m.find("SatisfactionSurveysOffered") != m.end() && !m["SatisfactionSurveysOffered"].empty()) {
      satisfactionSurveysOffered = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysOffered"]));
    }
    if (m.find("SatisfactionSurveysResponded") != m.end() && !m["SatisfactionSurveysResponded"].empty()) {
      satisfactionSurveysResponded = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysResponded"]));
    }
    if (m.find("TotalDialingTime") != m.end() && !m["TotalDialingTime"].empty()) {
      totalDialingTime = make_shared<long>(boost::any_cast<long>(m["TotalDialingTime"]));
    }
    if (m.find("TotalHoldTime") != m.end() && !m["TotalHoldTime"].empty()) {
      totalHoldTime = make_shared<long>(boost::any_cast<long>(m["TotalHoldTime"]));
    }
    if (m.find("TotalRingTime") != m.end() && !m["TotalRingTime"].empty()) {
      totalRingTime = make_shared<long>(boost::any_cast<long>(m["TotalRingTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
    if (m.find("TotalWorkTime") != m.end() && !m["TotalWorkTime"].empty()) {
      totalWorkTime = make_shared<long>(boost::any_cast<long>(m["TotalWorkTime"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBodyDataOutbound() = default;
};
class ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList : public Darabonba::Model {
public:
  shared_ptr<string> breakCode{};
  shared_ptr<long> count{};
  shared_ptr<long> duration{};

  ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList() {}

  explicit ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (breakCode) {
      res["BreakCode"] = boost::any(*breakCode);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BreakCode") != m.end() && !m["BreakCode"].empty()) {
      breakCode = make_shared<string>(boost::any_cast<string>(m["BreakCode"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList() = default;
};
class ListIntervalAgentSkillGroupReportResponseBodyDataOverall : public Darabonba::Model {
public:
  shared_ptr<double> averageBreakTime{};
  shared_ptr<double> averageHoldTime{};
  shared_ptr<double> averageReadyTime{};
  shared_ptr<double> averageTalkTime{};
  shared_ptr<double> averageWorkTime{};
  shared_ptr<vector<ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList>> breakCodeDetailList{};
  shared_ptr<long> firstCheckInTime{};
  shared_ptr<long> lastCheckoutTime{};
  shared_ptr<long> maxBreakTime{};
  shared_ptr<long> maxHoldTime{};
  shared_ptr<long> maxReadyTime{};
  shared_ptr<long> maxTalkTime{};
  shared_ptr<long> maxWorkTime{};
  shared_ptr<double> occupancyRate{};
  shared_ptr<double> satisfactionIndex{};
  shared_ptr<double> satisfactionRate{};
  shared_ptr<long> satisfactionSurveysOffered{};
  shared_ptr<long> satisfactionSurveysResponded{};
  shared_ptr<long> totalBreakTime{};
  shared_ptr<long> totalCalls{};
  shared_ptr<long> totalHoldTime{};
  shared_ptr<long> totalLoggedInTime{};
  shared_ptr<long> totalOffSiteOnlineTime{};
  shared_ptr<long> totalOfficePhoneOnlineTime{};
  shared_ptr<long> totalOnSiteOnlineTime{};
  shared_ptr<long> totalOutboundScenarioReadyTime{};
  shared_ptr<long> totalOutboundScenarioTime{};
  shared_ptr<long> totalReadyTime{};
  shared_ptr<long> totalTalkTime{};
  shared_ptr<long> totalWorkTime{};

  ListIntervalAgentSkillGroupReportResponseBodyDataOverall() {}

  explicit ListIntervalAgentSkillGroupReportResponseBodyDataOverall(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageBreakTime) {
      res["AverageBreakTime"] = boost::any(*averageBreakTime);
    }
    if (averageHoldTime) {
      res["AverageHoldTime"] = boost::any(*averageHoldTime);
    }
    if (averageReadyTime) {
      res["AverageReadyTime"] = boost::any(*averageReadyTime);
    }
    if (averageTalkTime) {
      res["AverageTalkTime"] = boost::any(*averageTalkTime);
    }
    if (averageWorkTime) {
      res["AverageWorkTime"] = boost::any(*averageWorkTime);
    }
    if (breakCodeDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*breakCodeDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BreakCodeDetailList"] = boost::any(temp1);
    }
    if (firstCheckInTime) {
      res["FirstCheckInTime"] = boost::any(*firstCheckInTime);
    }
    if (lastCheckoutTime) {
      res["LastCheckoutTime"] = boost::any(*lastCheckoutTime);
    }
    if (maxBreakTime) {
      res["MaxBreakTime"] = boost::any(*maxBreakTime);
    }
    if (maxHoldTime) {
      res["MaxHoldTime"] = boost::any(*maxHoldTime);
    }
    if (maxReadyTime) {
      res["MaxReadyTime"] = boost::any(*maxReadyTime);
    }
    if (maxTalkTime) {
      res["MaxTalkTime"] = boost::any(*maxTalkTime);
    }
    if (maxWorkTime) {
      res["MaxWorkTime"] = boost::any(*maxWorkTime);
    }
    if (occupancyRate) {
      res["OccupancyRate"] = boost::any(*occupancyRate);
    }
    if (satisfactionIndex) {
      res["SatisfactionIndex"] = boost::any(*satisfactionIndex);
    }
    if (satisfactionRate) {
      res["SatisfactionRate"] = boost::any(*satisfactionRate);
    }
    if (satisfactionSurveysOffered) {
      res["SatisfactionSurveysOffered"] = boost::any(*satisfactionSurveysOffered);
    }
    if (satisfactionSurveysResponded) {
      res["SatisfactionSurveysResponded"] = boost::any(*satisfactionSurveysResponded);
    }
    if (totalBreakTime) {
      res["TotalBreakTime"] = boost::any(*totalBreakTime);
    }
    if (totalCalls) {
      res["TotalCalls"] = boost::any(*totalCalls);
    }
    if (totalHoldTime) {
      res["TotalHoldTime"] = boost::any(*totalHoldTime);
    }
    if (totalLoggedInTime) {
      res["TotalLoggedInTime"] = boost::any(*totalLoggedInTime);
    }
    if (totalOffSiteOnlineTime) {
      res["TotalOffSiteOnlineTime"] = boost::any(*totalOffSiteOnlineTime);
    }
    if (totalOfficePhoneOnlineTime) {
      res["TotalOfficePhoneOnlineTime"] = boost::any(*totalOfficePhoneOnlineTime);
    }
    if (totalOnSiteOnlineTime) {
      res["TotalOnSiteOnlineTime"] = boost::any(*totalOnSiteOnlineTime);
    }
    if (totalOutboundScenarioReadyTime) {
      res["TotalOutboundScenarioReadyTime"] = boost::any(*totalOutboundScenarioReadyTime);
    }
    if (totalOutboundScenarioTime) {
      res["TotalOutboundScenarioTime"] = boost::any(*totalOutboundScenarioTime);
    }
    if (totalReadyTime) {
      res["TotalReadyTime"] = boost::any(*totalReadyTime);
    }
    if (totalTalkTime) {
      res["TotalTalkTime"] = boost::any(*totalTalkTime);
    }
    if (totalWorkTime) {
      res["TotalWorkTime"] = boost::any(*totalWorkTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageBreakTime") != m.end() && !m["AverageBreakTime"].empty()) {
      averageBreakTime = make_shared<double>(boost::any_cast<double>(m["AverageBreakTime"]));
    }
    if (m.find("AverageHoldTime") != m.end() && !m["AverageHoldTime"].empty()) {
      averageHoldTime = make_shared<double>(boost::any_cast<double>(m["AverageHoldTime"]));
    }
    if (m.find("AverageReadyTime") != m.end() && !m["AverageReadyTime"].empty()) {
      averageReadyTime = make_shared<double>(boost::any_cast<double>(m["AverageReadyTime"]));
    }
    if (m.find("AverageTalkTime") != m.end() && !m["AverageTalkTime"].empty()) {
      averageTalkTime = make_shared<double>(boost::any_cast<double>(m["AverageTalkTime"]));
    }
    if (m.find("AverageWorkTime") != m.end() && !m["AverageWorkTime"].empty()) {
      averageWorkTime = make_shared<double>(boost::any_cast<double>(m["AverageWorkTime"]));
    }
    if (m.find("BreakCodeDetailList") != m.end() && !m["BreakCodeDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["BreakCodeDetailList"].type()) {
        vector<ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BreakCodeDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        breakCodeDetailList = make_shared<vector<ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList>>(expect1);
      }
    }
    if (m.find("FirstCheckInTime") != m.end() && !m["FirstCheckInTime"].empty()) {
      firstCheckInTime = make_shared<long>(boost::any_cast<long>(m["FirstCheckInTime"]));
    }
    if (m.find("LastCheckoutTime") != m.end() && !m["LastCheckoutTime"].empty()) {
      lastCheckoutTime = make_shared<long>(boost::any_cast<long>(m["LastCheckoutTime"]));
    }
    if (m.find("MaxBreakTime") != m.end() && !m["MaxBreakTime"].empty()) {
      maxBreakTime = make_shared<long>(boost::any_cast<long>(m["MaxBreakTime"]));
    }
    if (m.find("MaxHoldTime") != m.end() && !m["MaxHoldTime"].empty()) {
      maxHoldTime = make_shared<long>(boost::any_cast<long>(m["MaxHoldTime"]));
    }
    if (m.find("MaxReadyTime") != m.end() && !m["MaxReadyTime"].empty()) {
      maxReadyTime = make_shared<long>(boost::any_cast<long>(m["MaxReadyTime"]));
    }
    if (m.find("MaxTalkTime") != m.end() && !m["MaxTalkTime"].empty()) {
      maxTalkTime = make_shared<long>(boost::any_cast<long>(m["MaxTalkTime"]));
    }
    if (m.find("MaxWorkTime") != m.end() && !m["MaxWorkTime"].empty()) {
      maxWorkTime = make_shared<long>(boost::any_cast<long>(m["MaxWorkTime"]));
    }
    if (m.find("OccupancyRate") != m.end() && !m["OccupancyRate"].empty()) {
      occupancyRate = make_shared<double>(boost::any_cast<double>(m["OccupancyRate"]));
    }
    if (m.find("SatisfactionIndex") != m.end() && !m["SatisfactionIndex"].empty()) {
      satisfactionIndex = make_shared<double>(boost::any_cast<double>(m["SatisfactionIndex"]));
    }
    if (m.find("SatisfactionRate") != m.end() && !m["SatisfactionRate"].empty()) {
      satisfactionRate = make_shared<double>(boost::any_cast<double>(m["SatisfactionRate"]));
    }
    if (m.find("SatisfactionSurveysOffered") != m.end() && !m["SatisfactionSurveysOffered"].empty()) {
      satisfactionSurveysOffered = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysOffered"]));
    }
    if (m.find("SatisfactionSurveysResponded") != m.end() && !m["SatisfactionSurveysResponded"].empty()) {
      satisfactionSurveysResponded = make_shared<long>(boost::any_cast<long>(m["SatisfactionSurveysResponded"]));
    }
    if (m.find("TotalBreakTime") != m.end() && !m["TotalBreakTime"].empty()) {
      totalBreakTime = make_shared<long>(boost::any_cast<long>(m["TotalBreakTime"]));
    }
    if (m.find("TotalCalls") != m.end() && !m["TotalCalls"].empty()) {
      totalCalls = make_shared<long>(boost::any_cast<long>(m["TotalCalls"]));
    }
    if (m.find("TotalHoldTime") != m.end() && !m["TotalHoldTime"].empty()) {
      totalHoldTime = make_shared<long>(boost::any_cast<long>(m["TotalHoldTime"]));
    }
    if (m.find("TotalLoggedInTime") != m.end() && !m["TotalLoggedInTime"].empty()) {
      totalLoggedInTime = make_shared<long>(boost::any_cast<long>(m["TotalLoggedInTime"]));
    }
    if (m.find("TotalOffSiteOnlineTime") != m.end() && !m["TotalOffSiteOnlineTime"].empty()) {
      totalOffSiteOnlineTime = make_shared<long>(boost::any_cast<long>(m["TotalOffSiteOnlineTime"]));
    }
    if (m.find("TotalOfficePhoneOnlineTime") != m.end() && !m["TotalOfficePhoneOnlineTime"].empty()) {
      totalOfficePhoneOnlineTime = make_shared<long>(boost::any_cast<long>(m["TotalOfficePhoneOnlineTime"]));
    }
    if (m.find("TotalOnSiteOnlineTime") != m.end() && !m["TotalOnSiteOnlineTime"].empty()) {
      totalOnSiteOnlineTime = make_shared<long>(boost::any_cast<long>(m["TotalOnSiteOnlineTime"]));
    }
    if (m.find("TotalOutboundScenarioReadyTime") != m.end() && !m["TotalOutboundScenarioReadyTime"].empty()) {
      totalOutboundScenarioReadyTime = make_shared<long>(boost::any_cast<long>(m["TotalOutboundScenarioReadyTime"]));
    }
    if (m.find("TotalOutboundScenarioTime") != m.end() && !m["TotalOutboundScenarioTime"].empty()) {
      totalOutboundScenarioTime = make_shared<long>(boost::any_cast<long>(m["TotalOutboundScenarioTime"]));
    }
    if (m.find("TotalReadyTime") != m.end() && !m["TotalReadyTime"].empty()) {
      totalReadyTime = make_shared<long>(boost::any_cast<long>(m["TotalReadyTime"]));
    }
    if (m.find("TotalTalkTime") != m.end() && !m["TotalTalkTime"].empty()) {
      totalTalkTime = make_shared<long>(boost::any_cast<long>(m["TotalTalkTime"]));
    }
    if (m.find("TotalWorkTime") != m.end() && !m["TotalWorkTime"].empty()) {
      totalWorkTime = make_shared<long>(boost::any_cast<long>(m["TotalWorkTime"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBodyDataOverall() = default;
};
class ListIntervalAgentSkillGroupReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back> back2Back{};
  shared_ptr<ListIntervalAgentSkillGroupReportResponseBodyDataInbound> inbound{};
  shared_ptr<ListIntervalAgentSkillGroupReportResponseBodyDataInternal> internal{};
  shared_ptr<ListIntervalAgentSkillGroupReportResponseBodyDataOutbound> outbound{};
  shared_ptr<ListIntervalAgentSkillGroupReportResponseBodyDataOverall> overall{};
  shared_ptr<long> statsTime{};

  ListIntervalAgentSkillGroupReportResponseBodyData() {}

  explicit ListIntervalAgentSkillGroupReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (back2Back) {
      res["Back2Back"] = back2Back ? boost::any(back2Back->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inbound) {
      res["Inbound"] = inbound ? boost::any(inbound->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internal) {
      res["Internal"] = internal ? boost::any(internal->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outbound) {
      res["Outbound"] = outbound ? boost::any(outbound->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (overall) {
      res["Overall"] = overall ? boost::any(overall->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (statsTime) {
      res["StatsTime"] = boost::any(*statsTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Back2Back") != m.end() && !m["Back2Back"].empty()) {
      if (typeid(map<string, boost::any>) == m["Back2Back"].type()) {
        ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Back2Back"]));
        back2Back = make_shared<ListIntervalAgentSkillGroupReportResponseBodyDataBack2Back>(model1);
      }
    }
    if (m.find("Inbound") != m.end() && !m["Inbound"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inbound"].type()) {
        ListIntervalAgentSkillGroupReportResponseBodyDataInbound model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inbound"]));
        inbound = make_shared<ListIntervalAgentSkillGroupReportResponseBodyDataInbound>(model1);
      }
    }
    if (m.find("Internal") != m.end() && !m["Internal"].empty()) {
      if (typeid(map<string, boost::any>) == m["Internal"].type()) {
        ListIntervalAgentSkillGroupReportResponseBodyDataInternal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Internal"]));
        internal = make_shared<ListIntervalAgentSkillGroupReportResponseBodyDataInternal>(model1);
      }
    }
    if (m.find("Outbound") != m.end() && !m["Outbound"].empty()) {
      if (typeid(map<string, boost::any>) == m["Outbound"].type()) {
        ListIntervalAgentSkillGroupReportResponseBodyDataOutbound model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Outbound"]));
        outbound = make_shared<ListIntervalAgentSkillGroupReportResponseBodyDataOutbound>(model1);
      }
    }
    if (m.find("Overall") != m.end() && !m["Overall"].empty()) {
      if (typeid(map<string, boost::any>) == m["Overall"].type()) {
        ListIntervalAgentSkillGroupReportResponseBodyDataOverall model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Overall"]));
        overall = make_shared<ListIntervalAgentSkillGroupReportResponseBodyDataOverall>(model1);
      }
    }
    if (m.find("StatsTime") != m.end() && !m["StatsTime"].empty()) {
      statsTime = make_shared<long>(boost::any_cast<long>(m["StatsTime"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBodyData() = default;
};
class ListIntervalAgentSkillGroupReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListIntervalAgentSkillGroupReportResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListIntervalAgentSkillGroupReportResponseBody() {}

  explicit ListIntervalAgentSkillGroupReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListIntervalAgentSkillGroupReportResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIntervalAgentSkillGroupReportResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListIntervalAgentSkillGroupReportResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponseBody() = default;
};
class ListIntervalAgentSkillGroupReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIntervalAgentSkillGroupReportResponseBody> body{};

  ListIntervalAgentSkillGroupReportResponse() {}

  explicit ListIntervalAgentSkillGroupReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIntervalAgentSkillGroupReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIntervalAgentSkillGroupReportResponseBody>(model1);
      }
    }
  }


  virtual ~ListIntervalAgentSkillGroupReportResponse() = default;
};
class ListMonoRecordingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> instanceId{};

  ListMonoRecordingsRequest() {}

  explicit ListMonoRecordingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListMonoRecordingsRequest() = default;
};
class ListMonoRecordingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentName{};
  shared_ptr<string> contactId{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> ramId{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<string> startTime{};

  ListMonoRecordingsResponseBodyData() {}

  explicit ListMonoRecordingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentName) {
      res["AgentName"] = boost::any(*agentName);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (ramId) {
      res["RamId"] = boost::any(*ramId);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("AgentName") != m.end() && !m["AgentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["AgentName"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("RamId") != m.end() && !m["RamId"].empty()) {
      ramId = make_shared<string>(boost::any_cast<string>(m["RamId"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListMonoRecordingsResponseBodyData() = default;
};
class ListMonoRecordingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListMonoRecordingsResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListMonoRecordingsResponseBody() {}

  explicit ListMonoRecordingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListMonoRecordingsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMonoRecordingsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListMonoRecordingsResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMonoRecordingsResponseBody() = default;
};
class ListMonoRecordingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMonoRecordingsResponseBody> body{};

  ListMonoRecordingsResponse() {}

  explicit ListMonoRecordingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMonoRecordingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMonoRecordingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMonoRecordingsResponse() = default;
};
class PauseCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};

  PauseCampaignRequest() {}

  explicit PauseCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~PauseCampaignRequest() = default;
};
class PauseCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PauseCampaignResponseBody() {}

  explicit PauseCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PauseCampaignResponseBody() = default;
};
class PauseCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PauseCampaignResponseBody> body{};

  PauseCampaignResponse() {}

  explicit PauseCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PauseCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PauseCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~PauseCampaignResponse() = default;
};
class ReplaceMigrationAvailableNumbersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> operatorName{};
  shared_ptr<long> operatorUid{};
  shared_ptr<string> v1Numbers{};
  shared_ptr<string> v2Numbers{};

  ReplaceMigrationAvailableNumbersRequest() {}

  explicit ReplaceMigrationAvailableNumbersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (operatorUid) {
      res["OperatorUid"] = boost::any(*operatorUid);
    }
    if (v1Numbers) {
      res["V1Numbers"] = boost::any(*v1Numbers);
    }
    if (v2Numbers) {
      res["V2Numbers"] = boost::any(*v2Numbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OperatorUid") != m.end() && !m["OperatorUid"].empty()) {
      operatorUid = make_shared<long>(boost::any_cast<long>(m["OperatorUid"]));
    }
    if (m.find("V1Numbers") != m.end() && !m["V1Numbers"].empty()) {
      v1Numbers = make_shared<string>(boost::any_cast<string>(m["V1Numbers"]));
    }
    if (m.find("V2Numbers") != m.end() && !m["V2Numbers"].empty()) {
      v2Numbers = make_shared<string>(boost::any_cast<string>(m["V2Numbers"]));
    }
  }


  virtual ~ReplaceMigrationAvailableNumbersRequest() = default;
};
class ReplaceMigrationAvailableNumbersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReplaceMigrationAvailableNumbersResponseBody() {}

  explicit ReplaceMigrationAvailableNumbersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReplaceMigrationAvailableNumbersResponseBody() = default;
};
class ReplaceMigrationAvailableNumbersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReplaceMigrationAvailableNumbersResponseBody> body{};

  ReplaceMigrationAvailableNumbersResponse() {}

  explicit ReplaceMigrationAvailableNumbersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReplaceMigrationAvailableNumbersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplaceMigrationAvailableNumbersResponseBody>(model1);
      }
    }
  }


  virtual ~ReplaceMigrationAvailableNumbersResponse() = default;
};
class ResumeCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};

  ResumeCampaignRequest() {}

  explicit ResumeCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ResumeCampaignRequest() = default;
};
class ResumeCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ResumeCampaignResponseBody() {}

  explicit ResumeCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResumeCampaignResponseBody() = default;
};
class ResumeCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeCampaignResponseBody> body{};

  ResumeCampaignResponse() {}

  explicit ResumeCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeCampaignResponse() = default;
};
class SaveRTCStatsV2Request : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> generalInfo{};
  shared_ptr<string> googAddress{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> receiverReport{};
  shared_ptr<string> senderReport{};

  SaveRTCStatsV2Request() {}

  explicit SaveRTCStatsV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (generalInfo) {
      res["GeneralInfo"] = boost::any(*generalInfo);
    }
    if (googAddress) {
      res["GoogAddress"] = boost::any(*googAddress);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (receiverReport) {
      res["ReceiverReport"] = boost::any(*receiverReport);
    }
    if (senderReport) {
      res["SenderReport"] = boost::any(*senderReport);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("GeneralInfo") != m.end() && !m["GeneralInfo"].empty()) {
      generalInfo = make_shared<string>(boost::any_cast<string>(m["GeneralInfo"]));
    }
    if (m.find("GoogAddress") != m.end() && !m["GoogAddress"].empty()) {
      googAddress = make_shared<string>(boost::any_cast<string>(m["GoogAddress"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ReceiverReport") != m.end() && !m["ReceiverReport"].empty()) {
      receiverReport = make_shared<string>(boost::any_cast<string>(m["ReceiverReport"]));
    }
    if (m.find("SenderReport") != m.end() && !m["SenderReport"].empty()) {
      senderReport = make_shared<string>(boost::any_cast<string>(m["SenderReport"]));
    }
  }


  virtual ~SaveRTCStatsV2Request() = default;
};
class SaveRTCStatsV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rowCount{};
  shared_ptr<bool> success{};
  shared_ptr<long> timeStamp{};

  SaveRTCStatsV2ResponseBody() {}

  explicit SaveRTCStatsV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<long>(boost::any_cast<long>(m["TimeStamp"]));
    }
  }


  virtual ~SaveRTCStatsV2ResponseBody() = default;
};
class SaveRTCStatsV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveRTCStatsV2ResponseBody> body{};

  SaveRTCStatsV2Response() {}

  explicit SaveRTCStatsV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveRTCStatsV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveRTCStatsV2ResponseBody>(model1);
      }
    }
  }


  virtual ~SaveRTCStatsV2Response() = default;
};
class SaveTerminalLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> callId{};
  shared_ptr<string> content{};
  shared_ptr<long> dataType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> methodName{};
  shared_ptr<string> status{};
  shared_ptr<string> uniqueRequestId{};

  SaveTerminalLogRequest() {}

  explicit SaveTerminalLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (methodName) {
      res["MethodName"] = boost::any(*methodName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uniqueRequestId) {
      res["UniqueRequestId"] = boost::any(*uniqueRequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MethodName") != m.end() && !m["MethodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["MethodName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UniqueRequestId") != m.end() && !m["UniqueRequestId"].empty()) {
      uniqueRequestId = make_shared<string>(boost::any_cast<string>(m["UniqueRequestId"]));
    }
  }


  virtual ~SaveTerminalLogRequest() = default;
};
class SaveTerminalLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timeStamp{};

  SaveTerminalLogResponseBody() {}

  explicit SaveTerminalLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<long>(boost::any_cast<long>(m["TimeStamp"]));
    }
  }


  virtual ~SaveTerminalLogResponseBody() = default;
};
class SaveTerminalLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTerminalLogResponseBody> body{};

  SaveTerminalLogResponse() {}

  explicit SaveTerminalLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveTerminalLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTerminalLogResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTerminalLogResponse() = default;
};
class SaveWebRtcInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};

  SaveWebRtcInfoRequest() {}

  explicit SaveWebRtcInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~SaveWebRtcInfoRequest() = default;
};
class SaveWebRtcInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rowCount{};
  shared_ptr<bool> success{};
  shared_ptr<long> timeStamp{};

  SaveWebRtcInfoResponseBody() {}

  explicit SaveWebRtcInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<long>(boost::any_cast<long>(m["TimeStamp"]));
    }
  }


  virtual ~SaveWebRtcInfoResponseBody() = default;
};
class SaveWebRtcInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveWebRtcInfoResponseBody> body{};

  SaveWebRtcInfoResponse() {}

  explicit SaveWebRtcInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveWebRtcInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveWebRtcInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SaveWebRtcInfoResponse() = default;
};
class SubmitCampaignRequest : public Darabonba::Model {
public:
  shared_ptr<string> campaignId{};
  shared_ptr<string> instanceId{};

  SubmitCampaignRequest() {}

  explicit SubmitCampaignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (campaignId) {
      res["CampaignId"] = boost::any(*campaignId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CampaignId") != m.end() && !m["CampaignId"].empty()) {
      campaignId = make_shared<string>(boost::any_cast<string>(m["CampaignId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~SubmitCampaignRequest() = default;
};
class SubmitCampaignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitCampaignResponseBody() {}

  explicit SubmitCampaignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitCampaignResponseBody() = default;
};
class SubmitCampaignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitCampaignResponseBody> body{};

  SubmitCampaignResponse() {}

  explicit SubmitCampaignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitCampaignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitCampaignResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitCampaignResponse() = default;
};
class UnregisterDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userId{};

  UnregisterDeviceRequest() {}

  explicit UnregisterDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UnregisterDeviceRequest() = default;
};
class UnregisterDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnregisterDeviceResponseBody() {}

  explicit UnregisterDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnregisterDeviceResponseBody() = default;
};
class UnregisterDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnregisterDeviceResponseBody> body{};

  UnregisterDeviceResponse() {}

  explicit UnregisterDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnregisterDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnregisterDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnregisterDeviceResponse() = default;
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
  AbortCampaignResponse abortCampaignWithOptions(shared_ptr<AbortCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbortCampaignResponse abortCampaign(shared_ptr<AbortCampaignRequest> request);
  AbortCasesResponse abortCasesWithOptions(shared_ptr<AbortCasesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbortCasesResponse abortCases(shared_ptr<AbortCasesRequest> request);
  CheckDemoInstanceExistsResponse checkDemoInstanceExistsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDemoInstanceExistsResponse checkDemoInstanceExists();
  CheckMQRoleAssumptionAuthorityResponse checkMQRoleAssumptionAuthorityWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMQRoleAssumptionAuthorityResponse checkMQRoleAssumptionAuthority();
  CreateCampaignResponse createCampaignWithOptions(shared_ptr<CreateCampaignRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCampaignResponse createCampaign(shared_ptr<CreateCampaignRequest> request);
  CreateCorpNumberGroupResponse createCorpNumberGroupWithOptions(shared_ptr<CreateCorpNumberGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCorpNumberGroupResponse createCorpNumberGroup(shared_ptr<CreateCorpNumberGroupRequest> request);
  CreateDemoInstanceResponse createDemoInstanceWithOptions(shared_ptr<CreateDemoInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDemoInstanceResponse createDemoInstance(shared_ptr<CreateDemoInstanceRequest> request);
  GetCampaignResponse getCampaignWithOptions(shared_ptr<GetCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCampaignResponse getCampaign(shared_ptr<GetCampaignRequest> request);
  GetHistoricalCampaignReportResponse getHistoricalCampaignReportWithOptions(shared_ptr<GetHistoricalCampaignReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistoricalCampaignReportResponse getHistoricalCampaignReport(shared_ptr<GetHistoricalCampaignReportRequest> request);
  GetInstanceIdsByAliyunUidV2Response getInstanceIdsByAliyunUidV2WithOptions(shared_ptr<GetInstanceIdsByAliyunUidV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceIdsByAliyunUidV2Response getInstanceIdsByAliyunUidV2(shared_ptr<GetInstanceIdsByAliyunUidV2Request> request);
  GetRealtimeCampaignStatsResponse getRealtimeCampaignStatsWithOptions(shared_ptr<GetRealtimeCampaignStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRealtimeCampaignStatsResponse getRealtimeCampaignStats(shared_ptr<GetRealtimeCampaignStatsRequest> request);
  ImportAdminsResponse importAdminsWithOptions(shared_ptr<ImportAdminsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportAdminsResponse importAdmins(shared_ptr<ImportAdminsRequest> request);
  IssueSoftphoneCommandResponse issueSoftphoneCommandWithOptions(shared_ptr<IssueSoftphoneCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IssueSoftphoneCommandResponse issueSoftphoneCommand(shared_ptr<IssueSoftphoneCommandRequest> request);
  ListAttemptsResponse listAttemptsWithOptions(shared_ptr<ListAttemptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAttemptsResponse listAttempts(shared_ptr<ListAttemptsRequest> request);
  ListCampaignTrendingReportResponse listCampaignTrendingReportWithOptions(shared_ptr<ListCampaignTrendingReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCampaignTrendingReportResponse listCampaignTrendingReport(shared_ptr<ListCampaignTrendingReportRequest> request);
  ListCampaignsResponse listCampaignsWithOptions(shared_ptr<ListCampaignsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCampaignsResponse listCampaigns(shared_ptr<ListCampaignsRequest> request);
  ListCasesResponse listCasesWithOptions(shared_ptr<ListCasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCasesResponse listCases(shared_ptr<ListCasesRequest> request);
  ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReportWithOptions(shared_ptr<ListHistoricalAgentSkillGroupReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReport(shared_ptr<ListHistoricalAgentSkillGroupReportRequest> request);
  ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReportWithOptions(shared_ptr<ListIntervalAgentSkillGroupReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReport(shared_ptr<ListIntervalAgentSkillGroupReportRequest> request);
  ListMonoRecordingsResponse listMonoRecordingsWithOptions(shared_ptr<ListMonoRecordingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMonoRecordingsResponse listMonoRecordings(shared_ptr<ListMonoRecordingsRequest> request);
  PauseCampaignResponse pauseCampaignWithOptions(shared_ptr<PauseCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseCampaignResponse pauseCampaign(shared_ptr<PauseCampaignRequest> request);
  ReplaceMigrationAvailableNumbersResponse replaceMigrationAvailableNumbersWithOptions(shared_ptr<ReplaceMigrationAvailableNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceMigrationAvailableNumbersResponse replaceMigrationAvailableNumbers(shared_ptr<ReplaceMigrationAvailableNumbersRequest> request);
  ResumeCampaignResponse resumeCampaignWithOptions(shared_ptr<ResumeCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeCampaignResponse resumeCampaign(shared_ptr<ResumeCampaignRequest> request);
  SaveRTCStatsV2Response saveRTCStatsV2WithOptions(shared_ptr<SaveRTCStatsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveRTCStatsV2Response saveRTCStatsV2(shared_ptr<SaveRTCStatsV2Request> request);
  SaveTerminalLogResponse saveTerminalLogWithOptions(shared_ptr<SaveTerminalLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTerminalLogResponse saveTerminalLog(shared_ptr<SaveTerminalLogRequest> request);
  SaveWebRtcInfoResponse saveWebRtcInfoWithOptions(shared_ptr<SaveWebRtcInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveWebRtcInfoResponse saveWebRtcInfo(shared_ptr<SaveWebRtcInfoRequest> request);
  SubmitCampaignResponse submitCampaignWithOptions(shared_ptr<SubmitCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitCampaignResponse submitCampaign(shared_ptr<SubmitCampaignRequest> request);
  UnregisterDeviceResponse unregisterDeviceWithOptions(shared_ptr<UnregisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnregisterDeviceResponse unregisterDevice(shared_ptr<UnregisterDeviceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CloudCallCenter20200701

#endif
