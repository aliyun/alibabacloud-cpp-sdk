// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TRUSTED-SERVER20200613_H_
#define ALIBABACLOUD_TRUSTED-SERVER20200613_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Trusted-server20200613 {
class DescribeBootRequest : public Darabonba::Model {
public:
  shared_ptr<string> propertyUuid{};

  DescribeBootRequest() {}

  explicit DescribeBootRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
  }


  virtual ~DescribeBootRequest() = default;
};
class DescribeBootResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};
  shared_ptr<long> whiteListAffiliation{};
  shared_ptr<string> whiteListDetail{};

  DescribeBootResponseBody() {}

  explicit DescribeBootResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (whiteListAffiliation) {
      res["WhiteListAffiliation"] = boost::any(*whiteListAffiliation);
    }
    if (whiteListDetail) {
      res["WhiteListDetail"] = boost::any(*whiteListDetail);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WhiteListAffiliation") != m.end() && !m["WhiteListAffiliation"].empty()) {
      whiteListAffiliation = make_shared<long>(boost::any_cast<long>(m["WhiteListAffiliation"]));
    }
    if (m.find("WhiteListDetail") != m.end() && !m["WhiteListDetail"].empty()) {
      whiteListDetail = make_shared<string>(boost::any_cast<string>(m["WhiteListDetail"]));
    }
  }


  virtual ~DescribeBootResponseBody() = default;
};
class DescribeBootResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBootResponseBody> body{};

  DescribeBootResponse() {}

  explicit DescribeBootResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBootResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBootResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBootResponse() = default;
};
class DescribeEventsRequest : public Darabonba::Model {
public:
  shared_ptr<long> createEndDate{};
  shared_ptr<long> createStartDate{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> eventAffiliation{};
  shared_ptr<long> eventLevel{};
  shared_ptr<long> eventStatus{};
  shared_ptr<long> eventType{};
  shared_ptr<long> handleEndDate{};
  shared_ptr<long> handleStartDate{};
  shared_ptr<long> handleType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyPrivateIp{};
  shared_ptr<string> propertyPublicIp{};
  shared_ptr<string> propertyUuid{};
  shared_ptr<string> suspect{};
  shared_ptr<string> suspectSig{};

  DescribeEventsRequest() {}

  explicit DescribeEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createEndDate) {
      res["CreateEndDate"] = boost::any(*createEndDate);
    }
    if (createStartDate) {
      res["CreateStartDate"] = boost::any(*createStartDate);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (eventAffiliation) {
      res["EventAffiliation"] = boost::any(*eventAffiliation);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (eventStatus) {
      res["EventStatus"] = boost::any(*eventStatus);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (handleEndDate) {
      res["HandleEndDate"] = boost::any(*handleEndDate);
    }
    if (handleStartDate) {
      res["HandleStartDate"] = boost::any(*handleStartDate);
    }
    if (handleType) {
      res["HandleType"] = boost::any(*handleType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyPrivateIp) {
      res["PropertyPrivateIp"] = boost::any(*propertyPrivateIp);
    }
    if (propertyPublicIp) {
      res["PropertyPublicIp"] = boost::any(*propertyPublicIp);
    }
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    if (suspect) {
      res["Suspect"] = boost::any(*suspect);
    }
    if (suspectSig) {
      res["SuspectSig"] = boost::any(*suspectSig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateEndDate") != m.end() && !m["CreateEndDate"].empty()) {
      createEndDate = make_shared<long>(boost::any_cast<long>(m["CreateEndDate"]));
    }
    if (m.find("CreateStartDate") != m.end() && !m["CreateStartDate"].empty()) {
      createStartDate = make_shared<long>(boost::any_cast<long>(m["CreateStartDate"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EventAffiliation") != m.end() && !m["EventAffiliation"].empty()) {
      eventAffiliation = make_shared<long>(boost::any_cast<long>(m["EventAffiliation"]));
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<long>(boost::any_cast<long>(m["EventLevel"]));
    }
    if (m.find("EventStatus") != m.end() && !m["EventStatus"].empty()) {
      eventStatus = make_shared<long>(boost::any_cast<long>(m["EventStatus"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<long>(boost::any_cast<long>(m["EventType"]));
    }
    if (m.find("HandleEndDate") != m.end() && !m["HandleEndDate"].empty()) {
      handleEndDate = make_shared<long>(boost::any_cast<long>(m["HandleEndDate"]));
    }
    if (m.find("HandleStartDate") != m.end() && !m["HandleStartDate"].empty()) {
      handleStartDate = make_shared<long>(boost::any_cast<long>(m["HandleStartDate"]));
    }
    if (m.find("HandleType") != m.end() && !m["HandleType"].empty()) {
      handleType = make_shared<long>(boost::any_cast<long>(m["HandleType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyPrivateIp") != m.end() && !m["PropertyPrivateIp"].empty()) {
      propertyPrivateIp = make_shared<string>(boost::any_cast<string>(m["PropertyPrivateIp"]));
    }
    if (m.find("PropertyPublicIp") != m.end() && !m["PropertyPublicIp"].empty()) {
      propertyPublicIp = make_shared<string>(boost::any_cast<string>(m["PropertyPublicIp"]));
    }
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
    if (m.find("Suspect") != m.end() && !m["Suspect"].empty()) {
      suspect = make_shared<string>(boost::any_cast<string>(m["Suspect"]));
    }
    if (m.find("SuspectSig") != m.end() && !m["SuspectSig"].empty()) {
      suspectSig = make_shared<string>(boost::any_cast<string>(m["SuspectSig"]));
    }
  }


  virtual ~DescribeEventsRequest() = default;
};
class DescribeEventsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> accumulation{};
  shared_ptr<string> eventAffiliation{};
  shared_ptr<string> eventLevel{};
  shared_ptr<string> eventStatus{};
  shared_ptr<string> eventType{};
  shared_ptr<string> eventUuid{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtHandle{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> handleType{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyPrivateIp{};
  shared_ptr<string> propertyPublicIp{};
  shared_ptr<string> propertyUuid{};
  shared_ptr<string> suspect{};
  shared_ptr<string> suspectSig{};
  shared_ptr<string> suspectWhiteList{};

  DescribeEventsResponseBodyItems() {}

  explicit DescribeEventsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accumulation) {
      res["Accumulation"] = boost::any(*accumulation);
    }
    if (eventAffiliation) {
      res["EventAffiliation"] = boost::any(*eventAffiliation);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (eventStatus) {
      res["EventStatus"] = boost::any(*eventStatus);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (eventUuid) {
      res["EventUuid"] = boost::any(*eventUuid);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtHandle) {
      res["GmtHandle"] = boost::any(*gmtHandle);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (handleType) {
      res["HandleType"] = boost::any(*handleType);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyPrivateIp) {
      res["PropertyPrivateIp"] = boost::any(*propertyPrivateIp);
    }
    if (propertyPublicIp) {
      res["PropertyPublicIp"] = boost::any(*propertyPublicIp);
    }
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    if (suspect) {
      res["Suspect"] = boost::any(*suspect);
    }
    if (suspectSig) {
      res["SuspectSig"] = boost::any(*suspectSig);
    }
    if (suspectWhiteList) {
      res["SuspectWhiteList"] = boost::any(*suspectWhiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accumulation") != m.end() && !m["Accumulation"].empty()) {
      accumulation = make_shared<string>(boost::any_cast<string>(m["Accumulation"]));
    }
    if (m.find("EventAffiliation") != m.end() && !m["EventAffiliation"].empty()) {
      eventAffiliation = make_shared<string>(boost::any_cast<string>(m["EventAffiliation"]));
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<string>(boost::any_cast<string>(m["EventLevel"]));
    }
    if (m.find("EventStatus") != m.end() && !m["EventStatus"].empty()) {
      eventStatus = make_shared<string>(boost::any_cast<string>(m["EventStatus"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("EventUuid") != m.end() && !m["EventUuid"].empty()) {
      eventUuid = make_shared<string>(boost::any_cast<string>(m["EventUuid"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtHandle") != m.end() && !m["GmtHandle"].empty()) {
      gmtHandle = make_shared<long>(boost::any_cast<long>(m["GmtHandle"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("HandleType") != m.end() && !m["HandleType"].empty()) {
      handleType = make_shared<string>(boost::any_cast<string>(m["HandleType"]));
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyPrivateIp") != m.end() && !m["PropertyPrivateIp"].empty()) {
      propertyPrivateIp = make_shared<string>(boost::any_cast<string>(m["PropertyPrivateIp"]));
    }
    if (m.find("PropertyPublicIp") != m.end() && !m["PropertyPublicIp"].empty()) {
      propertyPublicIp = make_shared<string>(boost::any_cast<string>(m["PropertyPublicIp"]));
    }
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
    if (m.find("Suspect") != m.end() && !m["Suspect"].empty()) {
      suspect = make_shared<string>(boost::any_cast<string>(m["Suspect"]));
    }
    if (m.find("SuspectSig") != m.end() && !m["SuspectSig"].empty()) {
      suspectSig = make_shared<string>(boost::any_cast<string>(m["SuspectSig"]));
    }
    if (m.find("SuspectWhiteList") != m.end() && !m["SuspectWhiteList"].empty()) {
      suspectWhiteList = make_shared<string>(boost::any_cast<string>(m["SuspectWhiteList"]));
    }
  }


  virtual ~DescribeEventsResponseBodyItems() = default;
};
class DescribeEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeEventsResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeEventsResponseBody() {}

  explicit DescribeEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeEventsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeEventsResponseBodyItems>>(expect1);
      }
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


  virtual ~DescribeEventsResponseBody() = default;
};
class DescribeEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventsResponseBody> body{};

  DescribeEventsResponse() {}

  explicit DescribeEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> propertyUuid{};

  DescribeInstanceRequest() {}

  explicit DescribeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
  }


  virtual ~DescribeInstanceRequest() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> extensions{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> gmtRecentReport{};
  shared_ptr<long> onlineStatus{};
  shared_ptr<long> programExceptionNum{};
  shared_ptr<string> programTrustDetail{};
  shared_ptr<long> programTrustStatus{};
  shared_ptr<long> programWhiteListId{};
  shared_ptr<string> programWhiteListName{};
  shared_ptr<long> propertyAffiliation{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyPrivateIp{};
  shared_ptr<string> propertyPublicIp{};
  shared_ptr<string> propertyUuid{};
  shared_ptr<string> requestId{};
  shared_ptr<long> systemExceptionNum{};
  shared_ptr<string> systemTrustDetail{};
  shared_ptr<long> systemTrustStatus{};
  shared_ptr<long> systemWhiteListId{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (gmtRecentReport) {
      res["GmtRecentReport"] = boost::any(*gmtRecentReport);
    }
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    if (programExceptionNum) {
      res["ProgramExceptionNum"] = boost::any(*programExceptionNum);
    }
    if (programTrustDetail) {
      res["ProgramTrustDetail"] = boost::any(*programTrustDetail);
    }
    if (programTrustStatus) {
      res["ProgramTrustStatus"] = boost::any(*programTrustStatus);
    }
    if (programWhiteListId) {
      res["ProgramWhiteListId"] = boost::any(*programWhiteListId);
    }
    if (programWhiteListName) {
      res["ProgramWhiteListName"] = boost::any(*programWhiteListName);
    }
    if (propertyAffiliation) {
      res["PropertyAffiliation"] = boost::any(*propertyAffiliation);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyPrivateIp) {
      res["PropertyPrivateIp"] = boost::any(*propertyPrivateIp);
    }
    if (propertyPublicIp) {
      res["PropertyPublicIp"] = boost::any(*propertyPublicIp);
    }
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (systemExceptionNum) {
      res["SystemExceptionNum"] = boost::any(*systemExceptionNum);
    }
    if (systemTrustDetail) {
      res["SystemTrustDetail"] = boost::any(*systemTrustDetail);
    }
    if (systemTrustStatus) {
      res["SystemTrustStatus"] = boost::any(*systemTrustStatus);
    }
    if (systemWhiteListId) {
      res["SystemWhiteListId"] = boost::any(*systemWhiteListId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      extensions = make_shared<string>(boost::any_cast<string>(m["Extensions"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("GmtRecentReport") != m.end() && !m["GmtRecentReport"].empty()) {
      gmtRecentReport = make_shared<long>(boost::any_cast<long>(m["GmtRecentReport"]));
    }
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<long>(boost::any_cast<long>(m["OnlineStatus"]));
    }
    if (m.find("ProgramExceptionNum") != m.end() && !m["ProgramExceptionNum"].empty()) {
      programExceptionNum = make_shared<long>(boost::any_cast<long>(m["ProgramExceptionNum"]));
    }
    if (m.find("ProgramTrustDetail") != m.end() && !m["ProgramTrustDetail"].empty()) {
      programTrustDetail = make_shared<string>(boost::any_cast<string>(m["ProgramTrustDetail"]));
    }
    if (m.find("ProgramTrustStatus") != m.end() && !m["ProgramTrustStatus"].empty()) {
      programTrustStatus = make_shared<long>(boost::any_cast<long>(m["ProgramTrustStatus"]));
    }
    if (m.find("ProgramWhiteListId") != m.end() && !m["ProgramWhiteListId"].empty()) {
      programWhiteListId = make_shared<long>(boost::any_cast<long>(m["ProgramWhiteListId"]));
    }
    if (m.find("ProgramWhiteListName") != m.end() && !m["ProgramWhiteListName"].empty()) {
      programWhiteListName = make_shared<string>(boost::any_cast<string>(m["ProgramWhiteListName"]));
    }
    if (m.find("PropertyAffiliation") != m.end() && !m["PropertyAffiliation"].empty()) {
      propertyAffiliation = make_shared<long>(boost::any_cast<long>(m["PropertyAffiliation"]));
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyPrivateIp") != m.end() && !m["PropertyPrivateIp"].empty()) {
      propertyPrivateIp = make_shared<string>(boost::any_cast<string>(m["PropertyPrivateIp"]));
    }
    if (m.find("PropertyPublicIp") != m.end() && !m["PropertyPublicIp"].empty()) {
      propertyPublicIp = make_shared<string>(boost::any_cast<string>(m["PropertyPublicIp"]));
    }
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SystemExceptionNum") != m.end() && !m["SystemExceptionNum"].empty()) {
      systemExceptionNum = make_shared<long>(boost::any_cast<long>(m["SystemExceptionNum"]));
    }
    if (m.find("SystemTrustDetail") != m.end() && !m["SystemTrustDetail"].empty()) {
      systemTrustDetail = make_shared<string>(boost::any_cast<string>(m["SystemTrustDetail"]));
    }
    if (m.find("SystemTrustStatus") != m.end() && !m["SystemTrustStatus"].empty()) {
      systemTrustStatus = make_shared<long>(boost::any_cast<long>(m["SystemTrustStatus"]));
    }
    if (m.find("SystemWhiteListId") != m.end() && !m["SystemWhiteListId"].empty()) {
      systemWhiteListId = make_shared<long>(boost::any_cast<long>(m["SystemWhiteListId"]));
    }
  }


  virtual ~DescribeInstanceResponseBody() = default;
};
class DescribeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceResponseBody> body{};

  DescribeInstanceResponse() {}

  explicit DescribeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class GenerateAikcertRequest : public Darabonba::Model {
public:
  shared_ptr<string> aikName{};
  shared_ptr<string> aikPub{};
  shared_ptr<string> ekCert{};
  shared_ptr<string> ekPub{};
  shared_ptr<string> nonceDigest{};
  shared_ptr<string> propertyUuid{};

  GenerateAikcertRequest() {}

  explicit GenerateAikcertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aikName) {
      res["AikName"] = boost::any(*aikName);
    }
    if (aikPub) {
      res["AikPub"] = boost::any(*aikPub);
    }
    if (ekCert) {
      res["EkCert"] = boost::any(*ekCert);
    }
    if (ekPub) {
      res["EkPub"] = boost::any(*ekPub);
    }
    if (nonceDigest) {
      res["NonceDigest"] = boost::any(*nonceDigest);
    }
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AikName") != m.end() && !m["AikName"].empty()) {
      aikName = make_shared<string>(boost::any_cast<string>(m["AikName"]));
    }
    if (m.find("AikPub") != m.end() && !m["AikPub"].empty()) {
      aikPub = make_shared<string>(boost::any_cast<string>(m["AikPub"]));
    }
    if (m.find("EkCert") != m.end() && !m["EkCert"].empty()) {
      ekCert = make_shared<string>(boost::any_cast<string>(m["EkCert"]));
    }
    if (m.find("EkPub") != m.end() && !m["EkPub"].empty()) {
      ekPub = make_shared<string>(boost::any_cast<string>(m["EkPub"]));
    }
    if (m.find("NonceDigest") != m.end() && !m["NonceDigest"].empty()) {
      nonceDigest = make_shared<string>(boost::any_cast<string>(m["NonceDigest"]));
    }
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
  }


  virtual ~GenerateAikcertRequest() = default;
};
class GenerateAikcertResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataCredentialBlob{};
  shared_ptr<string> keyCredentialBlob{};

  GenerateAikcertResponseBodyData() {}

  explicit GenerateAikcertResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCredentialBlob) {
      res["dataCredentialBlob"] = boost::any(*dataCredentialBlob);
    }
    if (keyCredentialBlob) {
      res["keyCredentialBlob"] = boost::any(*keyCredentialBlob);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataCredentialBlob") != m.end() && !m["dataCredentialBlob"].empty()) {
      dataCredentialBlob = make_shared<string>(boost::any_cast<string>(m["dataCredentialBlob"]));
    }
    if (m.find("keyCredentialBlob") != m.end() && !m["keyCredentialBlob"].empty()) {
      keyCredentialBlob = make_shared<string>(boost::any_cast<string>(m["keyCredentialBlob"]));
    }
  }


  virtual ~GenerateAikcertResponseBodyData() = default;
};
class GenerateAikcertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateAikcertResponseBodyData> data{};

  GenerateAikcertResponseBody() {}

  explicit GenerateAikcertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateAikcertResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateAikcertResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateAikcertResponseBody() = default;
};
class GenerateAikcertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateAikcertResponseBody> body{};

  GenerateAikcertResponse() {}

  explicit GenerateAikcertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAikcertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateAikcertResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateAikcertResponse() = default;
};
class GenerateNonceRequest : public Darabonba::Model {
public:
  shared_ptr<string> aikName{};
  shared_ptr<string> ekCert{};
  shared_ptr<string> ekPub{};
  shared_ptr<string> propertyUuid{};

  GenerateNonceRequest() {}

  explicit GenerateNonceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aikName) {
      res["AikName"] = boost::any(*aikName);
    }
    if (ekCert) {
      res["EkCert"] = boost::any(*ekCert);
    }
    if (ekPub) {
      res["EkPub"] = boost::any(*ekPub);
    }
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AikName") != m.end() && !m["AikName"].empty()) {
      aikName = make_shared<string>(boost::any_cast<string>(m["AikName"]));
    }
    if (m.find("EkCert") != m.end() && !m["EkCert"].empty()) {
      ekCert = make_shared<string>(boost::any_cast<string>(m["EkCert"]));
    }
    if (m.find("EkPub") != m.end() && !m["EkPub"].empty()) {
      ekPub = make_shared<string>(boost::any_cast<string>(m["EkPub"]));
    }
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
  }


  virtual ~GenerateNonceRequest() = default;
};
class GenerateNonceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> credentialBlob{};

  GenerateNonceResponseBodyData() {}

  explicit GenerateNonceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialBlob) {
      res["CredentialBlob"] = boost::any(*credentialBlob);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialBlob") != m.end() && !m["CredentialBlob"].empty()) {
      credentialBlob = make_shared<string>(boost::any_cast<string>(m["CredentialBlob"]));
    }
  }


  virtual ~GenerateNonceResponseBodyData() = default;
};
class GenerateNonceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateNonceResponseBodyData> data{};

  GenerateNonceResponseBody() {}

  explicit GenerateNonceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateNonceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateNonceResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateNonceResponseBody() = default;
};
class GenerateNonceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateNonceResponseBody> body{};

  GenerateNonceResponse() {}

  explicit GenerateNonceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateNonceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateNonceResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateNonceResponse() = default;
};
class IgnoreEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventUuids{};
  shared_ptr<long> handleStyle{};

  IgnoreEventsRequest() {}

  explicit IgnoreEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventUuids) {
      res["EventUuids"] = boost::any(*eventUuids);
    }
    if (handleStyle) {
      res["HandleStyle"] = boost::any(*handleStyle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventUuids") != m.end() && !m["EventUuids"].empty()) {
      eventUuids = make_shared<string>(boost::any_cast<string>(m["EventUuids"]));
    }
    if (m.find("HandleStyle") != m.end() && !m["HandleStyle"].empty()) {
      handleStyle = make_shared<long>(boost::any_cast<long>(m["HandleStyle"]));
    }
  }


  virtual ~IgnoreEventsRequest() = default;
};
class IgnoreEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  IgnoreEventsResponseBody() {}

  explicit IgnoreEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IgnoreEventsResponseBody() = default;
};
class IgnoreEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IgnoreEventsResponseBody> body{};

  IgnoreEventsResponse() {}

  explicit IgnoreEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IgnoreEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IgnoreEventsResponseBody>(model1);
      }
    }
  }


  virtual ~IgnoreEventsResponse() = default;
};
class ProduceAikcertRequest : public Darabonba::Model {
public:
  shared_ptr<string> aikName{};
  shared_ptr<string> certRequest{};
  shared_ptr<string> ekCert{};
  shared_ptr<string> ekPubKey{};
  shared_ptr<bool> includeCertChain{};

  ProduceAikcertRequest() {}

  explicit ProduceAikcertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aikName) {
      res["AikName"] = boost::any(*aikName);
    }
    if (certRequest) {
      res["CertRequest"] = boost::any(*certRequest);
    }
    if (ekCert) {
      res["EkCert"] = boost::any(*ekCert);
    }
    if (ekPubKey) {
      res["EkPubKey"] = boost::any(*ekPubKey);
    }
    if (includeCertChain) {
      res["IncludeCertChain"] = boost::any(*includeCertChain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AikName") != m.end() && !m["AikName"].empty()) {
      aikName = make_shared<string>(boost::any_cast<string>(m["AikName"]));
    }
    if (m.find("CertRequest") != m.end() && !m["CertRequest"].empty()) {
      certRequest = make_shared<string>(boost::any_cast<string>(m["CertRequest"]));
    }
    if (m.find("EkCert") != m.end() && !m["EkCert"].empty()) {
      ekCert = make_shared<string>(boost::any_cast<string>(m["EkCert"]));
    }
    if (m.find("EkPubKey") != m.end() && !m["EkPubKey"].empty()) {
      ekPubKey = make_shared<string>(boost::any_cast<string>(m["EkPubKey"]));
    }
    if (m.find("IncludeCertChain") != m.end() && !m["IncludeCertChain"].empty()) {
      includeCertChain = make_shared<bool>(boost::any_cast<bool>(m["IncludeCertChain"]));
    }
  }


  virtual ~ProduceAikcertRequest() = default;
};
class ProduceAikcertResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataCredentialBlob{};
  shared_ptr<string> keyCredentialBlob{};

  ProduceAikcertResponseBodyData() {}

  explicit ProduceAikcertResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCredentialBlob) {
      res["DataCredentialBlob"] = boost::any(*dataCredentialBlob);
    }
    if (keyCredentialBlob) {
      res["KeyCredentialBlob"] = boost::any(*keyCredentialBlob);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCredentialBlob") != m.end() && !m["DataCredentialBlob"].empty()) {
      dataCredentialBlob = make_shared<string>(boost::any_cast<string>(m["DataCredentialBlob"]));
    }
    if (m.find("KeyCredentialBlob") != m.end() && !m["KeyCredentialBlob"].empty()) {
      keyCredentialBlob = make_shared<string>(boost::any_cast<string>(m["KeyCredentialBlob"]));
    }
  }


  virtual ~ProduceAikcertResponseBodyData() = default;
};
class ProduceAikcertResponseBody : public Darabonba::Model {
public:
  shared_ptr<ProduceAikcertResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ProduceAikcertResponseBody() {}

  explicit ProduceAikcertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProduceAikcertResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ProduceAikcertResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ProduceAikcertResponseBody() = default;
};
class ProduceAikcertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProduceAikcertResponseBody> body{};

  ProduceAikcertResponse() {}

  explicit ProduceAikcertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProduceAikcertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProduceAikcertResponseBody>(model1);
      }
    }
  }


  virtual ~ProduceAikcertResponse() = default;
};
class PutMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileData{};
  shared_ptr<string> propertyUuid{};

  PutMessageRequest() {}

  explicit PutMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileData) {
      res["FileData"] = boost::any(*fileData);
    }
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileData") != m.end() && !m["FileData"].empty()) {
      fileData = make_shared<string>(boost::any_cast<string>(m["FileData"]));
    }
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
  }


  virtual ~PutMessageRequest() = default;
};
class PutMessageResponseBodyDataKmoduleVerificationResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> status{};

  PutMessageResponseBodyDataKmoduleVerificationResult() {}

  explicit PutMessageResponseBodyDataKmoduleVerificationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~PutMessageResponseBodyDataKmoduleVerificationResult() = default;
};
class PutMessageResponseBodyDataPolicyProcResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> procData{};

  PutMessageResponseBodyDataPolicyProcResult() {}

  explicit PutMessageResponseBodyDataPolicyProcResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (procData) {
      res["procData"] = boost::any(*procData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("procData") != m.end() && !m["procData"].empty()) {
      procData = make_shared<string>(boost::any_cast<string>(m["procData"]));
    }
  }


  virtual ~PutMessageResponseBodyDataPolicyProcResult() = default;
};
class PutMessageResponseBodyDataProgramVerificationResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> status{};

  PutMessageResponseBodyDataProgramVerificationResult() {}

  explicit PutMessageResponseBodyDataProgramVerificationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~PutMessageResponseBodyDataProgramVerificationResult() = default;
};
class PutMessageResponseBodyDataSystemVerificationResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> status{};

  PutMessageResponseBodyDataSystemVerificationResult() {}

  explicit PutMessageResponseBodyDataSystemVerificationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~PutMessageResponseBodyDataSystemVerificationResult() = default;
};
class PutMessageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<PutMessageResponseBodyDataKmoduleVerificationResult> kmoduleVerificationResult{};
  shared_ptr<long> nextClientIMAIndex{};
  shared_ptr<PutMessageResponseBodyDataPolicyProcResult> policyProcResult{};
  shared_ptr<PutMessageResponseBodyDataProgramVerificationResult> programVerificationResult{};
  shared_ptr<PutMessageResponseBodyDataSystemVerificationResult> systemVerificationResult{};

  PutMessageResponseBodyData() {}

  explicit PutMessageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kmoduleVerificationResult) {
      res["kmoduleVerificationResult"] = kmoduleVerificationResult ? boost::any(kmoduleVerificationResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nextClientIMAIndex) {
      res["nextClientIMAIndex"] = boost::any(*nextClientIMAIndex);
    }
    if (policyProcResult) {
      res["policyProcResult"] = policyProcResult ? boost::any(policyProcResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (programVerificationResult) {
      res["programVerificationResult"] = programVerificationResult ? boost::any(programVerificationResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemVerificationResult) {
      res["systemVerificationResult"] = systemVerificationResult ? boost::any(systemVerificationResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("kmoduleVerificationResult") != m.end() && !m["kmoduleVerificationResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["kmoduleVerificationResult"].type()) {
        PutMessageResponseBodyDataKmoduleVerificationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["kmoduleVerificationResult"]));
        kmoduleVerificationResult = make_shared<PutMessageResponseBodyDataKmoduleVerificationResult>(model1);
      }
    }
    if (m.find("nextClientIMAIndex") != m.end() && !m["nextClientIMAIndex"].empty()) {
      nextClientIMAIndex = make_shared<long>(boost::any_cast<long>(m["nextClientIMAIndex"]));
    }
    if (m.find("policyProcResult") != m.end() && !m["policyProcResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["policyProcResult"].type()) {
        PutMessageResponseBodyDataPolicyProcResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policyProcResult"]));
        policyProcResult = make_shared<PutMessageResponseBodyDataPolicyProcResult>(model1);
      }
    }
    if (m.find("programVerificationResult") != m.end() && !m["programVerificationResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["programVerificationResult"].type()) {
        PutMessageResponseBodyDataProgramVerificationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["programVerificationResult"]));
        programVerificationResult = make_shared<PutMessageResponseBodyDataProgramVerificationResult>(model1);
      }
    }
    if (m.find("systemVerificationResult") != m.end() && !m["systemVerificationResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["systemVerificationResult"].type()) {
        PutMessageResponseBodyDataSystemVerificationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["systemVerificationResult"]));
        systemVerificationResult = make_shared<PutMessageResponseBodyDataSystemVerificationResult>(model1);
      }
    }
  }


  virtual ~PutMessageResponseBodyData() = default;
};
class PutMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PutMessageResponseBodyData> data{};

  PutMessageResponseBody() {}

  explicit PutMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PutMessageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PutMessageResponseBodyData>(model1);
      }
    }
  }


  virtual ~PutMessageResponseBody() = default;
};
class PutMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutMessageResponseBody> body{};

  PutMessageResponse() {}

  explicit PutMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutMessageResponseBody>(model1);
      }
    }
  }


  virtual ~PutMessageResponse() = default;
};
class RegisterMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> extensions{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> propertyAffiliation{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyPrivateIp{};
  shared_ptr<string> propertyPublicIp{};
  shared_ptr<string> propertyUuid{};

  RegisterMessageRequest() {}

  explicit RegisterMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (propertyAffiliation) {
      res["PropertyAffiliation"] = boost::any(*propertyAffiliation);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyPrivateIp) {
      res["PropertyPrivateIp"] = boost::any(*propertyPrivateIp);
    }
    if (propertyPublicIp) {
      res["PropertyPublicIp"] = boost::any(*propertyPublicIp);
    }
    if (propertyUuid) {
      res["PropertyUuid"] = boost::any(*propertyUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      extensions = make_shared<string>(boost::any_cast<string>(m["Extensions"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("PropertyAffiliation") != m.end() && !m["PropertyAffiliation"].empty()) {
      propertyAffiliation = make_shared<long>(boost::any_cast<long>(m["PropertyAffiliation"]));
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyPrivateIp") != m.end() && !m["PropertyPrivateIp"].empty()) {
      propertyPrivateIp = make_shared<string>(boost::any_cast<string>(m["PropertyPrivateIp"]));
    }
    if (m.find("PropertyPublicIp") != m.end() && !m["PropertyPublicIp"].empty()) {
      propertyPublicIp = make_shared<string>(boost::any_cast<string>(m["PropertyPublicIp"]));
    }
    if (m.find("PropertyUuid") != m.end() && !m["PropertyUuid"].empty()) {
      propertyUuid = make_shared<string>(boost::any_cast<string>(m["PropertyUuid"]));
    }
  }


  virtual ~RegisterMessageRequest() = default;
};
class RegisterMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RegisterMessageResponseBody() {}

  explicit RegisterMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RegisterMessageResponseBody() = default;
};
class RegisterMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterMessageResponseBody> body{};

  RegisterMessageResponse() {}

  explicit RegisterMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterMessageResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterMessageResponse() = default;
};
class TrustEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventUuids{};
  shared_ptr<long> handleStyle{};

  TrustEventsRequest() {}

  explicit TrustEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventUuids) {
      res["EventUuids"] = boost::any(*eventUuids);
    }
    if (handleStyle) {
      res["HandleStyle"] = boost::any(*handleStyle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventUuids") != m.end() && !m["EventUuids"].empty()) {
      eventUuids = make_shared<string>(boost::any_cast<string>(m["EventUuids"]));
    }
    if (m.find("HandleStyle") != m.end() && !m["HandleStyle"].empty()) {
      handleStyle = make_shared<long>(boost::any_cast<long>(m["HandleStyle"]));
    }
  }


  virtual ~TrustEventsRequest() = default;
};
class TrustEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  TrustEventsResponseBody() {}

  explicit TrustEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TrustEventsResponseBody() = default;
};
class TrustEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TrustEventsResponseBody> body{};

  TrustEventsResponse() {}

  explicit TrustEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrustEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrustEventsResponseBody>(model1);
      }
    }
  }


  virtual ~TrustEventsResponse() = default;
};
class UnregisterMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> properties{};

  UnregisterMessageRequest() {}

  explicit UnregisterMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
  }


  virtual ~UnregisterMessageRequest() = default;
};
class UnregisterMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnregisterMessageResponseBody() {}

  explicit UnregisterMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnregisterMessageResponseBody() = default;
};
class UnregisterMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnregisterMessageResponseBody> body{};

  UnregisterMessageResponse() {}

  explicit UnregisterMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnregisterMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnregisterMessageResponseBody>(model1);
      }
    }
  }


  virtual ~UnregisterMessageResponse() = default;
};
class VerifyMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileData{};

  VerifyMessageRequest() {}

  explicit VerifyMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileData) {
      res["FileData"] = boost::any(*fileData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileData") != m.end() && !m["FileData"].empty()) {
      fileData = make_shared<string>(boost::any_cast<string>(m["FileData"]));
    }
  }


  virtual ~VerifyMessageRequest() = default;
};
class VerifyMessageResponseBodyDataImaVerificationResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> tcbObsolete{};
  shared_ptr<vector<string>> untrusted{};

  VerifyMessageResponseBodyDataImaVerificationResult() {}

  explicit VerifyMessageResponseBodyDataImaVerificationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tcbObsolete) {
      res["TcbObsolete"] = boost::any(*tcbObsolete);
    }
    if (untrusted) {
      res["Untrusted"] = boost::any(*untrusted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TcbObsolete") != m.end() && !m["TcbObsolete"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TcbObsolete"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TcbObsolete"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tcbObsolete = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Untrusted") != m.end() && !m["Untrusted"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Untrusted"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Untrusted"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      untrusted = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~VerifyMessageResponseBodyDataImaVerificationResult() = default;
};
class VerifyMessageResponseBodyDataPcrVerificationResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> tcbObsolete{};
  shared_ptr<vector<string>> untrusted{};

  VerifyMessageResponseBodyDataPcrVerificationResult() {}

  explicit VerifyMessageResponseBodyDataPcrVerificationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tcbObsolete) {
      res["TcbObsolete"] = boost::any(*tcbObsolete);
    }
    if (untrusted) {
      res["Untrusted"] = boost::any(*untrusted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TcbObsolete") != m.end() && !m["TcbObsolete"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TcbObsolete"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TcbObsolete"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tcbObsolete = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Untrusted") != m.end() && !m["Untrusted"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Untrusted"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Untrusted"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      untrusted = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~VerifyMessageResponseBodyDataPcrVerificationResult() = default;
};
class VerifyMessageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<VerifyMessageResponseBodyDataImaVerificationResult> imaVerificationResult{};
  shared_ptr<VerifyMessageResponseBodyDataPcrVerificationResult> pcrVerificationResult{};

  VerifyMessageResponseBodyData() {}

  explicit VerifyMessageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imaVerificationResult) {
      res["ImaVerificationResult"] = imaVerificationResult ? boost::any(imaVerificationResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pcrVerificationResult) {
      res["PcrVerificationResult"] = pcrVerificationResult ? boost::any(pcrVerificationResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImaVerificationResult") != m.end() && !m["ImaVerificationResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImaVerificationResult"].type()) {
        VerifyMessageResponseBodyDataImaVerificationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImaVerificationResult"]));
        imaVerificationResult = make_shared<VerifyMessageResponseBodyDataImaVerificationResult>(model1);
      }
    }
    if (m.find("PcrVerificationResult") != m.end() && !m["PcrVerificationResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PcrVerificationResult"].type()) {
        VerifyMessageResponseBodyDataPcrVerificationResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PcrVerificationResult"]));
        pcrVerificationResult = make_shared<VerifyMessageResponseBodyDataPcrVerificationResult>(model1);
      }
    }
  }


  virtual ~VerifyMessageResponseBodyData() = default;
};
class VerifyMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<VerifyMessageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  VerifyMessageResponseBody() {}

  explicit VerifyMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyMessageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VerifyMessageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyMessageResponseBody() = default;
};
class VerifyMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyMessageResponseBody> body{};

  VerifyMessageResponse() {}

  explicit VerifyMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyMessageResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyMessageResponse() = default;
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
  DescribeBootResponse describeBootWithOptions(shared_ptr<DescribeBootRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBootResponse describeBoot(shared_ptr<DescribeBootRequest> request);
  DescribeEventsResponse describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventsResponse describeEvents(shared_ptr<DescribeEventsRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  GenerateAikcertResponse generateAikcertWithOptions(shared_ptr<GenerateAikcertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateAikcertResponse generateAikcert(shared_ptr<GenerateAikcertRequest> request);
  GenerateNonceResponse generateNonceWithOptions(shared_ptr<GenerateNonceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateNonceResponse generateNonce(shared_ptr<GenerateNonceRequest> request);
  IgnoreEventsResponse ignoreEventsWithOptions(shared_ptr<IgnoreEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IgnoreEventsResponse ignoreEvents(shared_ptr<IgnoreEventsRequest> request);
  ProduceAikcertResponse produceAikcertWithOptions(shared_ptr<ProduceAikcertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ProduceAikcertResponse produceAikcert(shared_ptr<ProduceAikcertRequest> request);
  PutMessageResponse putMessageWithOptions(shared_ptr<PutMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutMessageResponse putMessage(shared_ptr<PutMessageRequest> request);
  RegisterMessageResponse registerMessageWithOptions(shared_ptr<RegisterMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterMessageResponse registerMessage(shared_ptr<RegisterMessageRequest> request);
  TrustEventsResponse trustEventsWithOptions(shared_ptr<TrustEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrustEventsResponse trustEvents(shared_ptr<TrustEventsRequest> request);
  UnregisterMessageResponse unregisterMessageWithOptions(shared_ptr<UnregisterMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnregisterMessageResponse unregisterMessage(shared_ptr<UnregisterMessageRequest> request);
  VerifyMessageResponse verifyMessageWithOptions(shared_ptr<VerifyMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMessageResponse verifyMessage(shared_ptr<VerifyMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Trusted-server20200613

#endif
