// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_YUNDUN-DBAUDIT20181029_H_
#define ALIBABACLOUD_YUNDUN-DBAUDIT20181029_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Yundun-dbaudit20181029 {
class ClearInstanceStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storageSpace{};
  shared_ptr<string> storageCategory{};

  ClearInstanceStorageRequest() {}

  explicit ClearInstanceStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (storageSpace) {
      res["StorageSpace"] = boost::any(*storageSpace);
    }
    if (storageCategory) {
      res["StorageCategory"] = boost::any(*storageCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StorageSpace") != m.end() && !m["StorageSpace"].empty()) {
      storageSpace = make_shared<string>(boost::any_cast<string>(m["StorageSpace"]));
    }
    if (m.find("StorageCategory") != m.end() && !m["StorageCategory"].empty()) {
      storageCategory = make_shared<string>(boost::any_cast<string>(m["StorageCategory"]));
    }
  }


  virtual ~ClearInstanceStorageRequest() = default;
};
class ClearInstanceStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ClearInstanceStorageResponseBody() {}

  explicit ClearInstanceStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearInstanceStorageResponseBody() = default;
};
class ClearInstanceStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClearInstanceStorageResponseBody> body{};

  ClearInstanceStorageResponse() {}

  explicit ClearInstanceStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClearInstanceStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearInstanceStorageResponseBody>(model1);
      }
    }
  }


  virtual ~ClearInstanceStorageResponse() = default;
};
class ConfigInstanceWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ipVersion{};
  shared_ptr<vector<string>> whiteList{};

  ConfigInstanceWhiteListRequest() {}

  explicit ConfigInstanceWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigInstanceWhiteListRequest() = default;
};
class ConfigInstanceWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigInstanceWhiteListResponseBody() {}

  explicit ConfigInstanceWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigInstanceWhiteListResponseBody() = default;
};
class ConfigInstanceWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConfigInstanceWhiteListResponseBody> body{};

  ConfigInstanceWhiteListResponse() {}

  explicit ConfigInstanceWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigInstanceWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigInstanceWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigInstanceWhiteListResponse() = default;
};
class DescribeAuditLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sort{};
  shared_ptr<string> dir{};
  shared_ptr<string> dbId{};
  shared_ptr<string> queryString{};
  shared_ptr<string> payload{};
  shared_ptr<string> loginUser{};
  shared_ptr<string> opType{};
  shared_ptr<string> sip{};
  shared_ptr<string> dip{};
  shared_ptr<string> result{};
  shared_ptr<string> accessid{};
  shared_ptr<string> sessionid{};
  shared_ptr<string> sqlid{};
  shared_ptr<string> dbType{};
  shared_ptr<string> sport{};
  shared_ptr<string> dport{};
  shared_ptr<string> smac{};
  shared_ptr<string> dmac{};
  shared_ptr<string> dbName{};
  shared_ptr<string> clientPrg{};
  shared_ptr<string> hostName{};
  shared_ptr<string> clientUser{};
  shared_ptr<string> sqlLen{};
  shared_ptr<string> effectRow{};
  shared_ptr<string> cost{};
  shared_ptr<string> resultDesc{};
  shared_ptr<string> dataSet{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> alarmLevel{};

  DescribeAuditLogsRequest() {}

  explicit DescribeAuditLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (queryString) {
      res["QueryString"] = boost::any(*queryString);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (loginUser) {
      res["LoginUser"] = boost::any(*loginUser);
    }
    if (opType) {
      res["OpType"] = boost::any(*opType);
    }
    if (sip) {
      res["Sip"] = boost::any(*sip);
    }
    if (dip) {
      res["Dip"] = boost::any(*dip);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (sessionid) {
      res["Sessionid"] = boost::any(*sessionid);
    }
    if (sqlid) {
      res["Sqlid"] = boost::any(*sqlid);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (sport) {
      res["Sport"] = boost::any(*sport);
    }
    if (dport) {
      res["Dport"] = boost::any(*dport);
    }
    if (smac) {
      res["Smac"] = boost::any(*smac);
    }
    if (dmac) {
      res["Dmac"] = boost::any(*dmac);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (clientPrg) {
      res["ClientPrg"] = boost::any(*clientPrg);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (clientUser) {
      res["ClientUser"] = boost::any(*clientUser);
    }
    if (sqlLen) {
      res["SqlLen"] = boost::any(*sqlLen);
    }
    if (effectRow) {
      res["EffectRow"] = boost::any(*effectRow);
    }
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (resultDesc) {
      res["ResultDesc"] = boost::any(*resultDesc);
    }
    if (dataSet) {
      res["DataSet"] = boost::any(*dataSet);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (alarmLevel) {
      res["AlarmLevel"] = boost::any(*alarmLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("QueryString") != m.end() && !m["QueryString"].empty()) {
      queryString = make_shared<string>(boost::any_cast<string>(m["QueryString"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("LoginUser") != m.end() && !m["LoginUser"].empty()) {
      loginUser = make_shared<string>(boost::any_cast<string>(m["LoginUser"]));
    }
    if (m.find("OpType") != m.end() && !m["OpType"].empty()) {
      opType = make_shared<string>(boost::any_cast<string>(m["OpType"]));
    }
    if (m.find("Sip") != m.end() && !m["Sip"].empty()) {
      sip = make_shared<string>(boost::any_cast<string>(m["Sip"]));
    }
    if (m.find("Dip") != m.end() && !m["Dip"].empty()) {
      dip = make_shared<string>(boost::any_cast<string>(m["Dip"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("Sessionid") != m.end() && !m["Sessionid"].empty()) {
      sessionid = make_shared<string>(boost::any_cast<string>(m["Sessionid"]));
    }
    if (m.find("Sqlid") != m.end() && !m["Sqlid"].empty()) {
      sqlid = make_shared<string>(boost::any_cast<string>(m["Sqlid"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("Sport") != m.end() && !m["Sport"].empty()) {
      sport = make_shared<string>(boost::any_cast<string>(m["Sport"]));
    }
    if (m.find("Dport") != m.end() && !m["Dport"].empty()) {
      dport = make_shared<string>(boost::any_cast<string>(m["Dport"]));
    }
    if (m.find("Smac") != m.end() && !m["Smac"].empty()) {
      smac = make_shared<string>(boost::any_cast<string>(m["Smac"]));
    }
    if (m.find("Dmac") != m.end() && !m["Dmac"].empty()) {
      dmac = make_shared<string>(boost::any_cast<string>(m["Dmac"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ClientPrg") != m.end() && !m["ClientPrg"].empty()) {
      clientPrg = make_shared<string>(boost::any_cast<string>(m["ClientPrg"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ClientUser") != m.end() && !m["ClientUser"].empty()) {
      clientUser = make_shared<string>(boost::any_cast<string>(m["ClientUser"]));
    }
    if (m.find("SqlLen") != m.end() && !m["SqlLen"].empty()) {
      sqlLen = make_shared<string>(boost::any_cast<string>(m["SqlLen"]));
    }
    if (m.find("EffectRow") != m.end() && !m["EffectRow"].empty()) {
      effectRow = make_shared<string>(boost::any_cast<string>(m["EffectRow"]));
    }
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<string>(boost::any_cast<string>(m["Cost"]));
    }
    if (m.find("ResultDesc") != m.end() && !m["ResultDesc"].empty()) {
      resultDesc = make_shared<string>(boost::any_cast<string>(m["ResultDesc"]));
    }
    if (m.find("DataSet") != m.end() && !m["DataSet"].empty()) {
      dataSet = make_shared<string>(boost::any_cast<string>(m["DataSet"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("AlarmLevel") != m.end() && !m["AlarmLevel"].empty()) {
      alarmLevel = make_shared<string>(boost::any_cast<string>(m["AlarmLevel"]));
    }
  }


  virtual ~DescribeAuditLogsRequest() = default;
};
class DescribeAuditLogsResponseBodyAuditLogs : public Darabonba::Model {
public:
  shared_ptr<string> clientUser{};
  shared_ptr<long> effectRow{};
  shared_ptr<string> c5{};
  shared_ptr<string> clientPrg{};
  shared_ptr<string> accessid{};
  shared_ptr<string> resultDesc{};
  shared_ptr<long> sqlLen{};
  shared_ptr<string> payload{};
  shared_ptr<string> c4{};
  shared_ptr<string> dateTime{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dataSet{};
  shared_ptr<string> sqlid{};
  shared_ptr<string> relateIp{};
  shared_ptr<long> alarmLevel{};
  shared_ptr<string> c2{};
  shared_ptr<string> dip{};
  shared_ptr<long> result{};
  shared_ptr<long> cost{};
  shared_ptr<string> relateUser{};
  shared_ptr<string> sip{};
  shared_ptr<string> c3{};
  shared_ptr<string> hostName{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> pickIp{};
  shared_ptr<string> relateInfo{};
  shared_ptr<string> pickUser{};
  shared_ptr<string> opType{};
  shared_ptr<long> sport{};
  shared_ptr<long> dataSetSize{};
  shared_ptr<string> dbType{};
  shared_ptr<long> alarmFlag{};
  shared_ptr<long> smac{};
  shared_ptr<long> dport{};
  shared_ptr<string> c1{};
  shared_ptr<long> dmac{};
  shared_ptr<string> loginUser{};
  shared_ptr<string> sessionid{};

  DescribeAuditLogsResponseBodyAuditLogs() {}

  explicit DescribeAuditLogsResponseBodyAuditLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUser) {
      res["ClientUser"] = boost::any(*clientUser);
    }
    if (effectRow) {
      res["EffectRow"] = boost::any(*effectRow);
    }
    if (c5) {
      res["C5"] = boost::any(*c5);
    }
    if (clientPrg) {
      res["ClientPrg"] = boost::any(*clientPrg);
    }
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (resultDesc) {
      res["ResultDesc"] = boost::any(*resultDesc);
    }
    if (sqlLen) {
      res["SqlLen"] = boost::any(*sqlLen);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (c4) {
      res["C4"] = boost::any(*c4);
    }
    if (dateTime) {
      res["DateTime"] = boost::any(*dateTime);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dataSet) {
      res["DataSet"] = boost::any(*dataSet);
    }
    if (sqlid) {
      res["Sqlid"] = boost::any(*sqlid);
    }
    if (relateIp) {
      res["RelateIp"] = boost::any(*relateIp);
    }
    if (alarmLevel) {
      res["AlarmLevel"] = boost::any(*alarmLevel);
    }
    if (c2) {
      res["C2"] = boost::any(*c2);
    }
    if (dip) {
      res["Dip"] = boost::any(*dip);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (relateUser) {
      res["RelateUser"] = boost::any(*relateUser);
    }
    if (sip) {
      res["Sip"] = boost::any(*sip);
    }
    if (c3) {
      res["C3"] = boost::any(*c3);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (pickIp) {
      res["PickIp"] = boost::any(*pickIp);
    }
    if (relateInfo) {
      res["RelateInfo"] = boost::any(*relateInfo);
    }
    if (pickUser) {
      res["PickUser"] = boost::any(*pickUser);
    }
    if (opType) {
      res["OpType"] = boost::any(*opType);
    }
    if (sport) {
      res["Sport"] = boost::any(*sport);
    }
    if (dataSetSize) {
      res["DataSetSize"] = boost::any(*dataSetSize);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (alarmFlag) {
      res["AlarmFlag"] = boost::any(*alarmFlag);
    }
    if (smac) {
      res["Smac"] = boost::any(*smac);
    }
    if (dport) {
      res["Dport"] = boost::any(*dport);
    }
    if (c1) {
      res["C1"] = boost::any(*c1);
    }
    if (dmac) {
      res["Dmac"] = boost::any(*dmac);
    }
    if (loginUser) {
      res["LoginUser"] = boost::any(*loginUser);
    }
    if (sessionid) {
      res["Sessionid"] = boost::any(*sessionid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUser") != m.end() && !m["ClientUser"].empty()) {
      clientUser = make_shared<string>(boost::any_cast<string>(m["ClientUser"]));
    }
    if (m.find("EffectRow") != m.end() && !m["EffectRow"].empty()) {
      effectRow = make_shared<long>(boost::any_cast<long>(m["EffectRow"]));
    }
    if (m.find("C5") != m.end() && !m["C5"].empty()) {
      c5 = make_shared<string>(boost::any_cast<string>(m["C5"]));
    }
    if (m.find("ClientPrg") != m.end() && !m["ClientPrg"].empty()) {
      clientPrg = make_shared<string>(boost::any_cast<string>(m["ClientPrg"]));
    }
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("ResultDesc") != m.end() && !m["ResultDesc"].empty()) {
      resultDesc = make_shared<string>(boost::any_cast<string>(m["ResultDesc"]));
    }
    if (m.find("SqlLen") != m.end() && !m["SqlLen"].empty()) {
      sqlLen = make_shared<long>(boost::any_cast<long>(m["SqlLen"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("C4") != m.end() && !m["C4"].empty()) {
      c4 = make_shared<string>(boost::any_cast<string>(m["C4"]));
    }
    if (m.find("DateTime") != m.end() && !m["DateTime"].empty()) {
      dateTime = make_shared<string>(boost::any_cast<string>(m["DateTime"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DataSet") != m.end() && !m["DataSet"].empty()) {
      dataSet = make_shared<string>(boost::any_cast<string>(m["DataSet"]));
    }
    if (m.find("Sqlid") != m.end() && !m["Sqlid"].empty()) {
      sqlid = make_shared<string>(boost::any_cast<string>(m["Sqlid"]));
    }
    if (m.find("RelateIp") != m.end() && !m["RelateIp"].empty()) {
      relateIp = make_shared<string>(boost::any_cast<string>(m["RelateIp"]));
    }
    if (m.find("AlarmLevel") != m.end() && !m["AlarmLevel"].empty()) {
      alarmLevel = make_shared<long>(boost::any_cast<long>(m["AlarmLevel"]));
    }
    if (m.find("C2") != m.end() && !m["C2"].empty()) {
      c2 = make_shared<string>(boost::any_cast<string>(m["C2"]));
    }
    if (m.find("Dip") != m.end() && !m["Dip"].empty()) {
      dip = make_shared<string>(boost::any_cast<string>(m["Dip"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["Cost"]));
    }
    if (m.find("RelateUser") != m.end() && !m["RelateUser"].empty()) {
      relateUser = make_shared<string>(boost::any_cast<string>(m["RelateUser"]));
    }
    if (m.find("Sip") != m.end() && !m["Sip"].empty()) {
      sip = make_shared<string>(boost::any_cast<string>(m["Sip"]));
    }
    if (m.find("C3") != m.end() && !m["C3"].empty()) {
      c3 = make_shared<string>(boost::any_cast<string>(m["C3"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("PickIp") != m.end() && !m["PickIp"].empty()) {
      pickIp = make_shared<string>(boost::any_cast<string>(m["PickIp"]));
    }
    if (m.find("RelateInfo") != m.end() && !m["RelateInfo"].empty()) {
      relateInfo = make_shared<string>(boost::any_cast<string>(m["RelateInfo"]));
    }
    if (m.find("PickUser") != m.end() && !m["PickUser"].empty()) {
      pickUser = make_shared<string>(boost::any_cast<string>(m["PickUser"]));
    }
    if (m.find("OpType") != m.end() && !m["OpType"].empty()) {
      opType = make_shared<string>(boost::any_cast<string>(m["OpType"]));
    }
    if (m.find("Sport") != m.end() && !m["Sport"].empty()) {
      sport = make_shared<long>(boost::any_cast<long>(m["Sport"]));
    }
    if (m.find("DataSetSize") != m.end() && !m["DataSetSize"].empty()) {
      dataSetSize = make_shared<long>(boost::any_cast<long>(m["DataSetSize"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("AlarmFlag") != m.end() && !m["AlarmFlag"].empty()) {
      alarmFlag = make_shared<long>(boost::any_cast<long>(m["AlarmFlag"]));
    }
    if (m.find("Smac") != m.end() && !m["Smac"].empty()) {
      smac = make_shared<long>(boost::any_cast<long>(m["Smac"]));
    }
    if (m.find("Dport") != m.end() && !m["Dport"].empty()) {
      dport = make_shared<long>(boost::any_cast<long>(m["Dport"]));
    }
    if (m.find("C1") != m.end() && !m["C1"].empty()) {
      c1 = make_shared<string>(boost::any_cast<string>(m["C1"]));
    }
    if (m.find("Dmac") != m.end() && !m["Dmac"].empty()) {
      dmac = make_shared<long>(boost::any_cast<long>(m["Dmac"]));
    }
    if (m.find("LoginUser") != m.end() && !m["LoginUser"].empty()) {
      loginUser = make_shared<string>(boost::any_cast<string>(m["LoginUser"]));
    }
    if (m.find("Sessionid") != m.end() && !m["Sessionid"].empty()) {
      sessionid = make_shared<string>(boost::any_cast<string>(m["Sessionid"]));
    }
  }


  virtual ~DescribeAuditLogsResponseBodyAuditLogs() = default;
};
class DescribeAuditLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAuditLogsResponseBodyAuditLogs>> auditLogs{};

  DescribeAuditLogsResponseBody() {}

  explicit DescribeAuditLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (auditLogs) {
      vector<boost::any> temp1;
      for(auto item1:*auditLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuditLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AuditLogs") != m.end() && !m["AuditLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["AuditLogs"].type()) {
        vector<DescribeAuditLogsResponseBodyAuditLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuditLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditLogsResponseBodyAuditLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auditLogs = make_shared<vector<DescribeAuditLogsResponseBodyAuditLogs>>(expect1);
      }
    }
  }


  virtual ~DescribeAuditLogsResponseBody() = default;
};
class DescribeAuditLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAuditLogsResponseBody> body{};

  DescribeAuditLogsResponse() {}

  explicit DescribeAuditLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditLogsResponse() = default;
};
class DescribeInstanceAttribueRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeInstanceAttribueRequest() {}

  explicit DescribeInstanceAttribueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeInstanceAttribueRequest() = default;
};
class DescribeInstanceAttribueResponseBodyInstanceAttribue : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<long> startTime{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> description{};
  shared_ptr<long> instanceStatus{};
  shared_ptr<string> licenseCode{};
  shared_ptr<bool> publicNetworkAccess{};
  shared_ptr<vector<string>> whiteList{};

  DescribeInstanceAttribueResponseBodyInstanceAttribue() {}

  explicit DescribeInstanceAttribueResponseBodyInstanceAttribue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (seriesCode) {
      res["SeriesCode"] = boost::any(*seriesCode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (publicNetworkAccess) {
      res["PublicNetworkAccess"] = boost::any(*publicNetworkAccess);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("SeriesCode") != m.end() && !m["SeriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["SeriesCode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<long>(boost::any_cast<long>(m["InstanceStatus"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("PublicNetworkAccess") != m.end() && !m["PublicNetworkAccess"].empty()) {
      publicNetworkAccess = make_shared<bool>(boost::any_cast<bool>(m["PublicNetworkAccess"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceAttribueResponseBodyInstanceAttribue() = default;
};
class DescribeInstanceAttribueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceAttribueResponseBodyInstanceAttribue> instanceAttribue{};

  DescribeInstanceAttribueResponseBody() {}

  explicit DescribeInstanceAttribueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceAttribue) {
      res["InstanceAttribue"] = instanceAttribue ? boost::any(instanceAttribue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceAttribue") != m.end() && !m["InstanceAttribue"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceAttribue"].type()) {
        DescribeInstanceAttribueResponseBodyInstanceAttribue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceAttribue"]));
        instanceAttribue = make_shared<DescribeInstanceAttribueResponseBodyInstanceAttribue>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttribueResponseBody() = default;
};
class DescribeInstanceAttribueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceAttribueResponseBody> body{};

  DescribeInstanceAttribueResponse() {}

  explicit DescribeInstanceAttribueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceAttribueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAttribueResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttribueResponse() = default;
};
class DescribeInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeInstanceAttributeRequest() {}

  explicit DescribeInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeInstanceAttributeRequest() = default;
};
class DescribeInstanceAttributeResponseBodyInstanceAttribute : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<long> startTime{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> licenseCode{};
  shared_ptr<bool> publicNetworkAccess{};
  shared_ptr<vector<string>> whiteList{};
  shared_ptr<vector<string>> ipv6WhiteList{};

  DescribeInstanceAttributeResponseBodyInstanceAttribute() {}

  explicit DescribeInstanceAttributeResponseBodyInstanceAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (seriesCode) {
      res["SeriesCode"] = boost::any(*seriesCode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (publicNetworkAccess) {
      res["PublicNetworkAccess"] = boost::any(*publicNetworkAccess);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    if (ipv6WhiteList) {
      res["Ipv6WhiteList"] = boost::any(*ipv6WhiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("SeriesCode") != m.end() && !m["SeriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["SeriesCode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("PublicNetworkAccess") != m.end() && !m["PublicNetworkAccess"].empty()) {
      publicNetworkAccess = make_shared<bool>(boost::any_cast<bool>(m["PublicNetworkAccess"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ipv6WhiteList") != m.end() && !m["Ipv6WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ipv6WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ipv6WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipv6WhiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceAttributeResponseBodyInstanceAttribute() = default;
};
class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceAttributeResponseBodyInstanceAttribute> instanceAttribute{};

  DescribeInstanceAttributeResponseBody() {}

  explicit DescribeInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceAttribute) {
      res["InstanceAttribute"] = instanceAttribute ? boost::any(instanceAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceAttribute") != m.end() && !m["InstanceAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceAttribute"].type()) {
        DescribeInstanceAttributeResponseBodyInstanceAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceAttribute"]));
        instanceAttribute = make_shared<DescribeInstanceAttributeResponseBodyInstanceAttribute>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponseBody() = default;
};
class DescribeInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceAttributeResponseBody> body{};

  DescribeInstanceAttributeResponse() {}

  explicit DescribeInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponse() = default;
};
class DescribeInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesRequestTag() {}

  explicit DescribeInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeInstancesRequestTag() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<vector<DescribeInstancesRequestTag>> tag{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<long> startTime{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> licenseCode{};
  shared_ptr<bool> publicNetworkAccess{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (seriesCode) {
      res["SeriesCode"] = boost::any(*seriesCode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (publicNetworkAccess) {
      res["PublicNetworkAccess"] = boost::any(*publicNetworkAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("SeriesCode") != m.end() && !m["SeriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["SeriesCode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("PublicNetworkAccess") != m.end() && !m["PublicNetworkAccess"].empty()) {
      publicNetworkAccess = make_shared<bool>(boost::any_cast<bool>(m["PublicNetworkAccess"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstances>> instances{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeInstancesResponseBodyInstances>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeInstanceStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeInstanceStorageRequest() {}

  explicit DescribeInstanceStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeInstanceStorageRequest() = default;
};
class DescribeInstanceStorageResponseBodyInstanceStorages : public Darabonba::Model {
public:
  shared_ptr<long> storageTime{};
  shared_ptr<long> storageCapacity{};
  shared_ptr<string> storageCategory{};
  shared_ptr<string> storageSpace{};
  shared_ptr<long> storageUsed{};

  DescribeInstanceStorageResponseBodyInstanceStorages() {}

  explicit DescribeInstanceStorageResponseBodyInstanceStorages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageTime) {
      res["StorageTime"] = boost::any(*storageTime);
    }
    if (storageCapacity) {
      res["StorageCapacity"] = boost::any(*storageCapacity);
    }
    if (storageCategory) {
      res["StorageCategory"] = boost::any(*storageCategory);
    }
    if (storageSpace) {
      res["StorageSpace"] = boost::any(*storageSpace);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageTime") != m.end() && !m["StorageTime"].empty()) {
      storageTime = make_shared<long>(boost::any_cast<long>(m["StorageTime"]));
    }
    if (m.find("StorageCapacity") != m.end() && !m["StorageCapacity"].empty()) {
      storageCapacity = make_shared<long>(boost::any_cast<long>(m["StorageCapacity"]));
    }
    if (m.find("StorageCategory") != m.end() && !m["StorageCategory"].empty()) {
      storageCategory = make_shared<string>(boost::any_cast<string>(m["StorageCategory"]));
    }
    if (m.find("StorageSpace") != m.end() && !m["StorageSpace"].empty()) {
      storageSpace = make_shared<string>(boost::any_cast<string>(m["StorageSpace"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
  }


  virtual ~DescribeInstanceStorageResponseBodyInstanceStorages() = default;
};
class DescribeInstanceStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeInstanceStorageResponseBodyInstanceStorages>> instanceStorages{};

  DescribeInstanceStorageResponseBody() {}

  explicit DescribeInstanceStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceStorages) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStorages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStorages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceStorages") != m.end() && !m["InstanceStorages"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStorages"].type()) {
        vector<DescribeInstanceStorageResponseBodyInstanceStorages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStorages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceStorageResponseBodyInstanceStorages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStorages = make_shared<vector<DescribeInstanceStorageResponseBodyInstanceStorages>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceStorageResponseBody() = default;
};
class DescribeInstanceStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceStorageResponseBody> body{};

  DescribeInstanceStorageResponse() {}

  explicit DescribeInstanceStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceStorageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceStorageResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> regionId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeRenewStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> instanceId{};

  DescribeRenewStatusRequest() {}

  explicit DescribeRenewStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRenewStatusRequest() = default;
};
class DescribeRenewStatusResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> renewStatus{};
  shared_ptr<string> instanceId{};

  DescribeRenewStatusResponseBodyInstances() {}

  explicit DescribeRenewStatusResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (renewStatus) {
      res["RenewStatus"] = boost::any(*renewStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RenewStatus") != m.end() && !m["RenewStatus"].empty()) {
      renewStatus = make_shared<string>(boost::any_cast<string>(m["RenewStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeRenewStatusResponseBodyInstances() = default;
};
class DescribeRenewStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRenewStatusResponseBodyInstances>> instances{};

  DescribeRenewStatusResponseBody() {}

  explicit DescribeRenewStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeRenewStatusResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRenewStatusResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeRenewStatusResponseBodyInstances>>(expect1);
      }
    }
  }


  virtual ~DescribeRenewStatusResponseBody() = default;
};
class DescribeRenewStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRenewStatusResponseBody> body{};

  DescribeRenewStatusResponse() {}

  explicit DescribeRenewStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRenewStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRenewStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRenewStatusResponse() = default;
};
class DescribeSessionLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sort{};
  shared_ptr<string> dir{};
  shared_ptr<string> dbId{};
  shared_ptr<string> sip{};
  shared_ptr<string> sport{};
  shared_ptr<string> loginUser{};
  shared_ptr<string> dip{};
  shared_ptr<string> dport{};
  shared_ptr<string> sessionid{};
  shared_ptr<string> dbType{};
  shared_ptr<string> smac{};
  shared_ptr<string> dmac{};
  shared_ptr<string> clientPrg{};
  shared_ptr<string> hostName{};
  shared_ptr<string> clientUser{};
  shared_ptr<string> dbName{};
  shared_ptr<string> sessionStatus{};
  shared_ptr<string> sqlCount{};
  shared_ptr<string> reqFlow{};
  shared_ptr<string> rspFlow{};

  DescribeSessionLogsRequest() {}

  explicit DescribeSessionLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (sip) {
      res["Sip"] = boost::any(*sip);
    }
    if (sport) {
      res["Sport"] = boost::any(*sport);
    }
    if (loginUser) {
      res["LoginUser"] = boost::any(*loginUser);
    }
    if (dip) {
      res["Dip"] = boost::any(*dip);
    }
    if (dport) {
      res["Dport"] = boost::any(*dport);
    }
    if (sessionid) {
      res["Sessionid"] = boost::any(*sessionid);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (smac) {
      res["Smac"] = boost::any(*smac);
    }
    if (dmac) {
      res["Dmac"] = boost::any(*dmac);
    }
    if (clientPrg) {
      res["ClientPrg"] = boost::any(*clientPrg);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (clientUser) {
      res["ClientUser"] = boost::any(*clientUser);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (sessionStatus) {
      res["SessionStatus"] = boost::any(*sessionStatus);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (reqFlow) {
      res["ReqFlow"] = boost::any(*reqFlow);
    }
    if (rspFlow) {
      res["RspFlow"] = boost::any(*rspFlow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("Sip") != m.end() && !m["Sip"].empty()) {
      sip = make_shared<string>(boost::any_cast<string>(m["Sip"]));
    }
    if (m.find("Sport") != m.end() && !m["Sport"].empty()) {
      sport = make_shared<string>(boost::any_cast<string>(m["Sport"]));
    }
    if (m.find("LoginUser") != m.end() && !m["LoginUser"].empty()) {
      loginUser = make_shared<string>(boost::any_cast<string>(m["LoginUser"]));
    }
    if (m.find("Dip") != m.end() && !m["Dip"].empty()) {
      dip = make_shared<string>(boost::any_cast<string>(m["Dip"]));
    }
    if (m.find("Dport") != m.end() && !m["Dport"].empty()) {
      dport = make_shared<string>(boost::any_cast<string>(m["Dport"]));
    }
    if (m.find("Sessionid") != m.end() && !m["Sessionid"].empty()) {
      sessionid = make_shared<string>(boost::any_cast<string>(m["Sessionid"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("Smac") != m.end() && !m["Smac"].empty()) {
      smac = make_shared<string>(boost::any_cast<string>(m["Smac"]));
    }
    if (m.find("Dmac") != m.end() && !m["Dmac"].empty()) {
      dmac = make_shared<string>(boost::any_cast<string>(m["Dmac"]));
    }
    if (m.find("ClientPrg") != m.end() && !m["ClientPrg"].empty()) {
      clientPrg = make_shared<string>(boost::any_cast<string>(m["ClientPrg"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ClientUser") != m.end() && !m["ClientUser"].empty()) {
      clientUser = make_shared<string>(boost::any_cast<string>(m["ClientUser"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("SessionStatus") != m.end() && !m["SessionStatus"].empty()) {
      sessionStatus = make_shared<string>(boost::any_cast<string>(m["SessionStatus"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<string>(boost::any_cast<string>(m["SqlCount"]));
    }
    if (m.find("ReqFlow") != m.end() && !m["ReqFlow"].empty()) {
      reqFlow = make_shared<string>(boost::any_cast<string>(m["ReqFlow"]));
    }
    if (m.find("RspFlow") != m.end() && !m["RspFlow"].empty()) {
      rspFlow = make_shared<string>(boost::any_cast<string>(m["RspFlow"]));
    }
  }


  virtual ~DescribeSessionLogsRequest() = default;
};
class DescribeSessionLogsResponseBodySessionLogs : public Darabonba::Model {
public:
  shared_ptr<string> clientUser{};
  shared_ptr<long> sessionStatus{};
  shared_ptr<string> c5{};
  shared_ptr<string> clientPrg{};
  shared_ptr<string> accessid{};
  shared_ptr<string> c4{};
  shared_ptr<string> dbName{};
  shared_ptr<long> requestFlow{};
  shared_ptr<long> proCon{};
  shared_ptr<string> c2{};
  shared_ptr<string> dip{};
  shared_ptr<string> sip{};
  shared_ptr<string> c3{};
  shared_ptr<string> hostName{};
  shared_ptr<long> responseFlow{};
  shared_ptr<string> encode{};
  shared_ptr<long> normalEnd{};
  shared_ptr<long> endTime{};
  shared_ptr<long> sport{};
  shared_ptr<long> startTime{};
  shared_ptr<string> dbType{};
  shared_ptr<string> strInfo{};
  shared_ptr<long> sqlCount{};
  shared_ptr<long> smac{};
  shared_ptr<long> dport{};
  shared_ptr<long> dmac{};
  shared_ptr<string> c1{};
  shared_ptr<string> loginUser{};
  shared_ptr<string> sessionid{};

  DescribeSessionLogsResponseBodySessionLogs() {}

  explicit DescribeSessionLogsResponseBodySessionLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUser) {
      res["ClientUser"] = boost::any(*clientUser);
    }
    if (sessionStatus) {
      res["SessionStatus"] = boost::any(*sessionStatus);
    }
    if (c5) {
      res["C5"] = boost::any(*c5);
    }
    if (clientPrg) {
      res["ClientPrg"] = boost::any(*clientPrg);
    }
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (c4) {
      res["C4"] = boost::any(*c4);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (requestFlow) {
      res["RequestFlow"] = boost::any(*requestFlow);
    }
    if (proCon) {
      res["ProCon"] = boost::any(*proCon);
    }
    if (c2) {
      res["C2"] = boost::any(*c2);
    }
    if (dip) {
      res["Dip"] = boost::any(*dip);
    }
    if (sip) {
      res["Sip"] = boost::any(*sip);
    }
    if (c3) {
      res["C3"] = boost::any(*c3);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (responseFlow) {
      res["ResponseFlow"] = boost::any(*responseFlow);
    }
    if (encode) {
      res["Encode"] = boost::any(*encode);
    }
    if (normalEnd) {
      res["NormalEnd"] = boost::any(*normalEnd);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (sport) {
      res["Sport"] = boost::any(*sport);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (strInfo) {
      res["StrInfo"] = boost::any(*strInfo);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (smac) {
      res["Smac"] = boost::any(*smac);
    }
    if (dport) {
      res["Dport"] = boost::any(*dport);
    }
    if (dmac) {
      res["Dmac"] = boost::any(*dmac);
    }
    if (c1) {
      res["C1"] = boost::any(*c1);
    }
    if (loginUser) {
      res["LoginUser"] = boost::any(*loginUser);
    }
    if (sessionid) {
      res["Sessionid"] = boost::any(*sessionid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUser") != m.end() && !m["ClientUser"].empty()) {
      clientUser = make_shared<string>(boost::any_cast<string>(m["ClientUser"]));
    }
    if (m.find("SessionStatus") != m.end() && !m["SessionStatus"].empty()) {
      sessionStatus = make_shared<long>(boost::any_cast<long>(m["SessionStatus"]));
    }
    if (m.find("C5") != m.end() && !m["C5"].empty()) {
      c5 = make_shared<string>(boost::any_cast<string>(m["C5"]));
    }
    if (m.find("ClientPrg") != m.end() && !m["ClientPrg"].empty()) {
      clientPrg = make_shared<string>(boost::any_cast<string>(m["ClientPrg"]));
    }
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("C4") != m.end() && !m["C4"].empty()) {
      c4 = make_shared<string>(boost::any_cast<string>(m["C4"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RequestFlow") != m.end() && !m["RequestFlow"].empty()) {
      requestFlow = make_shared<long>(boost::any_cast<long>(m["RequestFlow"]));
    }
    if (m.find("ProCon") != m.end() && !m["ProCon"].empty()) {
      proCon = make_shared<long>(boost::any_cast<long>(m["ProCon"]));
    }
    if (m.find("C2") != m.end() && !m["C2"].empty()) {
      c2 = make_shared<string>(boost::any_cast<string>(m["C2"]));
    }
    if (m.find("Dip") != m.end() && !m["Dip"].empty()) {
      dip = make_shared<string>(boost::any_cast<string>(m["Dip"]));
    }
    if (m.find("Sip") != m.end() && !m["Sip"].empty()) {
      sip = make_shared<string>(boost::any_cast<string>(m["Sip"]));
    }
    if (m.find("C3") != m.end() && !m["C3"].empty()) {
      c3 = make_shared<string>(boost::any_cast<string>(m["C3"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ResponseFlow") != m.end() && !m["ResponseFlow"].empty()) {
      responseFlow = make_shared<long>(boost::any_cast<long>(m["ResponseFlow"]));
    }
    if (m.find("Encode") != m.end() && !m["Encode"].empty()) {
      encode = make_shared<string>(boost::any_cast<string>(m["Encode"]));
    }
    if (m.find("NormalEnd") != m.end() && !m["NormalEnd"].empty()) {
      normalEnd = make_shared<long>(boost::any_cast<long>(m["NormalEnd"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Sport") != m.end() && !m["Sport"].empty()) {
      sport = make_shared<long>(boost::any_cast<long>(m["Sport"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("StrInfo") != m.end() && !m["StrInfo"].empty()) {
      strInfo = make_shared<string>(boost::any_cast<string>(m["StrInfo"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("Smac") != m.end() && !m["Smac"].empty()) {
      smac = make_shared<long>(boost::any_cast<long>(m["Smac"]));
    }
    if (m.find("Dport") != m.end() && !m["Dport"].empty()) {
      dport = make_shared<long>(boost::any_cast<long>(m["Dport"]));
    }
    if (m.find("Dmac") != m.end() && !m["Dmac"].empty()) {
      dmac = make_shared<long>(boost::any_cast<long>(m["Dmac"]));
    }
    if (m.find("C1") != m.end() && !m["C1"].empty()) {
      c1 = make_shared<string>(boost::any_cast<string>(m["C1"]));
    }
    if (m.find("LoginUser") != m.end() && !m["LoginUser"].empty()) {
      loginUser = make_shared<string>(boost::any_cast<string>(m["LoginUser"]));
    }
    if (m.find("Sessionid") != m.end() && !m["Sessionid"].empty()) {
      sessionid = make_shared<string>(boost::any_cast<string>(m["Sessionid"]));
    }
  }


  virtual ~DescribeSessionLogsResponseBodySessionLogs() = default;
};
class DescribeSessionLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSessionLogsResponseBodySessionLogs>> sessionLogs{};

  DescribeSessionLogsResponseBody() {}

  explicit DescribeSessionLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionLogs) {
      vector<boost::any> temp1;
      for(auto item1:*sessionLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SessionLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionLogs") != m.end() && !m["SessionLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["SessionLogs"].type()) {
        vector<DescribeSessionLogsResponseBodySessionLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SessionLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSessionLogsResponseBodySessionLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sessionLogs = make_shared<vector<DescribeSessionLogsResponseBodySessionLogs>>(expect1);
      }
    }
  }


  virtual ~DescribeSessionLogsResponseBody() = default;
};
class DescribeSessionLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSessionLogsResponseBody> body{};

  DescribeSessionLogsResponse() {}

  explicit DescribeSessionLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSessionLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSessionLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSessionLogsResponse() = default;
};
class DisableInstancePublicAccessRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DisableInstancePublicAccessRequest() {}

  explicit DisableInstancePublicAccessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisableInstancePublicAccessRequest() = default;
};
class DisableInstancePublicAccessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableInstancePublicAccessResponseBody() {}

  explicit DisableInstancePublicAccessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableInstancePublicAccessResponseBody() = default;
};
class DisableInstancePublicAccessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableInstancePublicAccessResponseBody> body{};

  DisableInstancePublicAccessResponse() {}

  explicit DisableInstancePublicAccessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableInstancePublicAccessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableInstancePublicAccessResponseBody>(model1);
      }
    }
  }


  virtual ~DisableInstancePublicAccessResponse() = default;
};
class EnableInstancePublicAccessRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  EnableInstancePublicAccessRequest() {}

  explicit EnableInstancePublicAccessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~EnableInstancePublicAccessRequest() = default;
};
class EnableInstancePublicAccessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableInstancePublicAccessResponseBody() {}

  explicit EnableInstancePublicAccessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableInstancePublicAccessResponseBody() = default;
};
class EnableInstancePublicAccessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableInstancePublicAccessResponseBody> body{};

  EnableInstancePublicAccessResponse() {}

  explicit EnableInstancePublicAccessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableInstancePublicAccessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableInstancePublicAccessResponseBody>(model1);
      }
    }
  }


  virtual ~EnableInstancePublicAccessResponse() = default;
};
class GenerateUploadAuthRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  GenerateUploadAuthRequest() {}

  explicit GenerateUploadAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GenerateUploadAuthRequest() = default;
};
class GenerateUploadAuthResponseBodyUploadConfig : public Darabonba::Model {
public:
  shared_ptr<string> signature{};
  shared_ptr<string> filePath{};
  shared_ptr<string> policy{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> uploadHost{};
  shared_ptr<string> accessId{};

  GenerateUploadAuthResponseBodyUploadConfig() {}

  explicit GenerateUploadAuthResponseBodyUploadConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (uploadHost) {
      res["UploadHost"] = boost::any(*uploadHost);
    }
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("UploadHost") != m.end() && !m["UploadHost"].empty()) {
      uploadHost = make_shared<string>(boost::any_cast<string>(m["UploadHost"]));
    }
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
  }


  virtual ~GenerateUploadAuthResponseBodyUploadConfig() = default;
};
class GenerateUploadAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateUploadAuthResponseBodyUploadConfig> uploadConfig{};

  GenerateUploadAuthResponseBody() {}

  explicit GenerateUploadAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uploadConfig) {
      res["UploadConfig"] = uploadConfig ? boost::any(uploadConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UploadConfig") != m.end() && !m["UploadConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["UploadConfig"].type()) {
        GenerateUploadAuthResponseBodyUploadConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UploadConfig"]));
        uploadConfig = make_shared<GenerateUploadAuthResponseBodyUploadConfig>(model1);
      }
    }
  }


  virtual ~GenerateUploadAuthResponseBody() = default;
};
class GenerateUploadAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateUploadAuthResponseBody> body{};

  GenerateUploadAuthResponse() {}

  explicit GenerateUploadAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateUploadAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateUploadAuthResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateUploadAuthResponse() = default;
};
class GrantServiceRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GrantServiceRoleRequest() {}

  explicit GrantServiceRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GrantServiceRoleRequest() = default;
};
class GrantServiceRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantServiceRoleResponseBody() {}

  explicit GrantServiceRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GrantServiceRoleResponseBody() = default;
};
class GrantServiceRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantServiceRoleResponseBody> body{};

  GrantServiceRoleResponse() {}

  explicit GrantServiceRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantServiceRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantServiceRoleResponseBody>(model1);
      }
    }
  }


  virtual ~GrantServiceRoleResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyTagKeys : public Darabonba::Model {
public:
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagKey{};

  ListTagKeysResponseBodyTagKeys() {}

  explicit ListTagKeysResponseBodyTagKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagKeysResponseBodyTagKeys() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTagKeysResponseBodyTagKeys>> tagKeys{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (tagKeys) {
      vector<boost::any> temp1;
      for(auto item1:*tagKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagKeys"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<ListTagKeysResponseBodyTagKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagKeysResponseBodyTagKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagKeys = make_shared<vector<ListTagKeysResponseBodyTagKeys>>(expect1);
      }
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifyInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};

  ModifyInstanceAttributeRequest() {}

  explicit ModifyInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyInstanceAttributeRequest() = default;
};
class ModifyInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceAttributeResponseBody() {}

  explicit ModifyInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceAttributeResponseBody() = default;
};
class ModifyInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceAttributeResponseBody> body{};

  ModifyInstanceAttributeResponse() {}

  explicit ModifyInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceAttributeResponse() = default;
};
class ModifyInstanceStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storageSpace{};
  shared_ptr<string> storageCategory{};
  shared_ptr<long> storageTime{};

  ModifyInstanceStorageRequest() {}

  explicit ModifyInstanceStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (storageSpace) {
      res["StorageSpace"] = boost::any(*storageSpace);
    }
    if (storageCategory) {
      res["StorageCategory"] = boost::any(*storageCategory);
    }
    if (storageTime) {
      res["StorageTime"] = boost::any(*storageTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StorageSpace") != m.end() && !m["StorageSpace"].empty()) {
      storageSpace = make_shared<string>(boost::any_cast<string>(m["StorageSpace"]));
    }
    if (m.find("StorageCategory") != m.end() && !m["StorageCategory"].empty()) {
      storageCategory = make_shared<string>(boost::any_cast<string>(m["StorageCategory"]));
    }
    if (m.find("StorageTime") != m.end() && !m["StorageTime"].empty()) {
      storageTime = make_shared<long>(boost::any_cast<long>(m["StorageTime"]));
    }
  }


  virtual ~ModifyInstanceStorageRequest() = default;
};
class ModifyInstanceStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceStorageResponseBody() {}

  explicit ModifyInstanceStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceStorageResponseBody() = default;
};
class ModifyInstanceStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceStorageResponseBody> body{};

  ModifyInstanceStorageResponse() {}

  explicit ModifyInstanceStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceStorageResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceStorageResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> regionId{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class RefundInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceCode{};

  RefundInstanceRequest() {}

  explicit RefundInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~RefundInstanceRequest() = default;
};
class RefundInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RefundInstanceResponseBody() {}

  explicit RefundInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefundInstanceResponseBody() = default;
};
class RefundInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefundInstanceResponseBody> body{};

  RefundInstanceResponse() {}

  explicit RefundInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RefundInstanceResponse() = default;
};
class StartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> regionId{};

  StartInstanceRequest() {}

  explicit StartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartInstanceRequest() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
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
  ClearInstanceStorageResponse clearInstanceStorageWithOptions(shared_ptr<ClearInstanceStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearInstanceStorageResponse clearInstanceStorage(shared_ptr<ClearInstanceStorageRequest> request);
  ConfigInstanceWhiteListResponse configInstanceWhiteListWithOptions(shared_ptr<ConfigInstanceWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigInstanceWhiteListResponse configInstanceWhiteList(shared_ptr<ConfigInstanceWhiteListRequest> request);
  DescribeAuditLogsResponse describeAuditLogsWithOptions(shared_ptr<DescribeAuditLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditLogsResponse describeAuditLogs(shared_ptr<DescribeAuditLogsRequest> request);
  DescribeInstanceAttribueResponse describeInstanceAttribueWithOptions(shared_ptr<DescribeInstanceAttribueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAttribueResponse describeInstanceAttribue(shared_ptr<DescribeInstanceAttribueRequest> request);
  DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAttributeResponse describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeInstanceStorageResponse describeInstanceStorageWithOptions(shared_ptr<DescribeInstanceStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceStorageResponse describeInstanceStorage(shared_ptr<DescribeInstanceStorageRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRenewStatusResponse describeRenewStatusWithOptions(shared_ptr<DescribeRenewStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRenewStatusResponse describeRenewStatus(shared_ptr<DescribeRenewStatusRequest> request);
  DescribeSessionLogsResponse describeSessionLogsWithOptions(shared_ptr<DescribeSessionLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSessionLogsResponse describeSessionLogs(shared_ptr<DescribeSessionLogsRequest> request);
  DisableInstancePublicAccessResponse disableInstancePublicAccessWithOptions(shared_ptr<DisableInstancePublicAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableInstancePublicAccessResponse disableInstancePublicAccess(shared_ptr<DisableInstancePublicAccessRequest> request);
  EnableInstancePublicAccessResponse enableInstancePublicAccessWithOptions(shared_ptr<EnableInstancePublicAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableInstancePublicAccessResponse enableInstancePublicAccess(shared_ptr<EnableInstancePublicAccessRequest> request);
  GenerateUploadAuthResponse generateUploadAuthWithOptions(shared_ptr<GenerateUploadAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateUploadAuthResponse generateUploadAuth(shared_ptr<GenerateUploadAuthRequest> request);
  GrantServiceRoleResponse grantServiceRoleWithOptions(shared_ptr<GrantServiceRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantServiceRoleResponse grantServiceRole(shared_ptr<GrantServiceRoleRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceAttributeResponse modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request);
  ModifyInstanceStorageResponse modifyInstanceStorageWithOptions(shared_ptr<ModifyInstanceStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceStorageResponse modifyInstanceStorage(shared_ptr<ModifyInstanceStorageRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  RefundInstanceResponse refundInstanceWithOptions(shared_ptr<RefundInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundInstanceResponse refundInstance(shared_ptr<RefundInstanceRequest> request);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<StartInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Yundun-dbaudit20181029

#endif
