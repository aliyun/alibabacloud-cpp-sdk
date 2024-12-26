// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SCHEDULERX320240624_H_
#define ALIBABACLOUD_SCHEDULERX320240624_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_SchedulerX320240624 {
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> enableLog{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> title{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (enableLog) {
      res["EnableLog"] = boost::any(*enableLog);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EnableLog") != m.end() && !m["EnableLog"].empty()) {
      enableLog = make_shared<bool>(boost::any_cast<bool>(m["EnableLog"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> appGroupId{};

  CreateAppResponseBodyData() {}

  explicit CreateAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (appGroupId) {
      res["AppGroupId"] = boost::any(*appGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AppGroupId") != m.end() && !m["AppGroupId"].empty()) {
      appGroupId = make_shared<long>(boost::any_cast<long>(m["AppGroupId"]));
    }
  }


  virtual ~CreateAppResponseBodyData() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateAppResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAppResponseBodyData>(model1);
      }
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


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateClusterRequestVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateClusterRequestVSwitches() {}

  explicit CreateClusterRequestVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateClusterRequestVSwitches() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> engineType{};
  shared_ptr<vector<CreateClusterRequestVSwitches>> vSwitches{};
  shared_ptr<string> vpcId{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<CreateClusterRequestVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<CreateClusterRequestVSwitches>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> engineType{};
  shared_ptr<string> vSwitchesShrink{};
  shared_ptr<string> vpcId{};

  CreateClusterShrinkRequest() {}

  explicit CreateClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (vSwitchesShrink) {
      res["VSwitches"] = boost::any(*vSwitchesShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vSwitchesShrink = make_shared<string>(boost::any_cast<string>(m["VSwitches"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateClusterShrinkRequest() = default;
};
class CreateClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> orderId{};

  CreateClusterResponseBodyData() {}

  explicit CreateClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreateClusterResponseBodyData() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateClusterResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateClusterResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateJobRequestNoticeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> failEnable{};
  shared_ptr<long> failLimitTimes{};
  shared_ptr<bool> missWorkerEnable{};
  shared_ptr<string> sendChannel{};
  shared_ptr<bool> successNotice{};
  shared_ptr<long> timeout{};
  shared_ptr<bool> timeoutEnable{};
  shared_ptr<bool> timeoutKillEnable{};

  CreateJobRequestNoticeConfig() {}

  explicit CreateJobRequestNoticeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failEnable) {
      res["FailEnable"] = boost::any(*failEnable);
    }
    if (failLimitTimes) {
      res["FailLimitTimes"] = boost::any(*failLimitTimes);
    }
    if (missWorkerEnable) {
      res["MissWorkerEnable"] = boost::any(*missWorkerEnable);
    }
    if (sendChannel) {
      res["SendChannel"] = boost::any(*sendChannel);
    }
    if (successNotice) {
      res["SuccessNotice"] = boost::any(*successNotice);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutEnable) {
      res["TimeoutEnable"] = boost::any(*timeoutEnable);
    }
    if (timeoutKillEnable) {
      res["TimeoutKillEnable"] = boost::any(*timeoutKillEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailEnable") != m.end() && !m["FailEnable"].empty()) {
      failEnable = make_shared<bool>(boost::any_cast<bool>(m["FailEnable"]));
    }
    if (m.find("FailLimitTimes") != m.end() && !m["FailLimitTimes"].empty()) {
      failLimitTimes = make_shared<long>(boost::any_cast<long>(m["FailLimitTimes"]));
    }
    if (m.find("MissWorkerEnable") != m.end() && !m["MissWorkerEnable"].empty()) {
      missWorkerEnable = make_shared<bool>(boost::any_cast<bool>(m["MissWorkerEnable"]));
    }
    if (m.find("SendChannel") != m.end() && !m["SendChannel"].empty()) {
      sendChannel = make_shared<string>(boost::any_cast<string>(m["SendChannel"]));
    }
    if (m.find("SuccessNotice") != m.end() && !m["SuccessNotice"].empty()) {
      successNotice = make_shared<bool>(boost::any_cast<bool>(m["SuccessNotice"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutEnable") != m.end() && !m["TimeoutEnable"].empty()) {
      timeoutEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutEnable"]));
    }
    if (m.find("TimeoutKillEnable") != m.end() && !m["TimeoutKillEnable"].empty()) {
      timeoutKillEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutKillEnable"]));
    }
  }


  virtual ~CreateJobRequestNoticeConfig() = default;
};
class CreateJobRequestNoticeContacts : public Darabonba::Model {
public:
  shared_ptr<long> contactType{};
  shared_ptr<string> name{};

  CreateJobRequestNoticeContacts() {}

  explicit CreateJobRequestNoticeContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactType) {
      res["ContactType"] = boost::any(*contactType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactType") != m.end() && !m["ContactType"].empty()) {
      contactType = make_shared<long>(boost::any_cast<long>(m["ContactType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateJobRequestNoticeContacts() = default;
};
class CreateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> calendar{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<long> executorBlockStrategy{};
  shared_ptr<string> jobHandler{};
  shared_ptr<string> jobType{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<CreateJobRequestNoticeConfig> noticeConfig{};
  shared_ptr<vector<CreateJobRequestNoticeContacts>> noticeContacts{};
  shared_ptr<string> parameters{};
  shared_ptr<long> priority{};
  shared_ptr<long> routeStrategy{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<string> timezone{};

  CreateJobRequest() {}

  explicit CreateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executorBlockStrategy) {
      res["ExecutorBlockStrategy"] = boost::any(*executorBlockStrategy);
    }
    if (jobHandler) {
      res["JobHandler"] = boost::any(*jobHandler);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noticeConfig) {
      res["NoticeConfig"] = noticeConfig ? boost::any(noticeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (noticeContacts) {
      vector<boost::any> temp1;
      for(auto item1:*noticeContacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeContacts"] = boost::any(temp1);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (routeStrategy) {
      res["RouteStrategy"] = boost::any(*routeStrategy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutorBlockStrategy") != m.end() && !m["ExecutorBlockStrategy"].empty()) {
      executorBlockStrategy = make_shared<long>(boost::any_cast<long>(m["ExecutorBlockStrategy"]));
    }
    if (m.find("JobHandler") != m.end() && !m["JobHandler"].empty()) {
      jobHandler = make_shared<string>(boost::any_cast<string>(m["JobHandler"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoticeConfig") != m.end() && !m["NoticeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["NoticeConfig"].type()) {
        CreateJobRequestNoticeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NoticeConfig"]));
        noticeConfig = make_shared<CreateJobRequestNoticeConfig>(model1);
      }
    }
    if (m.find("NoticeContacts") != m.end() && !m["NoticeContacts"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeContacts"].type()) {
        vector<CreateJobRequestNoticeContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeContacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestNoticeContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeContacts = make_shared<vector<CreateJobRequestNoticeContacts>>(expect1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RouteStrategy") != m.end() && !m["RouteStrategy"].empty()) {
      routeStrategy = make_shared<long>(boost::any_cast<long>(m["RouteStrategy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
  }


  virtual ~CreateJobRequest() = default;
};
class CreateJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> calendar{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<long> executorBlockStrategy{};
  shared_ptr<string> jobHandler{};
  shared_ptr<string> jobType{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<string> noticeConfigShrink{};
  shared_ptr<string> noticeContactsShrink{};
  shared_ptr<string> parameters{};
  shared_ptr<long> priority{};
  shared_ptr<long> routeStrategy{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<string> timezone{};

  CreateJobShrinkRequest() {}

  explicit CreateJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executorBlockStrategy) {
      res["ExecutorBlockStrategy"] = boost::any(*executorBlockStrategy);
    }
    if (jobHandler) {
      res["JobHandler"] = boost::any(*jobHandler);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noticeConfigShrink) {
      res["NoticeConfig"] = boost::any(*noticeConfigShrink);
    }
    if (noticeContactsShrink) {
      res["NoticeContacts"] = boost::any(*noticeContactsShrink);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (routeStrategy) {
      res["RouteStrategy"] = boost::any(*routeStrategy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutorBlockStrategy") != m.end() && !m["ExecutorBlockStrategy"].empty()) {
      executorBlockStrategy = make_shared<long>(boost::any_cast<long>(m["ExecutorBlockStrategy"]));
    }
    if (m.find("JobHandler") != m.end() && !m["JobHandler"].empty()) {
      jobHandler = make_shared<string>(boost::any_cast<string>(m["JobHandler"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoticeConfig") != m.end() && !m["NoticeConfig"].empty()) {
      noticeConfigShrink = make_shared<string>(boost::any_cast<string>(m["NoticeConfig"]));
    }
    if (m.find("NoticeContacts") != m.end() && !m["NoticeContacts"].empty()) {
      noticeContactsShrink = make_shared<string>(boost::any_cast<string>(m["NoticeContacts"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RouteStrategy") != m.end() && !m["RouteStrategy"].empty()) {
      routeStrategy = make_shared<long>(boost::any_cast<long>(m["RouteStrategy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
  }


  virtual ~CreateJobShrinkRequest() = default;
};
class CreateJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  CreateJobResponseBodyData() {}

  explicit CreateJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~CreateJobResponseBodyData() = default;
};
class CreateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateJobResponseBody() {}

  explicit CreateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateJobResponseBodyData>(model1);
      }
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


  virtual ~CreateJobResponseBody() = default;
};
class CreateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateJobResponseBody> body{};

  CreateJobResponse() {}

  explicit CreateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~DeleteClusterResponseBody() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class DeleteJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<vector<long>> jobIds{};

  DeleteJobsRequest() {}

  explicit DeleteJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["JobIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      jobIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DeleteJobsRequest() = default;
};
class DeleteJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobIdsShrink{};

  DeleteJobsShrinkRequest() {}

  explicit DeleteJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIdsShrink) {
      res["JobIds"] = boost::any(*jobIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      jobIdsShrink = make_shared<string>(boost::any_cast<string>(m["JobIds"]));
    }
  }


  virtual ~DeleteJobsShrinkRequest() = default;
};
class DeleteJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteJobsResponseBody() {}

  explicit DeleteJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~DeleteJobsResponseBody() = default;
};
class DeleteJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteJobsResponseBody> body{};

  DeleteJobsResponse() {}

  explicit DeleteJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobsResponse() = default;
};
class ExportJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> exportJobType{};
  shared_ptr<vector<long>> jobIds{};

  ExportJobsRequest() {}

  explicit ExportJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (exportJobType) {
      res["ExportJobType"] = boost::any(*exportJobType);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ExportJobType") != m.end() && !m["ExportJobType"].empty()) {
      exportJobType = make_shared<long>(boost::any_cast<long>(m["ExportJobType"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["JobIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      jobIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ExportJobsRequest() = default;
};
class ExportJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> exportJobType{};
  shared_ptr<string> jobIdsShrink{};

  ExportJobsShrinkRequest() {}

  explicit ExportJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (exportJobType) {
      res["ExportJobType"] = boost::any(*exportJobType);
    }
    if (jobIdsShrink) {
      res["JobIds"] = boost::any(*jobIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ExportJobType") != m.end() && !m["ExportJobType"].empty()) {
      exportJobType = make_shared<long>(boost::any_cast<long>(m["ExportJobType"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      jobIdsShrink = make_shared<string>(boost::any_cast<string>(m["JobIds"]));
    }
  }


  virtual ~ExportJobsShrinkRequest() = default;
};
class ExportJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<uint8_t>> body{};

  ExportJobsResponse() {}

  explicit ExportJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["body"]));
    }
  }


  virtual ~ExportJobsResponse() = default;
};
class GetClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  GetClusterRequest() {}

  explicit GetClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~GetClusterRequest() = default;
};
class GetClusterResponseBodyDataVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  GetClusterResponseBodyDataVSwitches() {}

  explicit GetClusterResponseBodyDataVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetClusterResponseBodyDataVSwitches() = default;
};
class GetClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> engineType{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> internetDomain{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<long> jobNum{};
  shared_ptr<string> kubeConfig{};
  shared_ptr<long> maxJobNum{};
  shared_ptr<long> productType{};
  shared_ptr<long> spm{};
  shared_ptr<long> status{};
  shared_ptr<vector<GetClusterResponseBodyDataVSwitches>> vSwitches{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> workerNum{};
  shared_ptr<vector<string>> zones{};

  GetClusterResponseBodyData() {}

  explicit GetClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (jobNum) {
      res["JobNum"] = boost::any(*jobNum);
    }
    if (kubeConfig) {
      res["KubeConfig"] = boost::any(*kubeConfig);
    }
    if (maxJobNum) {
      res["MaxJobNum"] = boost::any(*maxJobNum);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (spm) {
      res["Spm"] = boost::any(*spm);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    if (zones) {
      res["Zones"] = boost::any(*zones);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("JobNum") != m.end() && !m["JobNum"].empty()) {
      jobNum = make_shared<long>(boost::any_cast<long>(m["JobNum"]));
    }
    if (m.find("KubeConfig") != m.end() && !m["KubeConfig"].empty()) {
      kubeConfig = make_shared<string>(boost::any_cast<string>(m["KubeConfig"]));
    }
    if (m.find("MaxJobNum") != m.end() && !m["MaxJobNum"].empty()) {
      maxJobNum = make_shared<long>(boost::any_cast<long>(m["MaxJobNum"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["ProductType"]));
    }
    if (m.find("Spm") != m.end() && !m["Spm"].empty()) {
      spm = make_shared<long>(boost::any_cast<long>(m["Spm"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<GetClusterResponseBodyDataVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterResponseBodyDataVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<GetClusterResponseBodyDataVSwitches>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Zones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zones = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetClusterResponseBodyData() = default;
};
class GetClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetClusterResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetClusterResponseBody() {}

  explicit GetClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetClusterResponseBodyData>(model1);
      }
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


  virtual ~GetClusterResponseBody() = default;
};
class GetClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterResponseBody> body{};

  GetClusterResponse() {}

  explicit GetClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterResponse() = default;
};
class GetDesigateInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> jobId{};

  GetDesigateInfoRequest() {}

  explicit GetDesigateInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~GetDesigateInfoRequest() = default;
};
class GetDesigateInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> designateType{};
  shared_ptr<bool> transferable{};

  GetDesigateInfoResponseBodyData() {}

  explicit GetDesigateInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (designateType) {
      res["DesignateType"] = boost::any(*designateType);
    }
    if (transferable) {
      res["Transferable"] = boost::any(*transferable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesignateType") != m.end() && !m["DesignateType"].empty()) {
      designateType = make_shared<long>(boost::any_cast<long>(m["DesignateType"]));
    }
    if (m.find("Transferable") != m.end() && !m["Transferable"].empty()) {
      transferable = make_shared<bool>(boost::any_cast<bool>(m["Transferable"]));
    }
  }


  virtual ~GetDesigateInfoResponseBodyData() = default;
};
class GetDesigateInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetDesigateInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDesigateInfoResponseBody() {}

  explicit GetDesigateInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDesigateInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDesigateInfoResponseBodyData>(model1);
      }
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


  virtual ~GetDesigateInfoResponseBody() = default;
};
class GetDesigateInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDesigateInfoResponseBody> body{};

  GetDesigateInfoResponse() {}

  explicit GetDesigateInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDesigateInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDesigateInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDesigateInfoResponse() = default;
};
class GetJobExecutionProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobExecutionId{};

  GetJobExecutionProgressRequest() {}

  explicit GetJobExecutionProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
  }


  virtual ~GetJobExecutionProgressRequest() = default;
};
class GetJobExecutionProgressResponseBodyDataRootProgress : public Darabonba::Model {
public:
  shared_ptr<long> finished{};
  shared_ptr<long> total{};

  GetJobExecutionProgressResponseBodyDataRootProgress() {}

  explicit GetJobExecutionProgressResponseBodyDataRootProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<long>(boost::any_cast<long>(m["Finished"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetJobExecutionProgressResponseBodyDataRootProgress() = default;
};
class GetJobExecutionProgressResponseBodyDataShardingProgressStatusType : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> tips{};

  GetJobExecutionProgressResponseBodyDataShardingProgressStatusType() {}

  explicit GetJobExecutionProgressResponseBodyDataShardingProgressStatusType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Tips"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tips = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetJobExecutionProgressResponseBodyDataShardingProgressStatusType() = default;
};
class GetJobExecutionProgressResponseBodyDataShardingProgress : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<string> result{};
  shared_ptr<long> status{};
  shared_ptr<GetJobExecutionProgressResponseBodyDataShardingProgressStatusType> statusType{};
  shared_ptr<string> workerAddr{};

  GetJobExecutionProgressResponseBodyDataShardingProgress() {}

  explicit GetJobExecutionProgressResponseBodyDataShardingProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusType) {
      res["StatusType"] = statusType ? boost::any(statusType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workerAddr) {
      res["WorkerAddr"] = boost::any(*workerAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusType") != m.end() && !m["StatusType"].empty()) {
      if (typeid(map<string, boost::any>) == m["StatusType"].type()) {
        GetJobExecutionProgressResponseBodyDataShardingProgressStatusType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StatusType"]));
        statusType = make_shared<GetJobExecutionProgressResponseBodyDataShardingProgressStatusType>(model1);
      }
    }
    if (m.find("WorkerAddr") != m.end() && !m["WorkerAddr"].empty()) {
      workerAddr = make_shared<string>(boost::any_cast<string>(m["WorkerAddr"]));
    }
  }


  virtual ~GetJobExecutionProgressResponseBodyDataShardingProgress() = default;
};
class GetJobExecutionProgressResponseBodyDataTaskProgress : public Darabonba::Model {
public:
  shared_ptr<long> failed{};
  shared_ptr<string> name{};
  shared_ptr<long> pulled{};
  shared_ptr<long> queue{};
  shared_ptr<long> running{};
  shared_ptr<long> success{};
  shared_ptr<long> total{};

  GetJobExecutionProgressResponseBodyDataTaskProgress() {}

  explicit GetJobExecutionProgressResponseBodyDataTaskProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failed) {
      res["Failed"] = boost::any(*failed);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pulled) {
      res["Pulled"] = boost::any(*pulled);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    if (running) {
      res["Running"] = boost::any(*running);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Failed") != m.end() && !m["Failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["Failed"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Pulled") != m.end() && !m["Pulled"].empty()) {
      pulled = make_shared<long>(boost::any_cast<long>(m["Pulled"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<long>(boost::any_cast<long>(m["Queue"]));
    }
    if (m.find("Running") != m.end() && !m["Running"].empty()) {
      running = make_shared<long>(boost::any_cast<long>(m["Running"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetJobExecutionProgressResponseBodyDataTaskProgress() = default;
};
class GetJobExecutionProgressResponseBodyDataTotalProgress : public Darabonba::Model {
public:
  shared_ptr<long> finished{};
  shared_ptr<long> total{};

  GetJobExecutionProgressResponseBodyDataTotalProgress() {}

  explicit GetJobExecutionProgressResponseBodyDataTotalProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finished) {
      res["Finished"] = boost::any(*finished);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Finished") != m.end() && !m["Finished"].empty()) {
      finished = make_shared<long>(boost::any_cast<long>(m["Finished"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetJobExecutionProgressResponseBodyDataTotalProgress() = default;
};
class GetJobExecutionProgressResponseBodyDataWorkerProgress : public Darabonba::Model {
public:
  shared_ptr<long> failed{};
  shared_ptr<long> pulled{};
  shared_ptr<long> queue{};
  shared_ptr<long> running{};
  shared_ptr<long> success{};
  shared_ptr<long> total{};
  shared_ptr<string> traceId{};
  shared_ptr<string> workerAddr{};

  GetJobExecutionProgressResponseBodyDataWorkerProgress() {}

  explicit GetJobExecutionProgressResponseBodyDataWorkerProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failed) {
      res["Failed"] = boost::any(*failed);
    }
    if (pulled) {
      res["Pulled"] = boost::any(*pulled);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    if (running) {
      res["Running"] = boost::any(*running);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (workerAddr) {
      res["WorkerAddr"] = boost::any(*workerAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Failed") != m.end() && !m["Failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["Failed"]));
    }
    if (m.find("Pulled") != m.end() && !m["Pulled"].empty()) {
      pulled = make_shared<long>(boost::any_cast<long>(m["Pulled"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<long>(boost::any_cast<long>(m["Queue"]));
    }
    if (m.find("Running") != m.end() && !m["Running"].empty()) {
      running = make_shared<long>(boost::any_cast<long>(m["Running"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("WorkerAddr") != m.end() && !m["WorkerAddr"].empty()) {
      workerAddr = make_shared<string>(boost::any_cast<string>(m["WorkerAddr"]));
    }
  }


  virtual ~GetJobExecutionProgressResponseBodyDataWorkerProgress() = default;
};
class GetJobExecutionProgressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobDescription{};
  shared_ptr<GetJobExecutionProgressResponseBodyDataRootProgress> rootProgress{};
  shared_ptr<vector<GetJobExecutionProgressResponseBodyDataShardingProgress>> shardingProgress{};
  shared_ptr<vector<GetJobExecutionProgressResponseBodyDataTaskProgress>> taskProgress{};
  shared_ptr<GetJobExecutionProgressResponseBodyDataTotalProgress> totalProgress{};
  shared_ptr<vector<GetJobExecutionProgressResponseBodyDataWorkerProgress>> workerProgress{};

  GetJobExecutionProgressResponseBodyData() {}

  explicit GetJobExecutionProgressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobDescription) {
      res["JobDescription"] = boost::any(*jobDescription);
    }
    if (rootProgress) {
      res["RootProgress"] = rootProgress ? boost::any(rootProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (shardingProgress) {
      vector<boost::any> temp1;
      for(auto item1:*shardingProgress){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShardingProgress"] = boost::any(temp1);
    }
    if (taskProgress) {
      vector<boost::any> temp1;
      for(auto item1:*taskProgress){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskProgress"] = boost::any(temp1);
    }
    if (totalProgress) {
      res["TotalProgress"] = totalProgress ? boost::any(totalProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workerProgress) {
      vector<boost::any> temp1;
      for(auto item1:*workerProgress){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkerProgress"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobDescription") != m.end() && !m["JobDescription"].empty()) {
      jobDescription = make_shared<string>(boost::any_cast<string>(m["JobDescription"]));
    }
    if (m.find("RootProgress") != m.end() && !m["RootProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["RootProgress"].type()) {
        GetJobExecutionProgressResponseBodyDataRootProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RootProgress"]));
        rootProgress = make_shared<GetJobExecutionProgressResponseBodyDataRootProgress>(model1);
      }
    }
    if (m.find("ShardingProgress") != m.end() && !m["ShardingProgress"].empty()) {
      if (typeid(vector<boost::any>) == m["ShardingProgress"].type()) {
        vector<GetJobExecutionProgressResponseBodyDataShardingProgress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShardingProgress"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobExecutionProgressResponseBodyDataShardingProgress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shardingProgress = make_shared<vector<GetJobExecutionProgressResponseBodyDataShardingProgress>>(expect1);
      }
    }
    if (m.find("TaskProgress") != m.end() && !m["TaskProgress"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskProgress"].type()) {
        vector<GetJobExecutionProgressResponseBodyDataTaskProgress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskProgress"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobExecutionProgressResponseBodyDataTaskProgress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskProgress = make_shared<vector<GetJobExecutionProgressResponseBodyDataTaskProgress>>(expect1);
      }
    }
    if (m.find("TotalProgress") != m.end() && !m["TotalProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalProgress"].type()) {
        GetJobExecutionProgressResponseBodyDataTotalProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalProgress"]));
        totalProgress = make_shared<GetJobExecutionProgressResponseBodyDataTotalProgress>(model1);
      }
    }
    if (m.find("WorkerProgress") != m.end() && !m["WorkerProgress"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkerProgress"].type()) {
        vector<GetJobExecutionProgressResponseBodyDataWorkerProgress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkerProgress"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobExecutionProgressResponseBodyDataWorkerProgress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workerProgress = make_shared<vector<GetJobExecutionProgressResponseBodyDataWorkerProgress>>(expect1);
      }
    }
  }


  virtual ~GetJobExecutionProgressResponseBodyData() = default;
};
class GetJobExecutionProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetJobExecutionProgressResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetJobExecutionProgressResponseBody() {}

  explicit GetJobExecutionProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetJobExecutionProgressResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetJobExecutionProgressResponseBodyData>(model1);
      }
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


  virtual ~GetJobExecutionProgressResponseBody() = default;
};
class GetJobExecutionProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobExecutionProgressResponseBody> body{};

  GetJobExecutionProgressResponse() {}

  explicit GetJobExecutionProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobExecutionProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobExecutionProgressResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobExecutionProgressResponse() = default;
};
class GetLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> level{};
  shared_ptr<long> lineNum{};
  shared_ptr<long> logId{};
  shared_ptr<long> offset{};
  shared_ptr<bool> reverse{};
  shared_ptr<long> startTime{};

  GetLogRequest() {}

  explicit GetLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (lineNum) {
      res["LineNum"] = boost::any(*lineNum);
    }
    if (logId) {
      res["LogId"] = boost::any(*logId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("LineNum") != m.end() && !m["LineNum"].empty()) {
      lineNum = make_shared<long>(boost::any_cast<long>(m["LineNum"]));
    }
    if (m.find("LogId") != m.end() && !m["LogId"].empty()) {
      logId = make_shared<long>(boost::any_cast<long>(m["LogId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetLogRequest() = default;
};
class GetLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetLogResponseBody() {}

  explicit GetLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
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


  virtual ~GetLogResponseBody() = default;
};
class GetLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLogResponseBody> body{};

  GetLogResponse() {}

  explicit GetLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogResponse() = default;
};
class ImportCalendarRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> months{};
  shared_ptr<string> name{};
  shared_ptr<long> year{};

  ImportCalendarRequest() {}

  explicit ImportCalendarRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (months) {
      res["Months"] = boost::any(*months);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Months") != m.end() && !m["Months"].empty()) {
      months = make_shared<string>(boost::any_cast<string>(m["Months"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~ImportCalendarRequest() = default;
};
class ImportCalendarResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ImportCalendarResponseBody() {}

  explicit ImportCalendarResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
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


  virtual ~ImportCalendarResponseBody() = default;
};
class ImportCalendarResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportCalendarResponseBody> body{};

  ImportCalendarResponse() {}

  explicit ImportCalendarResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportCalendarResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportCalendarResponseBody>(model1);
      }
    }
  }


  virtual ~ImportCalendarResponse() = default;
};
class ImportJobsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateApp{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> content{};
  shared_ptr<bool> overwrite{};

  ImportJobsRequest() {}

  explicit ImportJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateApp) {
      res["AutoCreateApp"] = boost::any(*autoCreateApp);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateApp") != m.end() && !m["AutoCreateApp"].empty()) {
      autoCreateApp = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateApp"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
  }


  virtual ~ImportJobsRequest() = default;
};
class ImportJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ImportJobsResponseBody() {}

  explicit ImportJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~ImportJobsResponseBody() = default;
};
class ImportJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportJobsResponseBody> body{};

  ImportJobsResponse() {}

  explicit ImportJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ImportJobsResponse() = default;
};
class ListAlarmEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmChannel{};
  shared_ptr<string> alarmStatus{};
  shared_ptr<string> alarmType{};
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> jobName{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<bool> reverse{};
  shared_ptr<long> startTime{};

  ListAlarmEventRequest() {}

  explicit ListAlarmEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmChannel) {
      res["AlarmChannel"] = boost::any(*alarmChannel);
    }
    if (alarmStatus) {
      res["AlarmStatus"] = boost::any(*alarmStatus);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmChannel") != m.end() && !m["AlarmChannel"].empty()) {
      alarmChannel = make_shared<string>(boost::any_cast<string>(m["AlarmChannel"]));
    }
    if (m.find("AlarmStatus") != m.end() && !m["AlarmStatus"].empty()) {
      alarmStatus = make_shared<string>(boost::any_cast<string>(m["AlarmStatus"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<string>(boost::any_cast<string>(m["AlarmType"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListAlarmEventRequest() = default;
};
class ListAlarmEventResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> alarmChannel{};
  shared_ptr<string> alarmContacts{};
  shared_ptr<string> alarmMessage{};
  shared_ptr<string> alarmStatus{};
  shared_ptr<string> alarmType{};
  shared_ptr<string> appName{};
  shared_ptr<string> jobName{};
  shared_ptr<string> time{};

  ListAlarmEventResponseBodyDataRecords() {}

  explicit ListAlarmEventResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmChannel) {
      res["AlarmChannel"] = boost::any(*alarmChannel);
    }
    if (alarmContacts) {
      res["AlarmContacts"] = boost::any(*alarmContacts);
    }
    if (alarmMessage) {
      res["AlarmMessage"] = boost::any(*alarmMessage);
    }
    if (alarmStatus) {
      res["AlarmStatus"] = boost::any(*alarmStatus);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmChannel") != m.end() && !m["AlarmChannel"].empty()) {
      alarmChannel = make_shared<string>(boost::any_cast<string>(m["AlarmChannel"]));
    }
    if (m.find("AlarmContacts") != m.end() && !m["AlarmContacts"].empty()) {
      alarmContacts = make_shared<string>(boost::any_cast<string>(m["AlarmContacts"]));
    }
    if (m.find("AlarmMessage") != m.end() && !m["AlarmMessage"].empty()) {
      alarmMessage = make_shared<string>(boost::any_cast<string>(m["AlarmMessage"]));
    }
    if (m.find("AlarmStatus") != m.end() && !m["AlarmStatus"].empty()) {
      alarmStatus = make_shared<string>(boost::any_cast<string>(m["AlarmStatus"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<string>(boost::any_cast<string>(m["AlarmType"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~ListAlarmEventResponseBodyDataRecords() = default;
};
class ListAlarmEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListAlarmEventResponseBodyDataRecords>> records{};
  shared_ptr<long> total{};

  ListAlarmEventResponseBodyData() {}

  explicit ListAlarmEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListAlarmEventResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmEventResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListAlarmEventResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListAlarmEventResponseBodyData() = default;
};
class ListAlarmEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListAlarmEventResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAlarmEventResponseBody() {}

  explicit ListAlarmEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAlarmEventResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAlarmEventResponseBodyData>(model1);
      }
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


  virtual ~ListAlarmEventResponseBody() = default;
};
class ListAlarmEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlarmEventResponseBody> body{};

  ListAlarmEventResponse() {}

  explicit ListAlarmEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlarmEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmEventResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmEventResponse() = default;
};
class ListAppNamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};

  ListAppNamesRequest() {}

  explicit ListAppNamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ListAppNamesRequest() = default;
};
class ListAppNamesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appGroupId{};
  shared_ptr<string> appName{};
  shared_ptr<long> id{};
  shared_ptr<string> title{};

  ListAppNamesResponseBodyData() {}

  explicit ListAppNamesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appGroupId) {
      res["AppGroupId"] = boost::any(*appGroupId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
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
    if (m.find("AppGroupId") != m.end() && !m["AppGroupId"].empty()) {
      appGroupId = make_shared<string>(boost::any_cast<string>(m["AppGroupId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListAppNamesResponseBodyData() = default;
};
class ListAppNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListAppNamesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAppNamesResponseBody() {}

  explicit ListAppNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAppNamesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppNamesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAppNamesResponseBodyData>>(expect1);
      }
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


  virtual ~ListAppNamesResponseBody() = default;
};
class ListAppNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppNamesResponseBody> body{};

  ListAppNamesResponse() {}

  explicit ListAppNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppNamesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppNamesResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> title{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> appName{};
  shared_ptr<string> creator{};
  shared_ptr<bool> enableLog{};
  shared_ptr<long> executorNum{};
  shared_ptr<long> id{};
  shared_ptr<long> jobNum{};
  shared_ptr<string> leader{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<long> maxJobs{};
  shared_ptr<string> title{};
  shared_ptr<string> updater{};

  ListAppsResponseBodyDataRecords() {}

  explicit ListAppsResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (enableLog) {
      res["EnableLog"] = boost::any(*enableLog);
    }
    if (executorNum) {
      res["ExecutorNum"] = boost::any(*executorNum);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (jobNum) {
      res["JobNum"] = boost::any(*jobNum);
    }
    if (leader) {
      res["Leader"] = boost::any(*leader);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (maxJobs) {
      res["MaxJobs"] = boost::any(*maxJobs);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updater) {
      res["Updater"] = boost::any(*updater);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("EnableLog") != m.end() && !m["EnableLog"].empty()) {
      enableLog = make_shared<bool>(boost::any_cast<bool>(m["EnableLog"]));
    }
    if (m.find("ExecutorNum") != m.end() && !m["ExecutorNum"].empty()) {
      executorNum = make_shared<long>(boost::any_cast<long>(m["ExecutorNum"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("JobNum") != m.end() && !m["JobNum"].empty()) {
      jobNum = make_shared<long>(boost::any_cast<long>(m["JobNum"]));
    }
    if (m.find("Leader") != m.end() && !m["Leader"].empty()) {
      leader = make_shared<string>(boost::any_cast<string>(m["Leader"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("MaxJobs") != m.end() && !m["MaxJobs"].empty()) {
      maxJobs = make_shared<long>(boost::any_cast<long>(m["MaxJobs"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Updater") != m.end() && !m["Updater"].empty()) {
      updater = make_shared<string>(boost::any_cast<string>(m["Updater"]));
    }
  }


  virtual ~ListAppsResponseBodyDataRecords() = default;
};
class ListAppsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListAppsResponseBodyDataRecords>> records{};
  shared_ptr<long> total{};

  ListAppsResponseBodyData() {}

  explicit ListAppsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListAppsResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListAppsResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListAppsResponseBodyData() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListAppsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAppsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAppsResponseBodyData>(model1);
      }
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


  virtual ~ListAppsResponseBody() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppsResponseBody> body{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListCalendarNamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  ListCalendarNamesRequest() {}

  explicit ListCalendarNamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ListCalendarNamesRequest() = default;
};
class ListCalendarNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCalendarNamesResponseBody() {}

  explicit ListCalendarNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
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


  virtual ~ListCalendarNamesResponseBody() = default;
};
class ListCalendarNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCalendarNamesResponseBody> body{};

  ListCalendarNamesResponse() {}

  explicit ListCalendarNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCalendarNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCalendarNamesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCalendarNamesResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyDataRecordsVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  ListClustersResponseBodyDataRecordsVSwitches() {}

  explicit ListClustersResponseBodyDataRecordsVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListClustersResponseBodyDataRecordsVSwitches() = default;
};
class ListClustersResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> engineType{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> internetDomain{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<long> productType{};
  shared_ptr<string> spInstanceId{};
  shared_ptr<long> status{};
  shared_ptr<vector<ListClustersResponseBodyDataRecordsVSwitches>> vSwitches{};
  shared_ptr<string> vpcId{};

  ListClustersResponseBodyDataRecords() {}

  explicit ListClustersResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (spInstanceId) {
      res["SpInstanceId"] = boost::any(*spInstanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["ProductType"]));
    }
    if (m.find("SpInstanceId") != m.end() && !m["SpInstanceId"].empty()) {
      spInstanceId = make_shared<string>(boost::any_cast<string>(m["SpInstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<ListClustersResponseBodyDataRecordsVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyDataRecordsVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<ListClustersResponseBodyDataRecordsVSwitches>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListClustersResponseBodyDataRecords() = default;
};
class ListClustersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListClustersResponseBodyDataRecords>> records{};
  shared_ptr<long> total{};

  ListClustersResponseBodyData() {}

  explicit ListClustersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListClustersResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListClustersResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListClustersResponseBodyData() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListClustersResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListClustersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListClustersResponseBodyData>(model1);
      }
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


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListExecutorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> label{};

  ListExecutorsRequest() {}

  explicit ListExecutorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
  }


  virtual ~ListExecutorsRequest() = default;
};
class ListExecutorsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> ip{};
  shared_ptr<bool> isDesignated{};
  shared_ptr<string> label{};
  shared_ptr<bool> online{};
  shared_ptr<long> port{};
  shared_ptr<string> version{};

  ListExecutorsResponseBodyData() {}

  explicit ListExecutorsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isDesignated) {
      res["IsDesignated"] = boost::any(*isDesignated);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IsDesignated") != m.end() && !m["IsDesignated"].empty()) {
      isDesignated = make_shared<bool>(boost::any_cast<bool>(m["IsDesignated"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListExecutorsResponseBodyData() = default;
};
class ListExecutorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListExecutorsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListExecutorsResponseBody() {}

  explicit ListExecutorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListExecutorsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExecutorsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListExecutorsResponseBodyData>>(expect1);
      }
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


  virtual ~ListExecutorsResponseBody() = default;
};
class ListExecutorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExecutorsResponseBody> body{};

  ListExecutorsResponse() {}

  explicit ListExecutorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExecutorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExecutorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExecutorsResponse() = default;
};
class ListJobExecutionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};

  ListJobExecutionsRequest() {}

  explicit ListJobExecutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListJobExecutionsRequest() = default;
};
class ListJobExecutionsResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> attempt{};
  shared_ptr<string> dataTime{};
  shared_ptr<long> duration{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executor{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobType{};
  shared_ptr<string> parameters{};
  shared_ptr<string> result{};
  shared_ptr<long> routeStrategy{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> serverIp{};
  shared_ptr<long> status{};
  shared_ptr<long> timeType{};
  shared_ptr<long> triggerType{};
  shared_ptr<string> workAddr{};

  ListJobExecutionsResponseBodyDataRecords() {}

  explicit ListJobExecutionsResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (attempt) {
      res["Attempt"] = boost::any(*attempt);
    }
    if (dataTime) {
      res["DataTime"] = boost::any(*dataTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executor) {
      res["Executor"] = boost::any(*executor);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (routeStrategy) {
      res["RouteStrategy"] = boost::any(*routeStrategy);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (workAddr) {
      res["WorkAddr"] = boost::any(*workAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Attempt") != m.end() && !m["Attempt"].empty()) {
      attempt = make_shared<long>(boost::any_cast<long>(m["Attempt"]));
    }
    if (m.find("DataTime") != m.end() && !m["DataTime"].empty()) {
      dataTime = make_shared<string>(boost::any_cast<string>(m["DataTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      executor = make_shared<string>(boost::any_cast<string>(m["Executor"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RouteStrategy") != m.end() && !m["RouteStrategy"].empty()) {
      routeStrategy = make_shared<long>(boost::any_cast<long>(m["RouteStrategy"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<long>(boost::any_cast<long>(m["TriggerType"]));
    }
    if (m.find("WorkAddr") != m.end() && !m["WorkAddr"].empty()) {
      workAddr = make_shared<string>(boost::any_cast<string>(m["WorkAddr"]));
    }
  }


  virtual ~ListJobExecutionsResponseBodyDataRecords() = default;
};
class ListJobExecutionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListJobExecutionsResponseBodyDataRecords>> records{};
  shared_ptr<long> total{};

  ListJobExecutionsResponseBodyData() {}

  explicit ListJobExecutionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListJobExecutionsResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobExecutionsResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListJobExecutionsResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListJobExecutionsResponseBodyData() = default;
};
class ListJobExecutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListJobExecutionsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListJobExecutionsResponseBody() {}

  explicit ListJobExecutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListJobExecutionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListJobExecutionsResponseBodyData>(model1);
      }
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


  virtual ~ListJobExecutionsResponseBody() = default;
};
class ListJobExecutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobExecutionsResponseBody> body{};

  ListJobExecutionsResponse() {}

  explicit ListJobExecutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJobExecutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobExecutionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobExecutionsResponse() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<string> jobHandler{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jobHandler) {
      res["JobHandler"] = boost::any(*jobHandler);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JobHandler") != m.end() && !m["JobHandler"].empty()) {
      jobHandler = make_shared<string>(boost::any_cast<string>(m["JobHandler"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> calendar{};
  shared_ptr<string> cleanMode{};
  shared_ptr<string> creator{};
  shared_ptr<long> currentExecuteStatus{};
  shared_ptr<long> dataOffset{};
  shared_ptr<string> description{};
  shared_ptr<string> executorBlockStrategy{};
  shared_ptr<string> jobHandler{};
  shared_ptr<long> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> lastExecuteEndTime{};
  shared_ptr<long> lastExecuteStatus{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<string> noticeConfig{};
  shared_ptr<string> noticeContacts{};
  shared_ptr<string> parameters{};
  shared_ptr<long> priority{};
  shared_ptr<long> routeStrategy{};
  shared_ptr<long> status{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> timezone{};
  shared_ptr<string> updater{};
  shared_ptr<string> xattrs{};

  ListJobsResponseBodyDataRecords() {}

  explicit ListJobsResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (cleanMode) {
      res["CleanMode"] = boost::any(*cleanMode);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (currentExecuteStatus) {
      res["CurrentExecuteStatus"] = boost::any(*currentExecuteStatus);
    }
    if (dataOffset) {
      res["DataOffset"] = boost::any(*dataOffset);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executorBlockStrategy) {
      res["ExecutorBlockStrategy"] = boost::any(*executorBlockStrategy);
    }
    if (jobHandler) {
      res["JobHandler"] = boost::any(*jobHandler);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (lastExecuteEndTime) {
      res["LastExecuteEndTime"] = boost::any(*lastExecuteEndTime);
    }
    if (lastExecuteStatus) {
      res["LastExecuteStatus"] = boost::any(*lastExecuteStatus);
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noticeConfig) {
      res["NoticeConfig"] = boost::any(*noticeConfig);
    }
    if (noticeContacts) {
      res["NoticeContacts"] = boost::any(*noticeContacts);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (routeStrategy) {
      res["RouteStrategy"] = boost::any(*routeStrategy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (updater) {
      res["Updater"] = boost::any(*updater);
    }
    if (xattrs) {
      res["Xattrs"] = boost::any(*xattrs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("CleanMode") != m.end() && !m["CleanMode"].empty()) {
      cleanMode = make_shared<string>(boost::any_cast<string>(m["CleanMode"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CurrentExecuteStatus") != m.end() && !m["CurrentExecuteStatus"].empty()) {
      currentExecuteStatus = make_shared<long>(boost::any_cast<long>(m["CurrentExecuteStatus"]));
    }
    if (m.find("DataOffset") != m.end() && !m["DataOffset"].empty()) {
      dataOffset = make_shared<long>(boost::any_cast<long>(m["DataOffset"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutorBlockStrategy") != m.end() && !m["ExecutorBlockStrategy"].empty()) {
      executorBlockStrategy = make_shared<string>(boost::any_cast<string>(m["ExecutorBlockStrategy"]));
    }
    if (m.find("JobHandler") != m.end() && !m["JobHandler"].empty()) {
      jobHandler = make_shared<string>(boost::any_cast<string>(m["JobHandler"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("LastExecuteEndTime") != m.end() && !m["LastExecuteEndTime"].empty()) {
      lastExecuteEndTime = make_shared<string>(boost::any_cast<string>(m["LastExecuteEndTime"]));
    }
    if (m.find("LastExecuteStatus") != m.end() && !m["LastExecuteStatus"].empty()) {
      lastExecuteStatus = make_shared<long>(boost::any_cast<long>(m["LastExecuteStatus"]));
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoticeConfig") != m.end() && !m["NoticeConfig"].empty()) {
      noticeConfig = make_shared<string>(boost::any_cast<string>(m["NoticeConfig"]));
    }
    if (m.find("NoticeContacts") != m.end() && !m["NoticeContacts"].empty()) {
      noticeContacts = make_shared<string>(boost::any_cast<string>(m["NoticeContacts"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RouteStrategy") != m.end() && !m["RouteStrategy"].empty()) {
      routeStrategy = make_shared<long>(boost::any_cast<long>(m["RouteStrategy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("Updater") != m.end() && !m["Updater"].empty()) {
      updater = make_shared<string>(boost::any_cast<string>(m["Updater"]));
    }
    if (m.find("Xattrs") != m.end() && !m["Xattrs"].empty()) {
      xattrs = make_shared<string>(boost::any_cast<string>(m["Xattrs"]));
    }
  }


  virtual ~ListJobsResponseBodyDataRecords() = default;
};
class ListJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListJobsResponseBodyDataRecords>> records{};
  shared_ptr<long> total{};

  ListJobsResponseBodyData() {}

  explicit ListJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListJobsResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListJobsResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListJobsResponseBodyData() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListJobsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListJobsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListJobsResponseBodyData>(model1);
      }
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


  virtual ~ListJobsResponseBody() = default;
};
class ListJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobsResponse() = default;
};
class ListLablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> jobId{};

  ListLablesRequest() {}

  explicit ListLablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~ListLablesRequest() = default;
};
class ListLablesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isDesignated{};
  shared_ptr<string> label{};
  shared_ptr<bool> online{};
  shared_ptr<long> size{};

  ListLablesResponseBodyData() {}

  explicit ListLablesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDesignated) {
      res["IsDesignated"] = boost::any(*isDesignated);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDesignated") != m.end() && !m["IsDesignated"].empty()) {
      isDesignated = make_shared<bool>(boost::any_cast<bool>(m["IsDesignated"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListLablesResponseBodyData() = default;
};
class ListLablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListLablesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListLablesResponseBody() {}

  explicit ListLablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListLablesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLablesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListLablesResponseBodyData>>(expect1);
      }
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


  virtual ~ListLablesResponseBody() = default;
};
class ListLablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLablesResponseBody> body{};

  ListLablesResponse() {}

  explicit ListLablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListLablesResponse() = default;
};
class ListRegionZoneResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  ListRegionZoneResponseBodyData() {}

  explicit ListRegionZoneResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListRegionZoneResponseBodyData() = default;
};
class ListRegionZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListRegionZoneResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRegionZoneResponseBody() {}

  explicit ListRegionZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListRegionZoneResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionZoneResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRegionZoneResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~ListRegionZoneResponseBody() = default;
};
class ListRegionZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionZoneResponseBody> body{};

  ListRegionZoneResponse() {}

  explicit ListRegionZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionZoneResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionZoneResponse() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<ListRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListScheduleEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> event{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> reverse{};
  shared_ptr<long> startTime{};

  ListScheduleEventRequest() {}

  explicit ListScheduleEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListScheduleEventRequest() = default;
};
class ListScheduleEventResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> content{};
  shared_ptr<string> event{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> time{};
  shared_ptr<string> workerAddr{};

  ListScheduleEventResponseBodyDataRecords() {}

  explicit ListScheduleEventResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (workerAddr) {
      res["WorkerAddr"] = boost::any(*workerAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("WorkerAddr") != m.end() && !m["WorkerAddr"].empty()) {
      workerAddr = make_shared<string>(boost::any_cast<string>(m["WorkerAddr"]));
    }
  }


  virtual ~ListScheduleEventResponseBodyDataRecords() = default;
};
class ListScheduleEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListScheduleEventResponseBodyDataRecords>> records{};
  shared_ptr<long> total{};

  ListScheduleEventResponseBodyData() {}

  explicit ListScheduleEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListScheduleEventResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScheduleEventResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListScheduleEventResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListScheduleEventResponseBodyData() = default;
};
class ListScheduleEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListScheduleEventResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListScheduleEventResponseBody() {}

  explicit ListScheduleEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListScheduleEventResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListScheduleEventResponseBodyData>(model1);
      }
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


  virtual ~ListScheduleEventResponseBody() = default;
};
class ListScheduleEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScheduleEventResponseBody> body{};

  ListScheduleEventResponse() {}

  explicit ListScheduleEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListScheduleEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScheduleEventResponseBody>(model1);
      }
    }
  }


  virtual ~ListScheduleEventResponse() = default;
};
class ListScheduleTimesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> calendar{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<string> timeZone{};

  ListScheduleTimesRequest() {}

  explicit ListScheduleTimesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~ListScheduleTimesRequest() = default;
};
class ListScheduleTimesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListScheduleTimesResponseBody() {}

  explicit ListScheduleTimesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
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


  virtual ~ListScheduleTimesResponseBody() = default;
};
class ListScheduleTimesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScheduleTimesResponseBody> body{};

  ListScheduleTimesResponse() {}

  explicit ListScheduleTimesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListScheduleTimesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScheduleTimesResponseBody>(model1);
      }
    }
  }


  virtual ~ListScheduleTimesResponse() = default;
};
class OperateDesignateExecutorsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addressList{};
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> designateType{};
  shared_ptr<long> jobId{};
  shared_ptr<bool> transferable{};

  OperateDesignateExecutorsRequest() {}

  explicit OperateDesignateExecutorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressList) {
      res["AddressList"] = boost::any(*addressList);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (designateType) {
      res["DesignateType"] = boost::any(*designateType);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (transferable) {
      res["Transferable"] = boost::any(*transferable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressList") != m.end() && !m["AddressList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AddressList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AddressList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addressList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DesignateType") != m.end() && !m["DesignateType"].empty()) {
      designateType = make_shared<long>(boost::any_cast<long>(m["DesignateType"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Transferable") != m.end() && !m["Transferable"].empty()) {
      transferable = make_shared<bool>(boost::any_cast<bool>(m["Transferable"]));
    }
  }


  virtual ~OperateDesignateExecutorsRequest() = default;
};
class OperateDesignateExecutorsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressListShrink{};
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> designateType{};
  shared_ptr<long> jobId{};
  shared_ptr<bool> transferable{};

  OperateDesignateExecutorsShrinkRequest() {}

  explicit OperateDesignateExecutorsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressListShrink) {
      res["AddressList"] = boost::any(*addressListShrink);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (designateType) {
      res["DesignateType"] = boost::any(*designateType);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (transferable) {
      res["Transferable"] = boost::any(*transferable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressList") != m.end() && !m["AddressList"].empty()) {
      addressListShrink = make_shared<string>(boost::any_cast<string>(m["AddressList"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DesignateType") != m.end() && !m["DesignateType"].empty()) {
      designateType = make_shared<long>(boost::any_cast<long>(m["DesignateType"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Transferable") != m.end() && !m["Transferable"].empty()) {
      transferable = make_shared<bool>(boost::any_cast<bool>(m["Transferable"]));
    }
  }


  virtual ~OperateDesignateExecutorsShrinkRequest() = default;
};
class OperateDesignateExecutorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateDesignateExecutorsResponseBody() {}

  explicit OperateDesignateExecutorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~OperateDesignateExecutorsResponseBody() = default;
};
class OperateDesignateExecutorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateDesignateExecutorsResponseBody> body{};

  OperateDesignateExecutorsResponse() {}

  explicit OperateDesignateExecutorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateDesignateExecutorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateDesignateExecutorsResponseBody>(model1);
      }
    }
  }


  virtual ~OperateDesignateExecutorsResponse() = default;
};
class OperateDisableJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<vector<long>> jobIds{};

  OperateDisableJobsRequest() {}

  explicit OperateDisableJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["JobIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      jobIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~OperateDisableJobsRequest() = default;
};
class OperateDisableJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobIdsShrink{};

  OperateDisableJobsShrinkRequest() {}

  explicit OperateDisableJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIdsShrink) {
      res["JobIds"] = boost::any(*jobIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      jobIdsShrink = make_shared<string>(boost::any_cast<string>(m["JobIds"]));
    }
  }


  virtual ~OperateDisableJobsShrinkRequest() = default;
};
class OperateDisableJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateDisableJobsResponseBody() {}

  explicit OperateDisableJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~OperateDisableJobsResponseBody() = default;
};
class OperateDisableJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateDisableJobsResponseBody> body{};

  OperateDisableJobsResponse() {}

  explicit OperateDisableJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateDisableJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateDisableJobsResponseBody>(model1);
      }
    }
  }


  virtual ~OperateDisableJobsResponse() = default;
};
class OperateEnableJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<vector<long>> jobIds{};

  OperateEnableJobsRequest() {}

  explicit OperateEnableJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["JobIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      jobIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~OperateEnableJobsRequest() = default;
};
class OperateEnableJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobIdsShrink{};

  OperateEnableJobsShrinkRequest() {}

  explicit OperateEnableJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIdsShrink) {
      res["JobIds"] = boost::any(*jobIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      jobIdsShrink = make_shared<string>(boost::any_cast<string>(m["JobIds"]));
    }
  }


  virtual ~OperateEnableJobsShrinkRequest() = default;
};
class OperateEnableJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateEnableJobsResponseBody() {}

  explicit OperateEnableJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~OperateEnableJobsResponseBody() = default;
};
class OperateEnableJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateEnableJobsResponseBody> body{};

  OperateEnableJobsResponse() {}

  explicit OperateEnableJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateEnableJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateEnableJobsResponseBody>(model1);
      }
    }
  }


  virtual ~OperateEnableJobsResponse() = default;
};
class OperateExecuteJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceParameters{};
  shared_ptr<long> jobId{};
  shared_ptr<string> label{};
  shared_ptr<string> worker{};

  OperateExecuteJobRequest() {}

  explicit OperateExecuteJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceParameters) {
      res["InstanceParameters"] = boost::any(*instanceParameters);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (worker) {
      res["Worker"] = boost::any(*worker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceParameters") != m.end() && !m["InstanceParameters"].empty()) {
      instanceParameters = make_shared<string>(boost::any_cast<string>(m["InstanceParameters"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Worker") != m.end() && !m["Worker"].empty()) {
      worker = make_shared<string>(boost::any_cast<string>(m["Worker"]));
    }
  }


  virtual ~OperateExecuteJobRequest() = default;
};
class OperateExecuteJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobExecutionId{};

  OperateExecuteJobResponseBodyData() {}

  explicit OperateExecuteJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
  }


  virtual ~OperateExecuteJobResponseBodyData() = default;
};
class OperateExecuteJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<OperateExecuteJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateExecuteJobResponseBody() {}

  explicit OperateExecuteJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OperateExecuteJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OperateExecuteJobResponseBodyData>(model1);
      }
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


  virtual ~OperateExecuteJobResponseBody() = default;
};
class OperateExecuteJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateExecuteJobResponseBody> body{};

  OperateExecuteJobResponse() {}

  explicit OperateExecuteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateExecuteJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateExecuteJobResponseBody>(model1);
      }
    }
  }


  virtual ~OperateExecuteJobResponse() = default;
};
class OperateRerunJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> dataTime{};
  shared_ptr<long> endDate{};
  shared_ptr<long> jobId{};
  shared_ptr<long> startDate{};

  OperateRerunJobRequest() {}

  explicit OperateRerunJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dataTime) {
      res["DataTime"] = boost::any(*dataTime);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DataTime") != m.end() && !m["DataTime"].empty()) {
      dataTime = make_shared<string>(boost::any_cast<string>(m["DataTime"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
  }


  virtual ~OperateRerunJobRequest() = default;
};
class OperateRerunJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateRerunJobResponseBody() {}

  explicit OperateRerunJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~OperateRerunJobResponseBody() = default;
};
class OperateRerunJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateRerunJobResponseBody> body{};

  OperateRerunJobResponse() {}

  explicit OperateRerunJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateRerunJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateRerunJobResponseBody>(model1);
      }
    }
  }


  virtual ~OperateRerunJobResponse() = default;
};
class OperateRetryJobExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<vector<string>> taskList{};

  OperateRetryJobExecutionRequest() {}

  explicit OperateRetryJobExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (taskList) {
      res["TaskList"] = boost::any(*taskList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OperateRetryJobExecutionRequest() = default;
};
class OperateRetryJobExecutionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<string> taskListShrink{};

  OperateRetryJobExecutionShrinkRequest() {}

  explicit OperateRetryJobExecutionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (taskListShrink) {
      res["TaskList"] = boost::any(*taskListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      taskListShrink = make_shared<string>(boost::any_cast<string>(m["TaskList"]));
    }
  }


  virtual ~OperateRetryJobExecutionShrinkRequest() = default;
};
class OperateRetryJobExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateRetryJobExecutionResponseBody() {}

  explicit OperateRetryJobExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~OperateRetryJobExecutionResponseBody() = default;
};
class OperateRetryJobExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateRetryJobExecutionResponseBody> body{};

  OperateRetryJobExecutionResponse() {}

  explicit OperateRetryJobExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateRetryJobExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateRetryJobExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~OperateRetryJobExecutionResponse() = default;
};
class OperateStopJobExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<vector<string>> taskList{};

  OperateStopJobExecutionRequest() {}

  explicit OperateStopJobExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (taskList) {
      res["TaskList"] = boost::any(*taskList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OperateStopJobExecutionRequest() = default;
};
class OperateStopJobExecutionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobExecutionId{};
  shared_ptr<string> taskListShrink{};

  OperateStopJobExecutionShrinkRequest() {}

  explicit OperateStopJobExecutionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobExecutionId) {
      res["JobExecutionId"] = boost::any(*jobExecutionId);
    }
    if (taskListShrink) {
      res["TaskList"] = boost::any(*taskListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobExecutionId") != m.end() && !m["JobExecutionId"].empty()) {
      jobExecutionId = make_shared<string>(boost::any_cast<string>(m["JobExecutionId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      taskListShrink = make_shared<string>(boost::any_cast<string>(m["TaskList"]));
    }
  }


  virtual ~OperateStopJobExecutionShrinkRequest() = default;
};
class OperateStopJobExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateStopJobExecutionResponseBody() {}

  explicit OperateStopJobExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~OperateStopJobExecutionResponseBody() = default;
};
class OperateStopJobExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateStopJobExecutionResponseBody> body{};

  OperateStopJobExecutionResponse() {}

  explicit OperateStopJobExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateStopJobExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateStopJobExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~OperateStopJobExecutionResponse() = default;
};
class UpdateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> appName{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> enableLog{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> title{};

  UpdateAppRequest() {}

  explicit UpdateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (enableLog) {
      res["EnableLog"] = boost::any(*enableLog);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EnableLog") != m.end() && !m["EnableLog"].empty()) {
      enableLog = make_shared<bool>(boost::any_cast<bool>(m["EnableLog"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateAppRequest() = default;
};
class UpdateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAppResponseBody() {}

  explicit UpdateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~UpdateAppResponseBody() = default;
};
class UpdateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppResponseBody> body{};

  UpdateAppResponse() {}

  explicit UpdateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppResponse() = default;
};
class UpdateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};

  UpdateClusterRequest() {}

  explicit UpdateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
  }


  virtual ~UpdateClusterRequest() = default;
};
class UpdateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateClusterResponseBody() {}

  explicit UpdateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~UpdateClusterResponseBody() = default;
};
class UpdateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateClusterResponseBody> body{};

  UpdateClusterResponse() {}

  explicit UpdateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClusterResponse() = default;
};
class UpdateJobRequestNoticeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> failEnable{};
  shared_ptr<long> failLimitTimes{};
  shared_ptr<bool> missWorkerEnable{};
  shared_ptr<string> sendChannel{};
  shared_ptr<bool> successNotice{};
  shared_ptr<long> timeout{};
  shared_ptr<bool> timeoutEnable{};
  shared_ptr<bool> timeoutKillEnable{};

  UpdateJobRequestNoticeConfig() {}

  explicit UpdateJobRequestNoticeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failEnable) {
      res["FailEnable"] = boost::any(*failEnable);
    }
    if (failLimitTimes) {
      res["FailLimitTimes"] = boost::any(*failLimitTimes);
    }
    if (missWorkerEnable) {
      res["MissWorkerEnable"] = boost::any(*missWorkerEnable);
    }
    if (sendChannel) {
      res["SendChannel"] = boost::any(*sendChannel);
    }
    if (successNotice) {
      res["SuccessNotice"] = boost::any(*successNotice);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutEnable) {
      res["TimeoutEnable"] = boost::any(*timeoutEnable);
    }
    if (timeoutKillEnable) {
      res["TimeoutKillEnable"] = boost::any(*timeoutKillEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailEnable") != m.end() && !m["FailEnable"].empty()) {
      failEnable = make_shared<bool>(boost::any_cast<bool>(m["FailEnable"]));
    }
    if (m.find("FailLimitTimes") != m.end() && !m["FailLimitTimes"].empty()) {
      failLimitTimes = make_shared<long>(boost::any_cast<long>(m["FailLimitTimes"]));
    }
    if (m.find("MissWorkerEnable") != m.end() && !m["MissWorkerEnable"].empty()) {
      missWorkerEnable = make_shared<bool>(boost::any_cast<bool>(m["MissWorkerEnable"]));
    }
    if (m.find("SendChannel") != m.end() && !m["SendChannel"].empty()) {
      sendChannel = make_shared<string>(boost::any_cast<string>(m["SendChannel"]));
    }
    if (m.find("SuccessNotice") != m.end() && !m["SuccessNotice"].empty()) {
      successNotice = make_shared<bool>(boost::any_cast<bool>(m["SuccessNotice"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutEnable") != m.end() && !m["TimeoutEnable"].empty()) {
      timeoutEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutEnable"]));
    }
    if (m.find("TimeoutKillEnable") != m.end() && !m["TimeoutKillEnable"].empty()) {
      timeoutKillEnable = make_shared<bool>(boost::any_cast<bool>(m["TimeoutKillEnable"]));
    }
  }


  virtual ~UpdateJobRequestNoticeConfig() = default;
};
class UpdateJobRequestNoticeContacts : public Darabonba::Model {
public:
  shared_ptr<long> contactType{};
  shared_ptr<string> name{};

  UpdateJobRequestNoticeContacts() {}

  explicit UpdateJobRequestNoticeContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactType) {
      res["ContactType"] = boost::any(*contactType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactType") != m.end() && !m["ContactType"].empty()) {
      contactType = make_shared<long>(boost::any_cast<long>(m["ContactType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateJobRequestNoticeContacts() = default;
};
class UpdateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> calendar{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<long> executorBlockStrategy{};
  shared_ptr<string> jobHandler{};
  shared_ptr<long> jobId{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<UpdateJobRequestNoticeConfig> noticeConfig{};
  shared_ptr<vector<UpdateJobRequestNoticeContacts>> noticeContacts{};
  shared_ptr<string> parameters{};
  shared_ptr<long> priority{};
  shared_ptr<long> routeStrategy{};
  shared_ptr<long> startTime{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<string> timezone{};

  UpdateJobRequest() {}

  explicit UpdateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executorBlockStrategy) {
      res["ExecutorBlockStrategy"] = boost::any(*executorBlockStrategy);
    }
    if (jobHandler) {
      res["JobHandler"] = boost::any(*jobHandler);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noticeConfig) {
      res["NoticeConfig"] = noticeConfig ? boost::any(noticeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (noticeContacts) {
      vector<boost::any> temp1;
      for(auto item1:*noticeContacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeContacts"] = boost::any(temp1);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (routeStrategy) {
      res["RouteStrategy"] = boost::any(*routeStrategy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutorBlockStrategy") != m.end() && !m["ExecutorBlockStrategy"].empty()) {
      executorBlockStrategy = make_shared<long>(boost::any_cast<long>(m["ExecutorBlockStrategy"]));
    }
    if (m.find("JobHandler") != m.end() && !m["JobHandler"].empty()) {
      jobHandler = make_shared<string>(boost::any_cast<string>(m["JobHandler"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoticeConfig") != m.end() && !m["NoticeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["NoticeConfig"].type()) {
        UpdateJobRequestNoticeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NoticeConfig"]));
        noticeConfig = make_shared<UpdateJobRequestNoticeConfig>(model1);
      }
    }
    if (m.find("NoticeContacts") != m.end() && !m["NoticeContacts"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeContacts"].type()) {
        vector<UpdateJobRequestNoticeContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeContacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateJobRequestNoticeContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeContacts = make_shared<vector<UpdateJobRequestNoticeContacts>>(expect1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RouteStrategy") != m.end() && !m["RouteStrategy"].empty()) {
      routeStrategy = make_shared<long>(boost::any_cast<long>(m["RouteStrategy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
  }


  virtual ~UpdateJobRequest() = default;
};
class UpdateJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> attemptInterval{};
  shared_ptr<string> calendar{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<long> executorBlockStrategy{};
  shared_ptr<string> jobHandler{};
  shared_ptr<long> jobId{};
  shared_ptr<long> maxAttempt{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<string> noticeConfigShrink{};
  shared_ptr<string> noticeContactsShrink{};
  shared_ptr<string> parameters{};
  shared_ptr<long> priority{};
  shared_ptr<long> routeStrategy{};
  shared_ptr<long> startTime{};
  shared_ptr<string> timeExpression{};
  shared_ptr<long> timeType{};
  shared_ptr<string> timezone{};

  UpdateJobShrinkRequest() {}

  explicit UpdateJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (attemptInterval) {
      res["AttemptInterval"] = boost::any(*attemptInterval);
    }
    if (calendar) {
      res["Calendar"] = boost::any(*calendar);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executorBlockStrategy) {
      res["ExecutorBlockStrategy"] = boost::any(*executorBlockStrategy);
    }
    if (jobHandler) {
      res["JobHandler"] = boost::any(*jobHandler);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (maxAttempt) {
      res["MaxAttempt"] = boost::any(*maxAttempt);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noticeConfigShrink) {
      res["NoticeConfig"] = boost::any(*noticeConfigShrink);
    }
    if (noticeContactsShrink) {
      res["NoticeContacts"] = boost::any(*noticeContactsShrink);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (routeStrategy) {
      res["RouteStrategy"] = boost::any(*routeStrategy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeExpression) {
      res["TimeExpression"] = boost::any(*timeExpression);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AttemptInterval") != m.end() && !m["AttemptInterval"].empty()) {
      attemptInterval = make_shared<long>(boost::any_cast<long>(m["AttemptInterval"]));
    }
    if (m.find("Calendar") != m.end() && !m["Calendar"].empty()) {
      calendar = make_shared<string>(boost::any_cast<string>(m["Calendar"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutorBlockStrategy") != m.end() && !m["ExecutorBlockStrategy"].empty()) {
      executorBlockStrategy = make_shared<long>(boost::any_cast<long>(m["ExecutorBlockStrategy"]));
    }
    if (m.find("JobHandler") != m.end() && !m["JobHandler"].empty()) {
      jobHandler = make_shared<string>(boost::any_cast<string>(m["JobHandler"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("MaxAttempt") != m.end() && !m["MaxAttempt"].empty()) {
      maxAttempt = make_shared<long>(boost::any_cast<long>(m["MaxAttempt"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoticeConfig") != m.end() && !m["NoticeConfig"].empty()) {
      noticeConfigShrink = make_shared<string>(boost::any_cast<string>(m["NoticeConfig"]));
    }
    if (m.find("NoticeContacts") != m.end() && !m["NoticeContacts"].empty()) {
      noticeContactsShrink = make_shared<string>(boost::any_cast<string>(m["NoticeContacts"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RouteStrategy") != m.end() && !m["RouteStrategy"].empty()) {
      routeStrategy = make_shared<long>(boost::any_cast<long>(m["RouteStrategy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TimeExpression") != m.end() && !m["TimeExpression"].empty()) {
      timeExpression = make_shared<string>(boost::any_cast<string>(m["TimeExpression"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
  }


  virtual ~UpdateJobShrinkRequest() = default;
};
class UpdateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateJobResponseBody() {}

  explicit UpdateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~UpdateJobResponseBody() = default;
};
class UpdateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateJobResponseBody> body{};

  UpdateJobResponse() {}

  explicit UpdateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateJobResponse() = default;
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
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateJobResponse createJobWithOptions(shared_ptr<CreateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<CreateJobRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteJobsResponse deleteJobsWithOptions(shared_ptr<DeleteJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobsResponse deleteJobs(shared_ptr<DeleteJobsRequest> request);
  ExportJobsResponse exportJobsWithOptions(shared_ptr<ExportJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportJobsResponse exportJobs(shared_ptr<ExportJobsRequest> request);
  GetClusterResponse getClusterWithOptions(shared_ptr<GetClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterResponse getCluster(shared_ptr<GetClusterRequest> request);
  GetDesigateInfoResponse getDesigateInfoWithOptions(shared_ptr<GetDesigateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDesigateInfoResponse getDesigateInfo(shared_ptr<GetDesigateInfoRequest> request);
  GetJobExecutionProgressResponse getJobExecutionProgressWithOptions(shared_ptr<GetJobExecutionProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobExecutionProgressResponse getJobExecutionProgress(shared_ptr<GetJobExecutionProgressRequest> request);
  GetLogResponse getLogWithOptions(shared_ptr<GetLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogResponse getLog(shared_ptr<GetLogRequest> request);
  ImportCalendarResponse importCalendarWithOptions(shared_ptr<ImportCalendarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportCalendarResponse importCalendar(shared_ptr<ImportCalendarRequest> request);
  ImportJobsResponse importJobsWithOptions(shared_ptr<ImportJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportJobsResponse importJobs(shared_ptr<ImportJobsRequest> request);
  ListAlarmEventResponse listAlarmEventWithOptions(shared_ptr<ListAlarmEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmEventResponse listAlarmEvent(shared_ptr<ListAlarmEventRequest> request);
  ListAppNamesResponse listAppNamesWithOptions(shared_ptr<ListAppNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppNamesResponse listAppNames(shared_ptr<ListAppNamesRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListCalendarNamesResponse listCalendarNamesWithOptions(shared_ptr<ListCalendarNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCalendarNamesResponse listCalendarNames(shared_ptr<ListCalendarNamesRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListExecutorsResponse listExecutorsWithOptions(shared_ptr<ListExecutorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExecutorsResponse listExecutors(shared_ptr<ListExecutorsRequest> request);
  ListJobExecutionsResponse listJobExecutionsWithOptions(shared_ptr<ListJobExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobExecutionsResponse listJobExecutions(shared_ptr<ListJobExecutionsRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  ListLablesResponse listLablesWithOptions(shared_ptr<ListLablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLablesResponse listLables(shared_ptr<ListLablesRequest> request);
  ListRegionZoneResponse listRegionZoneWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionZoneResponse listRegionZone();
  ListRegionsResponse listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListScheduleEventResponse listScheduleEventWithOptions(shared_ptr<ListScheduleEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScheduleEventResponse listScheduleEvent(shared_ptr<ListScheduleEventRequest> request);
  ListScheduleTimesResponse listScheduleTimesWithOptions(shared_ptr<ListScheduleTimesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScheduleTimesResponse listScheduleTimes(shared_ptr<ListScheduleTimesRequest> request);
  OperateDesignateExecutorsResponse operateDesignateExecutorsWithOptions(shared_ptr<OperateDesignateExecutorsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateDesignateExecutorsResponse operateDesignateExecutors(shared_ptr<OperateDesignateExecutorsRequest> request);
  OperateDisableJobsResponse operateDisableJobsWithOptions(shared_ptr<OperateDisableJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateDisableJobsResponse operateDisableJobs(shared_ptr<OperateDisableJobsRequest> request);
  OperateEnableJobsResponse operateEnableJobsWithOptions(shared_ptr<OperateEnableJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateEnableJobsResponse operateEnableJobs(shared_ptr<OperateEnableJobsRequest> request);
  OperateExecuteJobResponse operateExecuteJobWithOptions(shared_ptr<OperateExecuteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateExecuteJobResponse operateExecuteJob(shared_ptr<OperateExecuteJobRequest> request);
  OperateRerunJobResponse operateRerunJobWithOptions(shared_ptr<OperateRerunJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateRerunJobResponse operateRerunJob(shared_ptr<OperateRerunJobRequest> request);
  OperateRetryJobExecutionResponse operateRetryJobExecutionWithOptions(shared_ptr<OperateRetryJobExecutionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateRetryJobExecutionResponse operateRetryJobExecution(shared_ptr<OperateRetryJobExecutionRequest> request);
  OperateStopJobExecutionResponse operateStopJobExecutionWithOptions(shared_ptr<OperateStopJobExecutionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateStopJobExecutionResponse operateStopJobExecution(shared_ptr<OperateStopJobExecutionRequest> request);
  UpdateAppResponse updateAppWithOptions(shared_ptr<UpdateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppResponse updateApp(shared_ptr<UpdateAppRequest> request);
  UpdateClusterResponse updateClusterWithOptions(shared_ptr<UpdateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClusterResponse updateCluster(shared_ptr<UpdateClusterRequest> request);
  UpdateJobResponse updateJobWithOptions(shared_ptr<UpdateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateJobResponse updateJob(shared_ptr<UpdateJobRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_SchedulerX320240624

#endif
