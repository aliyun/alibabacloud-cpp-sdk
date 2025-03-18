// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SAS20210114_H_
#define ALIBABACLOUD_SAS20210114_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sas20210114 {
class CreateScreenSettingRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<bool> logoPower{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> monitorUrl{};
  shared_ptr<string> screenDataMap{};
  shared_ptr<long> screenDefault{};
  shared_ptr<string> title{};

  CreateScreenSettingRequest() {}

  explicit CreateScreenSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logoPower) {
      res["LogoPower"] = boost::any(*logoPower);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (monitorUrl) {
      res["MonitorUrl"] = boost::any(*monitorUrl);
    }
    if (screenDataMap) {
      res["ScreenDataMap"] = boost::any(*screenDataMap);
    }
    if (screenDefault) {
      res["ScreenDefault"] = boost::any(*screenDefault);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogoPower") != m.end() && !m["LogoPower"].empty()) {
      logoPower = make_shared<bool>(boost::any_cast<bool>(m["LogoPower"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("MonitorUrl") != m.end() && !m["MonitorUrl"].empty()) {
      monitorUrl = make_shared<string>(boost::any_cast<string>(m["MonitorUrl"]));
    }
    if (m.find("ScreenDataMap") != m.end() && !m["ScreenDataMap"].empty()) {
      screenDataMap = make_shared<string>(boost::any_cast<string>(m["ScreenDataMap"]));
    }
    if (m.find("ScreenDefault") != m.end() && !m["ScreenDefault"].empty()) {
      screenDefault = make_shared<long>(boost::any_cast<long>(m["ScreenDefault"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateScreenSettingRequest() = default;
};
class CreateScreenSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateScreenSettingResponseBody() {}

  explicit CreateScreenSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateScreenSettingResponseBody() = default;
};
class CreateScreenSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScreenSettingResponseBody> body{};

  CreateScreenSettingResponse() {}

  explicit CreateScreenSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScreenSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScreenSettingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScreenSettingResponse() = default;
};
class DeleteScreenSettingRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  DeleteScreenSettingRequest() {}

  explicit DeleteScreenSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteScreenSettingRequest() = default;
};
class DeleteScreenSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScreenSettingResponseBody() {}

  explicit DeleteScreenSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScreenSettingResponseBody() = default;
};
class DeleteScreenSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScreenSettingResponseBody> body{};

  DeleteScreenSettingResponse() {}

  explicit DeleteScreenSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScreenSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScreenSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScreenSettingResponse() = default;
};
class DescribeScreenAlarmEventListRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmEventName{};
  shared_ptr<string> alarmEventType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> dealed{};
  shared_ptr<string> from{};
  shared_ptr<string> lang{};
  shared_ptr<string> levels{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> remark{};
  shared_ptr<string> timeEnd{};
  shared_ptr<string> timeStart{};

  DescribeScreenAlarmEventListRequest() {}

  explicit DescribeScreenAlarmEventListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmEventName) {
      res["AlarmEventName"] = boost::any(*alarmEventName);
    }
    if (alarmEventType) {
      res["AlarmEventType"] = boost::any(*alarmEventType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (levels) {
      res["Levels"] = boost::any(*levels);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (timeEnd) {
      res["TimeEnd"] = boost::any(*timeEnd);
    }
    if (timeStart) {
      res["TimeStart"] = boost::any(*timeStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmEventName") != m.end() && !m["AlarmEventName"].empty()) {
      alarmEventName = make_shared<string>(boost::any_cast<string>(m["AlarmEventName"]));
    }
    if (m.find("AlarmEventType") != m.end() && !m["AlarmEventType"].empty()) {
      alarmEventType = make_shared<string>(boost::any_cast<string>(m["AlarmEventType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<string>(boost::any_cast<string>(m["Dealed"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Levels") != m.end() && !m["Levels"].empty()) {
      levels = make_shared<string>(boost::any_cast<string>(m["Levels"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("TimeEnd") != m.end() && !m["TimeEnd"].empty()) {
      timeEnd = make_shared<string>(boost::any_cast<string>(m["TimeEnd"]));
    }
    if (m.find("TimeStart") != m.end() && !m["TimeStart"].empty()) {
      timeStart = make_shared<string>(boost::any_cast<string>(m["TimeStart"]));
    }
  }


  virtual ~DescribeScreenAlarmEventListRequest() = default;
};
class DescribeScreenAlarmEventListResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeScreenAlarmEventListResponseBodyPageInfo() {}

  explicit DescribeScreenAlarmEventListResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeScreenAlarmEventListResponseBodyPageInfo() = default;
};
class DescribeScreenAlarmEventListResponseBodySuspEvents : public Darabonba::Model {
public:
  shared_ptr<string> alarmEventName{};
  shared_ptr<string> alarmEventType{};
  shared_ptr<string> alarmUniqueInfo{};
  shared_ptr<bool> canBeDealOnLine{};
  shared_ptr<bool> canCancelFault{};
  shared_ptr<string> dataSource{};
  shared_ptr<bool> dealed{};
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> level{};
  shared_ptr<string> saleVersion{};
  shared_ptr<string> solution{};
  shared_ptr<long> startTime{};
  shared_ptr<long> suspiciousEventCount{};
  shared_ptr<string> uuid{};

  DescribeScreenAlarmEventListResponseBodySuspEvents() {}

  explicit DescribeScreenAlarmEventListResponseBodySuspEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmEventName) {
      res["AlarmEventName"] = boost::any(*alarmEventName);
    }
    if (alarmEventType) {
      res["AlarmEventType"] = boost::any(*alarmEventType);
    }
    if (alarmUniqueInfo) {
      res["AlarmUniqueInfo"] = boost::any(*alarmUniqueInfo);
    }
    if (canBeDealOnLine) {
      res["CanBeDealOnLine"] = boost::any(*canBeDealOnLine);
    }
    if (canCancelFault) {
      res["CanCancelFault"] = boost::any(*canCancelFault);
    }
    if (dataSource) {
      res["DataSource"] = boost::any(*dataSource);
    }
    if (dealed) {
      res["Dealed"] = boost::any(*dealed);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (saleVersion) {
      res["SaleVersion"] = boost::any(*saleVersion);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (suspiciousEventCount) {
      res["SuspiciousEventCount"] = boost::any(*suspiciousEventCount);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmEventName") != m.end() && !m["AlarmEventName"].empty()) {
      alarmEventName = make_shared<string>(boost::any_cast<string>(m["AlarmEventName"]));
    }
    if (m.find("AlarmEventType") != m.end() && !m["AlarmEventType"].empty()) {
      alarmEventType = make_shared<string>(boost::any_cast<string>(m["AlarmEventType"]));
    }
    if (m.find("AlarmUniqueInfo") != m.end() && !m["AlarmUniqueInfo"].empty()) {
      alarmUniqueInfo = make_shared<string>(boost::any_cast<string>(m["AlarmUniqueInfo"]));
    }
    if (m.find("CanBeDealOnLine") != m.end() && !m["CanBeDealOnLine"].empty()) {
      canBeDealOnLine = make_shared<bool>(boost::any_cast<bool>(m["CanBeDealOnLine"]));
    }
    if (m.find("CanCancelFault") != m.end() && !m["CanCancelFault"].empty()) {
      canCancelFault = make_shared<bool>(boost::any_cast<bool>(m["CanCancelFault"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["DataSource"]));
    }
    if (m.find("Dealed") != m.end() && !m["Dealed"].empty()) {
      dealed = make_shared<bool>(boost::any_cast<bool>(m["Dealed"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("SaleVersion") != m.end() && !m["SaleVersion"].empty()) {
      saleVersion = make_shared<string>(boost::any_cast<string>(m["SaleVersion"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("SuspiciousEventCount") != m.end() && !m["SuspiciousEventCount"].empty()) {
      suspiciousEventCount = make_shared<long>(boost::any_cast<long>(m["SuspiciousEventCount"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~DescribeScreenAlarmEventListResponseBodySuspEvents() = default;
};
class DescribeScreenAlarmEventListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScreenAlarmEventListResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeScreenAlarmEventListResponseBodySuspEvents>> suspEvents{};

  DescribeScreenAlarmEventListResponseBody() {}

  explicit DescribeScreenAlarmEventListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (suspEvents) {
      vector<boost::any> temp1;
      for(auto item1:*suspEvents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuspEvents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        DescribeScreenAlarmEventListResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<DescribeScreenAlarmEventListResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuspEvents") != m.end() && !m["SuspEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["SuspEvents"].type()) {
        vector<DescribeScreenAlarmEventListResponseBodySuspEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuspEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScreenAlarmEventListResponseBodySuspEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        suspEvents = make_shared<vector<DescribeScreenAlarmEventListResponseBodySuspEvents>>(expect1);
      }
    }
  }


  virtual ~DescribeScreenAlarmEventListResponseBody() = default;
};
class DescribeScreenAlarmEventListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenAlarmEventListResponseBody> body{};

  DescribeScreenAlarmEventListResponse() {}

  explicit DescribeScreenAlarmEventListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenAlarmEventListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenAlarmEventListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenAlarmEventListResponse() = default;
};
class DescribeScreenAttackAnalysisDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> base64{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> data{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};

  DescribeScreenAttackAnalysisDataRequest() {}

  explicit DescribeScreenAttackAnalysisDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (base64) {
      res["Base64"] = boost::any(*base64);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Base64") != m.end() && !m["Base64"].empty()) {
      base64 = make_shared<string>(boost::any_cast<string>(m["Base64"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeScreenAttackAnalysisDataRequest() = default;
};
class DescribeScreenAttackAnalysisDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeScreenAttackAnalysisDataResponseBody() {}

  explicit DescribeScreenAttackAnalysisDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeScreenAttackAnalysisDataResponseBody() = default;
};
class DescribeScreenAttackAnalysisDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenAttackAnalysisDataResponseBody> body{};

  DescribeScreenAttackAnalysisDataResponse() {}

  explicit DescribeScreenAttackAnalysisDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenAttackAnalysisDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenAttackAnalysisDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenAttackAnalysisDataResponse() = default;
};
class DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems : public Darabonba::Model {
public:
  shared_ptr<long> affectCount{};
  shared_ptr<string> checkItem{};
  shared_ptr<string> level{};
  shared_ptr<bool> pass{};

  DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems() {}

  explicit DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectCount) {
      res["AffectCount"] = boost::any(*affectCount);
    }
    if (checkItem) {
      res["CheckItem"] = boost::any(*checkItem);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pass) {
      res["Pass"] = boost::any(*pass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectCount") != m.end() && !m["AffectCount"].empty()) {
      affectCount = make_shared<long>(boost::any_cast<long>(m["AffectCount"]));
    }
    if (m.find("CheckItem") != m.end() && !m["CheckItem"].empty()) {
      checkItem = make_shared<string>(boost::any_cast<string>(m["CheckItem"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Pass") != m.end() && !m["Pass"].empty()) {
      pass = make_shared<bool>(boost::any_cast<bool>(m["Pass"]));
    }
  }


  virtual ~DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems() = default;
};
class DescribeScreenCloudHcRiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems>> cloudHcRiskItems{};
  shared_ptr<string> requestId{};

  DescribeScreenCloudHcRiskResponseBody() {}

  explicit DescribeScreenCloudHcRiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudHcRiskItems) {
      vector<boost::any> temp1;
      for(auto item1:*cloudHcRiskItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudHcRiskItems"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudHcRiskItems") != m.end() && !m["CloudHcRiskItems"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudHcRiskItems"].type()) {
        vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudHcRiskItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudHcRiskItems = make_shared<vector<DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScreenCloudHcRiskResponseBody() = default;
};
class DescribeScreenCloudHcRiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenCloudHcRiskResponseBody> body{};

  DescribeScreenCloudHcRiskResponse() {}

  explicit DescribeScreenCloudHcRiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenCloudHcRiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenCloudHcRiskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenCloudHcRiskResponse() = default;
};
class DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate : public Darabonba::Model {
public:
  shared_ptr<string> unit{};
  shared_ptr<string> value{};

  DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate() {}

  explicit DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate() = default;
};
class DescribeScreenDataMapResponseBodySasScreenTypeListTypeData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate>> date{};
  shared_ptr<string> id{};
  shared_ptr<string> title{};

  DescribeScreenDataMapResponseBodySasScreenTypeListTypeData() {}

  explicit DescribeScreenDataMapResponseBodySasScreenTypeListTypeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (date) {
      vector<boost::any> temp1;
      for(auto item1:*date){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Date"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      if (typeid(vector<boost::any>) == m["Date"].type()) {
        vector<DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Date"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        date = make_shared<vector<DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeScreenDataMapResponseBodySasScreenTypeListTypeData() = default;
};
class DescribeScreenDataMapResponseBodySasScreenTypeList : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> typeCode{};
  shared_ptr<vector<DescribeScreenDataMapResponseBodySasScreenTypeListTypeData>> typeData{};

  DescribeScreenDataMapResponseBodySasScreenTypeList() {}

  explicit DescribeScreenDataMapResponseBodySasScreenTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (typeCode) {
      res["TypeCode"] = boost::any(*typeCode);
    }
    if (typeData) {
      vector<boost::any> temp1;
      for(auto item1:*typeData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypeData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("TypeCode") != m.end() && !m["TypeCode"].empty()) {
      typeCode = make_shared<string>(boost::any_cast<string>(m["TypeCode"]));
    }
    if (m.find("TypeData") != m.end() && !m["TypeData"].empty()) {
      if (typeid(vector<boost::any>) == m["TypeData"].type()) {
        vector<DescribeScreenDataMapResponseBodySasScreenTypeListTypeData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypeData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScreenDataMapResponseBodySasScreenTypeListTypeData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typeData = make_shared<vector<DescribeScreenDataMapResponseBodySasScreenTypeListTypeData>>(expect1);
      }
    }
  }


  virtual ~DescribeScreenDataMapResponseBodySasScreenTypeList() = default;
};
class DescribeScreenDataMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeScreenDataMapResponseBodySasScreenTypeList>> sasScreenTypeList{};

  DescribeScreenDataMapResponseBody() {}

  explicit DescribeScreenDataMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sasScreenTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*sasScreenTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SasScreenTypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SasScreenTypeList") != m.end() && !m["SasScreenTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["SasScreenTypeList"].type()) {
        vector<DescribeScreenDataMapResponseBodySasScreenTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SasScreenTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScreenDataMapResponseBodySasScreenTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sasScreenTypeList = make_shared<vector<DescribeScreenDataMapResponseBodySasScreenTypeList>>(expect1);
      }
    }
  }


  virtual ~DescribeScreenDataMapResponseBody() = default;
};
class DescribeScreenDataMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenDataMapResponseBody> body{};

  DescribeScreenDataMapResponse() {}

  explicit DescribeScreenDataMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenDataMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenDataMapResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenDataMapResponse() = default;
};
class DescribeScreenEmerRiskResponseBodyCloudHcRiskItems : public Darabonba::Model {
public:
  shared_ptr<long> affectCount{};
  shared_ptr<string> level{};
  shared_ptr<string> vulName{};

  DescribeScreenEmerRiskResponseBodyCloudHcRiskItems() {}

  explicit DescribeScreenEmerRiskResponseBodyCloudHcRiskItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectCount) {
      res["AffectCount"] = boost::any(*affectCount);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (vulName) {
      res["VulName"] = boost::any(*vulName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectCount") != m.end() && !m["AffectCount"].empty()) {
      affectCount = make_shared<long>(boost::any_cast<long>(m["AffectCount"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("VulName") != m.end() && !m["VulName"].empty()) {
      vulName = make_shared<string>(boost::any_cast<string>(m["VulName"]));
    }
  }


  virtual ~DescribeScreenEmerRiskResponseBodyCloudHcRiskItems() = default;
};
class DescribeScreenEmerRiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScreenEmerRiskResponseBodyCloudHcRiskItems>> cloudHcRiskItems{};
  shared_ptr<string> requestId{};

  DescribeScreenEmerRiskResponseBody() {}

  explicit DescribeScreenEmerRiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudHcRiskItems) {
      vector<boost::any> temp1;
      for(auto item1:*cloudHcRiskItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudHcRiskItems"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudHcRiskItems") != m.end() && !m["CloudHcRiskItems"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudHcRiskItems"].type()) {
        vector<DescribeScreenEmerRiskResponseBodyCloudHcRiskItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudHcRiskItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScreenEmerRiskResponseBodyCloudHcRiskItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudHcRiskItems = make_shared<vector<DescribeScreenEmerRiskResponseBodyCloudHcRiskItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScreenEmerRiskResponseBody() = default;
};
class DescribeScreenEmerRiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenEmerRiskResponseBody> body{};

  DescribeScreenEmerRiskResponse() {}

  explicit DescribeScreenEmerRiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenEmerRiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenEmerRiskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenEmerRiskResponse() = default;
};
class DescribeScreenHostStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> safeCount{};
  shared_ptr<vector<string>> suspEventMachineNames{};
  shared_ptr<vector<string>> suspEventUuids{};
  shared_ptr<vector<string>> weaknessMachineNames{};
  shared_ptr<vector<string>> weaknessUuids{};

  DescribeScreenHostStatisticsResponseBodyData() {}

  explicit DescribeScreenHostStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (safeCount) {
      res["SafeCount"] = boost::any(*safeCount);
    }
    if (suspEventMachineNames) {
      res["SuspEventMachineNames"] = boost::any(*suspEventMachineNames);
    }
    if (suspEventUuids) {
      res["SuspEventUuids"] = boost::any(*suspEventUuids);
    }
    if (weaknessMachineNames) {
      res["WeaknessMachineNames"] = boost::any(*weaknessMachineNames);
    }
    if (weaknessUuids) {
      res["WeaknessUuids"] = boost::any(*weaknessUuids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SafeCount") != m.end() && !m["SafeCount"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SafeCount"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SafeCount"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      safeCount = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuspEventMachineNames") != m.end() && !m["SuspEventMachineNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SuspEventMachineNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SuspEventMachineNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      suspEventMachineNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuspEventUuids") != m.end() && !m["SuspEventUuids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SuspEventUuids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SuspEventUuids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      suspEventUuids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WeaknessMachineNames") != m.end() && !m["WeaknessMachineNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WeaknessMachineNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WeaknessMachineNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      weaknessMachineNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WeaknessUuids") != m.end() && !m["WeaknessUuids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WeaknessUuids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WeaknessUuids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      weaknessUuids = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScreenHostStatisticsResponseBodyData() = default;
};
class DescribeScreenHostStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScreenHostStatisticsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeScreenHostStatisticsResponseBody() {}

  explicit DescribeScreenHostStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenHostStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeScreenHostStatisticsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScreenHostStatisticsResponseBody() = default;
};
class DescribeScreenHostStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenHostStatisticsResponseBody> body{};

  DescribeScreenHostStatisticsResponse() {}

  explicit DescribeScreenHostStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenHostStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenHostStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenHostStatisticsResponse() = default;
};
class DescribeScreenOperateInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> startTime{};

  DescribeScreenOperateInfoRequest() {}

  explicit DescribeScreenOperateInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeScreenOperateInfoRequest() = default;
};
class DescribeScreenOperateInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dateArray{};
  shared_ptr<long> healthCheckDealedCount{};
  shared_ptr<vector<string>> healthCheckValueArray{};
  shared_ptr<string> requestId{};
  shared_ptr<long> securityEventDealedCount{};
  shared_ptr<vector<string>> suspEventValueArray{};
  shared_ptr<vector<string>> vulValueArray{};
  shared_ptr<long> vulnerabilityDealedCount{};

  DescribeScreenOperateInfoResponseBody() {}

  explicit DescribeScreenOperateInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateArray) {
      res["DateArray"] = boost::any(*dateArray);
    }
    if (healthCheckDealedCount) {
      res["HealthCheckDealedCount"] = boost::any(*healthCheckDealedCount);
    }
    if (healthCheckValueArray) {
      res["HealthCheckValueArray"] = boost::any(*healthCheckValueArray);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityEventDealedCount) {
      res["SecurityEventDealedCount"] = boost::any(*securityEventDealedCount);
    }
    if (suspEventValueArray) {
      res["SuspEventValueArray"] = boost::any(*suspEventValueArray);
    }
    if (vulValueArray) {
      res["VulValueArray"] = boost::any(*vulValueArray);
    }
    if (vulnerabilityDealedCount) {
      res["VulnerabilityDealedCount"] = boost::any(*vulnerabilityDealedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateArray") != m.end() && !m["DateArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DateArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DateArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dateArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckDealedCount") != m.end() && !m["HealthCheckDealedCount"].empty()) {
      healthCheckDealedCount = make_shared<long>(boost::any_cast<long>(m["HealthCheckDealedCount"]));
    }
    if (m.find("HealthCheckValueArray") != m.end() && !m["HealthCheckValueArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckValueArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckValueArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckValueArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityEventDealedCount") != m.end() && !m["SecurityEventDealedCount"].empty()) {
      securityEventDealedCount = make_shared<long>(boost::any_cast<long>(m["SecurityEventDealedCount"]));
    }
    if (m.find("SuspEventValueArray") != m.end() && !m["SuspEventValueArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SuspEventValueArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SuspEventValueArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      suspEventValueArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VulValueArray") != m.end() && !m["VulValueArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VulValueArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VulValueArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vulValueArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VulnerabilityDealedCount") != m.end() && !m["VulnerabilityDealedCount"].empty()) {
      vulnerabilityDealedCount = make_shared<long>(boost::any_cast<long>(m["VulnerabilityDealedCount"]));
    }
  }


  virtual ~DescribeScreenOperateInfoResponseBody() = default;
};
class DescribeScreenOperateInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenOperateInfoResponseBody> body{};

  DescribeScreenOperateInfoResponse() {}

  explicit DescribeScreenOperateInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenOperateInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenOperateInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenOperateInfoResponse() = default;
};
class DescribeScreenOssUploadInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<long> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> key{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> signature{};

  DescribeScreenOssUploadInfoResponseBody() {}

  explicit DescribeScreenOssUploadInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~DescribeScreenOssUploadInfoResponseBody() = default;
};
class DescribeScreenOssUploadInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenOssUploadInfoResponseBody> body{};

  DescribeScreenOssUploadInfoResponse() {}

  explicit DescribeScreenOssUploadInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenOssUploadInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenOssUploadInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenOssUploadInfoResponse() = default;
};
class DescribeScreenScoreThreadRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  DescribeScreenScoreThreadRequest() {}

  explicit DescribeScreenScoreThreadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeScreenScoreThreadRequest() = default;
};
class DescribeScreenScoreThreadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> socreThread{};
  shared_ptr<vector<string>> socreThreadDate{};

  DescribeScreenScoreThreadResponseBodyData() {}

  explicit DescribeScreenScoreThreadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (socreThread) {
      res["SocreThread"] = boost::any(*socreThread);
    }
    if (socreThreadDate) {
      res["SocreThreadDate"] = boost::any(*socreThreadDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SocreThread") != m.end() && !m["SocreThread"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SocreThread"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SocreThread"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      socreThread = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SocreThreadDate") != m.end() && !m["SocreThreadDate"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SocreThreadDate"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SocreThreadDate"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      socreThreadDate = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScreenScoreThreadResponseBodyData() = default;
};
class DescribeScreenScoreThreadResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScreenScoreThreadResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeScreenScoreThreadResponseBody() {}

  explicit DescribeScreenScoreThreadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenScoreThreadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeScreenScoreThreadResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScreenScoreThreadResponseBody() = default;
};
class DescribeScreenScoreThreadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenScoreThreadResponseBody> body{};

  DescribeScreenScoreThreadResponse() {}

  explicit DescribeScreenScoreThreadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenScoreThreadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenScoreThreadResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenScoreThreadResponse() = default;
};
class DescribeScreenSecurityStatInfoResponseBodyAttackEvent : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dateArray{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> valueArray{};

  DescribeScreenSecurityStatInfoResponseBodyAttackEvent() {}

  explicit DescribeScreenSecurityStatInfoResponseBodyAttackEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateArray) {
      res["DateArray"] = boost::any(*dateArray);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (valueArray) {
      res["ValueArray"] = boost::any(*valueArray);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateArray") != m.end() && !m["DateArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DateArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DateArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dateArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ValueArray") != m.end() && !m["ValueArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValueArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValueArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      valueArray = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScreenSecurityStatInfoResponseBodyAttackEvent() = default;
};
class DescribeScreenSecurityStatInfoResponseBodyHealthCheck : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dateArray{};
  shared_ptr<long> highCount{};
  shared_ptr<vector<string>> highList{};
  shared_ptr<vector<string>> levelsOn{};
  shared_ptr<long> lowCount{};
  shared_ptr<vector<string>> lowList{};
  shared_ptr<long> mediumCount{};
  shared_ptr<vector<string>> mediumList{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> valueArray{};

  DescribeScreenSecurityStatInfoResponseBodyHealthCheck() {}

  explicit DescribeScreenSecurityStatInfoResponseBodyHealthCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateArray) {
      res["DateArray"] = boost::any(*dateArray);
    }
    if (highCount) {
      res["HighCount"] = boost::any(*highCount);
    }
    if (highList) {
      res["HighList"] = boost::any(*highList);
    }
    if (levelsOn) {
      res["LevelsOn"] = boost::any(*levelsOn);
    }
    if (lowCount) {
      res["LowCount"] = boost::any(*lowCount);
    }
    if (lowList) {
      res["LowList"] = boost::any(*lowList);
    }
    if (mediumCount) {
      res["MediumCount"] = boost::any(*mediumCount);
    }
    if (mediumList) {
      res["MediumList"] = boost::any(*mediumList);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (valueArray) {
      res["ValueArray"] = boost::any(*valueArray);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateArray") != m.end() && !m["DateArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DateArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DateArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dateArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HighCount") != m.end() && !m["HighCount"].empty()) {
      highCount = make_shared<long>(boost::any_cast<long>(m["HighCount"]));
    }
    if (m.find("HighList") != m.end() && !m["HighList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HighList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HighList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      highList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LevelsOn") != m.end() && !m["LevelsOn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LevelsOn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LevelsOn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      levelsOn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LowCount") != m.end() && !m["LowCount"].empty()) {
      lowCount = make_shared<long>(boost::any_cast<long>(m["LowCount"]));
    }
    if (m.find("LowList") != m.end() && !m["LowList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LowList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LowList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lowList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediumCount") != m.end() && !m["MediumCount"].empty()) {
      mediumCount = make_shared<long>(boost::any_cast<long>(m["MediumCount"]));
    }
    if (m.find("MediumList") != m.end() && !m["MediumList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MediumList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MediumList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mediumList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ValueArray") != m.end() && !m["ValueArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValueArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValueArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      valueArray = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScreenSecurityStatInfoResponseBodyHealthCheck() = default;
};
class DescribeScreenSecurityStatInfoResponseBodySecurityEvent : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dateArray{};
  shared_ptr<vector<string>> levelsOn{};
  shared_ptr<long> remindCount{};
  shared_ptr<vector<string>> remindList{};
  shared_ptr<long> seriousCount{};
  shared_ptr<vector<string>> seriousList{};
  shared_ptr<long> suspiciousCount{};
  shared_ptr<vector<string>> suspiciousList{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> valueArray{};

  DescribeScreenSecurityStatInfoResponseBodySecurityEvent() {}

  explicit DescribeScreenSecurityStatInfoResponseBodySecurityEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateArray) {
      res["DateArray"] = boost::any(*dateArray);
    }
    if (levelsOn) {
      res["LevelsOn"] = boost::any(*levelsOn);
    }
    if (remindCount) {
      res["RemindCount"] = boost::any(*remindCount);
    }
    if (remindList) {
      res["RemindList"] = boost::any(*remindList);
    }
    if (seriousCount) {
      res["SeriousCount"] = boost::any(*seriousCount);
    }
    if (seriousList) {
      res["SeriousList"] = boost::any(*seriousList);
    }
    if (suspiciousCount) {
      res["SuspiciousCount"] = boost::any(*suspiciousCount);
    }
    if (suspiciousList) {
      res["SuspiciousList"] = boost::any(*suspiciousList);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (valueArray) {
      res["ValueArray"] = boost::any(*valueArray);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateArray") != m.end() && !m["DateArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DateArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DateArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dateArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LevelsOn") != m.end() && !m["LevelsOn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LevelsOn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LevelsOn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      levelsOn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RemindCount") != m.end() && !m["RemindCount"].empty()) {
      remindCount = make_shared<long>(boost::any_cast<long>(m["RemindCount"]));
    }
    if (m.find("RemindList") != m.end() && !m["RemindList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemindList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemindList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      remindList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SeriousCount") != m.end() && !m["SeriousCount"].empty()) {
      seriousCount = make_shared<long>(boost::any_cast<long>(m["SeriousCount"]));
    }
    if (m.find("SeriousList") != m.end() && !m["SeriousList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SeriousList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SeriousList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      seriousList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuspiciousCount") != m.end() && !m["SuspiciousCount"].empty()) {
      suspiciousCount = make_shared<long>(boost::any_cast<long>(m["SuspiciousCount"]));
    }
    if (m.find("SuspiciousList") != m.end() && !m["SuspiciousList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SuspiciousList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SuspiciousList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      suspiciousList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ValueArray") != m.end() && !m["ValueArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValueArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValueArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      valueArray = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScreenSecurityStatInfoResponseBodySecurityEvent() = default;
};
class DescribeScreenSecurityStatInfoResponseBodyVulnerability : public Darabonba::Model {
public:
  shared_ptr<long> asapCount{};
  shared_ptr<vector<string>> asapList{};
  shared_ptr<vector<string>> dateArray{};
  shared_ptr<long> laterCount{};
  shared_ptr<vector<string>> laterList{};
  shared_ptr<vector<string>> levelsOn{};
  shared_ptr<long> nntfCount{};
  shared_ptr<vector<string>> nntfList{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> valueArray{};

  DescribeScreenSecurityStatInfoResponseBodyVulnerability() {}

  explicit DescribeScreenSecurityStatInfoResponseBodyVulnerability(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asapCount) {
      res["AsapCount"] = boost::any(*asapCount);
    }
    if (asapList) {
      res["AsapList"] = boost::any(*asapList);
    }
    if (dateArray) {
      res["DateArray"] = boost::any(*dateArray);
    }
    if (laterCount) {
      res["LaterCount"] = boost::any(*laterCount);
    }
    if (laterList) {
      res["LaterList"] = boost::any(*laterList);
    }
    if (levelsOn) {
      res["LevelsOn"] = boost::any(*levelsOn);
    }
    if (nntfCount) {
      res["NntfCount"] = boost::any(*nntfCount);
    }
    if (nntfList) {
      res["NntfList"] = boost::any(*nntfList);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (valueArray) {
      res["ValueArray"] = boost::any(*valueArray);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsapCount") != m.end() && !m["AsapCount"].empty()) {
      asapCount = make_shared<long>(boost::any_cast<long>(m["AsapCount"]));
    }
    if (m.find("AsapList") != m.end() && !m["AsapList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AsapList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AsapList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      asapList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DateArray") != m.end() && !m["DateArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DateArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DateArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dateArray = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LaterCount") != m.end() && !m["LaterCount"].empty()) {
      laterCount = make_shared<long>(boost::any_cast<long>(m["LaterCount"]));
    }
    if (m.find("LaterList") != m.end() && !m["LaterList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LaterList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LaterList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      laterList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LevelsOn") != m.end() && !m["LevelsOn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LevelsOn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LevelsOn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      levelsOn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NntfCount") != m.end() && !m["NntfCount"].empty()) {
      nntfCount = make_shared<long>(boost::any_cast<long>(m["NntfCount"]));
    }
    if (m.find("NntfList") != m.end() && !m["NntfList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NntfList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NntfList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nntfList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ValueArray") != m.end() && !m["ValueArray"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValueArray"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValueArray"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      valueArray = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScreenSecurityStatInfoResponseBodyVulnerability() = default;
};
class DescribeScreenSecurityStatInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScreenSecurityStatInfoResponseBodyAttackEvent> attackEvent{};
  shared_ptr<DescribeScreenSecurityStatInfoResponseBodyHealthCheck> healthCheck{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScreenSecurityStatInfoResponseBodySecurityEvent> securityEvent{};
  shared_ptr<DescribeScreenSecurityStatInfoResponseBodyVulnerability> vulnerability{};

  DescribeScreenSecurityStatInfoResponseBody() {}

  explicit DescribeScreenSecurityStatInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackEvent) {
      res["AttackEvent"] = attackEvent ? boost::any(attackEvent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (healthCheck) {
      res["HealthCheck"] = healthCheck ? boost::any(healthCheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityEvent) {
      res["SecurityEvent"] = securityEvent ? boost::any(securityEvent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vulnerability) {
      res["Vulnerability"] = vulnerability ? boost::any(vulnerability->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackEvent") != m.end() && !m["AttackEvent"].empty()) {
      if (typeid(map<string, boost::any>) == m["AttackEvent"].type()) {
        DescribeScreenSecurityStatInfoResponseBodyAttackEvent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AttackEvent"]));
        attackEvent = make_shared<DescribeScreenSecurityStatInfoResponseBodyAttackEvent>(model1);
      }
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheck"].type()) {
        DescribeScreenSecurityStatInfoResponseBodyHealthCheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheck"]));
        healthCheck = make_shared<DescribeScreenSecurityStatInfoResponseBodyHealthCheck>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityEvent") != m.end() && !m["SecurityEvent"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityEvent"].type()) {
        DescribeScreenSecurityStatInfoResponseBodySecurityEvent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityEvent"]));
        securityEvent = make_shared<DescribeScreenSecurityStatInfoResponseBodySecurityEvent>(model1);
      }
    }
    if (m.find("Vulnerability") != m.end() && !m["Vulnerability"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vulnerability"].type()) {
        DescribeScreenSecurityStatInfoResponseBodyVulnerability model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vulnerability"]));
        vulnerability = make_shared<DescribeScreenSecurityStatInfoResponseBodyVulnerability>(model1);
      }
    }
  }


  virtual ~DescribeScreenSecurityStatInfoResponseBody() = default;
};
class DescribeScreenSecurityStatInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenSecurityStatInfoResponseBody> body{};

  DescribeScreenSecurityStatInfoResponse() {}

  explicit DescribeScreenSecurityStatInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenSecurityStatInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenSecurityStatInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenSecurityStatInfoResponse() = default;
};
class DescribeScreenSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DescribeScreenSettingRequest() {}

  explicit DescribeScreenSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeScreenSettingRequest() = default;
};
class DescribeScreenSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> logoPower{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> monitorUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<string> screenDataMap{};
  shared_ptr<long> screenDefault{};
  shared_ptr<long> screenId{};
  shared_ptr<string> title{};

  DescribeScreenSettingResponseBody() {}

  explicit DescribeScreenSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logoPower) {
      res["LogoPower"] = boost::any(*logoPower);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (monitorUrl) {
      res["MonitorUrl"] = boost::any(*monitorUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (screenDataMap) {
      res["ScreenDataMap"] = boost::any(*screenDataMap);
    }
    if (screenDefault) {
      res["ScreenDefault"] = boost::any(*screenDefault);
    }
    if (screenId) {
      res["ScreenId"] = boost::any(*screenId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogoPower") != m.end() && !m["LogoPower"].empty()) {
      logoPower = make_shared<bool>(boost::any_cast<bool>(m["LogoPower"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("MonitorUrl") != m.end() && !m["MonitorUrl"].empty()) {
      monitorUrl = make_shared<string>(boost::any_cast<string>(m["MonitorUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScreenDataMap") != m.end() && !m["ScreenDataMap"].empty()) {
      screenDataMap = make_shared<string>(boost::any_cast<string>(m["ScreenDataMap"]));
    }
    if (m.find("ScreenDefault") != m.end() && !m["ScreenDefault"].empty()) {
      screenDefault = make_shared<long>(boost::any_cast<long>(m["ScreenDefault"]));
    }
    if (m.find("ScreenId") != m.end() && !m["ScreenId"].empty()) {
      screenId = make_shared<long>(boost::any_cast<long>(m["ScreenId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeScreenSettingResponseBody() = default;
};
class DescribeScreenSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenSettingResponseBody> body{};

  DescribeScreenSettingResponse() {}

  explicit DescribeScreenSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenSettingResponse() = default;
};
class DescribeScreenSummaryInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aegisClientOfflineCount{};
  shared_ptr<long> aegisClientOnlineCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> securityScore{};

  DescribeScreenSummaryInfoResponseBody() {}

  explicit DescribeScreenSummaryInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aegisClientOfflineCount) {
      res["AegisClientOfflineCount"] = boost::any(*aegisClientOfflineCount);
    }
    if (aegisClientOnlineCount) {
      res["AegisClientOnlineCount"] = boost::any(*aegisClientOnlineCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityScore) {
      res["SecurityScore"] = boost::any(*securityScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AegisClientOfflineCount") != m.end() && !m["AegisClientOfflineCount"].empty()) {
      aegisClientOfflineCount = make_shared<long>(boost::any_cast<long>(m["AegisClientOfflineCount"]));
    }
    if (m.find("AegisClientOnlineCount") != m.end() && !m["AegisClientOnlineCount"].empty()) {
      aegisClientOnlineCount = make_shared<long>(boost::any_cast<long>(m["AegisClientOnlineCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityScore") != m.end() && !m["SecurityScore"].empty()) {
      securityScore = make_shared<long>(boost::any_cast<long>(m["SecurityScore"]));
    }
  }


  virtual ~DescribeScreenSummaryInfoResponseBody() = default;
};
class DescribeScreenSummaryInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenSummaryInfoResponseBody> body{};

  DescribeScreenSummaryInfoResponse() {}

  explicit DescribeScreenSummaryInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenSummaryInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenSummaryInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenSummaryInfoResponse() = default;
};
class DescribeScreenTitlesResponseBodySasScreenSettingList : public Darabonba::Model {
public:
  shared_ptr<long> screenID{};
  shared_ptr<string> screenTitle{};

  DescribeScreenTitlesResponseBodySasScreenSettingList() {}

  explicit DescribeScreenTitlesResponseBodySasScreenSettingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (screenID) {
      res["ScreenID"] = boost::any(*screenID);
    }
    if (screenTitle) {
      res["ScreenTitle"] = boost::any(*screenTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScreenID") != m.end() && !m["ScreenID"].empty()) {
      screenID = make_shared<long>(boost::any_cast<long>(m["ScreenID"]));
    }
    if (m.find("ScreenTitle") != m.end() && !m["ScreenTitle"].empty()) {
      screenTitle = make_shared<string>(boost::any_cast<string>(m["ScreenTitle"]));
    }
  }


  virtual ~DescribeScreenTitlesResponseBodySasScreenSettingList() = default;
};
class DescribeScreenTitlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeScreenTitlesResponseBodySasScreenSettingList>> sasScreenSettingList{};

  DescribeScreenTitlesResponseBody() {}

  explicit DescribeScreenTitlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sasScreenSettingList) {
      vector<boost::any> temp1;
      for(auto item1:*sasScreenSettingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SasScreenSettingList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SasScreenSettingList") != m.end() && !m["SasScreenSettingList"].empty()) {
      if (typeid(vector<boost::any>) == m["SasScreenSettingList"].type()) {
        vector<DescribeScreenTitlesResponseBodySasScreenSettingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SasScreenSettingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScreenTitlesResponseBodySasScreenSettingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sasScreenSettingList = make_shared<vector<DescribeScreenTitlesResponseBodySasScreenSettingList>>(expect1);
      }
    }
  }


  virtual ~DescribeScreenTitlesResponseBody() = default;
};
class DescribeScreenTitlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenTitlesResponseBody> body{};

  DescribeScreenTitlesResponse() {}

  explicit DescribeScreenTitlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenTitlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenTitlesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenTitlesResponse() = default;
};
class DescribeScreenUploadPictureRequest : public Darabonba::Model {
public:
  shared_ptr<string> logoUrl{};

  DescribeScreenUploadPictureRequest() {}

  explicit DescribeScreenUploadPictureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
  }


  virtual ~DescribeScreenUploadPictureRequest() = default;
};
class DescribeScreenUploadPictureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> url{};

  DescribeScreenUploadPictureResponseBody() {}

  explicit DescribeScreenUploadPictureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeScreenUploadPictureResponseBody() = default;
};
class DescribeScreenUploadPictureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenUploadPictureResponseBody> body{};

  DescribeScreenUploadPictureResponse() {}

  explicit DescribeScreenUploadPictureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenUploadPictureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenUploadPictureResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenUploadPictureResponse() = default;
};
class DescribeScreenVersionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> assetLevel{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> isTrialVersion{};
  shared_ptr<long> releaseTime{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sasLog{};
  shared_ptr<long> sasScreen{};
  shared_ptr<long> version{};

  DescribeScreenVersionConfigResponseBody() {}

  explicit DescribeScreenVersionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assetLevel) {
      res["AssetLevel"] = boost::any(*assetLevel);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isTrialVersion) {
      res["IsTrialVersion"] = boost::any(*isTrialVersion);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sasLog) {
      res["SasLog"] = boost::any(*sasLog);
    }
    if (sasScreen) {
      res["SasScreen"] = boost::any(*sasScreen);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssetLevel") != m.end() && !m["AssetLevel"].empty()) {
      assetLevel = make_shared<long>(boost::any_cast<long>(m["AssetLevel"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsTrialVersion") != m.end() && !m["IsTrialVersion"].empty()) {
      isTrialVersion = make_shared<long>(boost::any_cast<long>(m["IsTrialVersion"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<long>(boost::any_cast<long>(m["ReleaseTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SasLog") != m.end() && !m["SasLog"].empty()) {
      sasLog = make_shared<long>(boost::any_cast<long>(m["SasLog"]));
    }
    if (m.find("SasScreen") != m.end() && !m["SasScreen"].empty()) {
      sasScreen = make_shared<long>(boost::any_cast<long>(m["SasScreen"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~DescribeScreenVersionConfigResponseBody() = default;
};
class DescribeScreenVersionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScreenVersionConfigResponseBody> body{};

  DescribeScreenVersionConfigResponse() {}

  explicit DescribeScreenVersionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScreenVersionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScreenVersionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScreenVersionConfigResponse() = default;
};
class GetFileDetectResultInnerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dnaHashKeyList{};
  shared_ptr<vector<string>> hashKeyList{};
  shared_ptr<long> level{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> type{};

  GetFileDetectResultInnerRequest() {}

  explicit GetFileDetectResultInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnaHashKeyList) {
      res["DnaHashKeyList"] = boost::any(*dnaHashKeyList);
    }
    if (hashKeyList) {
      res["HashKeyList"] = boost::any(*hashKeyList);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnaHashKeyList") != m.end() && !m["DnaHashKeyList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DnaHashKeyList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DnaHashKeyList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnaHashKeyList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HashKeyList") != m.end() && !m["HashKeyList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HashKeyList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HashKeyList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hashKeyList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~GetFileDetectResultInnerRequest() = default;
};
class GetFileDetectResultInnerResponseBodyResultList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> ext{};
  shared_ptr<string> hashKey{};
  shared_ptr<string> message{};
  shared_ptr<long> result{};
  shared_ptr<long> score{};
  shared_ptr<string> virusType{};

  GetFileDetectResultInnerResponseBodyResultList() {}

  explicit GetFileDetectResultInnerResponseBodyResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (hashKey) {
      res["HashKey"] = boost::any(*hashKey);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (virusType) {
      res["VirusType"] = boost::any(*virusType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("HashKey") != m.end() && !m["HashKey"].empty()) {
      hashKey = make_shared<string>(boost::any_cast<string>(m["HashKey"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("VirusType") != m.end() && !m["VirusType"].empty()) {
      virusType = make_shared<string>(boost::any_cast<string>(m["VirusType"]));
    }
  }


  virtual ~GetFileDetectResultInnerResponseBodyResultList() = default;
};
class GetFileDetectResultInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetFileDetectResultInnerResponseBodyResultList>> resultList{};

  GetFileDetectResultInnerResponseBody() {}

  explicit GetFileDetectResultInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultList) {
      vector<boost::any> temp1;
      for(auto item1:*resultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultList") != m.end() && !m["ResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultList"].type()) {
        vector<GetFileDetectResultInnerResponseBodyResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFileDetectResultInnerResponseBodyResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultList = make_shared<vector<GetFileDetectResultInnerResponseBodyResultList>>(expect1);
      }
    }
  }


  virtual ~GetFileDetectResultInnerResponseBody() = default;
};
class GetFileDetectResultInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileDetectResultInnerResponseBody> body{};

  GetFileDetectResultInnerResponse() {}

  explicit GetFileDetectResultInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileDetectResultInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileDetectResultInnerResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileDetectResultInnerResponse() = default;
};
class ListGlobalUserConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> moduleList{};

  ListGlobalUserConfigRequest() {}

  explicit ListGlobalUserConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleList) {
      res["ModuleList"] = boost::any(*moduleList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ModuleList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ModuleList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      moduleList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListGlobalUserConfigRequest() = default;
};
class ListGlobalUserConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> moduleListShrink{};

  ListGlobalUserConfigShrinkRequest() {}

  explicit ListGlobalUserConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleListShrink) {
      res["ModuleList"] = boost::any(*moduleListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      moduleListShrink = make_shared<string>(boost::any_cast<string>(m["ModuleList"]));
    }
  }


  virtual ~ListGlobalUserConfigShrinkRequest() = default;
};
class ListGlobalUserConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> globalConfigSwitch{};
  shared_ptr<string> moduleName{};

  ListGlobalUserConfigResponseBodyData() {}

  explicit ListGlobalUserConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (globalConfigSwitch) {
      res["GlobalConfigSwitch"] = boost::any(*globalConfigSwitch);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GlobalConfigSwitch") != m.end() && !m["GlobalConfigSwitch"].empty()) {
      globalConfigSwitch = make_shared<bool>(boost::any_cast<bool>(m["GlobalConfigSwitch"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~ListGlobalUserConfigResponseBodyData() = default;
};
class ListGlobalUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGlobalUserConfigResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListGlobalUserConfigResponseBody() {}

  explicit ListGlobalUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListGlobalUserConfigResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGlobalUserConfigResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListGlobalUserConfigResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGlobalUserConfigResponseBody() = default;
};
class ListGlobalUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGlobalUserConfigResponseBody> body{};

  ListGlobalUserConfigResponse() {}

  explicit ListGlobalUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGlobalUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGlobalUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListGlobalUserConfigResponse() = default;
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
  CreateScreenSettingResponse createScreenSettingWithOptions(shared_ptr<CreateScreenSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScreenSettingResponse createScreenSetting(shared_ptr<CreateScreenSettingRequest> request);
  DeleteScreenSettingResponse deleteScreenSettingWithOptions(shared_ptr<DeleteScreenSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScreenSettingResponse deleteScreenSetting(shared_ptr<DeleteScreenSettingRequest> request);
  DescribeScreenAlarmEventListResponse describeScreenAlarmEventListWithOptions(shared_ptr<DescribeScreenAlarmEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenAlarmEventListResponse describeScreenAlarmEventList(shared_ptr<DescribeScreenAlarmEventListRequest> request);
  DescribeScreenAttackAnalysisDataResponse describeScreenAttackAnalysisDataWithOptions(shared_ptr<DescribeScreenAttackAnalysisDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenAttackAnalysisDataResponse describeScreenAttackAnalysisData(shared_ptr<DescribeScreenAttackAnalysisDataRequest> request);
  DescribeScreenCloudHcRiskResponse describeScreenCloudHcRiskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenCloudHcRiskResponse describeScreenCloudHcRisk();
  DescribeScreenDataMapResponse describeScreenDataMapWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenDataMapResponse describeScreenDataMap();
  DescribeScreenEmerRiskResponse describeScreenEmerRiskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenEmerRiskResponse describeScreenEmerRisk();
  DescribeScreenHostStatisticsResponse describeScreenHostStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenHostStatisticsResponse describeScreenHostStatistics();
  DescribeScreenOperateInfoResponse describeScreenOperateInfoWithOptions(shared_ptr<DescribeScreenOperateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenOperateInfoResponse describeScreenOperateInfo(shared_ptr<DescribeScreenOperateInfoRequest> request);
  DescribeScreenOssUploadInfoResponse describeScreenOssUploadInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenOssUploadInfoResponse describeScreenOssUploadInfo();
  DescribeScreenScoreThreadResponse describeScreenScoreThreadWithOptions(shared_ptr<DescribeScreenScoreThreadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenScoreThreadResponse describeScreenScoreThread(shared_ptr<DescribeScreenScoreThreadRequest> request);
  DescribeScreenSecurityStatInfoResponse describeScreenSecurityStatInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenSecurityStatInfoResponse describeScreenSecurityStatInfo();
  DescribeScreenSettingResponse describeScreenSettingWithOptions(shared_ptr<DescribeScreenSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenSettingResponse describeScreenSetting(shared_ptr<DescribeScreenSettingRequest> request);
  DescribeScreenSummaryInfoResponse describeScreenSummaryInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenSummaryInfoResponse describeScreenSummaryInfo();
  DescribeScreenTitlesResponse describeScreenTitlesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenTitlesResponse describeScreenTitles();
  DescribeScreenUploadPictureResponse describeScreenUploadPictureWithOptions(shared_ptr<DescribeScreenUploadPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenUploadPictureResponse describeScreenUploadPicture(shared_ptr<DescribeScreenUploadPictureRequest> request);
  DescribeScreenVersionConfigResponse describeScreenVersionConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScreenVersionConfigResponse describeScreenVersionConfig();
  GetFileDetectResultInnerResponse getFileDetectResultInnerWithOptions(shared_ptr<GetFileDetectResultInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileDetectResultInnerResponse getFileDetectResultInner(shared_ptr<GetFileDetectResultInnerRequest> request);
  ListGlobalUserConfigResponse listGlobalUserConfigWithOptions(shared_ptr<ListGlobalUserConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGlobalUserConfigResponse listGlobalUserConfig(shared_ptr<ListGlobalUserConfigRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sas20210114

#endif
