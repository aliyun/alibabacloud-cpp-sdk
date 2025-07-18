// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SASRASP20240727_H_
#define ALIBABACLOUD_SASRASP20240727_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_SasRasp20240727 {
class DescribeAttackProtectionCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentType{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<long> startTimestamp{};

  DescribeAttackProtectionCountRequest() {}

  explicit DescribeAttackProtectionCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentType) {
      res["AgentType"] = boost::any(*agentType);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentType") != m.end() && !m["AgentType"].empty()) {
      agentType = make_shared<string>(boost::any_cast<string>(m["AgentType"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeAttackProtectionCountRequest() = default;
};
class DescribeAttackProtectionCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> blockHighCount{};
  shared_ptr<long> blockLowCount{};
  shared_ptr<long> blockMediumCount{};
  shared_ptr<long> monitorHighCount{};
  shared_ptr<long> monitorLowCount{};
  shared_ptr<long> monitorMediumCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRequestCount{};

  DescribeAttackProtectionCountResponseBody() {}

  explicit DescribeAttackProtectionCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockHighCount) {
      res["BlockHighCount"] = boost::any(*blockHighCount);
    }
    if (blockLowCount) {
      res["BlockLowCount"] = boost::any(*blockLowCount);
    }
    if (blockMediumCount) {
      res["BlockMediumCount"] = boost::any(*blockMediumCount);
    }
    if (monitorHighCount) {
      res["MonitorHighCount"] = boost::any(*monitorHighCount);
    }
    if (monitorLowCount) {
      res["MonitorLowCount"] = boost::any(*monitorLowCount);
    }
    if (monitorMediumCount) {
      res["MonitorMediumCount"] = boost::any(*monitorMediumCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRequestCount) {
      res["TotalRequestCount"] = boost::any(*totalRequestCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockHighCount") != m.end() && !m["BlockHighCount"].empty()) {
      blockHighCount = make_shared<long>(boost::any_cast<long>(m["BlockHighCount"]));
    }
    if (m.find("BlockLowCount") != m.end() && !m["BlockLowCount"].empty()) {
      blockLowCount = make_shared<long>(boost::any_cast<long>(m["BlockLowCount"]));
    }
    if (m.find("BlockMediumCount") != m.end() && !m["BlockMediumCount"].empty()) {
      blockMediumCount = make_shared<long>(boost::any_cast<long>(m["BlockMediumCount"]));
    }
    if (m.find("MonitorHighCount") != m.end() && !m["MonitorHighCount"].empty()) {
      monitorHighCount = make_shared<long>(boost::any_cast<long>(m["MonitorHighCount"]));
    }
    if (m.find("MonitorLowCount") != m.end() && !m["MonitorLowCount"].empty()) {
      monitorLowCount = make_shared<long>(boost::any_cast<long>(m["MonitorLowCount"]));
    }
    if (m.find("MonitorMediumCount") != m.end() && !m["MonitorMediumCount"].empty()) {
      monitorMediumCount = make_shared<long>(boost::any_cast<long>(m["MonitorMediumCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRequestCount") != m.end() && !m["TotalRequestCount"].empty()) {
      totalRequestCount = make_shared<long>(boost::any_cast<long>(m["TotalRequestCount"]));
    }
  }


  virtual ~DescribeAttackProtectionCountResponseBody() = default;
};
class DescribeAttackProtectionCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAttackProtectionCountResponseBody> body{};

  DescribeAttackProtectionCountResponse() {}

  explicit DescribeAttackProtectionCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAttackProtectionCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAttackProtectionCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAttackProtectionCountResponse() = default;
};
class DescribeAttacksRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentType{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> attackHostId{};
  shared_ptr<string> attackType{};
  shared_ptr<string> attackUrl{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> handlerType{};
  shared_ptr<string> hostname{};
  shared_ptr<string> ip{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pid{};
  shared_ptr<string> raspType{};
  shared_ptr<string> region{};
  shared_ptr<string> remote{};
  shared_ptr<string> severity{};
  shared_ptr<long> startTimestamp{};
  shared_ptr<string> unionId{};

  DescribeAttacksRequest() {}

  explicit DescribeAttacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentType) {
      res["AgentType"] = boost::any(*agentType);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (attackHostId) {
      res["AttackHostId"] = boost::any(*attackHostId);
    }
    if (attackType) {
      res["AttackType"] = boost::any(*attackType);
    }
    if (attackUrl) {
      res["AttackUrl"] = boost::any(*attackUrl);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (handlerType) {
      res["HandlerType"] = boost::any(*handlerType);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (raspType) {
      res["RaspType"] = boost::any(*raspType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (remote) {
      res["Remote"] = boost::any(*remote);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    if (unionId) {
      res["UnionId"] = boost::any(*unionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentType") != m.end() && !m["AgentType"].empty()) {
      agentType = make_shared<string>(boost::any_cast<string>(m["AgentType"]));
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("AttackHostId") != m.end() && !m["AttackHostId"].empty()) {
      attackHostId = make_shared<string>(boost::any_cast<string>(m["AttackHostId"]));
    }
    if (m.find("AttackType") != m.end() && !m["AttackType"].empty()) {
      attackType = make_shared<string>(boost::any_cast<string>(m["AttackType"]));
    }
    if (m.find("AttackUrl") != m.end() && !m["AttackUrl"].empty()) {
      attackUrl = make_shared<string>(boost::any_cast<string>(m["AttackUrl"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("HandlerType") != m.end() && !m["HandlerType"].empty()) {
      handlerType = make_shared<string>(boost::any_cast<string>(m["HandlerType"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RaspType") != m.end() && !m["RaspType"].empty()) {
      raspType = make_shared<string>(boost::any_cast<string>(m["RaspType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Remote") != m.end() && !m["Remote"].empty()) {
      remote = make_shared<string>(boost::any_cast<string>(m["Remote"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
    if (m.find("UnionId") != m.end() && !m["UnionId"].empty()) {
      unionId = make_shared<string>(boost::any_cast<string>(m["UnionId"]));
    }
  }


  virtual ~DescribeAttacksRequest() = default;
};
class DescribeAttacksResponseBodyAttacksInputParamItemList : public Darabonba::Model {
public:
  shared_ptr<string> processedKey{};
  shared_ptr<string> rawKey{};
  shared_ptr<string> value{};

  DescribeAttacksResponseBodyAttacksInputParamItemList() {}

  explicit DescribeAttacksResponseBodyAttacksInputParamItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (processedKey) {
      res["ProcessedKey"] = boost::any(*processedKey);
    }
    if (rawKey) {
      res["RawKey"] = boost::any(*rawKey);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProcessedKey") != m.end() && !m["ProcessedKey"].empty()) {
      processedKey = make_shared<string>(boost::any_cast<string>(m["ProcessedKey"]));
    }
    if (m.find("RawKey") != m.end() && !m["RawKey"].empty()) {
      rawKey = make_shared<string>(boost::any_cast<string>(m["RawKey"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeAttacksResponseBodyAttacksInputParamItemList() = default;
};
class DescribeAttacksResponseBodyAttacks : public Darabonba::Model {
public:
  shared_ptr<string> appDir{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> avd{};
  shared_ptr<string> cmdline{};
  shared_ptr<string> confidence{};
  shared_ptr<string> content{};
  shared_ptr<long> contentLength{};
  shared_ptr<long> count{};
  shared_ptr<string> data{};
  shared_ptr<string> headers{};
  shared_ptr<string> hostId{};
  shared_ptr<string> hostname{};
  shared_ptr<vector<DescribeAttacksResponseBodyAttacksInputParamItemList>> inputParamItemList{};
  shared_ptr<long> installType{};
  shared_ptr<string> ip{};
  shared_ptr<string> jdk{};
  shared_ptr<string> language{};
  shared_ptr<string> languageVersion{};
  shared_ptr<long> maxTimestamp{};
  shared_ptr<string> message{};
  shared_ptr<string> method{};
  shared_ptr<string> middlewareInstanceId{};
  shared_ptr<long> minTimestamp{};
  shared_ptr<string> os{};
  shared_ptr<string> osArch{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> param{};
  shared_ptr<string> payload{};
  shared_ptr<long> payloadLength{};
  shared_ptr<string> pid{};
  shared_ptr<string> raspVersion{};
  shared_ptr<string> region{};
  shared_ptr<string> remote{};
  shared_ptr<string> result{};
  shared_ptr<string> ruleResult{};
  shared_ptr<string> severity{};
  shared_ptr<vector<string>> stacktrace{};
  shared_ptr<string> time{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> type{};
  shared_ptr<string> unionId{};
  shared_ptr<string> url{};

  DescribeAttacksResponseBodyAttacks() {}

  explicit DescribeAttacksResponseBodyAttacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDir) {
      res["AppDir"] = boost::any(*appDir);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (avd) {
      res["Avd"] = boost::any(*avd);
    }
    if (cmdline) {
      res["Cmdline"] = boost::any(*cmdline);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentLength) {
      res["ContentLength"] = boost::any(*contentLength);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (headers) {
      res["Headers"] = boost::any(*headers);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (inputParamItemList) {
      vector<boost::any> temp1;
      for(auto item1:*inputParamItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputParamItemList"] = boost::any(temp1);
    }
    if (installType) {
      res["InstallType"] = boost::any(*installType);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (jdk) {
      res["Jdk"] = boost::any(*jdk);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (languageVersion) {
      res["LanguageVersion"] = boost::any(*languageVersion);
    }
    if (maxTimestamp) {
      res["MaxTimestamp"] = boost::any(*maxTimestamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (middlewareInstanceId) {
      res["MiddlewareInstanceId"] = boost::any(*middlewareInstanceId);
    }
    if (minTimestamp) {
      res["MinTimestamp"] = boost::any(*minTimestamp);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osArch) {
      res["OsArch"] = boost::any(*osArch);
    }
    if (osVersion) {
      res["OsVersion"] = boost::any(*osVersion);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (payloadLength) {
      res["PayloadLength"] = boost::any(*payloadLength);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (raspVersion) {
      res["RaspVersion"] = boost::any(*raspVersion);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (remote) {
      res["Remote"] = boost::any(*remote);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (ruleResult) {
      res["RuleResult"] = boost::any(*ruleResult);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (stacktrace) {
      res["Stacktrace"] = boost::any(*stacktrace);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (unionId) {
      res["UnionId"] = boost::any(*unionId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDir") != m.end() && !m["AppDir"].empty()) {
      appDir = make_shared<string>(boost::any_cast<string>(m["AppDir"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Avd") != m.end() && !m["Avd"].empty()) {
      avd = make_shared<string>(boost::any_cast<string>(m["Avd"]));
    }
    if (m.find("Cmdline") != m.end() && !m["Cmdline"].empty()) {
      cmdline = make_shared<string>(boost::any_cast<string>(m["Cmdline"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<string>(boost::any_cast<string>(m["Confidence"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentLength") != m.end() && !m["ContentLength"].empty()) {
      contentLength = make_shared<long>(boost::any_cast<long>(m["ContentLength"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Headers") != m.end() && !m["Headers"].empty()) {
      headers = make_shared<string>(boost::any_cast<string>(m["Headers"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("InputParamItemList") != m.end() && !m["InputParamItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["InputParamItemList"].type()) {
        vector<DescribeAttacksResponseBodyAttacksInputParamItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputParamItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAttacksResponseBodyAttacksInputParamItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputParamItemList = make_shared<vector<DescribeAttacksResponseBodyAttacksInputParamItemList>>(expect1);
      }
    }
    if (m.find("InstallType") != m.end() && !m["InstallType"].empty()) {
      installType = make_shared<long>(boost::any_cast<long>(m["InstallType"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Jdk") != m.end() && !m["Jdk"].empty()) {
      jdk = make_shared<string>(boost::any_cast<string>(m["Jdk"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LanguageVersion") != m.end() && !m["LanguageVersion"].empty()) {
      languageVersion = make_shared<string>(boost::any_cast<string>(m["LanguageVersion"]));
    }
    if (m.find("MaxTimestamp") != m.end() && !m["MaxTimestamp"].empty()) {
      maxTimestamp = make_shared<long>(boost::any_cast<long>(m["MaxTimestamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("MiddlewareInstanceId") != m.end() && !m["MiddlewareInstanceId"].empty()) {
      middlewareInstanceId = make_shared<string>(boost::any_cast<string>(m["MiddlewareInstanceId"]));
    }
    if (m.find("MinTimestamp") != m.end() && !m["MinTimestamp"].empty()) {
      minTimestamp = make_shared<long>(boost::any_cast<long>(m["MinTimestamp"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsArch") != m.end() && !m["OsArch"].empty()) {
      osArch = make_shared<string>(boost::any_cast<string>(m["OsArch"]));
    }
    if (m.find("OsVersion") != m.end() && !m["OsVersion"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["OsVersion"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("PayloadLength") != m.end() && !m["PayloadLength"].empty()) {
      payloadLength = make_shared<long>(boost::any_cast<long>(m["PayloadLength"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RaspVersion") != m.end() && !m["RaspVersion"].empty()) {
      raspVersion = make_shared<string>(boost::any_cast<string>(m["RaspVersion"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Remote") != m.end() && !m["Remote"].empty()) {
      remote = make_shared<string>(boost::any_cast<string>(m["Remote"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RuleResult") != m.end() && !m["RuleResult"].empty()) {
      ruleResult = make_shared<string>(boost::any_cast<string>(m["RuleResult"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Stacktrace") != m.end() && !m["Stacktrace"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Stacktrace"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Stacktrace"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stacktrace = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UnionId") != m.end() && !m["UnionId"].empty()) {
      unionId = make_shared<string>(boost::any_cast<string>(m["UnionId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeAttacksResponseBodyAttacks() = default;
};
class DescribeAttacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAttacksResponseBodyAttacks>> attacks{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAttacksResponseBody() {}

  explicit DescribeAttacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attacks) {
      vector<boost::any> temp1;
      for(auto item1:*attacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attacks"] = boost::any(temp1);
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
    if (m.find("Attacks") != m.end() && !m["Attacks"].empty()) {
      if (typeid(vector<boost::any>) == m["Attacks"].type()) {
        vector<DescribeAttacksResponseBodyAttacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAttacksResponseBodyAttacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attacks = make_shared<vector<DescribeAttacksResponseBodyAttacks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAttacksResponseBody() = default;
};
class DescribeAttacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAttacksResponseBody> body{};

  DescribeAttacksResponse() {}

  explicit DescribeAttacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAttacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAttacksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAttacksResponse() = default;
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
  DescribeAttackProtectionCountResponse describeAttackProtectionCountWithOptions(shared_ptr<DescribeAttackProtectionCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAttackProtectionCountResponse describeAttackProtectionCount(shared_ptr<DescribeAttackProtectionCountRequest> request);
  DescribeAttacksResponse describeAttacksWithOptions(shared_ptr<DescribeAttacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAttacksResponse describeAttacks(shared_ptr<DescribeAttacksRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_SasRasp20240727

#endif
