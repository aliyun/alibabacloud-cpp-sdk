// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DRDS20171016_H_
#define ALIBABACLOUD_DRDS20171016_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Drds20171016 {
class CreateDrdsAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> password{};
  shared_ptr<string> userName{};

  CreateDrdsAccountRequest() {}

  explicit CreateDrdsAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateDrdsAccountRequest() = default;
};
class CreateDrdsAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDrdsAccountResponseBody() {}

  explicit CreateDrdsAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateDrdsAccountResponseBody() = default;
};
class CreateDrdsAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDrdsAccountResponseBody> body{};

  CreateDrdsAccountResponse() {}

  explicit CreateDrdsAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDrdsAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDrdsAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDrdsAccountResponse() = default;
};
class CreateDrdsDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> encode{};
  shared_ptr<string> password{};
  shared_ptr<string> rdsInstances{};

  CreateDrdsDBRequest() {}

  explicit CreateDrdsDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (encode) {
      res["Encode"] = boost::any(*encode);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (rdsInstances) {
      res["RdsInstances"] = boost::any(*rdsInstances);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("Encode") != m.end() && !m["Encode"].empty()) {
      encode = make_shared<string>(boost::any_cast<string>(m["Encode"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RdsInstances") != m.end() && !m["RdsInstances"].empty()) {
      rdsInstances = make_shared<string>(boost::any_cast<string>(m["RdsInstances"]));
    }
  }


  virtual ~CreateDrdsDBRequest() = default;
};
class CreateDrdsDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDrdsDBResponseBody() {}

  explicit CreateDrdsDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateDrdsDBResponseBody() = default;
};
class CreateDrdsDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDrdsDBResponseBody> body{};

  CreateDrdsDBResponse() {}

  explicit CreateDrdsDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDrdsDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDrdsDBResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDrdsDBResponse() = default;
};
class CreateDrdsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceSeries{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<bool> isHa{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> quantity{};
  shared_ptr<string> regionId{};
  shared_ptr<string> specification{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  CreateDrdsInstanceRequest() {}

  explicit CreateDrdsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceSeries) {
      res["InstanceSeries"] = boost::any(*instanceSeries);
    }
    if (isAutoRenew) {
      res["IsAutoRenew"] = boost::any(*isAutoRenew);
    }
    if (isHa) {
      res["IsHa"] = boost::any(*isHa);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceSeries") != m.end() && !m["InstanceSeries"].empty()) {
      instanceSeries = make_shared<string>(boost::any_cast<string>(m["InstanceSeries"]));
    }
    if (m.find("IsAutoRenew") != m.end() && !m["IsAutoRenew"].empty()) {
      isAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRenew"]));
    }
    if (m.find("IsHa") != m.end() && !m["IsHa"].empty()) {
      isHa = make_shared<bool>(boost::any_cast<bool>(m["IsHa"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDrdsInstanceRequest() = default;
};
class CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> drdsInstanceId{};

  CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList() {}

  explicit CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DrdsInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DrdsInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      drdsInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList() = default;
};
class CreateDrdsInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList> drdsInstanceIdList{};
  shared_ptr<long> orderId{};

  CreateDrdsInstanceResponseBodyData() {}

  explicit CreateDrdsInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceIdList) {
      res["DrdsInstanceIdList"] = drdsInstanceIdList ? boost::any(drdsInstanceIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceIdList") != m.end() && !m["DrdsInstanceIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DrdsInstanceIdList"].type()) {
        CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DrdsInstanceIdList"]));
        drdsInstanceIdList = make_shared<CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList>(model1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreateDrdsInstanceResponseBodyData() = default;
};
class CreateDrdsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateDrdsInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDrdsInstanceResponseBody() {}

  explicit CreateDrdsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        CreateDrdsInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDrdsInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateDrdsInstanceResponseBody() = default;
};
class CreateDrdsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDrdsInstanceResponseBody> body{};

  CreateDrdsInstanceResponse() {}

  explicit CreateDrdsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDrdsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDrdsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDrdsInstanceResponse() = default;
};
class CreateReadOnlyAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> password{};

  CreateReadOnlyAccountRequest() {}

  explicit CreateReadOnlyAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
  }


  virtual ~CreateReadOnlyAccountRequest() = default;
};
class CreateReadOnlyAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  CreateReadOnlyAccountResponseBodyData() {}

  explicit CreateReadOnlyAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~CreateReadOnlyAccountResponseBodyData() = default;
};
class CreateReadOnlyAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateReadOnlyAccountResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateReadOnlyAccountResponseBody() {}

  explicit CreateReadOnlyAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        CreateReadOnlyAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateReadOnlyAccountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateReadOnlyAccountResponseBody() = default;
};
class CreateReadOnlyAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateReadOnlyAccountResponseBody> body{};

  CreateReadOnlyAccountResponse() {}

  explicit CreateReadOnlyAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateReadOnlyAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateReadOnlyAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateReadOnlyAccountResponse() = default;
};
class DeleteDrdsDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  DeleteDrdsDBRequest() {}

  explicit DeleteDrdsDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DeleteDrdsDBRequest() = default;
};
class DeleteDrdsDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDrdsDBResponseBody() {}

  explicit DeleteDrdsDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDrdsDBResponseBody() = default;
};
class DeleteDrdsDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDrdsDBResponseBody> body{};

  DeleteDrdsDBResponse() {}

  explicit DeleteDrdsDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDrdsDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDrdsDBResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDrdsDBResponse() = default;
};
class DeleteFailedDrdsDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  DeleteFailedDrdsDBRequest() {}

  explicit DeleteFailedDrdsDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DeleteFailedDrdsDBRequest() = default;
};
class DeleteFailedDrdsDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFailedDrdsDBResponseBody() {}

  explicit DeleteFailedDrdsDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFailedDrdsDBResponseBody() = default;
};
class DeleteFailedDrdsDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFailedDrdsDBResponseBody> body{};

  DeleteFailedDrdsDBResponse() {}

  explicit DeleteFailedDrdsDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFailedDrdsDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFailedDrdsDBResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFailedDrdsDBResponse() = default;
};
class DescribeCreateDrdsInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeCreateDrdsInstanceStatusRequest() {}

  explicit DescribeCreateDrdsInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeCreateDrdsInstanceStatusRequest() = default;
};
class DescribeCreateDrdsInstanceStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  DescribeCreateDrdsInstanceStatusResponseBodyData() {}

  explicit DescribeCreateDrdsInstanceStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCreateDrdsInstanceStatusResponseBodyData() = default;
};
class DescribeCreateDrdsInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCreateDrdsInstanceStatusResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCreateDrdsInstanceStatusResponseBody() {}

  explicit DescribeCreateDrdsInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeCreateDrdsInstanceStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCreateDrdsInstanceStatusResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeCreateDrdsInstanceStatusResponseBody() = default;
};
class DescribeCreateDrdsInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCreateDrdsInstanceStatusResponseBody> body{};

  DescribeCreateDrdsInstanceStatusResponse() {}

  explicit DescribeCreateDrdsInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCreateDrdsInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCreateDrdsInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCreateDrdsInstanceStatusResponse() = default;
};
class DescribeDrdsDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  DescribeDrdsDBRequest() {}

  explicit DescribeDrdsDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeDrdsDBRequest() = default;
};
class DescribeDrdsDBResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> dbName{};
  shared_ptr<string> mode{};
  shared_ptr<string> msg{};
  shared_ptr<long> status{};

  DescribeDrdsDBResponseBodyData() {}

  explicit DescribeDrdsDBResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeDrdsDBResponseBodyData() = default;
};
class DescribeDrdsDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsDBResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsDBResponseBody() {}

  explicit DescribeDrdsDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeDrdsDBResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsDBResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsDBResponseBody() = default;
};
class DescribeDrdsDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDBResponseBody> body{};

  DescribeDrdsDBResponse() {}

  explicit DescribeDrdsDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDBResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDBResponse() = default;
};
class DescribeDrdsDBIpWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> groupName{};

  DescribeDrdsDBIpWhiteListRequest() {}

  explicit DescribeDrdsDBIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DescribeDrdsDBIpWhiteListRequest() = default;
};
class DescribeDrdsDBIpWhiteListResponseBodyDataIpWhiteList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ip{};

  DescribeDrdsDBIpWhiteListResponseBodyDataIpWhiteList() {}

  explicit DescribeDrdsDBIpWhiteListResponseBodyDataIpWhiteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ip = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDrdsDBIpWhiteListResponseBodyDataIpWhiteList() = default;
};
class DescribeDrdsDBIpWhiteListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsDBIpWhiteListResponseBodyDataIpWhiteList> ipWhiteList{};

  DescribeDrdsDBIpWhiteListResponseBodyData() {}

  explicit DescribeDrdsDBIpWhiteListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhiteList) {
      res["IpWhiteList"] = ipWhiteList ? boost::any(ipWhiteList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpWhiteList"].type()) {
        DescribeDrdsDBIpWhiteListResponseBodyDataIpWhiteList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpWhiteList"]));
        ipWhiteList = make_shared<DescribeDrdsDBIpWhiteListResponseBodyDataIpWhiteList>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDBIpWhiteListResponseBodyData() = default;
};
class DescribeDrdsDBIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsDBIpWhiteListResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsDBIpWhiteListResponseBody() {}

  explicit DescribeDrdsDBIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeDrdsDBIpWhiteListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsDBIpWhiteListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsDBIpWhiteListResponseBody() = default;
};
class DescribeDrdsDBIpWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDBIpWhiteListResponseBody> body{};

  DescribeDrdsDBIpWhiteListResponse() {}

  explicit DescribeDrdsDBIpWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsDBIpWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDBIpWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDBIpWhiteListResponse() = default;
};
class DescribeDrdsDBsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeDrdsDBsRequest() {}

  explicit DescribeDrdsDBsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeDrdsDBsRequest() = default;
};
class DescribeDrdsDBsResponseBodyDataDb : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> dbName{};
  shared_ptr<string> mode{};
  shared_ptr<string> msg{};
  shared_ptr<long> status{};

  DescribeDrdsDBsResponseBodyDataDb() {}

  explicit DescribeDrdsDBsResponseBodyDataDb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeDrdsDBsResponseBodyDataDb() = default;
};
class DescribeDrdsDBsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsDBsResponseBodyDataDb>> db{};

  DescribeDrdsDBsResponseBodyData() {}

  explicit DescribeDrdsDBsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (db) {
      vector<boost::any> temp1;
      for(auto item1:*db){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Db"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Db") != m.end() && !m["Db"].empty()) {
      if (typeid(vector<boost::any>) == m["Db"].type()) {
        vector<DescribeDrdsDBsResponseBodyDataDb> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Db"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsDBsResponseBodyDataDb model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        db = make_shared<vector<DescribeDrdsDBsResponseBodyDataDb>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsDBsResponseBodyData() = default;
};
class DescribeDrdsDBsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsDBsResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsDBsResponseBody() {}

  explicit DescribeDrdsDBsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeDrdsDBsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsDBsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsDBsResponseBody() = default;
};
class DescribeDrdsDBsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDBsResponseBody> body{};

  DescribeDrdsDBsResponse() {}

  explicit DescribeDrdsDBsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsDBsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDBsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDBsResponse() = default;
};
class DescribeDrdsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeDrdsInstanceRequest() {}

  explicit DescribeDrdsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeDrdsInstanceRequest() = default;
};
class DescribeDrdsInstanceResponseBodyDataVipsVip : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  DescribeDrdsInstanceResponseBodyDataVipsVip() {}

  explicit DescribeDrdsInstanceResponseBodyDataVipsVip(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~DescribeDrdsInstanceResponseBodyDataVipsVip() = default;
};
class DescribeDrdsInstanceResponseBodyDataVips : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstanceResponseBodyDataVipsVip>> vip{};

  DescribeDrdsInstanceResponseBodyDataVips() {}

  explicit DescribeDrdsInstanceResponseBodyDataVips(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vip) {
      vector<boost::any> temp1;
      for(auto item1:*vip){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vip"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vip") != m.end() && !m["Vip"].empty()) {
      if (typeid(vector<boost::any>) == m["Vip"].type()) {
        vector<DescribeDrdsInstanceResponseBodyDataVipsVip> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vip"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceResponseBodyDataVipsVip model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vip = make_shared<vector<DescribeDrdsInstanceResponseBodyDataVipsVip>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceResponseBodyDataVips() = default;
};
class DescribeDrdsInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> specification{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<long> version{};
  shared_ptr<DescribeDrdsInstanceResponseBodyDataVips> vips{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> zoneId{};

  DescribeDrdsInstanceResponseBodyData() {}

  explicit DescribeDrdsInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vips) {
      res["Vips"] = vips ? boost::any(vips->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("Vips") != m.end() && !m["Vips"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vips"].type()) {
        DescribeDrdsInstanceResponseBodyDataVips model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vips"]));
        vips = make_shared<DescribeDrdsInstanceResponseBodyDataVips>(model1);
      }
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDrdsInstanceResponseBodyData() = default;
};
class DescribeDrdsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsInstanceResponseBody() {}

  explicit DescribeDrdsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeDrdsInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsInstanceResponseBody() = default;
};
class DescribeDrdsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsInstanceResponseBody> body{};

  DescribeDrdsInstanceResponse() {}

  explicit DescribeDrdsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceResponse() = default;
};
class DescribeDrdsInstanceDbMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> key{};
  shared_ptr<long> startTime{};

  DescribeDrdsInstanceDbMonitorRequest() {}

  explicit DescribeDrdsInstanceDbMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorRequest() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue : public Darabonba::Model {
public:
  shared_ptr<long> date{};
  shared_ptr<string> value{};

  DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<long>(boost::any_cast<long>(m["Date"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValues : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue>> performanceValue{};

  DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValues() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceValue") != m.end() && !m["PerformanceValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceValue"].type()) {
        vector<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceValue = make_shared<vector<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValues() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValues> values{};

  DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (values) {
      res["Values"] = values ? boost::any(values->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(map<string, boost::any>) == m["Values"].type()) {
        DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Values"]));
        values = make_shared<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceDataValues>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData>> partialPerformanceData{};

  DescribeDrdsInstanceDbMonitorResponseBodyData() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partialPerformanceData) {
      vector<boost::any> temp1;
      for(auto item1:*partialPerformanceData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PartialPerformanceData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PartialPerformanceData") != m.end() && !m["PartialPerformanceData"].empty()) {
      if (typeid(vector<boost::any>) == m["PartialPerformanceData"].type()) {
        vector<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PartialPerformanceData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        partialPerformanceData = make_shared<vector<DescribeDrdsInstanceDbMonitorResponseBodyDataPartialPerformanceData>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorResponseBodyData() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsInstanceDbMonitorResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsInstanceDbMonitorResponseBody() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeDrdsInstanceDbMonitorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsInstanceDbMonitorResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorResponseBody() = default;
};
class DescribeDrdsInstanceDbMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsInstanceDbMonitorResponseBody> body{};

  DescribeDrdsInstanceDbMonitorResponse() {}

  explicit DescribeDrdsInstanceDbMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsInstanceDbMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsInstanceDbMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorResponse() = default;
};
class DescribeDrdsInstanceMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> key{};
  shared_ptr<long> periodMultiple{};
  shared_ptr<long> startTime{};

  DescribeDrdsInstanceMonitorRequest() {}

  explicit DescribeDrdsInstanceMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (periodMultiple) {
      res["PeriodMultiple"] = boost::any(*periodMultiple);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("PeriodMultiple") != m.end() && !m["PeriodMultiple"].empty()) {
      periodMultiple = make_shared<long>(boost::any_cast<long>(m["PeriodMultiple"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDrdsInstanceMonitorRequest() = default;
};
class DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue : public Darabonba::Model {
public:
  shared_ptr<long> date{};
  shared_ptr<string> value{};

  DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue() {}

  explicit DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<long>(boost::any_cast<long>(m["Date"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue() = default;
};
class DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValues : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue>> performanceValue{};

  DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValues() {}

  explicit DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceValue") != m.end() && !m["PerformanceValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceValue"].type()) {
        vector<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceValue = make_shared<vector<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValuesPerformanceValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValues() = default;
};
class DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValues> values{};

  DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData() {}

  explicit DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (values) {
      res["Values"] = values ? boost::any(values->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(map<string, boost::any>) == m["Values"].type()) {
        DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Values"]));
        values = make_shared<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceDataValues>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData() = default;
};
class DescribeDrdsInstanceMonitorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData>> partialPerformanceData{};

  DescribeDrdsInstanceMonitorResponseBodyData() {}

  explicit DescribeDrdsInstanceMonitorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partialPerformanceData) {
      vector<boost::any> temp1;
      for(auto item1:*partialPerformanceData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PartialPerformanceData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PartialPerformanceData") != m.end() && !m["PartialPerformanceData"].empty()) {
      if (typeid(vector<boost::any>) == m["PartialPerformanceData"].type()) {
        vector<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PartialPerformanceData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        partialPerformanceData = make_shared<vector<DescribeDrdsInstanceMonitorResponseBodyDataPartialPerformanceData>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceMonitorResponseBodyData() = default;
};
class DescribeDrdsInstanceMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsInstanceMonitorResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsInstanceMonitorResponseBody() {}

  explicit DescribeDrdsInstanceMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeDrdsInstanceMonitorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsInstanceMonitorResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsInstanceMonitorResponseBody() = default;
};
class DescribeDrdsInstanceMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsInstanceMonitorResponseBody> body{};

  DescribeDrdsInstanceMonitorResponse() {}

  explicit DescribeDrdsInstanceMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsInstanceMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsInstanceMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceMonitorResponse() = default;
};
class DescribeDrdsInstanceNetInfoForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeDrdsInstanceNetInfoForInnerRequest() {}

  explicit DescribeDrdsInstanceNetInfoForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeDrdsInstanceNetInfoForInnerRequest() = default;
};
class DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<bool> isForVpc{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};

  DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo() {}

  explicit DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (isForVpc) {
      res["IsForVpc"] = boost::any(*isForVpc);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("IsForVpc") != m.end() && !m["IsForVpc"].empty()) {
      isForVpc = make_shared<bool>(boost::any_cast<bool>(m["IsForVpc"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo() = default;
};
class DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo>> netInfo{};

  DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfos() {}

  explicit DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netInfo) {
      vector<boost::any> temp1;
      for(auto item1:*netInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetInfo") != m.end() && !m["NetInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NetInfo"].type()) {
        vector<DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netInfo = make_shared<vector<DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfosNetInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfos() = default;
};
class DescribeDrdsInstanceNetInfoForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfos> netInfos{};
  shared_ptr<string> networkType{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsInstanceNetInfoForInnerResponseBody() {}

  explicit DescribeDrdsInstanceNetInfoForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (netInfos) {
      res["NetInfos"] = netInfos ? boost::any(netInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
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
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("NetInfos") != m.end() && !m["NetInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetInfos"].type()) {
        DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetInfos"]));
        netInfos = make_shared<DescribeDrdsInstanceNetInfoForInnerResponseBodyNetInfos>(model1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsInstanceNetInfoForInnerResponseBody() = default;
};
class DescribeDrdsInstanceNetInfoForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsInstanceNetInfoForInnerResponseBody> body{};

  DescribeDrdsInstanceNetInfoForInnerResponse() {}

  explicit DescribeDrdsInstanceNetInfoForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsInstanceNetInfoForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsInstanceNetInfoForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceNetInfoForInnerResponse() = default;
};
class DescribeDrdsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> tags{};
  shared_ptr<string> type{};

  DescribeDrdsInstancesRequest() {}

  explicit DescribeDrdsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDrdsInstancesRequest() = default;
};
class DescribeDrdsInstancesResponseBodyDataInstanceSlaveInstId : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instId{};

  DescribeDrdsInstancesResponseBodyDataInstanceSlaveInstId() {}

  explicit DescribeDrdsInstancesResponseBodyDataInstanceSlaveInstId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instId) {
      res["instId"] = boost::any(*instId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instId") != m.end() && !m["instId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyDataInstanceSlaveInstId() = default;
};
class DescribeDrdsInstancesResponseBodyDataInstanceVipsVip : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  DescribeDrdsInstancesResponseBodyDataInstanceVipsVip() {}

  explicit DescribeDrdsInstancesResponseBodyDataInstanceVipsVip(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyDataInstanceVipsVip() = default;
};
class DescribeDrdsInstancesResponseBodyDataInstanceVips : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstancesResponseBodyDataInstanceVipsVip>> vip{};

  DescribeDrdsInstancesResponseBodyDataInstanceVips() {}

  explicit DescribeDrdsInstancesResponseBodyDataInstanceVips(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vip) {
      vector<boost::any> temp1;
      for(auto item1:*vip){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vip"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vip") != m.end() && !m["Vip"].empty()) {
      if (typeid(vector<boost::any>) == m["Vip"].type()) {
        vector<DescribeDrdsInstancesResponseBodyDataInstanceVipsVip> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vip"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstancesResponseBodyDataInstanceVipsVip model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vip = make_shared<vector<DescribeDrdsInstancesResponseBodyDataInstanceVipsVip>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyDataInstanceVips() = default;
};
class DescribeDrdsInstancesResponseBodyDataInstance : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> instRole{};
  shared_ptr<string> masterInstId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeDrdsInstancesResponseBodyDataInstanceSlaveInstId> slaveInstId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<long> version{};
  shared_ptr<DescribeDrdsInstancesResponseBodyDataInstanceVips> vips{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> zoneId{};

  DescribeDrdsInstancesResponseBodyDataInstance() {}

  explicit DescribeDrdsInstancesResponseBodyDataInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (instRole) {
      res["InstRole"] = boost::any(*instRole);
    }
    if (masterInstId) {
      res["MasterInstId"] = boost::any(*masterInstId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (slaveInstId) {
      res["SlaveInstId"] = slaveInstId ? boost::any(slaveInstId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vips) {
      res["Vips"] = vips ? boost::any(vips->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("InstRole") != m.end() && !m["InstRole"].empty()) {
      instRole = make_shared<string>(boost::any_cast<string>(m["InstRole"]));
    }
    if (m.find("MasterInstId") != m.end() && !m["MasterInstId"].empty()) {
      masterInstId = make_shared<string>(boost::any_cast<string>(m["MasterInstId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SlaveInstId") != m.end() && !m["SlaveInstId"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlaveInstId"].type()) {
        DescribeDrdsInstancesResponseBodyDataInstanceSlaveInstId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlaveInstId"]));
        slaveInstId = make_shared<DescribeDrdsInstancesResponseBodyDataInstanceSlaveInstId>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("Vips") != m.end() && !m["Vips"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vips"].type()) {
        DescribeDrdsInstancesResponseBodyDataInstanceVips model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vips"]));
        vips = make_shared<DescribeDrdsInstancesResponseBodyDataInstanceVips>(model1);
      }
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyDataInstance() = default;
};
class DescribeDrdsInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstancesResponseBodyDataInstance>> instance{};

  DescribeDrdsInstancesResponseBodyData() {}

  explicit DescribeDrdsInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DescribeDrdsInstancesResponseBodyDataInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstancesResponseBodyDataInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DescribeDrdsInstancesResponseBodyDataInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyData() = default;
};
class DescribeDrdsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDrdsInstancesResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDrdsInstancesResponseBody() {}

  explicit DescribeDrdsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeDrdsInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsInstancesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDrdsInstancesResponseBody() = default;
};
class DescribeDrdsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsInstancesResponseBody> body{};

  DescribeDrdsInstancesResponse() {}

  explicit DescribeDrdsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDrdsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstancesResponse() = default;
};
class DescribeRdsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> regionId{};

  DescribeRdsListRequest() {}

  explicit DescribeRdsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRdsListRequest() = default;
};
class DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild : public Darabonba::Model {
public:
  shared_ptr<string> connectUrl{};
  shared_ptr<string> dbType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> readWeight{};
  shared_ptr<long> port{};

  DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild() {}

  explicit DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
  }


  virtual ~DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild() = default;
};
class DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildren : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild>> child{};

  DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildren() {}

  explicit DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildren(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (child) {
      vector<boost::any> temp1;
      for(auto item1:*child){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Child"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Child") != m.end() && !m["Child"].empty()) {
      if (typeid(vector<boost::any>) == m["Child"].type()) {
        vector<DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Child"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        child = make_shared<vector<DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildrenChild>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildren() = default;
};
class DescribeRdsListResponseBodyDataRdsInstance : public Darabonba::Model {
public:
  shared_ptr<string> connectUrl{};
  shared_ptr<string> dbType{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> port{};
  shared_ptr<DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildren> readOnlyChildren{};
  shared_ptr<long> readWeight{};

  DescribeRdsListResponseBodyDataRdsInstance() {}

  explicit DescribeRdsListResponseBodyDataRdsInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (readOnlyChildren) {
      res["ReadOnlyChildren"] = readOnlyChildren ? boost::any(readOnlyChildren->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ReadOnlyChildren") != m.end() && !m["ReadOnlyChildren"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadOnlyChildren"].type()) {
        DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildren model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadOnlyChildren"]));
        readOnlyChildren = make_shared<DescribeRdsListResponseBodyDataRdsInstanceReadOnlyChildren>(model1);
      }
    }
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
  }


  virtual ~DescribeRdsListResponseBodyDataRdsInstance() = default;
};
class DescribeRdsListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsListResponseBodyDataRdsInstance>> rdsInstance{};

  DescribeRdsListResponseBodyData() {}

  explicit DescribeRdsListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdsInstance) {
      vector<boost::any> temp1;
      for(auto item1:*rdsInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdsInstance") != m.end() && !m["RdsInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsInstance"].type()) {
        vector<DescribeRdsListResponseBodyDataRdsInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsListResponseBodyDataRdsInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsInstance = make_shared<vector<DescribeRdsListResponseBodyDataRdsInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsListResponseBodyData() = default;
};
class DescribeRdsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRdsListResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRdsListResponseBody() {}

  explicit DescribeRdsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeRdsListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeRdsListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeRdsListResponseBody() = default;
};
class DescribeRdsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsListResponseBody> body{};

  DescribeRdsListResponse() {}

  explicit DescribeRdsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRdsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsListResponse() = default;
};
class DescribeReadOnlyAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  DescribeReadOnlyAccountRequest() {}

  explicit DescribeReadOnlyAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeReadOnlyAccountRequest() = default;
};
class DescribeReadOnlyAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  DescribeReadOnlyAccountResponseBodyData() {}

  explicit DescribeReadOnlyAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeReadOnlyAccountResponseBodyData() = default;
};
class DescribeReadOnlyAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeReadOnlyAccountResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeReadOnlyAccountResponseBody() {}

  explicit DescribeReadOnlyAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeReadOnlyAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeReadOnlyAccountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeReadOnlyAccountResponseBody() = default;
};
class DescribeReadOnlyAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeReadOnlyAccountResponseBody> body{};

  DescribeReadOnlyAccountResponse() {}

  explicit DescribeReadOnlyAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeReadOnlyAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeReadOnlyAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeReadOnlyAccountResponse() = default;
};
class DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec : public Darabonba::Model {
public:
  shared_ptr<string> specId{};
  shared_ptr<string> specName{};

  DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec() {}

  explicit DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (specName) {
      res["SpecName"] = boost::any(*specName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
    if (m.find("SpecName") != m.end() && !m["SpecName"].empty()) {
      specName = make_shared<string>(boost::any_cast<string>(m["SpecName"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec() = default;
};
class DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec>> spec{};

  DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecList() {}

  explicit DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spec) {
      vector<boost::any> temp1;
      for(auto item1:*spec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Spec"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(vector<boost::any>) == m["Spec"].type()) {
        vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Spec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spec = make_shared<vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecListSpec>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecList() = default;
};
class DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries : public Darabonba::Model {
public:
  shared_ptr<string> seriesId{};
  shared_ptr<string> seriesName{};
  shared_ptr<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecList> specList{};

  DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries() {}

  explicit DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seriesId) {
      res["SeriesId"] = boost::any(*seriesId);
    }
    if (seriesName) {
      res["SeriesName"] = boost::any(*seriesName);
    }
    if (specList) {
      res["SpecList"] = specList ? boost::any(specList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeriesId") != m.end() && !m["SeriesId"].empty()) {
      seriesId = make_shared<string>(boost::any_cast<string>(m["SeriesId"]));
    }
    if (m.find("SeriesName") != m.end() && !m["SeriesName"].empty()) {
      seriesName = make_shared<string>(boost::any_cast<string>(m["SeriesName"]));
    }
    if (m.find("SpecList") != m.end() && !m["SpecList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpecList"].type()) {
        DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpecList"]));
        specList = make_shared<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeriesSpecList>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries() = default;
};
class DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries>> instanceSeries{};

  DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesList() {}

  explicit DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSeries) {
      vector<boost::any> temp1;
      for(auto item1:*instanceSeries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceSeries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSeries") != m.end() && !m["InstanceSeries"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceSeries"].type()) {
        vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceSeries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceSeries = make_shared<vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesListInstanceSeries>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesList() = default;
};
class DescribeRegionsResponseBodyDrdsRegionsDrdsRegion : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesList> instanceSeriesList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};

  DescribeRegionsResponseBodyDrdsRegionsDrdsRegion() {}

  explicit DescribeRegionsResponseBodyDrdsRegionsDrdsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSeriesList) {
      res["InstanceSeriesList"] = instanceSeriesList ? boost::any(instanceSeriesList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSeriesList") != m.end() && !m["InstanceSeriesList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceSeriesList"].type()) {
        DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceSeriesList"]));
        instanceSeriesList = make_shared<DescribeRegionsResponseBodyDrdsRegionsDrdsRegionInstanceSeriesList>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyDrdsRegionsDrdsRegion() = default;
};
class DescribeRegionsResponseBodyDrdsRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegion>> drdsRegion{};

  DescribeRegionsResponseBodyDrdsRegions() {}

  explicit DescribeRegionsResponseBodyDrdsRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsRegion) {
      vector<boost::any> temp1;
      for(auto item1:*drdsRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DrdsRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsRegion") != m.end() && !m["DrdsRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["DrdsRegion"].type()) {
        vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DrdsRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyDrdsRegionsDrdsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        drdsRegion = make_shared<vector<DescribeRegionsResponseBodyDrdsRegionsDrdsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyDrdsRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyDrdsRegions> drdsRegions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsRegions) {
      res["DrdsRegions"] = drdsRegions ? boost::any(drdsRegions->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DrdsRegions") != m.end() && !m["DrdsRegions"].empty()) {
      if (typeid(map<string, boost::any>) == m["DrdsRegions"].type()) {
        DescribeRegionsResponseBodyDrdsRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DrdsRegions"]));
        drdsRegions = make_shared<DescribeRegionsResponseBodyDrdsRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeShardDBsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  DescribeShardDBsRequest() {}

  explicit DescribeShardDBsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~DescribeShardDBsRequest() = default;
};
class DescribeShardDBsResponseBodyDataDbIntancePair : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> subDbName{};

  DescribeShardDBsResponseBodyDataDbIntancePair() {}

  explicit DescribeShardDBsResponseBodyDataDbIntancePair(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (subDbName) {
      res["SubDbName"] = boost::any(*subDbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("SubDbName") != m.end() && !m["SubDbName"].empty()) {
      subDbName = make_shared<string>(boost::any_cast<string>(m["SubDbName"]));
    }
  }


  virtual ~DescribeShardDBsResponseBodyDataDbIntancePair() = default;
};
class DescribeShardDBsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeShardDBsResponseBodyDataDbIntancePair>> dbIntancePair{};

  DescribeShardDBsResponseBodyData() {}

  explicit DescribeShardDBsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbIntancePair) {
      vector<boost::any> temp1;
      for(auto item1:*dbIntancePair){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbIntancePair"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbIntancePair") != m.end() && !m["DbIntancePair"].empty()) {
      if (typeid(vector<boost::any>) == m["DbIntancePair"].type()) {
        vector<DescribeShardDBsResponseBodyDataDbIntancePair> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbIntancePair"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeShardDBsResponseBodyDataDbIntancePair model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbIntancePair = make_shared<vector<DescribeShardDBsResponseBodyDataDbIntancePair>>(expect1);
      }
    }
  }


  virtual ~DescribeShardDBsResponseBodyData() = default;
};
class DescribeShardDBsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeShardDBsResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeShardDBsResponseBody() {}

  explicit DescribeShardDBsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        DescribeShardDBsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeShardDBsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeShardDBsResponseBody() = default;
};
class DescribeShardDBsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeShardDBsResponseBody> body{};

  DescribeShardDBsResponse() {}

  explicit DescribeShardDBsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeShardDBsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeShardDBsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeShardDBsResponse() = default;
};
class DescribeShardDbConnectionInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> subDbName{};

  DescribeShardDbConnectionInfoRequest() {}

  explicit DescribeShardDbConnectionInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (subDbName) {
      res["SubDbName"] = boost::any(*subDbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("SubDbName") != m.end() && !m["SubDbName"].empty()) {
      subDbName = make_shared<string>(boost::any_cast<string>(m["SubDbName"]));
    }
  }


  virtual ~DescribeShardDbConnectionInfoRequest() = default;
};
class DescribeShardDbConnectionInfoResponseBodyConnectionInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceUrl{};
  shared_ptr<long> blockingTimeout{};
  shared_ptr<string> connectionProperties{};
  shared_ptr<string> dbStatus{};
  shared_ptr<string> dbType{};
  shared_ptr<long> idleTimeOut{};
  shared_ptr<long> maxPoolSize{};
  shared_ptr<long> minPoolSize{};
  shared_ptr<long> preparedStatementCacheSize{};
  shared_ptr<string> subDbName{};
  shared_ptr<string> userName{};

  DescribeShardDbConnectionInfoResponseBodyConnectionInfo() {}

  explicit DescribeShardDbConnectionInfoResponseBodyConnectionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceUrl) {
      res["InstanceUrl"] = boost::any(*instanceUrl);
    }
    if (blockingTimeout) {
      res["blockingTimeout"] = boost::any(*blockingTimeout);
    }
    if (connectionProperties) {
      res["connectionProperties"] = boost::any(*connectionProperties);
    }
    if (dbStatus) {
      res["dbStatus"] = boost::any(*dbStatus);
    }
    if (dbType) {
      res["dbType"] = boost::any(*dbType);
    }
    if (idleTimeOut) {
      res["idleTimeOut"] = boost::any(*idleTimeOut);
    }
    if (maxPoolSize) {
      res["maxPoolSize"] = boost::any(*maxPoolSize);
    }
    if (minPoolSize) {
      res["minPoolSize"] = boost::any(*minPoolSize);
    }
    if (preparedStatementCacheSize) {
      res["preparedStatementCacheSize"] = boost::any(*preparedStatementCacheSize);
    }
    if (subDbName) {
      res["subDbName"] = boost::any(*subDbName);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceUrl") != m.end() && !m["InstanceUrl"].empty()) {
      instanceUrl = make_shared<string>(boost::any_cast<string>(m["InstanceUrl"]));
    }
    if (m.find("blockingTimeout") != m.end() && !m["blockingTimeout"].empty()) {
      blockingTimeout = make_shared<long>(boost::any_cast<long>(m["blockingTimeout"]));
    }
    if (m.find("connectionProperties") != m.end() && !m["connectionProperties"].empty()) {
      connectionProperties = make_shared<string>(boost::any_cast<string>(m["connectionProperties"]));
    }
    if (m.find("dbStatus") != m.end() && !m["dbStatus"].empty()) {
      dbStatus = make_shared<string>(boost::any_cast<string>(m["dbStatus"]));
    }
    if (m.find("dbType") != m.end() && !m["dbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["dbType"]));
    }
    if (m.find("idleTimeOut") != m.end() && !m["idleTimeOut"].empty()) {
      idleTimeOut = make_shared<long>(boost::any_cast<long>(m["idleTimeOut"]));
    }
    if (m.find("maxPoolSize") != m.end() && !m["maxPoolSize"].empty()) {
      maxPoolSize = make_shared<long>(boost::any_cast<long>(m["maxPoolSize"]));
    }
    if (m.find("minPoolSize") != m.end() && !m["minPoolSize"].empty()) {
      minPoolSize = make_shared<long>(boost::any_cast<long>(m["minPoolSize"]));
    }
    if (m.find("preparedStatementCacheSize") != m.end() && !m["preparedStatementCacheSize"].empty()) {
      preparedStatementCacheSize = make_shared<long>(boost::any_cast<long>(m["preparedStatementCacheSize"]));
    }
    if (m.find("subDbName") != m.end() && !m["subDbName"].empty()) {
      subDbName = make_shared<string>(boost::any_cast<string>(m["subDbName"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
  }


  virtual ~DescribeShardDbConnectionInfoResponseBodyConnectionInfo() = default;
};
class DescribeShardDbConnectionInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeShardDbConnectionInfoResponseBodyConnectionInfo> connectionInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeShardDbConnectionInfoResponseBody() {}

  explicit DescribeShardDbConnectionInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionInfo) {
      res["ConnectionInfo"] = connectionInfo ? boost::any(connectionInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ConnectionInfo") != m.end() && !m["ConnectionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectionInfo"].type()) {
        DescribeShardDbConnectionInfoResponseBodyConnectionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectionInfo"]));
        connectionInfo = make_shared<DescribeShardDbConnectionInfoResponseBodyConnectionInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeShardDbConnectionInfoResponseBody() = default;
};
class DescribeShardDbConnectionInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeShardDbConnectionInfoResponseBody> body{};

  DescribeShardDbConnectionInfoResponse() {}

  explicit DescribeShardDbConnectionInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeShardDbConnectionInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeShardDbConnectionInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeShardDbConnectionInfoResponse() = default;
};
class EnableInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dbInstanceClass{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> sourceDbInstId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  EnableInstanceRequest() {}

  explicit EnableInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dbInstanceClass) {
      res["DbInstanceClass"] = boost::any(*dbInstanceClass);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (sourceDbInstId) {
      res["SourceDbInstId"] = boost::any(*sourceDbInstId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DbInstanceClass") != m.end() && !m["DbInstanceClass"].empty()) {
      dbInstanceClass = make_shared<string>(boost::any_cast<string>(m["DbInstanceClass"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SourceDbInstId") != m.end() && !m["SourceDbInstId"].empty()) {
      sourceDbInstId = make_shared<string>(boost::any_cast<string>(m["SourceDbInstId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~EnableInstanceRequest() = default;
};
class EnableInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  EnableInstanceResponseBody() {}

  explicit EnableInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableInstanceResponseBody() = default;
};
class EnableInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableInstanceResponseBody> body{};

  EnableInstanceResponse() {}

  explicit EnableInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~EnableInstanceResponse() = default;
};
class ModifyDrdsDBPasswdRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> newPasswd{};

  ModifyDrdsDBPasswdRequest() {}

  explicit ModifyDrdsDBPasswdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (newPasswd) {
      res["NewPasswd"] = boost::any(*newPasswd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("NewPasswd") != m.end() && !m["NewPasswd"].empty()) {
      newPasswd = make_shared<string>(boost::any_cast<string>(m["NewPasswd"]));
    }
  }


  virtual ~ModifyDrdsDBPasswdRequest() = default;
};
class ModifyDrdsDBPasswdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDrdsDBPasswdResponseBody() {}

  explicit ModifyDrdsDBPasswdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDrdsDBPasswdResponseBody() = default;
};
class ModifyDrdsDBPasswdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDrdsDBPasswdResponseBody> body{};

  ModifyDrdsDBPasswdResponse() {}

  explicit ModifyDrdsDBPasswdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDrdsDBPasswdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDrdsDBPasswdResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDrdsDBPasswdResponse() = default;
};
class ModifyDrdsInstanceDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> drdsInstanceId{};

  ModifyDrdsInstanceDescriptionRequest() {}

  explicit ModifyDrdsInstanceDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~ModifyDrdsInstanceDescriptionRequest() = default;
};
class ModifyDrdsInstanceDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDrdsInstanceDescriptionResponseBody() {}

  explicit ModifyDrdsInstanceDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDrdsInstanceDescriptionResponseBody() = default;
};
class ModifyDrdsInstanceDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDrdsInstanceDescriptionResponseBody> body{};

  ModifyDrdsInstanceDescriptionResponse() {}

  explicit ModifyDrdsInstanceDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDrdsInstanceDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDrdsInstanceDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDrdsInstanceDescriptionResponse() = default;
};
class ModifyDrdsIpWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> groupAttribute{};
  shared_ptr<string> groupName{};
  shared_ptr<string> ipWhiteList{};
  shared_ptr<bool> mode{};

  ModifyDrdsIpWhiteListRequest() {}

  explicit ModifyDrdsIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (groupAttribute) {
      res["GroupAttribute"] = boost::any(*groupAttribute);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("GroupAttribute") != m.end() && !m["GroupAttribute"].empty()) {
      groupAttribute = make_shared<string>(boost::any_cast<string>(m["GroupAttribute"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      ipWhiteList = make_shared<string>(boost::any_cast<string>(m["IpWhiteList"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<bool>(boost::any_cast<bool>(m["Mode"]));
    }
  }


  virtual ~ModifyDrdsIpWhiteListRequest() = default;
};
class ModifyDrdsIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDrdsIpWhiteListResponseBody() {}

  explicit ModifyDrdsIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDrdsIpWhiteListResponseBody() = default;
};
class ModifyDrdsIpWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDrdsIpWhiteListResponseBody> body{};

  ModifyDrdsIpWhiteListResponse() {}

  explicit ModifyDrdsIpWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDrdsIpWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDrdsIpWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDrdsIpWhiteListResponse() = default;
};
class ModifyFullTableScanRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<bool> fullTableScan{};
  shared_ptr<string> tableNames{};

  ModifyFullTableScanRequest() {}

  explicit ModifyFullTableScanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (fullTableScan) {
      res["FullTableScan"] = boost::any(*fullTableScan);
    }
    if (tableNames) {
      res["TableNames"] = boost::any(*tableNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("FullTableScan") != m.end() && !m["FullTableScan"].empty()) {
      fullTableScan = make_shared<bool>(boost::any_cast<bool>(m["FullTableScan"]));
    }
    if (m.find("TableNames") != m.end() && !m["TableNames"].empty()) {
      tableNames = make_shared<string>(boost::any_cast<string>(m["TableNames"]));
    }
  }


  virtual ~ModifyFullTableScanRequest() = default;
};
class ModifyFullTableScanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyFullTableScanResponseBody() {}

  explicit ModifyFullTableScanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyFullTableScanResponseBody() = default;
};
class ModifyFullTableScanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyFullTableScanResponseBody> body{};

  ModifyFullTableScanResponse() {}

  explicit ModifyFullTableScanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyFullTableScanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFullTableScanResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFullTableScanResponse() = default;
};
class ModifyRdsReadWeightRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> instanceNames{};
  shared_ptr<string> weights{};

  ModifyRdsReadWeightRequest() {}

  explicit ModifyRdsReadWeightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (instanceNames) {
      res["InstanceNames"] = boost::any(*instanceNames);
    }
    if (weights) {
      res["Weights"] = boost::any(*weights);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("InstanceNames") != m.end() && !m["InstanceNames"].empty()) {
      instanceNames = make_shared<string>(boost::any_cast<string>(m["InstanceNames"]));
    }
    if (m.find("Weights") != m.end() && !m["Weights"].empty()) {
      weights = make_shared<string>(boost::any_cast<string>(m["Weights"]));
    }
  }


  virtual ~ModifyRdsReadWeightRequest() = default;
};
class ModifyRdsReadWeightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyRdsReadWeightResponseBody() {}

  explicit ModifyRdsReadWeightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyRdsReadWeightResponseBody() = default;
};
class ModifyRdsReadWeightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyRdsReadWeightResponseBody> body{};

  ModifyRdsReadWeightResponse() {}

  explicit ModifyRdsReadWeightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyRdsReadWeightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRdsReadWeightResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRdsReadWeightResponse() = default;
};
class ModifyReadOnlyAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> newPasswd{};
  shared_ptr<string> originPassword{};

  ModifyReadOnlyAccountPasswordRequest() {}

  explicit ModifyReadOnlyAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (newPasswd) {
      res["NewPasswd"] = boost::any(*newPasswd);
    }
    if (originPassword) {
      res["OriginPassword"] = boost::any(*originPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("NewPasswd") != m.end() && !m["NewPasswd"].empty()) {
      newPasswd = make_shared<string>(boost::any_cast<string>(m["NewPasswd"]));
    }
    if (m.find("OriginPassword") != m.end() && !m["OriginPassword"].empty()) {
      originPassword = make_shared<string>(boost::any_cast<string>(m["OriginPassword"]));
    }
  }


  virtual ~ModifyReadOnlyAccountPasswordRequest() = default;
};
class ModifyReadOnlyAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyReadOnlyAccountPasswordResponseBody() {}

  explicit ModifyReadOnlyAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyReadOnlyAccountPasswordResponseBody() = default;
};
class ModifyReadOnlyAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyReadOnlyAccountPasswordResponseBody> body{};

  ModifyReadOnlyAccountPasswordResponse() {}

  explicit ModifyReadOnlyAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyReadOnlyAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyReadOnlyAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyReadOnlyAccountPasswordResponse() = default;
};
class QueryInstanceInfoByConnRequest : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> userName{};

  QueryInstanceInfoByConnRequest() {}

  explicit QueryInstanceInfoByConnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~QueryInstanceInfoByConnRequest() = default;
};
class QueryInstanceInfoByConnResponseBodyDataVipsVip : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  QueryInstanceInfoByConnResponseBodyDataVipsVip() {}

  explicit QueryInstanceInfoByConnResponseBodyDataVipsVip(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~QueryInstanceInfoByConnResponseBodyDataVipsVip() = default;
};
class QueryInstanceInfoByConnResponseBodyDataVips : public Darabonba::Model {
public:
  shared_ptr<vector<QueryInstanceInfoByConnResponseBodyDataVipsVip>> vip{};

  QueryInstanceInfoByConnResponseBodyDataVips() {}

  explicit QueryInstanceInfoByConnResponseBodyDataVips(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vip) {
      vector<boost::any> temp1;
      for(auto item1:*vip){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vip"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vip") != m.end() && !m["Vip"].empty()) {
      if (typeid(vector<boost::any>) == m["Vip"].type()) {
        vector<QueryInstanceInfoByConnResponseBodyDataVipsVip> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vip"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInstanceInfoByConnResponseBodyDataVipsVip model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vip = make_shared<vector<QueryInstanceInfoByConnResponseBodyDataVipsVip>>(expect1);
      }
    }
  }


  virtual ~QueryInstanceInfoByConnResponseBodyDataVips() = default;
};
class QueryInstanceInfoByConnResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> specTypeId{};
  shared_ptr<string> specTypeName{};
  shared_ptr<string> specification{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<long> version{};
  shared_ptr<QueryInstanceInfoByConnResponseBodyDataVips> vips{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> zoneId{};

  QueryInstanceInfoByConnResponseBodyData() {}

  explicit QueryInstanceInfoByConnResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (specTypeId) {
      res["SpecTypeId"] = boost::any(*specTypeId);
    }
    if (specTypeName) {
      res["SpecTypeName"] = boost::any(*specTypeName);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vips) {
      res["Vips"] = vips ? boost::any(vips->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SpecTypeId") != m.end() && !m["SpecTypeId"].empty()) {
      specTypeId = make_shared<string>(boost::any_cast<string>(m["SpecTypeId"]));
    }
    if (m.find("SpecTypeName") != m.end() && !m["SpecTypeName"].empty()) {
      specTypeName = make_shared<string>(boost::any_cast<string>(m["SpecTypeName"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("Vips") != m.end() && !m["Vips"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vips"].type()) {
        QueryInstanceInfoByConnResponseBodyDataVips model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vips"]));
        vips = make_shared<QueryInstanceInfoByConnResponseBodyDataVips>(model1);
      }
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~QueryInstanceInfoByConnResponseBodyData() = default;
};
class QueryInstanceInfoByConnResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryInstanceInfoByConnResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryInstanceInfoByConnResponseBody() {}

  explicit QueryInstanceInfoByConnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
        QueryInstanceInfoByConnResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryInstanceInfoByConnResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryInstanceInfoByConnResponseBody() = default;
};
class QueryInstanceInfoByConnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryInstanceInfoByConnResponseBody> body{};

  QueryInstanceInfoByConnResponse() {}

  explicit QueryInstanceInfoByConnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryInstanceInfoByConnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInstanceInfoByConnResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInstanceInfoByConnResponse() = default;
};
class RemoveDrdsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  RemoveDrdsInstanceRequest() {}

  explicit RemoveDrdsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~RemoveDrdsInstanceRequest() = default;
};
class RemoveDrdsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveDrdsInstanceResponseBody() {}

  explicit RemoveDrdsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveDrdsInstanceResponseBody() = default;
};
class RemoveDrdsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveDrdsInstanceResponseBody> body{};

  RemoveDrdsInstanceResponse() {}

  explicit RemoveDrdsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveDrdsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveDrdsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveDrdsInstanceResponse() = default;
};
class RemoveReadOnlyAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};

  RemoveReadOnlyAccountRequest() {}

  explicit RemoveReadOnlyAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
  }


  virtual ~RemoveReadOnlyAccountRequest() = default;
};
class RemoveReadOnlyAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveReadOnlyAccountResponseBody() {}

  explicit RemoveReadOnlyAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveReadOnlyAccountResponseBody() = default;
};
class RemoveReadOnlyAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveReadOnlyAccountResponseBody> body{};

  RemoveReadOnlyAccountResponse() {}

  explicit RemoveReadOnlyAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveReadOnlyAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveReadOnlyAccountResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveReadOnlyAccountResponse() = default;
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
  CreateDrdsAccountResponse createDrdsAccountWithOptions(shared_ptr<CreateDrdsAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDrdsAccountResponse createDrdsAccount(shared_ptr<CreateDrdsAccountRequest> request);
  CreateDrdsDBResponse createDrdsDBWithOptions(shared_ptr<CreateDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDrdsDBResponse createDrdsDB(shared_ptr<CreateDrdsDBRequest> request);
  CreateDrdsInstanceResponse createDrdsInstanceWithOptions(shared_ptr<CreateDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDrdsInstanceResponse createDrdsInstance(shared_ptr<CreateDrdsInstanceRequest> request);
  CreateReadOnlyAccountResponse createReadOnlyAccountWithOptions(shared_ptr<CreateReadOnlyAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReadOnlyAccountResponse createReadOnlyAccount(shared_ptr<CreateReadOnlyAccountRequest> request);
  DeleteDrdsDBResponse deleteDrdsDBWithOptions(shared_ptr<DeleteDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDrdsDBResponse deleteDrdsDB(shared_ptr<DeleteDrdsDBRequest> request);
  DeleteFailedDrdsDBResponse deleteFailedDrdsDBWithOptions(shared_ptr<DeleteFailedDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFailedDrdsDBResponse deleteFailedDrdsDB(shared_ptr<DeleteFailedDrdsDBRequest> request);
  DescribeCreateDrdsInstanceStatusResponse describeCreateDrdsInstanceStatusWithOptions(shared_ptr<DescribeCreateDrdsInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCreateDrdsInstanceStatusResponse describeCreateDrdsInstanceStatus(shared_ptr<DescribeCreateDrdsInstanceStatusRequest> request);
  DescribeDrdsDBResponse describeDrdsDBWithOptions(shared_ptr<DescribeDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDBResponse describeDrdsDB(shared_ptr<DescribeDrdsDBRequest> request);
  DescribeDrdsDBIpWhiteListResponse describeDrdsDBIpWhiteListWithOptions(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDBIpWhiteListResponse describeDrdsDBIpWhiteList(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request);
  DescribeDrdsDBsResponse describeDrdsDBsWithOptions(shared_ptr<DescribeDrdsDBsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDBsResponse describeDrdsDBs(shared_ptr<DescribeDrdsDBsRequest> request);
  DescribeDrdsInstanceResponse describeDrdsInstanceWithOptions(shared_ptr<DescribeDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceResponse describeDrdsInstance(shared_ptr<DescribeDrdsInstanceRequest> request);
  DescribeDrdsInstanceDbMonitorResponse describeDrdsInstanceDbMonitorWithOptions(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceDbMonitorResponse describeDrdsInstanceDbMonitor(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request);
  DescribeDrdsInstanceMonitorResponse describeDrdsInstanceMonitorWithOptions(shared_ptr<DescribeDrdsInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceMonitorResponse describeDrdsInstanceMonitor(shared_ptr<DescribeDrdsInstanceMonitorRequest> request);
  DescribeDrdsInstanceNetInfoForInnerResponse describeDrdsInstanceNetInfoForInnerWithOptions(shared_ptr<DescribeDrdsInstanceNetInfoForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceNetInfoForInnerResponse describeDrdsInstanceNetInfoForInner(shared_ptr<DescribeDrdsInstanceNetInfoForInnerRequest> request);
  DescribeDrdsInstancesResponse describeDrdsInstancesWithOptions(shared_ptr<DescribeDrdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstancesResponse describeDrdsInstances(shared_ptr<DescribeDrdsInstancesRequest> request);
  DescribeRdsListResponse describeRdsListWithOptions(shared_ptr<DescribeRdsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsListResponse describeRdsList(shared_ptr<DescribeRdsListRequest> request);
  DescribeReadOnlyAccountResponse describeReadOnlyAccountWithOptions(shared_ptr<DescribeReadOnlyAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeReadOnlyAccountResponse describeReadOnlyAccount(shared_ptr<DescribeReadOnlyAccountRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeShardDBsResponse describeShardDBsWithOptions(shared_ptr<DescribeShardDBsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeShardDBsResponse describeShardDBs(shared_ptr<DescribeShardDBsRequest> request);
  DescribeShardDbConnectionInfoResponse describeShardDbConnectionInfoWithOptions(shared_ptr<DescribeShardDbConnectionInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeShardDbConnectionInfoResponse describeShardDbConnectionInfo(shared_ptr<DescribeShardDbConnectionInfoRequest> request);
  EnableInstanceResponse enableInstanceWithOptions(shared_ptr<EnableInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableInstanceResponse enableInstance(shared_ptr<EnableInstanceRequest> request);
  ModifyDrdsDBPasswdResponse modifyDrdsDBPasswdWithOptions(shared_ptr<ModifyDrdsDBPasswdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDrdsDBPasswdResponse modifyDrdsDBPasswd(shared_ptr<ModifyDrdsDBPasswdRequest> request);
  ModifyDrdsInstanceDescriptionResponse modifyDrdsInstanceDescriptionWithOptions(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDrdsInstanceDescriptionResponse modifyDrdsInstanceDescription(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request);
  ModifyDrdsIpWhiteListResponse modifyDrdsIpWhiteListWithOptions(shared_ptr<ModifyDrdsIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDrdsIpWhiteListResponse modifyDrdsIpWhiteList(shared_ptr<ModifyDrdsIpWhiteListRequest> request);
  ModifyFullTableScanResponse modifyFullTableScanWithOptions(shared_ptr<ModifyFullTableScanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFullTableScanResponse modifyFullTableScan(shared_ptr<ModifyFullTableScanRequest> request);
  ModifyRdsReadWeightResponse modifyRdsReadWeightWithOptions(shared_ptr<ModifyRdsReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRdsReadWeightResponse modifyRdsReadWeight(shared_ptr<ModifyRdsReadWeightRequest> request);
  ModifyReadOnlyAccountPasswordResponse modifyReadOnlyAccountPasswordWithOptions(shared_ptr<ModifyReadOnlyAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyReadOnlyAccountPasswordResponse modifyReadOnlyAccountPassword(shared_ptr<ModifyReadOnlyAccountPasswordRequest> request);
  QueryInstanceInfoByConnResponse queryInstanceInfoByConnWithOptions(shared_ptr<QueryInstanceInfoByConnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInstanceInfoByConnResponse queryInstanceInfoByConn(shared_ptr<QueryInstanceInfoByConnRequest> request);
  RemoveDrdsInstanceResponse removeDrdsInstanceWithOptions(shared_ptr<RemoveDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDrdsInstanceResponse removeDrdsInstance(shared_ptr<RemoveDrdsInstanceRequest> request);
  RemoveReadOnlyAccountResponse removeReadOnlyAccountWithOptions(shared_ptr<RemoveReadOnlyAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveReadOnlyAccountResponse removeReadOnlyAccount(shared_ptr<RemoveReadOnlyAccountRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Drds20171016

#endif
