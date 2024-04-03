// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APS20240325_H_
#define ALIBABACLOUD_APS20240325_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Aps20240325 {
class GetFxCustomerTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> uid{};

  GetFxCustomerTypeRequest() {}

  explicit GetFxCustomerTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~GetFxCustomerTypeRequest() = default;
};
class GetFxCustomerTypeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> customerType{};
  shared_ptr<long> isSub{};
  shared_ptr<long> parentId{};

  GetFxCustomerTypeResponseBodyData() {}

  explicit GetFxCustomerTypeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerType) {
      res["CustomerType"] = boost::any(*customerType);
    }
    if (isSub) {
      res["IsSub"] = boost::any(*isSub);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerType") != m.end() && !m["CustomerType"].empty()) {
      customerType = make_shared<long>(boost::any_cast<long>(m["CustomerType"]));
    }
    if (m.find("IsSub") != m.end() && !m["IsSub"].empty()) {
      isSub = make_shared<long>(boost::any_cast<long>(m["IsSub"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
  }


  virtual ~GetFxCustomerTypeResponseBodyData() = default;
};
class GetFxCustomerTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetFxCustomerTypeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetFxCustomerTypeResponseBody() {}

  explicit GetFxCustomerTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFxCustomerTypeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFxCustomerTypeResponseBodyData>(model1);
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


  virtual ~GetFxCustomerTypeResponseBody() = default;
};
class GetFxCustomerTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFxCustomerTypeResponseBody> body{};

  GetFxCustomerTypeResponse() {}

  explicit GetFxCustomerTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFxCustomerTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFxCustomerTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetFxCustomerTypeResponse() = default;
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
  GetFxCustomerTypeResponse getFxCustomerTypeWithOptions(shared_ptr<GetFxCustomerTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFxCustomerTypeResponse getFxCustomerType(shared_ptr<GetFxCustomerTypeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aps20240325

#endif
