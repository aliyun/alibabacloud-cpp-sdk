// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CDP20210402_H_
#define ALIBABACLOUD_CDP20210402_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cdp20210402 {
class CancelOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  CancelOrderRequest() {}

  explicit CancelOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CancelOrderRequest() = default;
};
class CancelOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelOrderResponseBody() {}

  explicit CancelOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~CancelOrderResponseBody() = default;
};
class CancelOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelOrderResponseBody> body{};

  CancelOrderResponse() {}

  explicit CancelOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOrderResponse() = default;
};
class CheckClusterNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};

  CheckClusterNameRequest() {}

  explicit CheckClusterNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
  }


  virtual ~CheckClusterNameRequest() = default;
};
class CheckClusterNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckClusterNameResponseBody() {}

  explicit CheckClusterNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~CheckClusterNameResponseBody() = default;
};
class CheckClusterNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckClusterNameResponseBody> body{};

  CheckClusterNameResponse() {}

  explicit CheckClusterNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckClusterNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckClusterNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckClusterNameResponse() = default;
};
class ConfirmNoticeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};

  ConfirmNoticeRequest() {}

  explicit ConfirmNoticeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
  }


  virtual ~ConfirmNoticeRequest() = default;
};
class ConfirmNoticeResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConfirmNoticeResponseBody() {}

  explicit ConfirmNoticeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ConfirmNoticeResponseBody() = default;
};
class ConfirmNoticeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmNoticeResponseBody> body{};

  ConfirmNoticeResponse() {}

  explicit ConfirmNoticeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmNoticeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmNoticeResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmNoticeResponse() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterInfo{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterInfo) {
      res["ClusterInfo"] = boost::any(*clusterInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      clusterInfo = make_shared<string>(boost::any_cast<string>(m["ClusterInfo"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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
class GetClusterDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> instanceId{};

  GetClusterDetailRequest() {}

  explicit GetClusterDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetClusterDetailRequest() = default;
};
class GetClusterDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> beginTime{};
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<long> clusterStatusValue{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> controlCenterUrl{};
  shared_ptr<string> deployMode{};
  shared_ptr<long> duration{};
  shared_ptr<long> expireTime{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<map<string, boost::any>> instanceConf{};
  shared_ptr<bool> noticeConfirmed{};
  shared_ptr<string> orderBizId{};
  shared_ptr<string> packageType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionId{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> version{};
  shared_ptr<string> zoneId{};

  GetClusterDetailResponseBodyData() {}

  explicit GetClusterDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (clusterStatusValue) {
      res["ClusterStatusValue"] = boost::any(*clusterStatusValue);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (controlCenterUrl) {
      res["ControlCenterUrl"] = boost::any(*controlCenterUrl);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceConf) {
      res["InstanceConf"] = boost::any(*instanceConf);
    }
    if (noticeConfirmed) {
      res["NoticeConfirmed"] = boost::any(*noticeConfirmed);
    }
    if (orderBizId) {
      res["OrderBizId"] = boost::any(*orderBizId);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ClusterStatusValue") != m.end() && !m["ClusterStatusValue"].empty()) {
      clusterStatusValue = make_shared<long>(boost::any_cast<long>(m["ClusterStatusValue"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ControlCenterUrl") != m.end() && !m["ControlCenterUrl"].empty()) {
      controlCenterUrl = make_shared<string>(boost::any_cast<string>(m["ControlCenterUrl"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("InstanceConf") != m.end() && !m["InstanceConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("NoticeConfirmed") != m.end() && !m["NoticeConfirmed"].empty()) {
      noticeConfirmed = make_shared<bool>(boost::any_cast<bool>(m["NoticeConfirmed"]));
    }
    if (m.find("OrderBizId") != m.end() && !m["OrderBizId"].empty()) {
      orderBizId = make_shared<string>(boost::any_cast<string>(m["OrderBizId"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetClusterDetailResponseBodyData() = default;
};
class GetClusterDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetClusterDetailResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  GetClusterDetailResponseBody() {}

  explicit GetClusterDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetClusterDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetClusterDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetClusterDetailResponseBody() = default;
};
class GetClusterDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterDetailResponseBody> body{};

  GetClusterDetailResponse() {}

  explicit GetClusterDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClusterDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterDetailResponse() = default;
};
class HasDefaultRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  HasDefaultRoleResponseBody() {}

  explicit HasDefaultRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~HasDefaultRoleResponseBody() = default;
};
class HasDefaultRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HasDefaultRoleResponseBody> body{};

  HasDefaultRoleResponse() {}

  explicit HasDefaultRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HasDefaultRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HasDefaultRoleResponseBody>(model1);
      }
    }
  }


  virtual ~HasDefaultRoleResponse() = default;
};
class InitializeClouderaDataPlatformResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InitializeClouderaDataPlatformResponseBody() {}

  explicit InitializeClouderaDataPlatformResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~InitializeClouderaDataPlatformResponseBody() = default;
};
class InitializeClouderaDataPlatformResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitializeClouderaDataPlatformResponseBody> body{};

  InitializeClouderaDataPlatformResponse() {}

  explicit InitializeClouderaDataPlatformResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeClouderaDataPlatformResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeClouderaDataPlatformResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeClouderaDataPlatformResponse() = default;
};
class ListDefaultComponentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> securityMode{};

  ListDefaultComponentsRequest() {}

  explicit ListDefaultComponentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (securityMode) {
      res["SecurityMode"] = boost::any(*securityMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("SecurityMode") != m.end() && !m["SecurityMode"].empty()) {
      securityMode = make_shared<string>(boost::any_cast<string>(m["SecurityMode"]));
    }
  }


  virtual ~ListDefaultComponentsRequest() = default;
};
class ListDefaultComponentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDefaultComponentsResponseBody() {}

  explicit ListDefaultComponentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDefaultComponentsResponseBody() = default;
};
class ListDefaultComponentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDefaultComponentsResponseBody> body{};

  ListDefaultComponentsResponse() {}

  explicit ListDefaultComponentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDefaultComponentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDefaultComponentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDefaultComponentsResponse() = default;
};
class ListNodeGroupConstraintsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};

  ListNodeGroupConstraintsRequest() {}

  explicit ListNodeGroupConstraintsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
  }


  virtual ~ListNodeGroupConstraintsRequest() = default;
};
class ListNodeGroupConstraintsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostGroupType{};
  shared_ptr<vector<string>> recommendedInstanceTypes{};
  shared_ptr<vector<string>> availableDataDiskCategories{};
  shared_ptr<vector<string>> availableInstanceTypes{};
  shared_ptr<vector<string>> availableSystemDiskCategories{};
  shared_ptr<long> defaultDataDiskCount{};
  shared_ptr<long> defaultDataDiskSize{};
  shared_ptr<long> defaultNodeCount{};
  shared_ptr<long> defaultSystemDiskSize{};
  shared_ptr<long> maxDataDiskCount{};
  shared_ptr<long> maxDataDiskSize{};
  shared_ptr<long> maxNodeCount{};
  shared_ptr<long> maxSystemDiskSize{};
  shared_ptr<long> minDataDiskCount{};
  shared_ptr<long> minDataDiskSize{};
  shared_ptr<long> minNodeCount{};
  shared_ptr<long> minSystemDiskSize{};
  shared_ptr<string> nodeGroupName{};

  ListNodeGroupConstraintsResponseBodyData() {}

  explicit ListNodeGroupConstraintsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostGroupType) {
      res["HostGroupType"] = boost::any(*hostGroupType);
    }
    if (recommendedInstanceTypes) {
      res["RecommendedInstanceTypes"] = boost::any(*recommendedInstanceTypes);
    }
    if (availableDataDiskCategories) {
      res["availableDataDiskCategories"] = boost::any(*availableDataDiskCategories);
    }
    if (availableInstanceTypes) {
      res["availableInstanceTypes"] = boost::any(*availableInstanceTypes);
    }
    if (availableSystemDiskCategories) {
      res["availableSystemDiskCategories"] = boost::any(*availableSystemDiskCategories);
    }
    if (defaultDataDiskCount) {
      res["defaultDataDiskCount"] = boost::any(*defaultDataDiskCount);
    }
    if (defaultDataDiskSize) {
      res["defaultDataDiskSize"] = boost::any(*defaultDataDiskSize);
    }
    if (defaultNodeCount) {
      res["defaultNodeCount"] = boost::any(*defaultNodeCount);
    }
    if (defaultSystemDiskSize) {
      res["defaultSystemDiskSize"] = boost::any(*defaultSystemDiskSize);
    }
    if (maxDataDiskCount) {
      res["maxDataDiskCount"] = boost::any(*maxDataDiskCount);
    }
    if (maxDataDiskSize) {
      res["maxDataDiskSize"] = boost::any(*maxDataDiskSize);
    }
    if (maxNodeCount) {
      res["maxNodeCount"] = boost::any(*maxNodeCount);
    }
    if (maxSystemDiskSize) {
      res["maxSystemDiskSize"] = boost::any(*maxSystemDiskSize);
    }
    if (minDataDiskCount) {
      res["minDataDiskCount"] = boost::any(*minDataDiskCount);
    }
    if (minDataDiskSize) {
      res["minDataDiskSize"] = boost::any(*minDataDiskSize);
    }
    if (minNodeCount) {
      res["minNodeCount"] = boost::any(*minNodeCount);
    }
    if (minSystemDiskSize) {
      res["minSystemDiskSize"] = boost::any(*minSystemDiskSize);
    }
    if (nodeGroupName) {
      res["nodeGroupName"] = boost::any(*nodeGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostGroupType") != m.end() && !m["HostGroupType"].empty()) {
      hostGroupType = make_shared<string>(boost::any_cast<string>(m["HostGroupType"]));
    }
    if (m.find("RecommendedInstanceTypes") != m.end() && !m["RecommendedInstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RecommendedInstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecommendedInstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recommendedInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("availableDataDiskCategories") != m.end() && !m["availableDataDiskCategories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["availableDataDiskCategories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["availableDataDiskCategories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      availableDataDiskCategories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("availableInstanceTypes") != m.end() && !m["availableInstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["availableInstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["availableInstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      availableInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("availableSystemDiskCategories") != m.end() && !m["availableSystemDiskCategories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["availableSystemDiskCategories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["availableSystemDiskCategories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      availableSystemDiskCategories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("defaultDataDiskCount") != m.end() && !m["defaultDataDiskCount"].empty()) {
      defaultDataDiskCount = make_shared<long>(boost::any_cast<long>(m["defaultDataDiskCount"]));
    }
    if (m.find("defaultDataDiskSize") != m.end() && !m["defaultDataDiskSize"].empty()) {
      defaultDataDiskSize = make_shared<long>(boost::any_cast<long>(m["defaultDataDiskSize"]));
    }
    if (m.find("defaultNodeCount") != m.end() && !m["defaultNodeCount"].empty()) {
      defaultNodeCount = make_shared<long>(boost::any_cast<long>(m["defaultNodeCount"]));
    }
    if (m.find("defaultSystemDiskSize") != m.end() && !m["defaultSystemDiskSize"].empty()) {
      defaultSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["defaultSystemDiskSize"]));
    }
    if (m.find("maxDataDiskCount") != m.end() && !m["maxDataDiskCount"].empty()) {
      maxDataDiskCount = make_shared<long>(boost::any_cast<long>(m["maxDataDiskCount"]));
    }
    if (m.find("maxDataDiskSize") != m.end() && !m["maxDataDiskSize"].empty()) {
      maxDataDiskSize = make_shared<long>(boost::any_cast<long>(m["maxDataDiskSize"]));
    }
    if (m.find("maxNodeCount") != m.end() && !m["maxNodeCount"].empty()) {
      maxNodeCount = make_shared<long>(boost::any_cast<long>(m["maxNodeCount"]));
    }
    if (m.find("maxSystemDiskSize") != m.end() && !m["maxSystemDiskSize"].empty()) {
      maxSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["maxSystemDiskSize"]));
    }
    if (m.find("minDataDiskCount") != m.end() && !m["minDataDiskCount"].empty()) {
      minDataDiskCount = make_shared<long>(boost::any_cast<long>(m["minDataDiskCount"]));
    }
    if (m.find("minDataDiskSize") != m.end() && !m["minDataDiskSize"].empty()) {
      minDataDiskSize = make_shared<long>(boost::any_cast<long>(m["minDataDiskSize"]));
    }
    if (m.find("minNodeCount") != m.end() && !m["minNodeCount"].empty()) {
      minNodeCount = make_shared<long>(boost::any_cast<long>(m["minNodeCount"]));
    }
    if (m.find("minSystemDiskSize") != m.end() && !m["minSystemDiskSize"].empty()) {
      minSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["minSystemDiskSize"]));
    }
    if (m.find("nodeGroupName") != m.end() && !m["nodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["nodeGroupName"]));
    }
  }


  virtual ~ListNodeGroupConstraintsResponseBodyData() = default;
};
class ListNodeGroupConstraintsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeGroupConstraintsResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListNodeGroupConstraintsResponseBody() {}

  explicit ListNodeGroupConstraintsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListNodeGroupConstraintsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeGroupConstraintsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListNodeGroupConstraintsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ListNodeGroupConstraintsResponseBody() = default;
};
class ListNodeGroupConstraintsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeGroupConstraintsResponseBody> body{};

  ListNodeGroupConstraintsResponse() {}

  explicit ListNodeGroupConstraintsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodeGroupConstraintsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeGroupConstraintsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeGroupConstraintsResponse() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesResponseBodyDataEcsNodeDtoList : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<long> cpuCount{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<long> diskCount{};
  shared_ptr<string> diskType{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> index{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeResourceType{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> privateIp{};
  shared_ptr<string> publicIp{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> serialNumber{};
  shared_ptr<long> systemDiskCapacity{};
  shared_ptr<long> systemDiskCount{};
  shared_ptr<string> systemDiskType{};

  ListNodesResponseBodyDataEcsNodeDtoList() {}

  explicit ListNodesResponseBodyDataEcsNodeDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskCount) {
      res["DiskCount"] = boost::any(*diskCount);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeResourceType) {
      res["NodeResourceType"] = boost::any(*nodeResourceType);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (privateIp) {
      res["PrivateIp"] = boost::any(*privateIp);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (systemDiskCapacity) {
      res["SystemDiskCapacity"] = boost::any(*systemDiskCapacity);
    }
    if (systemDiskCount) {
      res["SystemDiskCount"] = boost::any(*systemDiskCount);
    }
    if (systemDiskType) {
      res["SystemDiskType"] = boost::any(*systemDiskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("DiskCount") != m.end() && !m["DiskCount"].empty()) {
      diskCount = make_shared<long>(boost::any_cast<long>(m["DiskCount"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeResourceType") != m.end() && !m["NodeResourceType"].empty()) {
      nodeResourceType = make_shared<string>(boost::any_cast<string>(m["NodeResourceType"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("PrivateIp") != m.end() && !m["PrivateIp"].empty()) {
      privateIp = make_shared<string>(boost::any_cast<string>(m["PrivateIp"]));
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("SystemDiskCapacity") != m.end() && !m["SystemDiskCapacity"].empty()) {
      systemDiskCapacity = make_shared<long>(boost::any_cast<long>(m["SystemDiskCapacity"]));
    }
    if (m.find("SystemDiskCount") != m.end() && !m["SystemDiskCount"].empty()) {
      systemDiskCount = make_shared<long>(boost::any_cast<long>(m["SystemDiskCount"]));
    }
    if (m.find("SystemDiskType") != m.end() && !m["SystemDiskType"].empty()) {
      systemDiskType = make_shared<string>(boost::any_cast<string>(m["SystemDiskType"]));
    }
  }


  virtual ~ListNodesResponseBodyDataEcsNodeDtoList() = default;
};
class ListNodesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<vector<ListNodesResponseBodyDataEcsNodeDtoList>> ecsNodeDtoList{};
  shared_ptr<long> expireTime{};
  shared_ptr<map<string, boost::any>> instanceConf{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};

  ListNodesResponseBodyData() {}

  explicit ListNodesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ecsNodeDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*ecsNodeDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsNodeDtoList"] = boost::any(temp1);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceConf) {
      res["InstanceConf"] = boost::any(*instanceConf);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EcsNodeDtoList") != m.end() && !m["EcsNodeDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsNodeDtoList"].type()) {
        vector<ListNodesResponseBodyDataEcsNodeDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsNodeDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyDataEcsNodeDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsNodeDtoList = make_shared<vector<ListNodesResponseBodyDataEcsNodeDtoList>>(expect1);
      }
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceConf") != m.end() && !m["InstanceConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~ListNodesResponseBodyData() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListNodesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListNodesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ListNodesResponseBody() = default;
};
class ListNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesResponse() = default;
};
class ListOperationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> parentOperationNodeId{};

  ListOperationsRequest() {}

  explicit ListOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (parentOperationNodeId) {
      res["ParentOperationNodeId"] = boost::any(*parentOperationNodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("ParentOperationNodeId") != m.end() && !m["ParentOperationNodeId"].empty()) {
      parentOperationNodeId = make_shared<string>(boost::any_cast<string>(m["ParentOperationNodeId"]));
    }
  }


  virtual ~ListOperationsRequest() = default;
};
class ListOperationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<bool> hasChildOperationNodes{};
  shared_ptr<bool> hasOperationTask{};
  shared_ptr<string> operationId{};
  shared_ptr<string> operationNodeId{};
  shared_ptr<long> operationNodeName{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  ListOperationsResponseBodyData() {}

  explicit ListOperationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hasChildOperationNodes) {
      res["HasChildOperationNodes"] = boost::any(*hasChildOperationNodes);
    }
    if (hasOperationTask) {
      res["HasOperationTask"] = boost::any(*hasOperationTask);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (operationNodeId) {
      res["OperationNodeId"] = boost::any(*operationNodeId);
    }
    if (operationNodeName) {
      res["OperationNodeName"] = boost::any(*operationNodeName);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("HasChildOperationNodes") != m.end() && !m["HasChildOperationNodes"].empty()) {
      hasChildOperationNodes = make_shared<bool>(boost::any_cast<bool>(m["HasChildOperationNodes"]));
    }
    if (m.find("HasOperationTask") != m.end() && !m["HasOperationTask"].empty()) {
      hasOperationTask = make_shared<bool>(boost::any_cast<bool>(m["HasOperationTask"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("OperationNodeId") != m.end() && !m["OperationNodeId"].empty()) {
      operationNodeId = make_shared<string>(boost::any_cast<string>(m["OperationNodeId"]));
    }
    if (m.find("OperationNodeName") != m.end() && !m["OperationNodeName"].empty()) {
      operationNodeName = make_shared<long>(boost::any_cast<long>(m["OperationNodeName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListOperationsResponseBodyData() = default;
};
class ListOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListOperationsResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListOperationsResponseBody() {}

  explicit ListOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListOperationsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOperationsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListOperationsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ListOperationsResponseBody() = default;
};
class ListOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOperationsResponseBody> body{};

  ListOperationsResponse() {}

  explicit ListOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOperationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOperationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOperationsResponse() = default;
};
class ListRegionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

  ListRegionsResponseBodyData() {}

  explicit ListRegionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~ListRegionsResponseBodyData() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListRegionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRegionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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
class ListZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListZonesRequest() {}

  explicit ListZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListZonesRequest() = default;
};
class ListZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListZonesResponseBody() {}

  explicit ListZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~ListZonesResponseBody() = default;
};
class ListZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListZonesResponseBody> body{};

  ListZonesResponse() {}

  explicit ListZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListZonesResponse() = default;
};
class QueryOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};

  QueryOrderRequest() {}

  explicit QueryOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
  }


  virtual ~QueryOrderRequest() = default;
};
class QueryOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> orderType{};

  QueryOrderResponseBodyData() {}

  explicit QueryOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
  }


  virtual ~QueryOrderResponseBodyData() = default;
};
class QueryOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryOrderResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryOrderResponseBody() {}

  explicit QueryOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryOrderResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrderResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryOrderResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~QueryOrderResponseBody() = default;
};
class QueryOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOrderResponseBody> body{};

  QueryOrderResponse() {}

  explicit QueryOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrderResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrderResponse() = default;
};
class QueryPriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupSpecs{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionId{};

  QueryPriceRequest() {}

  explicit QueryPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupSpecs) {
      res["NodeGroupSpecs"] = boost::any(*nodeGroupSpecs);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupSpecs") != m.end() && !m["NodeGroupSpecs"].empty()) {
      nodeGroupSpecs = make_shared<string>(boost::any_cast<string>(m["NodeGroupSpecs"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~QueryPriceRequest() = default;
};
class QueryPriceResponseBodyDataEcsPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  QueryPriceResponseBodyDataEcsPriceInfo() {}

  explicit QueryPriceResponseBodyDataEcsPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryPriceResponseBodyDataEcsPriceInfo() = default;
};
class QueryPriceResponseBodyDataSoftPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  QueryPriceResponseBodyDataSoftPriceInfo() {}

  explicit QueryPriceResponseBodyDataSoftPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryPriceResponseBodyDataSoftPriceInfo() = default;
};
class QueryPriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> discountPrice{};
  shared_ptr<QueryPriceResponseBodyDataEcsPriceInfo> ecsPriceInfo{};
  shared_ptr<QueryPriceResponseBodyDataSoftPriceInfo> softPriceInfo{};
  shared_ptr<double> sumPrice{};

  QueryPriceResponseBodyData() {}

  explicit QueryPriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (ecsPriceInfo) {
      res["EcsPriceInfo"] = ecsPriceInfo ? boost::any(ecsPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (softPriceInfo) {
      res["SoftPriceInfo"] = softPriceInfo ? boost::any(softPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sumPrice) {
      res["SumPrice"] = boost::any(*sumPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("EcsPriceInfo") != m.end() && !m["EcsPriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsPriceInfo"].type()) {
        QueryPriceResponseBodyDataEcsPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsPriceInfo"]));
        ecsPriceInfo = make_shared<QueryPriceResponseBodyDataEcsPriceInfo>(model1);
      }
    }
    if (m.find("SoftPriceInfo") != m.end() && !m["SoftPriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SoftPriceInfo"].type()) {
        QueryPriceResponseBodyDataSoftPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SoftPriceInfo"]));
        softPriceInfo = make_shared<QueryPriceResponseBodyDataSoftPriceInfo>(model1);
      }
    }
    if (m.find("SumPrice") != m.end() && !m["SumPrice"].empty()) {
      sumPrice = make_shared<double>(boost::any_cast<double>(m["SumPrice"]));
    }
  }


  virtual ~QueryPriceResponseBodyData() = default;
};
class QueryPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryPriceResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPriceResponseBody() {}

  explicit QueryPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPriceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~QueryPriceResponseBody() = default;
};
class QueryPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPriceResponseBody> body{};

  QueryPriceResponse() {}

  explicit QueryPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPriceResponse() = default;
};
class QueryRenewOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};

  QueryRenewOrderRequest() {}

  explicit QueryRenewOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
  }


  virtual ~QueryRenewOrderRequest() = default;
};
class QueryRenewOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRenewOrderResponseBody() {}

  explicit QueryRenewOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
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


  virtual ~QueryRenewOrderResponseBody() = default;
};
class QueryRenewOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRenewOrderResponseBody> body{};

  QueryRenewOrderResponse() {}

  explicit QueryRenewOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRenewOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRenewOrderResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRenewOrderResponse() = default;
};
class QueryRenewPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> instances{};

  QueryRenewPriceRequest() {}

  explicit QueryRenewPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (instances) {
      res["Instances"] = boost::any(*instances);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      instances = make_shared<string>(boost::any_cast<string>(m["Instances"]));
    }
  }


  virtual ~QueryRenewPriceRequest() = default;
};
class QueryRenewPriceResponseBodyDataCdpSoftPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  QueryRenewPriceResponseBodyDataCdpSoftPriceInfo() {}

  explicit QueryRenewPriceResponseBodyDataCdpSoftPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryRenewPriceResponseBodyDataCdpSoftPriceInfo() = default;
};
class QueryRenewPriceResponseBodyDataEcsPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  QueryRenewPriceResponseBodyDataEcsPriceInfo() {}

  explicit QueryRenewPriceResponseBodyDataEcsPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryRenewPriceResponseBodyDataEcsPriceInfo() = default;
};
class QueryRenewPriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryRenewPriceResponseBodyDataCdpSoftPriceInfo> cdpSoftPriceInfo{};
  shared_ptr<double> discountPrice{};
  shared_ptr<QueryRenewPriceResponseBodyDataEcsPriceInfo> ecsPriceInfo{};
  shared_ptr<double> sumPrice{};

  QueryRenewPriceResponseBodyData() {}

  explicit QueryRenewPriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdpSoftPriceInfo) {
      res["CdpSoftPriceInfo"] = cdpSoftPriceInfo ? boost::any(cdpSoftPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (ecsPriceInfo) {
      res["EcsPriceInfo"] = ecsPriceInfo ? boost::any(ecsPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sumPrice) {
      res["SumPrice"] = boost::any(*sumPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdpSoftPriceInfo") != m.end() && !m["CdpSoftPriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CdpSoftPriceInfo"].type()) {
        QueryRenewPriceResponseBodyDataCdpSoftPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CdpSoftPriceInfo"]));
        cdpSoftPriceInfo = make_shared<QueryRenewPriceResponseBodyDataCdpSoftPriceInfo>(model1);
      }
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("EcsPriceInfo") != m.end() && !m["EcsPriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsPriceInfo"].type()) {
        QueryRenewPriceResponseBodyDataEcsPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsPriceInfo"]));
        ecsPriceInfo = make_shared<QueryRenewPriceResponseBodyDataEcsPriceInfo>(model1);
      }
    }
    if (m.find("SumPrice") != m.end() && !m["SumPrice"].empty()) {
      sumPrice = make_shared<double>(boost::any_cast<double>(m["SumPrice"]));
    }
  }


  virtual ~QueryRenewPriceResponseBodyData() = default;
};
class QueryRenewPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryRenewPriceResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRenewPriceResponseBody() {}

  explicit QueryRenewPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRenewPriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRenewPriceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~QueryRenewPriceResponseBody() = default;
};
class QueryRenewPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRenewPriceResponseBody> body{};

  QueryRenewPriceResponse() {}

  explicit QueryRenewPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRenewPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRenewPriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRenewPriceResponse() = default;
};
class QueryScaleUpOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> instanceId{};

  QueryScaleUpOrderRequest() {}

  explicit QueryScaleUpOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~QueryScaleUpOrderRequest() = default;
};
class QueryScaleUpOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryScaleUpOrderResponseBody() {}

  explicit QueryScaleUpOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~QueryScaleUpOrderResponseBody() = default;
};
class QueryScaleUpOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryScaleUpOrderResponseBody> body{};

  QueryScaleUpOrderResponse() {}

  explicit QueryScaleUpOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryScaleUpOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryScaleUpOrderResponseBody>(model1);
      }
    }
  }


  virtual ~QueryScaleUpOrderResponse() = default;
};
class QueryScaleUpPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<long> coreNumber{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<string> pricingCycle{};

  QueryScaleUpPriceRequest() {}

  explicit QueryScaleUpPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (coreNumber) {
      res["CoreNumber"] = boost::any(*coreNumber);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("CoreNumber") != m.end() && !m["CoreNumber"].empty()) {
      coreNumber = make_shared<long>(boost::any_cast<long>(m["CoreNumber"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~QueryScaleUpPriceRequest() = default;
};
class QueryScaleUpPriceResponseBodyDataEcsPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  QueryScaleUpPriceResponseBodyDataEcsPriceInfo() {}

  explicit QueryScaleUpPriceResponseBodyDataEcsPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryScaleUpPriceResponseBodyDataEcsPriceInfo() = default;
};
class QueryScaleUpPriceResponseBodyDataSoftPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  QueryScaleUpPriceResponseBodyDataSoftPriceInfo() {}

  explicit QueryScaleUpPriceResponseBodyDataSoftPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryScaleUpPriceResponseBodyDataSoftPriceInfo() = default;
};
class QueryScaleUpPriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> discountPrice{};
  shared_ptr<QueryScaleUpPriceResponseBodyDataEcsPriceInfo> ecsPriceInfo{};
  shared_ptr<QueryScaleUpPriceResponseBodyDataSoftPriceInfo> softPriceInfo{};
  shared_ptr<double> sumPrice{};

  QueryScaleUpPriceResponseBodyData() {}

  explicit QueryScaleUpPriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (ecsPriceInfo) {
      res["EcsPriceInfo"] = ecsPriceInfo ? boost::any(ecsPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (softPriceInfo) {
      res["SoftPriceInfo"] = softPriceInfo ? boost::any(softPriceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sumPrice) {
      res["SumPrice"] = boost::any(*sumPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("EcsPriceInfo") != m.end() && !m["EcsPriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsPriceInfo"].type()) {
        QueryScaleUpPriceResponseBodyDataEcsPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsPriceInfo"]));
        ecsPriceInfo = make_shared<QueryScaleUpPriceResponseBodyDataEcsPriceInfo>(model1);
      }
    }
    if (m.find("SoftPriceInfo") != m.end() && !m["SoftPriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SoftPriceInfo"].type()) {
        QueryScaleUpPriceResponseBodyDataSoftPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SoftPriceInfo"]));
        softPriceInfo = make_shared<QueryScaleUpPriceResponseBodyDataSoftPriceInfo>(model1);
      }
    }
    if (m.find("SumPrice") != m.end() && !m["SumPrice"].empty()) {
      sumPrice = make_shared<double>(boost::any_cast<double>(m["SumPrice"]));
    }
  }


  virtual ~QueryScaleUpPriceResponseBodyData() = default;
};
class QueryScaleUpPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryScaleUpPriceResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryScaleUpPriceResponseBody() {}

  explicit QueryScaleUpPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryScaleUpPriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryScaleUpPriceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~QueryScaleUpPriceResponseBody() = default;
};
class QueryScaleUpPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryScaleUpPriceResponseBody> body{};

  QueryScaleUpPriceResponse() {}

  explicit QueryScaleUpPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryScaleUpPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryScaleUpPriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryScaleUpPriceResponse() = default;
};
class ReleaseClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ReleaseClusterRequest() {}

  explicit ReleaseClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ReleaseClusterRequest() = default;
};
class ReleaseClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleaseClusterResponseBody() {}

  explicit ReleaseClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ReleaseClusterResponseBody() = default;
};
class ReleaseClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseClusterResponseBody> body{};

  ReleaseClusterResponse() {}

  explicit ReleaseClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseClusterResponse() = default;
};
class RenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> instances{};

  RenewInstanceRequest() {}

  explicit RenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (instances) {
      res["Instances"] = boost::any(*instances);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      instances = make_shared<string>(boost::any_cast<string>(m["Instances"]));
    }
  }


  virtual ~RenewInstanceRequest() = default;
};
class RenewInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> orderIds{};

  RenewInstanceResponseBodyData() {}

  explicit RenewInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderIds) {
      res["OrderIds"] = boost::any(*orderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderIds") != m.end() && !m["OrderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RenewInstanceResponseBodyData() = default;
};
class RenewInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RenewInstanceResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenewInstanceResponseBody() {}

  explicit RenewInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RenewInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RenewInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~RenewInstanceResponseBody() = default;
};
class RenewInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewInstanceResponseBody> body{};

  RenewInstanceResponse() {}

  explicit RenewInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponse() = default;
};
class ScaleUpClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<long> coreNumber{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<string> pricingCycle{};

  ScaleUpClusterRequest() {}

  explicit ScaleUpClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (coreNumber) {
      res["CoreNumber"] = boost::any(*coreNumber);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("CoreNumber") != m.end() && !m["CoreNumber"].empty()) {
      coreNumber = make_shared<long>(boost::any_cast<long>(m["CoreNumber"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~ScaleUpClusterRequest() = default;
};
class ScaleUpClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ScaleUpClusterResponseBody() {}

  explicit ScaleUpClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ScaleUpClusterResponseBody() = default;
};
class ScaleUpClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScaleUpClusterResponseBody> body{};

  ScaleUpClusterResponse() {}

  explicit ScaleUpClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScaleUpClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScaleUpClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ScaleUpClusterResponse() = default;
};
class SearchClusterInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  SearchClusterInstancesRequest() {}

  explicit SearchClusterInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SearchClusterInstancesRequest() = default;
};
class SearchClusterInstancesResponseBodyDataClusterInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> controlCenterLoginName{};
  shared_ptr<string> controlCenterUrl{};
  shared_ptr<string> sgId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};

  SearchClusterInstancesResponseBodyDataClusterInstanceInfo() {}

  explicit SearchClusterInstancesResponseBodyDataClusterInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlCenterLoginName) {
      res["ControlCenterLoginName"] = boost::any(*controlCenterLoginName);
    }
    if (controlCenterUrl) {
      res["ControlCenterUrl"] = boost::any(*controlCenterUrl);
    }
    if (sgId) {
      res["SgId"] = boost::any(*sgId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlCenterLoginName") != m.end() && !m["ControlCenterLoginName"].empty()) {
      controlCenterLoginName = make_shared<string>(boost::any_cast<string>(m["ControlCenterLoginName"]));
    }
    if (m.find("ControlCenterUrl") != m.end() && !m["ControlCenterUrl"].empty()) {
      controlCenterUrl = make_shared<string>(boost::any_cast<string>(m["ControlCenterUrl"]));
    }
    if (m.find("SgId") != m.end() && !m["SgId"].empty()) {
      sgId = make_shared<string>(boost::any_cast<string>(m["SgId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
  }


  virtual ~SearchClusterInstancesResponseBodyDataClusterInstanceInfo() = default;
};
class SearchClusterInstancesResponseBodyDataEcsGroupList : public Darabonba::Model {
public:
  shared_ptr<long> cpuCount{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<long> diskCount{};
  shared_ptr<string> diskType{};
  shared_ptr<string> hostGroupName{};
  shared_ptr<string> hostGroupType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memorySize{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> systemDiskCapacity{};
  shared_ptr<long> systemDiskCount{};
  shared_ptr<string> systemDiskType{};

  SearchClusterInstancesResponseBodyDataEcsGroupList() {}

  explicit SearchClusterInstancesResponseBodyDataEcsGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskCount) {
      res["DiskCount"] = boost::any(*diskCount);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    if (hostGroupType) {
      res["HostGroupType"] = boost::any(*hostGroupType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (systemDiskCapacity) {
      res["SystemDiskCapacity"] = boost::any(*systemDiskCapacity);
    }
    if (systemDiskCount) {
      res["SystemDiskCount"] = boost::any(*systemDiskCount);
    }
    if (systemDiskType) {
      res["SystemDiskType"] = boost::any(*systemDiskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("DiskCount") != m.end() && !m["DiskCount"].empty()) {
      diskCount = make_shared<long>(boost::any_cast<long>(m["DiskCount"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
    if (m.find("HostGroupType") != m.end() && !m["HostGroupType"].empty()) {
      hostGroupType = make_shared<string>(boost::any_cast<string>(m["HostGroupType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("SystemDiskCapacity") != m.end() && !m["SystemDiskCapacity"].empty()) {
      systemDiskCapacity = make_shared<string>(boost::any_cast<string>(m["SystemDiskCapacity"]));
    }
    if (m.find("SystemDiskCount") != m.end() && !m["SystemDiskCount"].empty()) {
      systemDiskCount = make_shared<long>(boost::any_cast<long>(m["SystemDiskCount"]));
    }
    if (m.find("SystemDiskType") != m.end() && !m["SystemDiskType"].empty()) {
      systemDiskType = make_shared<string>(boost::any_cast<string>(m["SystemDiskType"]));
    }
  }


  virtual ~SearchClusterInstancesResponseBodyDataEcsGroupList() = default;
};
class SearchClusterInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> clusterId{};
  shared_ptr<SearchClusterInstancesResponseBodyDataClusterInstanceInfo> clusterInstanceInfo{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<long> clusterStatusValue{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> controlCenterUrl{};
  shared_ptr<long> duration{};
  shared_ptr<vector<SearchClusterInstancesResponseBodyDataEcsGroupList>> ecsGroupList{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> failReason{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<map<string, boost::any>> instanceConf{};
  shared_ptr<bool> noticeConfirmed{};
  shared_ptr<string> orderBizId{};
  shared_ptr<string> packageType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionId{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> zoneId{};

  SearchClusterInstancesResponseBodyData() {}

  explicit SearchClusterInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterInstanceInfo) {
      res["ClusterInstanceInfo"] = clusterInstanceInfo ? boost::any(clusterInstanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (clusterStatusValue) {
      res["ClusterStatusValue"] = boost::any(*clusterStatusValue);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (controlCenterUrl) {
      res["ControlCenterUrl"] = boost::any(*controlCenterUrl);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ecsGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*ecsGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsGroupList"] = boost::any(temp1);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceConf) {
      res["InstanceConf"] = boost::any(*instanceConf);
    }
    if (noticeConfirmed) {
      res["NoticeConfirmed"] = boost::any(*noticeConfirmed);
    }
    if (orderBizId) {
      res["OrderBizId"] = boost::any(*orderBizId);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterInstanceInfo") != m.end() && !m["ClusterInstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInstanceInfo"].type()) {
        SearchClusterInstancesResponseBodyDataClusterInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInstanceInfo"]));
        clusterInstanceInfo = make_shared<SearchClusterInstancesResponseBodyDataClusterInstanceInfo>(model1);
      }
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ClusterStatusValue") != m.end() && !m["ClusterStatusValue"].empty()) {
      clusterStatusValue = make_shared<long>(boost::any_cast<long>(m["ClusterStatusValue"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ControlCenterUrl") != m.end() && !m["ControlCenterUrl"].empty()) {
      controlCenterUrl = make_shared<string>(boost::any_cast<string>(m["ControlCenterUrl"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EcsGroupList") != m.end() && !m["EcsGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsGroupList"].type()) {
        vector<SearchClusterInstancesResponseBodyDataEcsGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchClusterInstancesResponseBodyDataEcsGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsGroupList = make_shared<vector<SearchClusterInstancesResponseBodyDataEcsGroupList>>(expect1);
      }
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("InstanceConf") != m.end() && !m["InstanceConf"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceConf"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceConf = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("NoticeConfirmed") != m.end() && !m["NoticeConfirmed"].empty()) {
      noticeConfirmed = make_shared<bool>(boost::any_cast<bool>(m["NoticeConfirmed"]));
    }
    if (m.find("OrderBizId") != m.end() && !m["OrderBizId"].empty()) {
      orderBizId = make_shared<string>(boost::any_cast<string>(m["OrderBizId"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~SearchClusterInstancesResponseBodyData() = default;
};
class SearchClusterInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchClusterInstancesResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  SearchClusterInstancesResponseBody() {}

  explicit SearchClusterInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SearchClusterInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchClusterInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SearchClusterInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~SearchClusterInstancesResponseBody() = default;
};
class SearchClusterInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchClusterInstancesResponseBody> body{};

  SearchClusterInstancesResponse() {}

  explicit SearchClusterInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchClusterInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchClusterInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchClusterInstancesResponse() = default;
};
class SingleOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  SingleOrderRequest() {}

  explicit SingleOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~SingleOrderRequest() = default;
};
class SingleOrderResponseBodyDataEcsGroupList : public Darabonba::Model {
public:
  shared_ptr<long> cpuCount{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<long> diskCount{};
  shared_ptr<string> diskType{};
  shared_ptr<string> hostGroupName{};
  shared_ptr<string> hostGroupType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memorySize{};
  shared_ptr<long> nodeCount{};
  shared_ptr<long> systemDiskCapacity{};
  shared_ptr<long> systemDiskCount{};
  shared_ptr<string> systemDiskType{};

  SingleOrderResponseBodyDataEcsGroupList() {}

  explicit SingleOrderResponseBodyDataEcsGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskCount) {
      res["DiskCount"] = boost::any(*diskCount);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    if (hostGroupType) {
      res["HostGroupType"] = boost::any(*hostGroupType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (systemDiskCapacity) {
      res["SystemDiskCapacity"] = boost::any(*systemDiskCapacity);
    }
    if (systemDiskCount) {
      res["SystemDiskCount"] = boost::any(*systemDiskCount);
    }
    if (systemDiskType) {
      res["SystemDiskType"] = boost::any(*systemDiskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("DiskCount") != m.end() && !m["DiskCount"].empty()) {
      diskCount = make_shared<long>(boost::any_cast<long>(m["DiskCount"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
    if (m.find("HostGroupType") != m.end() && !m["HostGroupType"].empty()) {
      hostGroupType = make_shared<string>(boost::any_cast<string>(m["HostGroupType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("SystemDiskCapacity") != m.end() && !m["SystemDiskCapacity"].empty()) {
      systemDiskCapacity = make_shared<long>(boost::any_cast<long>(m["SystemDiskCapacity"]));
    }
    if (m.find("SystemDiskCount") != m.end() && !m["SystemDiskCount"].empty()) {
      systemDiskCount = make_shared<long>(boost::any_cast<long>(m["SystemDiskCount"]));
    }
    if (m.find("SystemDiskType") != m.end() && !m["SystemDiskType"].empty()) {
      systemDiskType = make_shared<string>(boost::any_cast<string>(m["SystemDiskType"]));
    }
  }


  virtual ~SingleOrderResponseBodyDataEcsGroupList() = default;
};
class SingleOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> clusterSize{};
  shared_ptr<long> clusterStatus{};
  shared_ptr<string> deployMode{};
  shared_ptr<long> duration{};
  shared_ptr<vector<SingleOrderResponseBodyDataEcsGroupList>> ecsGroupList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> packageType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> storageSize{};

  SingleOrderResponseBodyData() {}

  explicit SingleOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterSize) {
      res["ClusterSize"] = boost::any(*clusterSize);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ecsGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*ecsGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsGroupList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterSize") != m.end() && !m["ClusterSize"].empty()) {
      clusterSize = make_shared<long>(boost::any_cast<long>(m["ClusterSize"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<long>(boost::any_cast<long>(m["ClusterStatus"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EcsGroupList") != m.end() && !m["EcsGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsGroupList"].type()) {
        vector<SingleOrderResponseBodyDataEcsGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SingleOrderResponseBodyDataEcsGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsGroupList = make_shared<vector<SingleOrderResponseBodyDataEcsGroupList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
  }


  virtual ~SingleOrderResponseBodyData() = default;
};
class SingleOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<SingleOrderResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SingleOrderResponseBody() {}

  explicit SingleOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SingleOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SingleOrderResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~SingleOrderResponseBody() = default;
};
class SingleOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SingleOrderResponseBody> body{};

  SingleOrderResponse() {}

  explicit SingleOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SingleOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SingleOrderResponseBody>(model1);
      }
    }
  }


  virtual ~SingleOrderResponse() = default;
};
class UpdateClusterNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterBizId{};
  shared_ptr<string> clusterName{};

  UpdateClusterNameRequest() {}

  explicit UpdateClusterNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterBizId) {
      res["ClusterBizId"] = boost::any(*clusterBizId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterBizId") != m.end() && !m["ClusterBizId"].empty()) {
      clusterBizId = make_shared<string>(boost::any_cast<string>(m["ClusterBizId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
  }


  virtual ~UpdateClusterNameRequest() = default;
};
class UpdateClusterNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateClusterNameResponseBody() {}

  explicit UpdateClusterNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~UpdateClusterNameResponseBody() = default;
};
class UpdateClusterNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateClusterNameResponseBody> body{};

  UpdateClusterNameResponse() {}

  explicit UpdateClusterNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateClusterNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClusterNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClusterNameResponse() = default;
};
class UploadLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  UploadLicenseResponseBody() {}

  explicit UploadLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~UploadLicenseResponseBody() = default;
};
class UploadLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadLicenseResponseBody> body{};

  UploadLicenseResponse() {}

  explicit UploadLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~UploadLicenseResponse() = default;
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
  CancelOrderResponse cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderResponse cancelOrder(shared_ptr<CancelOrderRequest> request);
  CheckClusterNameResponse checkClusterNameWithOptions(shared_ptr<CheckClusterNameRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckClusterNameResponse checkClusterName(shared_ptr<CheckClusterNameRequest> request);
  ConfirmNoticeResponse confirmNoticeWithOptions(shared_ptr<ConfirmNoticeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmNoticeResponse confirmNotice(shared_ptr<ConfirmNoticeRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  GetClusterDetailResponse getClusterDetailWithOptions(shared_ptr<GetClusterDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterDetailResponse getClusterDetail(shared_ptr<GetClusterDetailRequest> request);
  HasDefaultRoleResponse hasDefaultRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HasDefaultRoleResponse hasDefaultRole();
  InitializeClouderaDataPlatformResponse initializeClouderaDataPlatformWithOptions(shared_ptr<string> ClientToken, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeClouderaDataPlatformResponse initializeClouderaDataPlatform(shared_ptr<string> ClientToken);
  ListDefaultComponentsResponse listDefaultComponentsWithOptions(shared_ptr<ListDefaultComponentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDefaultComponentsResponse listDefaultComponents(shared_ptr<ListDefaultComponentsRequest> request);
  ListNodeGroupConstraintsResponse listNodeGroupConstraintsWithOptions(shared_ptr<ListNodeGroupConstraintsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeGroupConstraintsResponse listNodeGroupConstraints(shared_ptr<ListNodeGroupConstraintsRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListOperationsResponse listOperationsWithOptions(shared_ptr<ListOperationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOperationsResponse listOperations(shared_ptr<ListOperationsRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListZonesResponse listZonesWithOptions(shared_ptr<ListZonesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListZonesResponse listZones(shared_ptr<ListZonesRequest> request);
  QueryOrderResponse queryOrderWithOptions(shared_ptr<QueryOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrderResponse queryOrder(shared_ptr<QueryOrderRequest> request);
  QueryPriceResponse queryPriceWithOptions(shared_ptr<QueryPriceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPriceResponse queryPrice(shared_ptr<QueryPriceRequest> request);
  QueryRenewOrderResponse queryRenewOrderWithOptions(shared_ptr<QueryRenewOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRenewOrderResponse queryRenewOrder(shared_ptr<QueryRenewOrderRequest> request);
  QueryRenewPriceResponse queryRenewPriceWithOptions(shared_ptr<QueryRenewPriceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRenewPriceResponse queryRenewPrice(shared_ptr<QueryRenewPriceRequest> request);
  QueryScaleUpOrderResponse queryScaleUpOrderWithOptions(shared_ptr<QueryScaleUpOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryScaleUpOrderResponse queryScaleUpOrder(shared_ptr<QueryScaleUpOrderRequest> request);
  QueryScaleUpPriceResponse queryScaleUpPriceWithOptions(shared_ptr<QueryScaleUpPriceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryScaleUpPriceResponse queryScaleUpPrice(shared_ptr<QueryScaleUpPriceRequest> request);
  ReleaseClusterResponse releaseClusterWithOptions(shared_ptr<ReleaseClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseClusterResponse releaseCluster(shared_ptr<ReleaseClusterRequest> request);
  RenewInstanceResponse renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewInstanceResponse renewInstance(shared_ptr<RenewInstanceRequest> request);
  ScaleUpClusterResponse scaleUpClusterWithOptions(shared_ptr<ScaleUpClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScaleUpClusterResponse scaleUpCluster(shared_ptr<ScaleUpClusterRequest> request);
  SearchClusterInstancesResponse searchClusterInstancesWithOptions(shared_ptr<SearchClusterInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchClusterInstancesResponse searchClusterInstances(shared_ptr<SearchClusterInstancesRequest> request);
  SingleOrderResponse singleOrderWithOptions(shared_ptr<SingleOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SingleOrderResponse singleOrder(shared_ptr<SingleOrderRequest> request);
  UpdateClusterNameResponse updateClusterNameWithOptions(shared_ptr<UpdateClusterNameRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClusterNameResponse updateClusterName(shared_ptr<UpdateClusterNameRequest> request);
  UploadLicenseResponse uploadLicenseWithOptions(shared_ptr<string> RegionId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadLicenseResponse uploadLicense(shared_ptr<string> RegionId);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cdp20210402

#endif
