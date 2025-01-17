// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MARKETPLACEINTL20221230_H_
#define ALIBABACLOUD_MARKETPLACEINTL20221230_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MarketplaceIntl20221230 {
class PushMeteringDataRequestMeteringData : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> meteringAssist{};
  shared_ptr<string> meteringEntity{};
  shared_ptr<long> startTime{};

  PushMeteringDataRequestMeteringData() {}

  explicit PushMeteringDataRequestMeteringData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (meteringAssist) {
      res["MeteringAssist"] = boost::any(*meteringAssist);
    }
    if (meteringEntity) {
      res["MeteringEntity"] = boost::any(*meteringEntity);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MeteringAssist") != m.end() && !m["MeteringAssist"].empty()) {
      meteringAssist = make_shared<string>(boost::any_cast<string>(m["MeteringAssist"]));
    }
    if (m.find("MeteringEntity") != m.end() && !m["MeteringEntity"].empty()) {
      meteringEntity = make_shared<string>(boost::any_cast<string>(m["MeteringEntity"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~PushMeteringDataRequestMeteringData() = default;
};
class PushMeteringDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<vector<PushMeteringDataRequestMeteringData>> meteringData{};

  PushMeteringDataRequest() {}

  explicit PushMeteringDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (meteringData) {
      vector<boost::any> temp1;
      for(auto item1:*meteringData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("MeteringData") != m.end() && !m["MeteringData"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringData"].type()) {
        vector<PushMeteringDataRequestMeteringData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PushMeteringDataRequestMeteringData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringData = make_shared<vector<PushMeteringDataRequestMeteringData>>(expect1);
      }
    }
  }


  virtual ~PushMeteringDataRequest() = default;
};
class PushMeteringDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<bool> forceFatal{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  PushMeteringDataResponseBody() {}

  explicit PushMeteringDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (forceFatal) {
      res["ForceFatal"] = boost::any(*forceFatal);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
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
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ForceFatal") != m.end() && !m["ForceFatal"].empty()) {
      forceFatal = make_shared<bool>(boost::any_cast<bool>(m["ForceFatal"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PushMeteringDataResponseBody() = default;
};
class PushMeteringDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushMeteringDataResponseBody> body{};

  PushMeteringDataResponse() {}

  explicit PushMeteringDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushMeteringDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushMeteringDataResponseBody>(model1);
      }
    }
  }


  virtual ~PushMeteringDataResponse() = default;
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
  PushMeteringDataResponse pushMeteringDataWithOptions(shared_ptr<PushMeteringDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushMeteringDataResponse pushMeteringData(shared_ptr<PushMeteringDataRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MarketplaceIntl20221230

#endif
