// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CIOMARKETPOP20250709_H_
#define ALIBABACLOUD_CIOMARKETPOP20250709_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CioMarketPop20250709 {
class GetEveryOneSellsFormListRequest : public Darabonba::Model {
public:
  shared_ptr<string> auth{};

  GetEveryOneSellsFormListRequest() {}

  explicit GetEveryOneSellsFormListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auth) {
      res["Auth"] = boost::any(*auth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auth") != m.end() && !m["Auth"].empty()) {
      auth = make_shared<string>(boost::any_cast<string>(m["Auth"]));
    }
  }


  virtual ~GetEveryOneSellsFormListRequest() = default;
};
class GetEveryOneSellsFormListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> virtualMainDepartment{};
  shared_ptr<string> virtualDepartmentName{};
  shared_ptr<string> virtualDepartmentCode{};
  shared_ptr<string> virtualParentDepartment{};
  shared_ptr<string> virtualDepartmentStatus{};
  shared_ptr<string> dingId{};
  shared_ptr<string> empStatus{};

  GetEveryOneSellsFormListResponseBody() {}

  explicit GetEveryOneSellsFormListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (virtualMainDepartment) {
      res["VirtualMainDepartment"] = boost::any(*virtualMainDepartment);
    }
    if (virtualDepartmentName) {
      res["VirtualDepartmentName"] = boost::any(*virtualDepartmentName);
    }
    if (virtualDepartmentCode) {
      res["VirtualDepartmentCode"] = boost::any(*virtualDepartmentCode);
    }
    if (virtualParentDepartment) {
      res["VirtualParentDepartment"] = boost::any(*virtualParentDepartment);
    }
    if (virtualDepartmentStatus) {
      res["VirtualDepartmentStatus"] = boost::any(*virtualDepartmentStatus);
    }
    if (dingId) {
      res["DingId"] = boost::any(*dingId);
    }
    if (empStatus) {
      res["EmpStatus"] = boost::any(*empStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("VirtualMainDepartment") != m.end() && !m["VirtualMainDepartment"].empty()) {
      virtualMainDepartment = make_shared<string>(boost::any_cast<string>(m["VirtualMainDepartment"]));
    }
    if (m.find("VirtualDepartmentName") != m.end() && !m["VirtualDepartmentName"].empty()) {
      virtualDepartmentName = make_shared<string>(boost::any_cast<string>(m["VirtualDepartmentName"]));
    }
    if (m.find("VirtualDepartmentCode") != m.end() && !m["VirtualDepartmentCode"].empty()) {
      virtualDepartmentCode = make_shared<string>(boost::any_cast<string>(m["VirtualDepartmentCode"]));
    }
    if (m.find("VirtualParentDepartment") != m.end() && !m["VirtualParentDepartment"].empty()) {
      virtualParentDepartment = make_shared<string>(boost::any_cast<string>(m["VirtualParentDepartment"]));
    }
    if (m.find("VirtualDepartmentStatus") != m.end() && !m["VirtualDepartmentStatus"].empty()) {
      virtualDepartmentStatus = make_shared<string>(boost::any_cast<string>(m["VirtualDepartmentStatus"]));
    }
    if (m.find("DingId") != m.end() && !m["DingId"].empty()) {
      dingId = make_shared<string>(boost::any_cast<string>(m["DingId"]));
    }
    if (m.find("EmpStatus") != m.end() && !m["EmpStatus"].empty()) {
      empStatus = make_shared<string>(boost::any_cast<string>(m["EmpStatus"]));
    }
  }


  virtual ~GetEveryOneSellsFormListResponseBody() = default;
};
class GetEveryOneSellsFormListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<GetEveryOneSellsFormListResponseBody>> body{};

  GetEveryOneSellsFormListResponse() {}

  explicit GetEveryOneSellsFormListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GetEveryOneSellsFormListResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEveryOneSellsFormListResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GetEveryOneSellsFormListResponseBody>>(expect1);
      }
    }
  }


  virtual ~GetEveryOneSellsFormListResponse() = default;
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
  GetEveryOneSellsFormListResponse getEveryOneSellsFormListWithOptions(shared_ptr<GetEveryOneSellsFormListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEveryOneSellsFormListResponse getEveryOneSellsFormList(shared_ptr<GetEveryOneSellsFormListRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CioMarketPop20250709

#endif
