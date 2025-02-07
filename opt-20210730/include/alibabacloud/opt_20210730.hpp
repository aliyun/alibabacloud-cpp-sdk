// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OPT20210730_H_
#define ALIBABACLOUD_OPT20210730_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Opt20210730 {
class GetOpenStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOpenStatusResponseBody() {}

  explicit GetOpenStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetOpenStatusResponseBody() = default;
};
class GetOpenStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOpenStatusResponseBody> body{};

  GetOpenStatusResponse() {}

  explicit GetOpenStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpenStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpenStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpenStatusResponse() = default;
};
class GetOrderInfoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> listReleased{};
  shared_ptr<string> relService{};
  shared_ptr<long> resourceType{};

  GetOrderInfoRequest() {}

  explicit GetOrderInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listReleased) {
      res["ListReleased"] = boost::any(*listReleased);
    }
    if (relService) {
      res["RelService"] = boost::any(*relService);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListReleased") != m.end() && !m["ListReleased"].empty()) {
      listReleased = make_shared<bool>(boost::any_cast<bool>(m["ListReleased"]));
    }
    if (m.find("RelService") != m.end() && !m["RelService"].empty()) {
      relService = make_shared<string>(boost::any_cast<string>(m["RelService"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
  }


  virtual ~GetOrderInfoRequest() = default;
};
class GetOrderInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> currentConcurrency{};
  shared_ptr<long> currentDays{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isReleased{};
  shared_ptr<string> licenseKey{};
  shared_ptr<string> remark{};
  shared_ptr<long> totalDays{};

  GetOrderInfoResponseBodyData() {}

  explicit GetOrderInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["bizType"] = boost::any(*bizType);
    }
    if (currentConcurrency) {
      res["currentConcurrency"] = boost::any(*currentConcurrency);
    }
    if (currentDays) {
      res["currentDays"] = boost::any(*currentDays);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (isReleased) {
      res["isReleased"] = boost::any(*isReleased);
    }
    if (licenseKey) {
      res["licenseKey"] = boost::any(*licenseKey);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (totalDays) {
      res["totalDays"] = boost::any(*totalDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizType") != m.end() && !m["bizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["bizType"]));
    }
    if (m.find("currentConcurrency") != m.end() && !m["currentConcurrency"].empty()) {
      currentConcurrency = make_shared<long>(boost::any_cast<long>(m["currentConcurrency"]));
    }
    if (m.find("currentDays") != m.end() && !m["currentDays"].empty()) {
      currentDays = make_shared<long>(boost::any_cast<long>(m["currentDays"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("isReleased") != m.end() && !m["isReleased"].empty()) {
      isReleased = make_shared<bool>(boost::any_cast<bool>(m["isReleased"]));
    }
    if (m.find("licenseKey") != m.end() && !m["licenseKey"].empty()) {
      licenseKey = make_shared<string>(boost::any_cast<string>(m["licenseKey"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("totalDays") != m.end() && !m["totalDays"].empty()) {
      totalDays = make_shared<long>(boost::any_cast<long>(m["totalDays"]));
    }
  }


  virtual ~GetOrderInfoResponseBodyData() = default;
};
class GetOrderInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOrderInfoResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrderInfoResponseBody() {}

  explicit GetOrderInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOrderInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOrderInfoResponseBodyData>>(expect1);
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


  virtual ~GetOrderInfoResponseBody() = default;
};
class GetOrderInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrderInfoResponseBody> body{};

  GetOrderInfoResponse() {}

  explicit GetOrderInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrderInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrderInfoResponse() = default;
};
class GetOrderUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> licenseKey{};
  shared_ptr<string> relService{};
  shared_ptr<long> resourceType{};
  shared_ptr<long> timeRange{};

  GetOrderUsageRequest() {}

  explicit GetOrderUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (licenseKey) {
      res["LicenseKey"] = boost::any(*licenseKey);
    }
    if (relService) {
      res["RelService"] = boost::any(*relService);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (timeRange) {
      res["TimeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LicenseKey") != m.end() && !m["LicenseKey"].empty()) {
      licenseKey = make_shared<string>(boost::any_cast<string>(m["LicenseKey"]));
    }
    if (m.find("RelService") != m.end() && !m["RelService"].empty()) {
      relService = make_shared<string>(boost::any_cast<string>(m["RelService"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      timeRange = make_shared<long>(boost::any_cast<long>(m["TimeRange"]));
    }
  }


  virtual ~GetOrderUsageRequest() = default;
};
class GetOrderUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrderUsageResponseBody() {}

  explicit GetOrderUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
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


  virtual ~GetOrderUsageResponseBody() = default;
};
class GetOrderUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrderUsageResponseBody> body{};

  GetOrderUsageResponse() {}

  explicit GetOrderUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrderUsageResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrderUsageResponse() = default;
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
  GetOpenStatusResponse getOpenStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpenStatusResponse getOpenStatus();
  GetOrderInfoResponse getOrderInfoWithOptions(shared_ptr<GetOrderInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderInfoResponse getOrderInfo(shared_ptr<GetOrderInfoRequest> request);
  GetOrderUsageResponse getOrderUsageWithOptions(shared_ptr<GetOrderUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderUsageResponse getOrderUsage(shared_ptr<GetOrderUsageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Opt20210730

#endif
