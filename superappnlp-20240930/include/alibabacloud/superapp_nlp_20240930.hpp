// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SUPERAPPNLP20240930_H_
#define ALIBABACLOUD_SUPERAPPNLP20240930_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_SuperappNlp20240930 {
class NlpAddressNormalizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> cityStdManual{};
  shared_ptr<string> cityStr{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> districtStdManual{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> provinceStdManual{};
  shared_ptr<string> provinceStr{};
  shared_ptr<string> queryStr{};

  NlpAddressNormalizationRequest() {}

  explicit NlpAddressNormalizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityStdManual) {
      res["CityStdManual"] = boost::any(*cityStdManual);
    }
    if (cityStr) {
      res["CityStr"] = boost::any(*cityStr);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (districtStdManual) {
      res["DistrictStdManual"] = boost::any(*districtStdManual);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (provinceStdManual) {
      res["ProvinceStdManual"] = boost::any(*provinceStdManual);
    }
    if (provinceStr) {
      res["ProvinceStr"] = boost::any(*provinceStr);
    }
    if (queryStr) {
      res["QueryStr"] = boost::any(*queryStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CityStdManual") != m.end() && !m["CityStdManual"].empty()) {
      cityStdManual = make_shared<string>(boost::any_cast<string>(m["CityStdManual"]));
    }
    if (m.find("CityStr") != m.end() && !m["CityStr"].empty()) {
      cityStr = make_shared<string>(boost::any_cast<string>(m["CityStr"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DistrictStdManual") != m.end() && !m["DistrictStdManual"].empty()) {
      districtStdManual = make_shared<string>(boost::any_cast<string>(m["DistrictStdManual"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ProvinceStdManual") != m.end() && !m["ProvinceStdManual"].empty()) {
      provinceStdManual = make_shared<string>(boost::any_cast<string>(m["ProvinceStdManual"]));
    }
    if (m.find("ProvinceStr") != m.end() && !m["ProvinceStr"].empty()) {
      provinceStr = make_shared<string>(boost::any_cast<string>(m["ProvinceStr"]));
    }
    if (m.find("QueryStr") != m.end() && !m["QueryStr"].empty()) {
      queryStr = make_shared<string>(boost::any_cast<string>(m["QueryStr"]));
    }
  }


  virtual ~NlpAddressNormalizationRequest() = default;
};
class NlpAddressNormalizationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cityStd{};
  shared_ptr<string> districtStd{};
  shared_ptr<string> provinceStd{};
  shared_ptr<vector<string>> results{};
  shared_ptr<string> statusEs{};

  NlpAddressNormalizationResponseBodyData() {}

  explicit NlpAddressNormalizationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityStd) {
      res["CityStd"] = boost::any(*cityStd);
    }
    if (districtStd) {
      res["DistrictStd"] = boost::any(*districtStd);
    }
    if (provinceStd) {
      res["ProvinceStd"] = boost::any(*provinceStd);
    }
    if (results) {
      res["Results"] = boost::any(*results);
    }
    if (statusEs) {
      res["StatusEs"] = boost::any(*statusEs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CityStd") != m.end() && !m["CityStd"].empty()) {
      cityStd = make_shared<string>(boost::any_cast<string>(m["CityStd"]));
    }
    if (m.find("DistrictStd") != m.end() && !m["DistrictStd"].empty()) {
      districtStd = make_shared<string>(boost::any_cast<string>(m["DistrictStd"]));
    }
    if (m.find("ProvinceStd") != m.end() && !m["ProvinceStd"].empty()) {
      provinceStd = make_shared<string>(boost::any_cast<string>(m["ProvinceStd"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Results"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      results = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StatusEs") != m.end() && !m["StatusEs"].empty()) {
      statusEs = make_shared<string>(boost::any_cast<string>(m["StatusEs"]));
    }
  }


  virtual ~NlpAddressNormalizationResponseBodyData() = default;
};
class NlpAddressNormalizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<NlpAddressNormalizationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};
  shared_ptr<string> timestamp{};

  NlpAddressNormalizationResponseBody() {}

  explicit NlpAddressNormalizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        NlpAddressNormalizationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<NlpAddressNormalizationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~NlpAddressNormalizationResponseBody() = default;
};
class NlpAddressNormalizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NlpAddressNormalizationResponseBody> body{};

  NlpAddressNormalizationResponse() {}

  explicit NlpAddressNormalizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NlpAddressNormalizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NlpAddressNormalizationResponseBody>(model1);
      }
    }
  }


  virtual ~NlpAddressNormalizationResponse() = default;
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
  NlpAddressNormalizationResponse nlpAddressNormalizationWithOptions(shared_ptr<NlpAddressNormalizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NlpAddressNormalizationResponse nlpAddressNormalization(shared_ptr<NlpAddressNormalizationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_SuperappNlp20240930

#endif
