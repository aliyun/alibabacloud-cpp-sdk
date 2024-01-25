// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIEARTH-METEOROLOGY20210928_H_
#define ALIBABACLOUD_AIEARTH-METEOROLOGY20210928_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AIEarth-Meteorology20210928 {
class GridQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> element{};
  shared_ptr<string> forecastTimestamp{};
  shared_ptr<double> latitude{};
  shared_ptr<double> longitude{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> reportTimestamp{};

  GridQueryRequest() {}

  explicit GridQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (element) {
      res["element"] = boost::any(*element);
    }
    if (forecastTimestamp) {
      res["forecastTimestamp"] = boost::any(*forecastTimestamp);
    }
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    if (pageNo) {
      res["pageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    if (reportTimestamp) {
      res["reportTimestamp"] = boost::any(*reportTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("element") != m.end() && !m["element"].empty()) {
      element = make_shared<string>(boost::any_cast<string>(m["element"]));
    }
    if (m.find("forecastTimestamp") != m.end() && !m["forecastTimestamp"].empty()) {
      forecastTimestamp = make_shared<string>(boost::any_cast<string>(m["forecastTimestamp"]));
    }
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<double>(boost::any_cast<double>(m["latitude"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<double>(boost::any_cast<double>(m["longitude"]));
    }
    if (m.find("pageNo") != m.end() && !m["pageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["pageNo"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
    if (m.find("reportTimestamp") != m.end() && !m["reportTimestamp"].empty()) {
      reportTimestamp = make_shared<string>(boost::any_cast<string>(m["reportTimestamp"]));
    }
  }


  virtual ~GridQueryRequest() = default;
};
class GridQueryResponseBodyModuleList : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> element{};
  shared_ptr<string> elementUnit{};
  shared_ptr<string> forecastTimestamp{};
  shared_ptr<double> latitude{};
  shared_ptr<double> longitude{};
  shared_ptr<string> reportTimestamp{};
  shared_ptr<double> value{};

  GridQueryResponseBodyModuleList() {}

  explicit GridQueryResponseBodyModuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (element) {
      res["element"] = boost::any(*element);
    }
    if (elementUnit) {
      res["elementUnit"] = boost::any(*elementUnit);
    }
    if (forecastTimestamp) {
      res["forecastTimestamp"] = boost::any(*forecastTimestamp);
    }
    if (latitude) {
      res["latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["longitude"] = boost::any(*longitude);
    }
    if (reportTimestamp) {
      res["reportTimestamp"] = boost::any(*reportTimestamp);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("element") != m.end() && !m["element"].empty()) {
      element = make_shared<string>(boost::any_cast<string>(m["element"]));
    }
    if (m.find("elementUnit") != m.end() && !m["elementUnit"].empty()) {
      elementUnit = make_shared<string>(boost::any_cast<string>(m["elementUnit"]));
    }
    if (m.find("forecastTimestamp") != m.end() && !m["forecastTimestamp"].empty()) {
      forecastTimestamp = make_shared<string>(boost::any_cast<string>(m["forecastTimestamp"]));
    }
    if (m.find("latitude") != m.end() && !m["latitude"].empty()) {
      latitude = make_shared<double>(boost::any_cast<double>(m["latitude"]));
    }
    if (m.find("longitude") != m.end() && !m["longitude"].empty()) {
      longitude = make_shared<double>(boost::any_cast<double>(m["longitude"]));
    }
    if (m.find("reportTimestamp") != m.end() && !m["reportTimestamp"].empty()) {
      reportTimestamp = make_shared<string>(boost::any_cast<string>(m["reportTimestamp"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
  }


  virtual ~GridQueryResponseBodyModuleList() = default;
};
class GridQueryResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<vector<GridQueryResponseBodyModuleList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  GridQueryResponseBodyModule() {}

  explicit GridQueryResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNo) {
      res["pageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<GridQueryResponseBodyModuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GridQueryResponseBodyModuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GridQueryResponseBodyModuleList>>(expect1);
      }
    }
    if (m.find("pageNo") != m.end() && !m["pageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["pageNo"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~GridQueryResponseBodyModule() = default;
};
class GridQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<GridQueryResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GridQueryResponseBody() {}

  explicit GridQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (module) {
      res["module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("module") != m.end() && !m["module"].empty()) {
      if (typeid(map<string, boost::any>) == m["module"].type()) {
        GridQueryResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["module"]));
        module = make_shared<GridQueryResponseBodyModule>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GridQueryResponseBody() = default;
};
class GridQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GridQueryResponseBody> body{};

  GridQueryResponse() {}

  explicit GridQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GridQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GridQueryResponseBody>(model1);
      }
    }
  }


  virtual ~GridQueryResponse() = default;
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
  GridQueryResponse gridQueryWithOptions(shared_ptr<string> dataType,
                                         shared_ptr<GridQueryRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GridQueryResponse gridQuery(shared_ptr<string> dataType, shared_ptr<GridQueryRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AIEarth-Meteorology20210928

#endif
