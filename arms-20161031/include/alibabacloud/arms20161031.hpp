// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ARMS20161031_H_
#define ALIBABACLOUD_ARMS20161031_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ARMS20161031 {
class ARMSQueryDataSetRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ARMSQueryDataSetRequestDimensions() {}

  explicit ARMSQueryDataSetRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ARMSQueryDataSetRequestDimensions() = default;
};
class ARMSQueryDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<long> datasetId{};
  shared_ptr<long> dateStr{};
  shared_ptr<vector<ARMSQueryDataSetRequestDimensions>> dimensions{};
  shared_ptr<long> intervalInSec{};
  shared_ptr<bool> isDetail{};
  shared_ptr<long> maxTime{};
  shared_ptr<vector<string>> measures{};
  shared_ptr<long> minTime{};

  ARMSQueryDataSetRequest() {}

  explicit ARMSQueryDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (dateStr) {
      res["DateStr"] = boost::any(*dateStr);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (intervalInSec) {
      res["IntervalInSec"] = boost::any(*intervalInSec);
    }
    if (isDetail) {
      res["IsDetail"] = boost::any(*isDetail);
    }
    if (maxTime) {
      res["MaxTime"] = boost::any(*maxTime);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (minTime) {
      res["MinTime"] = boost::any(*minTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<long>(boost::any_cast<long>(m["DatasetId"]));
    }
    if (m.find("DateStr") != m.end() && !m["DateStr"].empty()) {
      dateStr = make_shared<long>(boost::any_cast<long>(m["DateStr"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<ARMSQueryDataSetRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ARMSQueryDataSetRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<ARMSQueryDataSetRequestDimensions>>(expect1);
      }
    }
    if (m.find("IntervalInSec") != m.end() && !m["IntervalInSec"].empty()) {
      intervalInSec = make_shared<long>(boost::any_cast<long>(m["IntervalInSec"]));
    }
    if (m.find("IsDetail") != m.end() && !m["IsDetail"].empty()) {
      isDetail = make_shared<bool>(boost::any_cast<bool>(m["IsDetail"]));
    }
    if (m.find("MaxTime") != m.end() && !m["MaxTime"].empty()) {
      maxTime = make_shared<long>(boost::any_cast<long>(m["MaxTime"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Measures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Measures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      measures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MinTime") != m.end() && !m["MinTime"].empty()) {
      minTime = make_shared<long>(boost::any_cast<long>(m["MinTime"]));
    }
  }


  virtual ~ARMSQueryDataSetRequest() = default;
};
class ARMSQueryDataSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ARMSQueryDataSetResponseBody() {}

  explicit ARMSQueryDataSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ARMSQueryDataSetResponseBody() = default;
};
class ARMSQueryDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ARMSQueryDataSetResponseBody> body{};

  ARMSQueryDataSetResponse() {}

  explicit ARMSQueryDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ARMSQueryDataSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ARMSQueryDataSetResponseBody>(model1);
      }
    }
  }


  virtual ~ARMSQueryDataSetResponse() = default;
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
  ARMSQueryDataSetResponse aRMSQueryDataSetWithOptions(shared_ptr<ARMSQueryDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ARMSQueryDataSetResponse aRMSQueryDataSet(shared_ptr<ARMSQueryDataSetRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ARMS20161031

#endif
