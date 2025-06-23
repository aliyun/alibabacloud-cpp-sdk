// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APPSTREAM-CENTER20210903_H_
#define ALIBABACLOUD_APPSTREAM-CENTER20210903_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Appstream-center20210903 {
class GetConnectionTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> appId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appPolicyId{};
  shared_ptr<string> appVersion{};
  shared_ptr<bool> autoConnectInQueue{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> connectionProperties{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> environmentConfig{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> param{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> uuid{};

  GetConnectionTicketRequest() {}

  explicit GetConnectionTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appPolicyId) {
      res["AppPolicyId"] = boost::any(*appPolicyId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (autoConnectInQueue) {
      res["AutoConnectInQueue"] = boost::any(*autoConnectInQueue);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (connectionProperties) {
      res["ConnectionProperties"] = boost::any(*connectionProperties);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (environmentConfig) {
      res["EnvironmentConfig"] = boost::any(*environmentConfig);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppPolicyId") != m.end() && !m["AppPolicyId"].empty()) {
      appPolicyId = make_shared<string>(boost::any_cast<string>(m["AppPolicyId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AutoConnectInQueue") != m.end() && !m["AutoConnectInQueue"].empty()) {
      autoConnectInQueue = make_shared<bool>(boost::any_cast<bool>(m["AutoConnectInQueue"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ConnectionProperties") != m.end() && !m["ConnectionProperties"].empty()) {
      connectionProperties = make_shared<string>(boost::any_cast<string>(m["ConnectionProperties"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("EnvironmentConfig") != m.end() && !m["EnvironmentConfig"].empty()) {
      environmentConfig = make_shared<string>(boost::any_cast<string>(m["EnvironmentConfig"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetConnectionTicketRequest() = default;
};
class GetConnectionTicketResponseBodyBindQueueInfo : public Darabonba::Model {
public:
  shared_ptr<string> queueStatus{};
  shared_ptr<long> rank{};
  shared_ptr<long> readyTimeout{};
  shared_ptr<long> remainingTime{};
  shared_ptr<string> requestKey{};
  shared_ptr<string> targetId{};
  shared_ptr<long> waitTime{};

  GetConnectionTicketResponseBodyBindQueueInfo() {}

  explicit GetConnectionTicketResponseBodyBindQueueInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueStatus) {
      res["QueueStatus"] = boost::any(*queueStatus);
    }
    if (rank) {
      res["Rank"] = boost::any(*rank);
    }
    if (readyTimeout) {
      res["ReadyTimeout"] = boost::any(*readyTimeout);
    }
    if (remainingTime) {
      res["RemainingTime"] = boost::any(*remainingTime);
    }
    if (requestKey) {
      res["RequestKey"] = boost::any(*requestKey);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (waitTime) {
      res["WaitTime"] = boost::any(*waitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueueStatus") != m.end() && !m["QueueStatus"].empty()) {
      queueStatus = make_shared<string>(boost::any_cast<string>(m["QueueStatus"]));
    }
    if (m.find("Rank") != m.end() && !m["Rank"].empty()) {
      rank = make_shared<long>(boost::any_cast<long>(m["Rank"]));
    }
    if (m.find("ReadyTimeout") != m.end() && !m["ReadyTimeout"].empty()) {
      readyTimeout = make_shared<long>(boost::any_cast<long>(m["ReadyTimeout"]));
    }
    if (m.find("RemainingTime") != m.end() && !m["RemainingTime"].empty()) {
      remainingTime = make_shared<long>(boost::any_cast<long>(m["RemainingTime"]));
    }
    if (m.find("RequestKey") != m.end() && !m["RequestKey"].empty()) {
      requestKey = make_shared<string>(boost::any_cast<string>(m["RequestKey"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("WaitTime") != m.end() && !m["WaitTime"].empty()) {
      waitTime = make_shared<long>(boost::any_cast<long>(m["WaitTime"]));
    }
  }


  virtual ~GetConnectionTicketResponseBodyBindQueueInfo() = default;
};
class GetConnectionTicketResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> resolutionAdaptive{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  GetConnectionTicketResponseBodyPolicy() {}

  explicit GetConnectionTicketResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resolutionAdaptive) {
      res["ResolutionAdaptive"] = boost::any(*resolutionAdaptive);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResolutionAdaptive") != m.end() && !m["ResolutionAdaptive"].empty()) {
      resolutionAdaptive = make_shared<string>(boost::any_cast<string>(m["ResolutionAdaptive"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~GetConnectionTicketResponseBodyPolicy() = default;
};
class GetConnectionTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appInstancePersistentId{};
  shared_ptr<GetConnectionTicketResponseBodyBindQueueInfo> bindQueueInfo{};
  shared_ptr<string> code{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> message{};
  shared_ptr<string> osType{};
  shared_ptr<GetConnectionTicketResponseBodyPolicy> policy{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> retryTimes{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> ticket{};

  GetConnectionTicketResponseBody() {}

  explicit GetConnectionTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appInstancePersistentId) {
      res["AppInstancePersistentId"] = boost::any(*appInstancePersistentId);
    }
    if (bindQueueInfo) {
      res["BindQueueInfo"] = bindQueueInfo ? boost::any(bindQueueInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (retryTimes) {
      res["RetryTimes"] = boost::any(*retryTimes);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppInstancePersistentId") != m.end() && !m["AppInstancePersistentId"].empty()) {
      appInstancePersistentId = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentId"]));
    }
    if (m.find("BindQueueInfo") != m.end() && !m["BindQueueInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BindQueueInfo"].type()) {
        GetConnectionTicketResponseBodyBindQueueInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BindQueueInfo"]));
        bindQueueInfo = make_shared<GetConnectionTicketResponseBodyBindQueueInfo>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GetConnectionTicketResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GetConnectionTicketResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RetryTimes") != m.end() && !m["RetryTimes"].empty()) {
      retryTimes = make_shared<long>(boost::any_cast<long>(m["RetryTimes"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~GetConnectionTicketResponseBody() = default;
};
class GetConnectionTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConnectionTicketResponseBody> body{};

  GetConnectionTicketResponse() {}

  explicit GetConnectionTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConnectionTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionTicketResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionTicketResponse() = default;
};
class ListPublishedAppInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> categoryType{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> orderParam{};
  shared_ptr<string> productType{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sortType{};

  ListPublishedAppInfoRequest() {}

  explicit ListPublishedAppInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (orderParam) {
      res["OrderParam"] = boost::any(*orderParam);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["CategoryType"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OrderParam") != m.end() && !m["OrderParam"].empty()) {
      orderParam = make_shared<string>(boost::any_cast<string>(m["OrderParam"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
  }


  virtual ~ListPublishedAppInfoRequest() = default;
};
class ListPublishedAppInfoResponseBodyAppModels : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appThemeColor{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> appVersionName{};
  shared_ptr<string> authTime{};
  shared_ptr<long> categoryId{};
  shared_ptr<long> categoryType{};
  shared_ptr<string> iconUrl{};
  shared_ptr<bool> isAuth{};
  shared_ptr<bool> usedInSession{};

  ListPublishedAppInfoResponseBodyAppModels() {}

  explicit ListPublishedAppInfoResponseBodyAppModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appThemeColor) {
      res["AppThemeColor"] = boost::any(*appThemeColor);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    if (authTime) {
      res["AuthTime"] = boost::any(*authTime);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (iconUrl) {
      res["IconUrl"] = boost::any(*iconUrl);
    }
    if (isAuth) {
      res["IsAuth"] = boost::any(*isAuth);
    }
    if (usedInSession) {
      res["UsedInSession"] = boost::any(*usedInSession);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppThemeColor") != m.end() && !m["AppThemeColor"].empty()) {
      appThemeColor = make_shared<string>(boost::any_cast<string>(m["AppThemeColor"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
    if (m.find("AuthTime") != m.end() && !m["AuthTime"].empty()) {
      authTime = make_shared<string>(boost::any_cast<string>(m["AuthTime"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["CategoryType"]));
    }
    if (m.find("IconUrl") != m.end() && !m["IconUrl"].empty()) {
      iconUrl = make_shared<string>(boost::any_cast<string>(m["IconUrl"]));
    }
    if (m.find("IsAuth") != m.end() && !m["IsAuth"].empty()) {
      isAuth = make_shared<bool>(boost::any_cast<bool>(m["IsAuth"]));
    }
    if (m.find("UsedInSession") != m.end() && !m["UsedInSession"].empty()) {
      usedInSession = make_shared<bool>(boost::any_cast<bool>(m["UsedInSession"]));
    }
  }


  virtual ~ListPublishedAppInfoResponseBodyAppModels() = default;
};
class ListPublishedAppInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPublishedAppInfoResponseBodyAppModels>> appModels{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListPublishedAppInfoResponseBody() {}

  explicit ListPublishedAppInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appModels) {
      vector<boost::any> temp1;
      for(auto item1:*appModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppModels"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppModels") != m.end() && !m["AppModels"].empty()) {
      if (typeid(vector<boost::any>) == m["AppModels"].type()) {
        vector<ListPublishedAppInfoResponseBodyAppModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishedAppInfoResponseBodyAppModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appModels = make_shared<vector<ListPublishedAppInfoResponseBodyAppModels>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPublishedAppInfoResponseBody() = default;
};
class ListPublishedAppInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublishedAppInfoResponseBody> body{};

  ListPublishedAppInfoResponse() {}

  explicit ListPublishedAppInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishedAppInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublishedAppInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublishedAppInfoResponse() = default;
};
class ListRunningAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> productType{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> uuid{};

  ListRunningAppsRequest() {}

  explicit ListRunningAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListRunningAppsRequest() = default;
};
class ListRunningAppsResponseBodyRunningCloudApps : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> appVersionName{};
  shared_ptr<long> duration{};
  shared_ptr<string> iconUrl{};
  shared_ptr<string> osType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  ListRunningAppsResponseBodyRunningCloudApps() {}

  explicit ListRunningAppsResponseBodyRunningCloudApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (iconUrl) {
      res["IconUrl"] = boost::any(*iconUrl);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IconUrl") != m.end() && !m["IconUrl"].empty()) {
      iconUrl = make_shared<string>(boost::any_cast<string>(m["IconUrl"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListRunningAppsResponseBodyRunningCloudApps() = default;
};
class ListRunningAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRunningAppsResponseBodyRunningCloudApps>> runningCloudApps{};

  ListRunningAppsResponseBody() {}

  explicit ListRunningAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runningCloudApps) {
      vector<boost::any> temp1;
      for(auto item1:*runningCloudApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RunningCloudApps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunningCloudApps") != m.end() && !m["RunningCloudApps"].empty()) {
      if (typeid(vector<boost::any>) == m["RunningCloudApps"].type()) {
        vector<ListRunningAppsResponseBodyRunningCloudApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RunningCloudApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRunningAppsResponseBodyRunningCloudApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runningCloudApps = make_shared<vector<ListRunningAppsResponseBodyRunningCloudApps>>(expect1);
      }
    }
  }


  virtual ~ListRunningAppsResponseBody() = default;
};
class ListRunningAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRunningAppsResponseBody> body{};

  ListRunningAppsResponse() {}

  explicit ListRunningAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRunningAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRunningAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRunningAppsResponse() = default;
};
class ResetAppResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  ResetAppResourcesRequest() {}

  explicit ResetAppResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ResetAppResourcesRequest() = default;
};
class ResetAppResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ResetAppResourcesResponseBody() {}

  explicit ResetAppResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ResetAppResourcesResponseBody() = default;
};
class ResetAppResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAppResourcesResponseBody> body{};

  ResetAppResourcesResponse() {}

  explicit ResetAppResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetAppResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAppResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAppResourcesResponse() = default;
};
class RestartAppResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  RestartAppResourcesRequest() {}

  explicit RestartAppResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~RestartAppResourcesRequest() = default;
};
class RestartAppResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  RestartAppResourcesResponseBody() {}

  explicit RestartAppResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~RestartAppResourcesResponseBody() = default;
};
class RestartAppResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartAppResourcesResponseBody> body{};

  RestartAppResourcesResponse() {}

  explicit RestartAppResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartAppResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartAppResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~RestartAppResourcesResponse() = default;
};
class StartAppResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  StartAppResourcesRequest() {}

  explicit StartAppResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~StartAppResourcesRequest() = default;
};
class StartAppResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  StartAppResourcesResponseBody() {}

  explicit StartAppResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~StartAppResourcesResponseBody() = default;
};
class StartAppResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartAppResourcesResponseBody> body{};

  StartAppResourcesResponse() {}

  explicit StartAppResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAppResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAppResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~StartAppResourcesResponse() = default;
};
class StopAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiType{};
  shared_ptr<string> appId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> clientChannel{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<bool> forceStop{};
  shared_ptr<string> idpId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};
  shared_ptr<string> wyId{};

  StopAppRequest() {}

  explicit StopAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (clientChannel) {
      res["ClientChannel"] = boost::any(*clientChannel);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (forceStop) {
      res["ForceStop"] = boost::any(*forceStop);
    }
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (wyId) {
      res["WyId"] = boost::any(*wyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ClientChannel") != m.end() && !m["ClientChannel"].empty()) {
      clientChannel = make_shared<string>(boost::any_cast<string>(m["ClientChannel"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ForceStop") != m.end() && !m["ForceStop"].empty()) {
      forceStop = make_shared<bool>(boost::any_cast<bool>(m["ForceStop"]));
    }
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<string>(boost::any_cast<string>(m["IdpId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
    if (m.find("WyId") != m.end() && !m["WyId"].empty()) {
      wyId = make_shared<string>(boost::any_cast<string>(m["WyId"]));
    }
  }


  virtual ~StopAppRequest() = default;
};
class StopAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopAppResponseBody() {}

  explicit StopAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopAppResponseBody() = default;
};
class StopAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAppResponseBody> body{};

  StopAppResponse() {}

  explicit StopAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAppResponseBody>(model1);
      }
    }
  }


  virtual ~StopAppResponse() = default;
};
class StopAppResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  StopAppResourcesRequest() {}

  explicit StopAppResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~StopAppResourcesRequest() = default;
};
class StopAppResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  StopAppResourcesResponseBody() {}

  explicit StopAppResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~StopAppResourcesResponseBody() = default;
};
class StopAppResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAppResourcesResponseBody> body{};

  StopAppResourcesResponse() {}

  explicit StopAppResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAppResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAppResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~StopAppResourcesResponse() = default;
};
class UnbindRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> productType{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};

  UnbindRequest() {}

  explicit UnbindRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~UnbindRequest() = default;
};
class UnbindResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindResponseBody() {}

  explicit UnbindResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindResponseBody() = default;
};
class UnbindResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindResponseBody> body{};

  UnbindResponse() {}

  explicit UnbindResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindResponse() = default;
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
  GetConnectionTicketResponse getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionTicketResponse getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request);
  ListPublishedAppInfoResponse listPublishedAppInfoWithOptions(shared_ptr<ListPublishedAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublishedAppInfoResponse listPublishedAppInfo(shared_ptr<ListPublishedAppInfoRequest> request);
  ListRunningAppsResponse listRunningAppsWithOptions(shared_ptr<ListRunningAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRunningAppsResponse listRunningApps(shared_ptr<ListRunningAppsRequest> request);
  ResetAppResourcesResponse resetAppResourcesWithOptions(shared_ptr<ResetAppResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAppResourcesResponse resetAppResources(shared_ptr<ResetAppResourcesRequest> request);
  RestartAppResourcesResponse restartAppResourcesWithOptions(shared_ptr<RestartAppResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartAppResourcesResponse restartAppResources(shared_ptr<RestartAppResourcesRequest> request);
  StartAppResourcesResponse startAppResourcesWithOptions(shared_ptr<StartAppResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAppResourcesResponse startAppResources(shared_ptr<StartAppResourcesRequest> request);
  StopAppResponse stopAppWithOptions(shared_ptr<StopAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAppResponse stopApp(shared_ptr<StopAppRequest> request);
  StopAppResourcesResponse stopAppResourcesWithOptions(shared_ptr<StopAppResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAppResourcesResponse stopAppResources(shared_ptr<StopAppResourcesRequest> request);
  UnbindResponse unbindWithOptions(shared_ptr<UnbindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindResponse unbind(shared_ptr<UnbindRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Appstream-center20210903

#endif
