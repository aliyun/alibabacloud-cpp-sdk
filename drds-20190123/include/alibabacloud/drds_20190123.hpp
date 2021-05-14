// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DRDS20190123_H_
#define ALIBABACLOUD_DRDS20190123_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Drds20190123 {
class CheckDrdsDbNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  CheckDrdsDbNameRequest() {}

  explicit CheckDrdsDbNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~CheckDrdsDbNameRequest() = default;
};
class CheckDrdsDbNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  CheckDrdsDbNameResponseBody() {}

  explicit CheckDrdsDbNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckDrdsDbNameResponseBody() = default;
};
class CheckDrdsDbNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckDrdsDbNameResponseBody> body{};

  CheckDrdsDbNameResponse() {}

  explicit CheckDrdsDbNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDrdsDbNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDrdsDbNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDrdsDbNameResponse() = default;
};
class CheckExpandStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  CheckExpandStatusRequest() {}

  explicit CheckExpandStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~CheckExpandStatusRequest() = default;
};
class CheckExpandStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<bool> isActive{};

  CheckExpandStatusResponseBodyData() {}

  explicit CheckExpandStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (isActive) {
      res["IsActive"] = boost::any(*isActive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("IsActive") != m.end() && !m["IsActive"].empty()) {
      isActive = make_shared<bool>(boost::any_cast<bool>(m["IsActive"]));
    }
  }


  virtual ~CheckExpandStatusResponseBodyData() = default;
};
class CheckExpandStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<CheckExpandStatusResponseBodyData> data{};

  CheckExpandStatusResponseBody() {}

  explicit CheckExpandStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CheckExpandStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckExpandStatusResponseBodyData>(model1);
      }
    }
  }


  virtual ~CheckExpandStatusResponseBody() = default;
};
class CheckExpandStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckExpandStatusResponseBody> body{};

  CheckExpandStatusResponse() {}

  explicit CheckExpandStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckExpandStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckExpandStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckExpandStatusResponse() = default;
};
class CheckSqlAuditEnableStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  CheckSqlAuditEnableStatusRequest() {}

  explicit CheckSqlAuditEnableStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~CheckSqlAuditEnableStatusRequest() = default;
};
class CheckSqlAuditEnableStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckSqlAuditEnableStatusResponseBody() {}

  explicit CheckSqlAuditEnableStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckSqlAuditEnableStatusResponseBody() = default;
};
class CheckSqlAuditEnableStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckSqlAuditEnableStatusResponseBody> body{};

  CheckSqlAuditEnableStatusResponse() {}

  explicit CheckSqlAuditEnableStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckSqlAuditEnableStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckSqlAuditEnableStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckSqlAuditEnableStatusResponse() = default;
};
class CreateDrdsDBRequestRdsSuperAccount : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> accountName{};

  CreateDrdsDBRequestRdsSuperAccount() {}

  explicit CreateDrdsDBRequestRdsSuperAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~CreateDrdsDBRequestRdsSuperAccount() = default;
};
class CreateDrdsDBRequestInstDbName : public Darabonba::Model {
public:
  shared_ptr<string> dbInstanceId{};
  shared_ptr<vector<string>> shardDbName{};

  CreateDrdsDBRequestInstDbName() {}

  explicit CreateDrdsDBRequestInstDbName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (shardDbName) {
      res["ShardDbName"] = boost::any(*shardDbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ShardDbName") != m.end() && !m["ShardDbName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ShardDbName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ShardDbName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      shardDbName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDrdsDBRequestInstDbName() = default;
};
class CreateDrdsDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> encode{};
  shared_ptr<string> password{};
  shared_ptr<string> type{};
  shared_ptr<string> dbInstType{};
  shared_ptr<bool> dbInstanceIsCreating{};
  shared_ptr<string> accountName{};
  shared_ptr<vector<string>> rdsInstance{};
  shared_ptr<vector<CreateDrdsDBRequestRdsSuperAccount>> rdsSuperAccount{};
  shared_ptr<vector<CreateDrdsDBRequestInstDbName>> instDbName{};

  CreateDrdsDBRequest() {}

  explicit CreateDrdsDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (encode) {
      res["Encode"] = boost::any(*encode);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (dbInstanceIsCreating) {
      res["DbInstanceIsCreating"] = boost::any(*dbInstanceIsCreating);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (rdsInstance) {
      res["RdsInstance"] = boost::any(*rdsInstance);
    }
    if (rdsSuperAccount) {
      vector<boost::any> temp1;
      for(auto item1:*rdsSuperAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsSuperAccount"] = boost::any(temp1);
    }
    if (instDbName) {
      vector<boost::any> temp1;
      for(auto item1:*instDbName){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstDbName"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Encode") != m.end() && !m["Encode"].empty()) {
      encode = make_shared<string>(boost::any_cast<string>(m["Encode"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("DbInstanceIsCreating") != m.end() && !m["DbInstanceIsCreating"].empty()) {
      dbInstanceIsCreating = make_shared<bool>(boost::any_cast<bool>(m["DbInstanceIsCreating"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("RdsInstance") != m.end() && !m["RdsInstance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdsInstance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdsInstance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstance = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RdsSuperAccount") != m.end() && !m["RdsSuperAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsSuperAccount"].type()) {
        vector<CreateDrdsDBRequestRdsSuperAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsSuperAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDrdsDBRequestRdsSuperAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsSuperAccount = make_shared<vector<CreateDrdsDBRequestRdsSuperAccount>>(expect1);
      }
    }
    if (m.find("InstDbName") != m.end() && !m["InstDbName"].empty()) {
      if (typeid(vector<boost::any>) == m["InstDbName"].type()) {
        vector<CreateDrdsDBRequestInstDbName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstDbName"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDrdsDBRequestInstDbName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instDbName = make_shared<vector<CreateDrdsDBRequestInstDbName>>(expect1);
      }
    }
  }


  virtual ~CreateDrdsDBRequest() = default;
};
class CreateDrdsDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  CreateDrdsDBResponseBody() {}

  explicit CreateDrdsDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> type{};
  shared_ptr<long> quantity{};
  shared_ptr<string> instanceSeries{};
  shared_ptr<string> specification{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> payType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<bool> isHa{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<string> masterInstId{};
  shared_ptr<long> mySQLVersion{};
  shared_ptr<string> resourceGroupId{};

  CreateDrdsInstanceRequest() {}

  explicit CreateDrdsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (instanceSeries) {
      res["InstanceSeries"] = boost::any(*instanceSeries);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (isHa) {
      res["isHa"] = boost::any(*isHa);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isAutoRenew) {
      res["IsAutoRenew"] = boost::any(*isAutoRenew);
    }
    if (masterInstId) {
      res["MasterInstId"] = boost::any(*masterInstId);
    }
    if (mySQLVersion) {
      res["MySQLVersion"] = boost::any(*mySQLVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("InstanceSeries") != m.end() && !m["InstanceSeries"].empty()) {
      instanceSeries = make_shared<string>(boost::any_cast<string>(m["InstanceSeries"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("isHa") != m.end() && !m["isHa"].empty()) {
      isHa = make_shared<bool>(boost::any_cast<bool>(m["isHa"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsAutoRenew") != m.end() && !m["IsAutoRenew"].empty()) {
      isAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRenew"]));
    }
    if (m.find("MasterInstId") != m.end() && !m["MasterInstId"].empty()) {
      masterInstId = make_shared<string>(boost::any_cast<string>(m["MasterInstId"]));
    }
    if (m.find("MySQLVersion") != m.end() && !m["MySQLVersion"].empty()) {
      mySQLVersion = make_shared<long>(boost::any_cast<long>(m["MySQLVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateDrdsInstanceRequest() = default;
};
class CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> drdsInstanceIdList{};

  CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList() {}

  explicit CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceIdList) {
      res["drdsInstanceIdList"] = boost::any(*drdsInstanceIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("drdsInstanceIdList") != m.end() && !m["drdsInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["drdsInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["drdsInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      drdsInstanceIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList() = default;
};
class CreateDrdsInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList> drdsInstanceIdList{};

  CreateDrdsInstanceResponseBodyData() {}

  explicit CreateDrdsInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (drdsInstanceIdList) {
      res["DrdsInstanceIdList"] = drdsInstanceIdList ? boost::any(drdsInstanceIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("DrdsInstanceIdList") != m.end() && !m["DrdsInstanceIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DrdsInstanceIdList"].type()) {
        CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DrdsInstanceIdList"]));
        drdsInstanceIdList = make_shared<CreateDrdsInstanceResponseBodyDataDrdsInstanceIdList>(model1);
      }
    }
  }


  virtual ~CreateDrdsInstanceResponseBodyData() = default;
};
class CreateDrdsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateDrdsInstanceResponseBodyData> data{};

  CreateDrdsInstanceResponseBody() {}

  explicit CreateDrdsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateDrdsInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDrdsInstanceResponseBodyData>(model1);
      }
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
class CreateInstanceAccountRequestDbPrivilege : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> privilege{};

  CreateInstanceAccountRequestDbPrivilege() {}

  explicit CreateInstanceAccountRequestDbPrivilege(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (privilege) {
      res["Privilege"] = boost::any(*privilege);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Privilege") != m.end() && !m["Privilege"].empty()) {
      privilege = make_shared<string>(boost::any_cast<string>(m["Privilege"]));
    }
  }


  virtual ~CreateInstanceAccountRequestDbPrivilege() = default;
};
class CreateInstanceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> password{};
  shared_ptr<vector<CreateInstanceAccountRequestDbPrivilege>> dbPrivilege{};

  CreateInstanceAccountRequest() {}

  explicit CreateInstanceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (dbPrivilege) {
      vector<boost::any> temp1;
      for(auto item1:*dbPrivilege){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbPrivilege"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("DbPrivilege") != m.end() && !m["DbPrivilege"].empty()) {
      if (typeid(vector<boost::any>) == m["DbPrivilege"].type()) {
        vector<CreateInstanceAccountRequestDbPrivilege> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbPrivilege"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceAccountRequestDbPrivilege model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbPrivilege = make_shared<vector<CreateInstanceAccountRequestDbPrivilege>>(expect1);
      }
    }
  }


  virtual ~CreateInstanceAccountRequest() = default;
};
class CreateInstanceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  CreateInstanceAccountResponseBody() {}

  explicit CreateInstanceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceAccountResponseBody() = default;
};
class CreateInstanceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceAccountResponseBody> body{};

  CreateInstanceAccountResponse() {}

  explicit CreateInstanceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceAccountResponse() = default;
};
class CreateInstanceInternetAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> regionId{};

  CreateInstanceInternetAddressRequest() {}

  explicit CreateInstanceInternetAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateInstanceInternetAddressRequest() = default;
};
class CreateInstanceInternetAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceInternetAddressResponseBody() {}

  explicit CreateInstanceInternetAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceInternetAddressResponseBody() = default;
};
class CreateInstanceInternetAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceInternetAddressResponseBody> body{};

  CreateInstanceInternetAddressResponse() {}

  explicit CreateInstanceInternetAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceInternetAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceInternetAddressResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceInternetAddressResponse() = default;
};
class CreateOrderForRdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> params{};

  CreateOrderForRdsRequest() {}

  explicit CreateOrderForRdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~CreateOrderForRdsRequest() = default;
};
class CreateOrderForRdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateOrderForRdsResponseBody() {}

  explicit CreateOrderForRdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateOrderForRdsResponseBody() = default;
};
class CreateOrderForRdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOrderForRdsResponseBody> body{};

  CreateOrderForRdsResponse() {}

  explicit CreateOrderForRdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderForRdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrderForRdsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrderForRdsResponse() = default;
};
class CreateShardTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> sourceTableName{};
  shared_ptr<string> targetTableName{};
  shared_ptr<string> taskType{};

  CreateShardTaskRequest() {}

  explicit CreateShardTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateShardTaskRequest() = default;
};
class CreateShardTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateShardTaskResponseBody() {}

  explicit CreateShardTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateShardTaskResponseBody() = default;
};
class CreateShardTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateShardTaskResponseBody> body{};

  CreateShardTaskResponse() {}

  explicit CreateShardTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateShardTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateShardTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateShardTaskResponse() = default;
};
class DescribeBackMenuRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeBackMenuRequest() {}

  explicit DescribeBackMenuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBackMenuRequest() = default;
};
class DescribeBackMenuResponseBodyListList : public Darabonba::Model {
public:
  shared_ptr<bool> support{};
  shared_ptr<string> menuName{};

  DescribeBackMenuResponseBodyListList() {}

  explicit DescribeBackMenuResponseBodyListList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (support) {
      res["Support"] = boost::any(*support);
    }
    if (menuName) {
      res["MenuName"] = boost::any(*menuName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Support") != m.end() && !m["Support"].empty()) {
      support = make_shared<bool>(boost::any_cast<bool>(m["Support"]));
    }
    if (m.find("MenuName") != m.end() && !m["MenuName"].empty()) {
      menuName = make_shared<string>(boost::any_cast<string>(m["MenuName"]));
    }
  }


  virtual ~DescribeBackMenuResponseBodyListList() = default;
};
class DescribeBackMenuResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackMenuResponseBodyListList>> list{};

  DescribeBackMenuResponseBodyList() {}

  explicit DescribeBackMenuResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<DescribeBackMenuResponseBodyListList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackMenuResponseBodyListList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeBackMenuResponseBodyListList>>(expect1);
      }
    }
  }


  virtual ~DescribeBackMenuResponseBodyList() = default;
};
class DescribeBackMenuResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackMenuResponseBodyList> list{};

  DescribeBackMenuResponseBody() {}

  explicit DescribeBackMenuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (list) {
      res["List"] = list ? boost::any(list->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(map<string, boost::any>) == m["List"].type()) {
        DescribeBackMenuResponseBodyList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["List"]));
        list = make_shared<DescribeBackMenuResponseBodyList>(model1);
      }
    }
  }


  virtual ~DescribeBackMenuResponseBody() = default;
};
class DescribeBackMenuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackMenuResponseBody> body{};

  DescribeBackMenuResponse() {}

  explicit DescribeBackMenuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackMenuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackMenuResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackMenuResponse() = default;
};
class DescribeBackupDbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> preferredRestoreTime{};
  shared_ptr<string> backupId{};

  DescribeBackupDbsRequest() {}

  explicit DescribeBackupDbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (preferredRestoreTime) {
      res["PreferredRestoreTime"] = boost::any(*preferredRestoreTime);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("PreferredRestoreTime") != m.end() && !m["PreferredRestoreTime"].empty()) {
      preferredRestoreTime = make_shared<string>(boost::any_cast<string>(m["PreferredRestoreTime"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
  }


  virtual ~DescribeBackupDbsRequest() = default;
};
class DescribeBackupDbsResponseBodyDbNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dbName{};

  DescribeBackupDbsResponseBodyDbNames() {}

  explicit DescribeBackupDbsResponseBodyDbNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dbName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dbName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupDbsResponseBodyDbNames() = default;
};
class DescribeBackupDbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackupDbsResponseBodyDbNames> dbNames{};

  DescribeBackupDbsResponseBody() {}

  explicit DescribeBackupDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbNames) {
      res["DbNames"] = dbNames ? boost::any(dbNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbNames") != m.end() && !m["DbNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbNames"].type()) {
        DescribeBackupDbsResponseBodyDbNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbNames"]));
        dbNames = make_shared<DescribeBackupDbsResponseBodyDbNames>(model1);
      }
    }
  }


  virtual ~DescribeBackupDbsResponseBody() = default;
};
class DescribeBackupDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupDbsResponseBody> body{};

  DescribeBackupDbsResponse() {}

  explicit DescribeBackupDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupDbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupDbsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupDbsResponse() = default;
};
class DescribeBackupLocalRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeBackupLocalRequest() {}

  explicit DescribeBackupLocalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBackupLocalRequest() = default;
};
class DescribeBackupLocalResponseBodyBackupPolicyDO : public Darabonba::Model {
public:
  shared_ptr<string> backupDbName{};
  shared_ptr<long> logBackupRetentionPeriod{};
  shared_ptr<long> dataBackupRetentionPeriod{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupLevel{};
  shared_ptr<long> localLogRetentionHours{};
  shared_ptr<long> highSpaceUsageProtection{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> backupPolicyMode{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<long> localLogRetentionSpace{};
  shared_ptr<string> backupAppName{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupLog{};
  shared_ptr<string> nextBackupActuallyTime{};

  DescribeBackupLocalResponseBodyBackupPolicyDO() {}

  explicit DescribeBackupLocalResponseBodyBackupPolicyDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDbName) {
      res["BackupDbName"] = boost::any(*backupDbName);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    if (dataBackupRetentionPeriod) {
      res["DataBackupRetentionPeriod"] = boost::any(*dataBackupRetentionPeriod);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupLevel) {
      res["BackupLevel"] = boost::any(*backupLevel);
    }
    if (localLogRetentionHours) {
      res["LocalLogRetentionHours"] = boost::any(*localLogRetentionHours);
    }
    if (highSpaceUsageProtection) {
      res["HighSpaceUsageProtection"] = boost::any(*highSpaceUsageProtection);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (backupPolicyMode) {
      res["BackupPolicyMode"] = boost::any(*backupPolicyMode);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (localLogRetentionSpace) {
      res["LocalLogRetentionSpace"] = boost::any(*localLogRetentionSpace);
    }
    if (backupAppName) {
      res["BackupAppName"] = boost::any(*backupAppName);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupLog) {
      res["BackupLog"] = boost::any(*backupLog);
    }
    if (nextBackupActuallyTime) {
      res["NextBackupActuallyTime"] = boost::any(*nextBackupActuallyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupDbName") != m.end() && !m["BackupDbName"].empty()) {
      backupDbName = make_shared<string>(boost::any_cast<string>(m["BackupDbName"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["LogBackupRetentionPeriod"]));
    }
    if (m.find("DataBackupRetentionPeriod") != m.end() && !m["DataBackupRetentionPeriod"].empty()) {
      dataBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["DataBackupRetentionPeriod"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupLevel") != m.end() && !m["BackupLevel"].empty()) {
      backupLevel = make_shared<string>(boost::any_cast<string>(m["BackupLevel"]));
    }
    if (m.find("LocalLogRetentionHours") != m.end() && !m["LocalLogRetentionHours"].empty()) {
      localLogRetentionHours = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionHours"]));
    }
    if (m.find("HighSpaceUsageProtection") != m.end() && !m["HighSpaceUsageProtection"].empty()) {
      highSpaceUsageProtection = make_shared<long>(boost::any_cast<long>(m["HighSpaceUsageProtection"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("BackupPolicyMode") != m.end() && !m["BackupPolicyMode"].empty()) {
      backupPolicyMode = make_shared<string>(boost::any_cast<string>(m["BackupPolicyMode"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("LocalLogRetentionSpace") != m.end() && !m["LocalLogRetentionSpace"].empty()) {
      localLogRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionSpace"]));
    }
    if (m.find("BackupAppName") != m.end() && !m["BackupAppName"].empty()) {
      backupAppName = make_shared<string>(boost::any_cast<string>(m["BackupAppName"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupLog") != m.end() && !m["BackupLog"].empty()) {
      backupLog = make_shared<string>(boost::any_cast<string>(m["BackupLog"]));
    }
    if (m.find("NextBackupActuallyTime") != m.end() && !m["NextBackupActuallyTime"].empty()) {
      nextBackupActuallyTime = make_shared<string>(boost::any_cast<string>(m["NextBackupActuallyTime"]));
    }
  }


  virtual ~DescribeBackupLocalResponseBodyBackupPolicyDO() = default;
};
class DescribeBackupLocalResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackupLocalResponseBodyBackupPolicyDO> backupPolicyDO{};

  DescribeBackupLocalResponseBody() {}

  explicit DescribeBackupLocalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backupPolicyDO) {
      res["BackupPolicyDO"] = backupPolicyDO ? boost::any(backupPolicyDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackupPolicyDO") != m.end() && !m["BackupPolicyDO"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupPolicyDO"].type()) {
        DescribeBackupLocalResponseBodyBackupPolicyDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupPolicyDO"]));
        backupPolicyDO = make_shared<DescribeBackupLocalResponseBodyBackupPolicyDO>(model1);
      }
    }
  }


  virtual ~DescribeBackupLocalResponseBody() = default;
};
class DescribeBackupLocalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupLocalResponseBody> body{};

  DescribeBackupLocalResponse() {}

  explicit DescribeBackupLocalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupLocalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupLocalResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupLocalResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBodyBackupPolicyDO : public Darabonba::Model {
public:
  shared_ptr<string> backupDbName{};
  shared_ptr<long> logBackupRetentionPeriod{};
  shared_ptr<long> dataBackupRetentionPeriod{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupLevel{};
  shared_ptr<long> localLogRetentionHours{};
  shared_ptr<long> highSpaceUsageProtection{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> backupPolicyMode{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<long> localLogRetentionSpace{};
  shared_ptr<string> backupAppName{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupLog{};
  shared_ptr<string> nextBackupActuallyTime{};

  DescribeBackupPolicyResponseBodyBackupPolicyDO() {}

  explicit DescribeBackupPolicyResponseBodyBackupPolicyDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDbName) {
      res["BackupDbName"] = boost::any(*backupDbName);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    if (dataBackupRetentionPeriod) {
      res["DataBackupRetentionPeriod"] = boost::any(*dataBackupRetentionPeriod);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupLevel) {
      res["BackupLevel"] = boost::any(*backupLevel);
    }
    if (localLogRetentionHours) {
      res["LocalLogRetentionHours"] = boost::any(*localLogRetentionHours);
    }
    if (highSpaceUsageProtection) {
      res["HighSpaceUsageProtection"] = boost::any(*highSpaceUsageProtection);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (backupPolicyMode) {
      res["BackupPolicyMode"] = boost::any(*backupPolicyMode);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (localLogRetentionSpace) {
      res["LocalLogRetentionSpace"] = boost::any(*localLogRetentionSpace);
    }
    if (backupAppName) {
      res["BackupAppName"] = boost::any(*backupAppName);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupLog) {
      res["BackupLog"] = boost::any(*backupLog);
    }
    if (nextBackupActuallyTime) {
      res["NextBackupActuallyTime"] = boost::any(*nextBackupActuallyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupDbName") != m.end() && !m["BackupDbName"].empty()) {
      backupDbName = make_shared<string>(boost::any_cast<string>(m["BackupDbName"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["LogBackupRetentionPeriod"]));
    }
    if (m.find("DataBackupRetentionPeriod") != m.end() && !m["DataBackupRetentionPeriod"].empty()) {
      dataBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["DataBackupRetentionPeriod"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupLevel") != m.end() && !m["BackupLevel"].empty()) {
      backupLevel = make_shared<string>(boost::any_cast<string>(m["BackupLevel"]));
    }
    if (m.find("LocalLogRetentionHours") != m.end() && !m["LocalLogRetentionHours"].empty()) {
      localLogRetentionHours = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionHours"]));
    }
    if (m.find("HighSpaceUsageProtection") != m.end() && !m["HighSpaceUsageProtection"].empty()) {
      highSpaceUsageProtection = make_shared<long>(boost::any_cast<long>(m["HighSpaceUsageProtection"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("BackupPolicyMode") != m.end() && !m["BackupPolicyMode"].empty()) {
      backupPolicyMode = make_shared<string>(boost::any_cast<string>(m["BackupPolicyMode"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("LocalLogRetentionSpace") != m.end() && !m["LocalLogRetentionSpace"].empty()) {
      localLogRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionSpace"]));
    }
    if (m.find("BackupAppName") != m.end() && !m["BackupAppName"].empty()) {
      backupAppName = make_shared<string>(boost::any_cast<string>(m["BackupAppName"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupLog") != m.end() && !m["BackupLog"].empty()) {
      backupLog = make_shared<string>(boost::any_cast<string>(m["BackupLog"]));
    }
    if (m.find("NextBackupActuallyTime") != m.end() && !m["NextBackupActuallyTime"].empty()) {
      nextBackupActuallyTime = make_shared<string>(boost::any_cast<string>(m["NextBackupActuallyTime"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBodyBackupPolicyDO() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackupPolicyResponseBodyBackupPolicyDO> backupPolicyDO{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backupPolicyDO) {
      res["BackupPolicyDO"] = backupPolicyDO ? boost::any(backupPolicyDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackupPolicyDO") != m.end() && !m["BackupPolicyDO"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupPolicyDO"].type()) {
        DescribeBackupPolicyResponseBodyBackupPolicyDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupPolicyDO"]));
        backupPolicyDO = make_shared<DescribeBackupPolicyResponseBodyBackupPolicyDO>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeBackupSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeBackupSetsRequest() {}

  explicit DescribeBackupSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeBackupSetsRequest() = default;
};
class DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> backupDb{};

  DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs() {}

  explicit DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDb) {
      res["backupDb"] = boost::any(*backupDb);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backupDb") != m.end() && !m["backupDb"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["backupDb"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["backupDb"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      backupDb = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs() = default;
};
class DescribeBackupSetsResponseBodyBackupSetsBackupSet : public Darabonba::Model {
public:
  shared_ptr<bool> enableRecovery{};
  shared_ptr<long> status{};
  shared_ptr<string> backupConsitentTime{};
  shared_ptr<string> backupType{};
  shared_ptr<long> backupStartTime{};
  shared_ptr<string> backupLevel{};
  shared_ptr<string> backupMode{};
  shared_ptr<long> backupEndTime{};
  shared_ptr<string> id{};
  shared_ptr<string> backupTotalSize{};
  shared_ptr<DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs> backupDbs{};

  DescribeBackupSetsResponseBodyBackupSetsBackupSet() {}

  explicit DescribeBackupSetsResponseBodyBackupSetsBackupSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableRecovery) {
      res["EnableRecovery"] = boost::any(*enableRecovery);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (backupConsitentTime) {
      res["BackupConsitentTime"] = boost::any(*backupConsitentTime);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupLevel) {
      res["BackupLevel"] = boost::any(*backupLevel);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (backupTotalSize) {
      res["BackupTotalSize"] = boost::any(*backupTotalSize);
    }
    if (backupDbs) {
      res["BackupDbs"] = backupDbs ? boost::any(backupDbs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableRecovery") != m.end() && !m["EnableRecovery"].empty()) {
      enableRecovery = make_shared<bool>(boost::any_cast<bool>(m["EnableRecovery"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("BackupConsitentTime") != m.end() && !m["BackupConsitentTime"].empty()) {
      backupConsitentTime = make_shared<string>(boost::any_cast<string>(m["BackupConsitentTime"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<long>(boost::any_cast<long>(m["BackupStartTime"]));
    }
    if (m.find("BackupLevel") != m.end() && !m["BackupLevel"].empty()) {
      backupLevel = make_shared<string>(boost::any_cast<string>(m["BackupLevel"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<long>(boost::any_cast<long>(m["BackupEndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("BackupTotalSize") != m.end() && !m["BackupTotalSize"].empty()) {
      backupTotalSize = make_shared<string>(boost::any_cast<string>(m["BackupTotalSize"]));
    }
    if (m.find("BackupDbs") != m.end() && !m["BackupDbs"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupDbs"].type()) {
        DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupDbs"]));
        backupDbs = make_shared<DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs>(model1);
      }
    }
  }


  virtual ~DescribeBackupSetsResponseBodyBackupSetsBackupSet() = default;
};
class DescribeBackupSetsResponseBodyBackupSets : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupSetsResponseBodyBackupSetsBackupSet>> backupSet{};

  DescribeBackupSetsResponseBodyBackupSets() {}

  explicit DescribeBackupSetsResponseBodyBackupSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSet) {
      vector<boost::any> temp1;
      for(auto item1:*backupSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["backupSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backupSet") != m.end() && !m["backupSet"].empty()) {
      if (typeid(vector<boost::any>) == m["backupSet"].type()) {
        vector<DescribeBackupSetsResponseBodyBackupSetsBackupSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["backupSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupSetsResponseBodyBackupSetsBackupSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupSet = make_shared<vector<DescribeBackupSetsResponseBodyBackupSetsBackupSet>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupSetsResponseBodyBackupSets() = default;
};
class DescribeBackupSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackupSetsResponseBodyBackupSets> backupSets{};

  DescribeBackupSetsResponseBody() {}

  explicit DescribeBackupSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backupSets) {
      res["BackupSets"] = backupSets ? boost::any(backupSets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackupSets") != m.end() && !m["BackupSets"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupSets"].type()) {
        DescribeBackupSetsResponseBodyBackupSets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupSets"]));
        backupSets = make_shared<DescribeBackupSetsResponseBodyBackupSets>(model1);
      }
    }
  }


  virtual ~DescribeBackupSetsResponseBody() = default;
};
class DescribeBackupSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupSetsResponseBody> body{};

  DescribeBackupSetsResponse() {}

  explicit DescribeBackupSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupSetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupSetsResponse() = default;
};
class DescribeBackupTimesRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeBackupTimesRequest() {}

  explicit DescribeBackupTimesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBackupTimesRequest() = default;
};
class DescribeBackupTimesResponseBodyRestoreTime : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  DescribeBackupTimesResponseBodyRestoreTime() {}

  explicit DescribeBackupTimesResponseBodyRestoreTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupTimesResponseBodyRestoreTime() = default;
};
class DescribeBackupTimesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBackupTimesResponseBodyRestoreTime> restoreTime{};

  DescribeBackupTimesResponseBody() {}

  explicit DescribeBackupTimesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (restoreTime) {
      res["RestoreTime"] = restoreTime ? boost::any(restoreTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreTime"].type()) {
        DescribeBackupTimesResponseBodyRestoreTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreTime"]));
        restoreTime = make_shared<DescribeBackupTimesResponseBodyRestoreTime>(model1);
      }
    }
  }


  virtual ~DescribeBackupTimesResponseBody() = default;
};
class DescribeBackupTimesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupTimesResponseBody> body{};

  DescribeBackupTimesResponse() {}

  explicit DescribeBackupTimesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupTimesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupTimesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupTimesResponse() = default;
};
class DescribeBroadcastTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> query{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  DescribeBroadcastTablesRequest() {}

  explicit DescribeBroadcastTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~DescribeBroadcastTablesRequest() = default;
};
class DescribeBroadcastTablesResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<bool> isShard{};
  shared_ptr<bool> broadcast{};
  shared_ptr<string> table{};
  shared_ptr<long> dbInstType{};
  shared_ptr<string> broadcastType{};

  DescribeBroadcastTablesResponseBodyList() {}

  explicit DescribeBroadcastTablesResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (isShard) {
      res["IsShard"] = boost::any(*isShard);
    }
    if (broadcast) {
      res["Broadcast"] = boost::any(*broadcast);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (broadcastType) {
      res["BroadcastType"] = boost::any(*broadcastType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("IsShard") != m.end() && !m["IsShard"].empty()) {
      isShard = make_shared<bool>(boost::any_cast<bool>(m["IsShard"]));
    }
    if (m.find("Broadcast") != m.end() && !m["Broadcast"].empty()) {
      broadcast = make_shared<bool>(boost::any_cast<bool>(m["Broadcast"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<long>(boost::any_cast<long>(m["DbInstType"]));
    }
    if (m.find("BroadcastType") != m.end() && !m["BroadcastType"].empty()) {
      broadcastType = make_shared<string>(boost::any_cast<string>(m["BroadcastType"]));
    }
  }


  virtual ~DescribeBroadcastTablesResponseBodyList() = default;
};
class DescribeBroadcastTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<bool> isShard{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<DescribeBroadcastTablesResponseBodyList>> list{};

  DescribeBroadcastTablesResponseBody() {}

  explicit DescribeBroadcastTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isShard) {
      res["IsShard"] = boost::any(*isShard);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
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
    if (m.find("IsShard") != m.end() && !m["IsShard"].empty()) {
      isShard = make_shared<bool>(boost::any_cast<bool>(m["IsShard"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribeBroadcastTablesResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBroadcastTablesResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeBroadcastTablesResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~DescribeBroadcastTablesResponseBody() = default;
};
class DescribeBroadcastTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBroadcastTablesResponseBody> body{};

  DescribeBroadcastTablesResponse() {}

  explicit DescribeBroadcastTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBroadcastTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBroadcastTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBroadcastTablesResponse() = default;
};
class DescribeDbInstanceDbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> password{};
  shared_ptr<string> dbInstType{};

  DescribeDbInstanceDbsRequest() {}

  explicit DescribeDbInstanceDbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
  }


  virtual ~DescribeDbInstanceDbsRequest() = default;
};
class DescribeDbInstanceDbsResponseBodyDatabasesDatabase : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> dbName{};
  shared_ptr<string> description{};

  DescribeDbInstanceDbsResponseBodyDatabasesDatabase() {}

  explicit DescribeDbInstanceDbsResponseBodyDatabasesDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~DescribeDbInstanceDbsResponseBodyDatabasesDatabase() = default;
};
class DescribeDbInstanceDbsResponseBodyDatabases : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDbInstanceDbsResponseBodyDatabasesDatabase>> database{};

  DescribeDbInstanceDbsResponseBodyDatabases() {}

  explicit DescribeDbInstanceDbsResponseBodyDatabases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      vector<boost::any> temp1;
      for(auto item1:*database){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Database"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      if (typeid(vector<boost::any>) == m["Database"].type()) {
        vector<DescribeDbInstanceDbsResponseBodyDatabasesDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Database"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDbInstanceDbsResponseBodyDatabasesDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        database = make_shared<vector<DescribeDbInstanceDbsResponseBodyDatabasesDatabase>>(expect1);
      }
    }
  }


  virtual ~DescribeDbInstanceDbsResponseBodyDatabases() = default;
};
class DescribeDbInstanceDbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> total{};
  shared_ptr<DescribeDbInstanceDbsResponseBodyDatabases> databases{};

  DescribeDbInstanceDbsResponseBody() {}

  explicit DescribeDbInstanceDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (databases) {
      res["Databases"] = databases ? boost::any(databases->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
    if (m.find("Databases") != m.end() && !m["Databases"].empty()) {
      if (typeid(map<string, boost::any>) == m["Databases"].type()) {
        DescribeDbInstanceDbsResponseBodyDatabases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Databases"]));
        databases = make_shared<DescribeDbInstanceDbsResponseBodyDatabases>(model1);
      }
    }
  }


  virtual ~DescribeDbInstanceDbsResponseBody() = default;
};
class DescribeDbInstanceDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDbInstanceDbsResponseBody> body{};

  DescribeDbInstanceDbsResponse() {}

  explicit DescribeDbInstanceDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDbInstanceDbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDbInstanceDbsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDbInstanceDbsResponse() = default;
};
class DescribeDbInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> search{};
  shared_ptr<string> dbInstType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDbInstancesRequest() {}

  explicit DescribeDbInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDbInstancesRequest() = default;
};
class DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId : public Darabonba::Model {
public:
  shared_ptr<vector<string>> readOnlyDBInstanceId{};

  DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId() {}

  explicit DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readOnlyDBInstanceId) {
      res["ReadOnlyDBInstanceId"] = boost::any(*readOnlyDBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadOnlyDBInstanceId") != m.end() && !m["ReadOnlyDBInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadOnlyDBInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadOnlyDBInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readOnlyDBInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId() = default;
};
class DescribeDbInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> zoneId{};
  shared_ptr<long> DBInstanceStatus{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId> readOnlyDBInstanceId{};

  DescribeDbInstancesResponseBodyItemsDBInstance() {}

  explicit DescribeDbInstancesResponseBodyItemsDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (readOnlyDBInstanceId) {
      res["ReadOnlyDBInstanceId"] = readOnlyDBInstanceId ? boost::any(readOnlyDBInstanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<long>(boost::any_cast<long>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReadOnlyDBInstanceId") != m.end() && !m["ReadOnlyDBInstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadOnlyDBInstanceId"].type()) {
        DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadOnlyDBInstanceId"]));
        readOnlyDBInstanceId = make_shared<DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId>(model1);
      }
    }
  }


  virtual ~DescribeDbInstancesResponseBodyItemsDBInstance() = default;
};
class DescribeDbInstancesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDbInstancesResponseBodyItemsDBInstance>> DBInstance{};

  DescribeDbInstancesResponseBodyItems() {}

  explicit DescribeDbInstancesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<DescribeDbInstancesResponseBodyItemsDBInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDbInstancesResponseBodyItemsDBInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstance = make_shared<vector<DescribeDbInstancesResponseBodyItemsDBInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDbInstancesResponseBodyItems() = default;
};
class DescribeDbInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDbInstancesResponseBodyItems> items{};

  DescribeDbInstancesResponseBody() {}

  explicit DescribeDbInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDbInstancesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDbInstancesResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDbInstancesResponseBody() = default;
};
class DescribeDbInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDbInstancesResponseBody> body{};

  DescribeDbInstancesResponse() {}

  explicit DescribeDbInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDbInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDbInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDbInstancesResponse() = default;
};
class DescribeDrdsDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  DescribeDrdsDBRequest() {}

  explicit DescribeDrdsDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DescribeDrdsDBRequest() = default;
};
class DescribeDrdsDBResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> dbName{};
  shared_ptr<string> schema{};
  shared_ptr<string> createTime{};
  shared_ptr<string> mode{};
  shared_ptr<string> dbInstType{};
  shared_ptr<string> instRole{};

  DescribeDrdsDBResponseBodyData() {}

  explicit DescribeDrdsDBResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (instRole) {
      res["InstRole"] = boost::any(*instRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("InstRole") != m.end() && !m["InstRole"].empty()) {
      instRole = make_shared<string>(boost::any_cast<string>(m["InstRole"]));
    }
  }


  virtual ~DescribeDrdsDBResponseBodyData() = default;
};
class DescribeDrdsDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsDBResponseBodyData> data{};

  DescribeDrdsDBResponseBody() {}

  explicit DescribeDrdsDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDrdsDBResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsDBResponseBodyData>(model1);
      }
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
class DescribeDrdsDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbInstanceId{};

  DescribeDrdsDBClusterRequest() {}

  explicit DescribeDrdsDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
  }


  virtual ~DescribeDrdsDBClusterRequest() = default;
};
class DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint : public Darabonba::Model {
public:
  shared_ptr<long> readWeight{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> nodeIds{};

  DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint() {}

  explicit DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      nodeIds = make_shared<string>(boost::any_cast<string>(m["NodeIds"]));
    }
  }


  virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint() = default;
};
class DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint>> endpoint{};

  DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints() {}

  explicit DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      vector<boost::any> temp1;
      for(auto item1:*endpoint){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoint"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoint"].type()) {
        vector<DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoint"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoint = make_shared<vector<DescribeDrdsDBClusterResponseBodyDbInstanceEndpointsEndpoint>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints() = default;
};
class DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeRole{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> DBNodeStatus{};

  DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode() {}

  explicit DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeRole) {
      res["DBNodeRole"] = boost::any(*DBNodeRole);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (DBNodeStatus) {
      res["DBNodeStatus"] = boost::any(*DBNodeStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeRole") != m.end() && !m["DBNodeRole"].empty()) {
      DBNodeRole = make_shared<string>(boost::any_cast<string>(m["DBNodeRole"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("DBNodeStatus") != m.end() && !m["DBNodeStatus"].empty()) {
      DBNodeStatus = make_shared<string>(boost::any_cast<string>(m["DBNodeStatus"]));
    }
  }


  virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode() = default;
};
class DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode>> DBNode{};

  DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes() {}

  explicit DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNode) {
      vector<boost::any> temp1;
      for(auto item1:*DBNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNode") != m.end() && !m["DBNode"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNode"].type()) {
        vector<DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNode = make_shared<vector<DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes() = default;
};
class DescribeDrdsDBClusterResponseBodyDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<long> port{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> rdsInstType{};
  shared_ptr<string> remainDays{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> dbInstType{};
  shared_ptr<string> engine{};
  shared_ptr<string> readMode{};
  shared_ptr<DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints> endpoints{};
  shared_ptr<DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes> DBNodes{};

  DescribeDrdsDBClusterResponseBodyDbInstance() {}

  explicit DescribeDrdsDBClusterResponseBodyDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (rdsInstType) {
      res["RdsInstType"] = boost::any(*rdsInstType);
    }
    if (remainDays) {
      res["RemainDays"] = boost::any(*remainDays);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (readMode) {
      res["ReadMode"] = boost::any(*readMode);
    }
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DBNodes) {
      res["DBNodes"] = DBNodes ? boost::any(DBNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RdsInstType") != m.end() && !m["RdsInstType"].empty()) {
      rdsInstType = make_shared<string>(boost::any_cast<string>(m["RdsInstType"]));
    }
    if (m.find("RemainDays") != m.end() && !m["RemainDays"].empty()) {
      remainDays = make_shared<string>(boost::any_cast<string>(m["RemainDays"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ReadMode") != m.end() && !m["ReadMode"].empty()) {
      readMode = make_shared<string>(boost::any_cast<string>(m["ReadMode"]));
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeDrdsDBClusterResponseBodyDbInstanceEndpoints>(model1);
      }
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBNodes"].type()) {
        DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBNodes"]));
        DBNodes = make_shared<DescribeDrdsDBClusterResponseBodyDbInstanceDBNodes>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDBClusterResponseBodyDbInstance() = default;
};
class DescribeDrdsDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsDBClusterResponseBodyDbInstance> dbInstance{};

  DescribeDrdsDBClusterResponseBody() {}

  explicit DescribeDrdsDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbInstance) {
      res["DbInstance"] = dbInstance ? boost::any(dbInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbInstance") != m.end() && !m["DbInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstance"].type()) {
        DescribeDrdsDBClusterResponseBodyDbInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstance"]));
        dbInstance = make_shared<DescribeDrdsDBClusterResponseBodyDbInstance>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDBClusterResponseBody() = default;
};
class DescribeDrdsDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDBClusterResponseBody> body{};

  DescribeDrdsDBClusterResponse() {}

  explicit DescribeDrdsDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDBClusterResponse() = default;
};
class DescribeDrdsDbInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbInstanceId{};

  DescribeDrdsDbInstanceRequest() {}

  explicit DescribeDrdsDbInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
  }


  virtual ~DescribeDrdsDbInstanceRequest() = default;
};
class DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<long> versionAction{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<long> port{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> dmInstanceId{};
  shared_ptr<string> connectUrl{};
  shared_ptr<long> readWeight{};
  shared_ptr<string> rdsInstType{};
  shared_ptr<string> remainDays{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> dbInstType{};
  shared_ptr<string> engine{};

  DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance() {}

  explicit DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (versionAction) {
      res["VersionAction"] = boost::any(*versionAction);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (dmInstanceId) {
      res["DmInstanceId"] = boost::any(*dmInstanceId);
    }
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    if (rdsInstType) {
      res["RdsInstType"] = boost::any(*rdsInstType);
    }
    if (remainDays) {
      res["RemainDays"] = boost::any(*remainDays);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("VersionAction") != m.end() && !m["VersionAction"].empty()) {
      versionAction = make_shared<long>(boost::any_cast<long>(m["VersionAction"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("DmInstanceId") != m.end() && !m["DmInstanceId"].empty()) {
      dmInstanceId = make_shared<string>(boost::any_cast<string>(m["DmInstanceId"]));
    }
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
    if (m.find("RdsInstType") != m.end() && !m["RdsInstType"].empty()) {
      rdsInstType = make_shared<string>(boost::any_cast<string>(m["RdsInstType"]));
    }
    if (m.find("RemainDays") != m.end() && !m["RemainDays"].empty()) {
      remainDays = make_shared<string>(boost::any_cast<string>(m["RemainDays"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance() = default;
};
class DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance>> readOnlyInstance{};

  DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances() {}

  explicit DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readOnlyInstance) {
      vector<boost::any> temp1;
      for(auto item1:*readOnlyInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReadOnlyInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadOnlyInstance") != m.end() && !m["ReadOnlyInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["ReadOnlyInstance"].type()) {
        vector<DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReadOnlyInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        readOnlyInstance = make_shared<vector<DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstancesReadOnlyInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances() = default;
};
class DescribeDrdsDbInstanceResponseBodyDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<long> port{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> dmInstanceId{};
  shared_ptr<string> connectUrl{};
  shared_ptr<long> readWeight{};
  shared_ptr<string> rdsInstType{};
  shared_ptr<string> remainDays{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> dbInstType{};
  shared_ptr<string> engine{};
  shared_ptr<DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances> readOnlyInstances{};

  DescribeDrdsDbInstanceResponseBodyDbInstance() {}

  explicit DescribeDrdsDbInstanceResponseBodyDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (dmInstanceId) {
      res["DmInstanceId"] = boost::any(*dmInstanceId);
    }
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    if (rdsInstType) {
      res["RdsInstType"] = boost::any(*rdsInstType);
    }
    if (remainDays) {
      res["RemainDays"] = boost::any(*remainDays);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (readOnlyInstances) {
      res["ReadOnlyInstances"] = readOnlyInstances ? boost::any(readOnlyInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("DmInstanceId") != m.end() && !m["DmInstanceId"].empty()) {
      dmInstanceId = make_shared<string>(boost::any_cast<string>(m["DmInstanceId"]));
    }
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
    if (m.find("RdsInstType") != m.end() && !m["RdsInstType"].empty()) {
      rdsInstType = make_shared<string>(boost::any_cast<string>(m["RdsInstType"]));
    }
    if (m.find("RemainDays") != m.end() && !m["RemainDays"].empty()) {
      remainDays = make_shared<string>(boost::any_cast<string>(m["RemainDays"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ReadOnlyInstances") != m.end() && !m["ReadOnlyInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadOnlyInstances"].type()) {
        DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadOnlyInstances"]));
        readOnlyInstances = make_shared<DescribeDrdsDbInstanceResponseBodyDbInstanceReadOnlyInstances>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstanceResponseBodyDbInstance() = default;
};
class DescribeDrdsDbInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsDbInstanceResponseBodyDbInstance> dbInstance{};

  DescribeDrdsDbInstanceResponseBody() {}

  explicit DescribeDrdsDbInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbInstance) {
      res["DbInstance"] = dbInstance ? boost::any(dbInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbInstance") != m.end() && !m["DbInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstance"].type()) {
        DescribeDrdsDbInstanceResponseBodyDbInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstance"]));
        dbInstance = make_shared<DescribeDrdsDbInstanceResponseBodyDbInstance>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstanceResponseBody() = default;
};
class DescribeDrdsDbInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDbInstanceResponseBody> body{};

  DescribeDrdsDbInstanceResponse() {}

  explicit DescribeDrdsDbInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsDbInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDbInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstanceResponse() = default;
};
class DescribeDrdsDbInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDrdsDbInstancesRequest() {}

  explicit DescribeDrdsDbInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDrdsDbInstancesRequest() = default;
};
class DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<long> port{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> dmInstanceId{};
  shared_ptr<string> connectUrl{};
  shared_ptr<long> readWeight{};
  shared_ptr<string> rdsInstType{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> remainDays{};
  shared_ptr<string> dbInstType{};
  shared_ptr<string> engine{};

  DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance() {}

  explicit DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (dmInstanceId) {
      res["DmInstanceId"] = boost::any(*dmInstanceId);
    }
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    if (rdsInstType) {
      res["RdsInstType"] = boost::any(*rdsInstType);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (remainDays) {
      res["RemainDays"] = boost::any(*remainDays);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("DmInstanceId") != m.end() && !m["DmInstanceId"].empty()) {
      dmInstanceId = make_shared<string>(boost::any_cast<string>(m["DmInstanceId"]));
    }
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
    if (m.find("RdsInstType") != m.end() && !m["RdsInstType"].empty()) {
      rdsInstType = make_shared<string>(boost::any_cast<string>(m["RdsInstType"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RemainDays") != m.end() && !m["RemainDays"].empty()) {
      remainDays = make_shared<long>(boost::any_cast<long>(m["RemainDays"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance() = default;
};
class DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance>> readOnlyInstance{};

  DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances() {}

  explicit DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readOnlyInstance) {
      vector<boost::any> temp1;
      for(auto item1:*readOnlyInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReadOnlyInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadOnlyInstance") != m.end() && !m["ReadOnlyInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["ReadOnlyInstance"].type()) {
        vector<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReadOnlyInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        readOnlyInstance = make_shared<vector<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances() = default;
};
class DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<long> port{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> dmInstanceId{};
  shared_ptr<string> connectUrl{};
  shared_ptr<long> readWeight{};
  shared_ptr<string> rdsInstType{};
  shared_ptr<long> remainDays{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> dbInstType{};
  shared_ptr<string> engine{};
  shared_ptr<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances> readOnlyInstances{};

  DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance() {}

  explicit DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (dmInstanceId) {
      res["DmInstanceId"] = boost::any(*dmInstanceId);
    }
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    if (rdsInstType) {
      res["RdsInstType"] = boost::any(*rdsInstType);
    }
    if (remainDays) {
      res["RemainDays"] = boost::any(*remainDays);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (readOnlyInstances) {
      res["ReadOnlyInstances"] = readOnlyInstances ? boost::any(readOnlyInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("DmInstanceId") != m.end() && !m["DmInstanceId"].empty()) {
      dmInstanceId = make_shared<string>(boost::any_cast<string>(m["DmInstanceId"]));
    }
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
    if (m.find("RdsInstType") != m.end() && !m["RdsInstType"].empty()) {
      rdsInstType = make_shared<string>(boost::any_cast<string>(m["RdsInstType"]));
    }
    if (m.find("RemainDays") != m.end() && !m["RemainDays"].empty()) {
      remainDays = make_shared<long>(boost::any_cast<long>(m["RemainDays"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ReadOnlyInstances") != m.end() && !m["ReadOnlyInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadOnlyInstances"].type()) {
        DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadOnlyInstances"]));
        readOnlyInstances = make_shared<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstanceReadOnlyInstances>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance() = default;
};
class DescribeDrdsDbInstancesResponseBodyDbInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance>> dbInstance{};

  DescribeDrdsDbInstancesResponseBodyDbInstances() {}

  explicit DescribeDrdsDbInstancesResponseBodyDbInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstance) {
      vector<boost::any> temp1;
      for(auto item1:*dbInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbInstance") != m.end() && !m["DbInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DbInstance"].type()) {
        vector<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbInstance = make_shared<vector<DescribeDrdsDbInstancesResponseBodyDbInstancesDbInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstancesResponseBodyDbInstances() = default;
};
class DescribeDrdsDbInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<string> total{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeDrdsDbInstancesResponseBodyDbInstances> dbInstances{};

  DescribeDrdsDbInstancesResponseBody() {}

  explicit DescribeDrdsDbInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (dbInstances) {
      res["DbInstances"] = dbInstances ? boost::any(dbInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("DbInstances") != m.end() && !m["DbInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstances"].type()) {
        DescribeDrdsDbInstancesResponseBodyDbInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstances"]));
        dbInstances = make_shared<DescribeDrdsDbInstancesResponseBodyDbInstances>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstancesResponseBody() = default;
};
class DescribeDrdsDbInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDbInstancesResponseBody> body{};

  DescribeDrdsDbInstancesResponse() {}

  explicit DescribeDrdsDbInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsDbInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDbInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbInstancesResponse() = default;
};
class DescribeDrdsDBIpWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> groupName{};

  DescribeDrdsDBIpWhiteListRequest() {}

  explicit DescribeDrdsDBIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DescribeDrdsDBIpWhiteListRequest() = default;
};
class DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ip{};

  DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList() {}

  explicit DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList() = default;
};
class DescribeDrdsDBIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList> ipWhiteList{};

  DescribeDrdsDBIpWhiteListResponseBody() {}

  explicit DescribeDrdsDBIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = ipWhiteList ? boost::any(ipWhiteList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpWhiteList"].type()) {
        DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpWhiteList"]));
        ipWhiteList = make_shared<DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList>(model1);
      }
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
class DescribeDrdsDbRdsNameListRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  DescribeDrdsDbRdsNameListRequest() {}

  explicit DescribeDrdsDbRdsNameListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DescribeDrdsDbRdsNameListRequest() = default;
};
class DescribeDrdsDbRdsNameListResponseBodyInstanceNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceName{};

  DescribeDrdsDbRdsNameListResponseBodyInstanceNameList() {}

  explicit DescribeDrdsDbRdsNameListResponseBodyInstanceNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDrdsDbRdsNameListResponseBodyInstanceNameList() = default;
};
class DescribeDrdsDbRdsNameListResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsDbRdsNameListResponseBodyInstanceNameList> instanceNameList{};

  DescribeDrdsDbRdsNameListResponseBody() {}

  explicit DescribeDrdsDbRdsNameListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceNameList) {
      res["InstanceNameList"] = instanceNameList ? boost::any(instanceNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceNameList") != m.end() && !m["InstanceNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceNameList"].type()) {
        DescribeDrdsDbRdsNameListResponseBodyInstanceNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceNameList"]));
        instanceNameList = make_shared<DescribeDrdsDbRdsNameListResponseBodyInstanceNameList>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbRdsNameListResponseBody() = default;
};
class DescribeDrdsDbRdsNameListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDbRdsNameListResponseBody> body{};

  DescribeDrdsDbRdsNameListResponse() {}

  explicit DescribeDrdsDbRdsNameListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsDbRdsNameListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDbRdsNameListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbRdsNameListResponse() = default;
};
class DescribeDrdsDBsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

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
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
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


  virtual ~DescribeDrdsDBsRequest() = default;
};
class DescribeDrdsDBsResponseBodyDataDb : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> dbName{};
  shared_ptr<string> schema{};
  shared_ptr<string> createTime{};
  shared_ptr<string> mode{};
  shared_ptr<string> dbInstType{};

  DescribeDrdsDBsResponseBodyDataDb() {}

  explicit DescribeDrdsDBsResponseBodyDataDb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
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
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<string> total{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeDrdsDBsResponseBodyData> data{};

  DescribeDrdsDBsResponseBody() {}

  explicit DescribeDrdsDBsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDrdsDBsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsDBsResponseBodyData>(model1);
      }
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
class DescribeDrdsDbTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> taskType{};

  DescribeDrdsDbTasksRequest() {}

  explicit DescribeDrdsDbTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeDrdsDbTasksRequest() = default;
};
class DescribeDrdsDbTasksResponseBodyTasksTask : public Darabonba::Model {
public:
  shared_ptr<long> progress{};
  shared_ptr<string> taskPhase{};
  shared_ptr<long> tbComputeLength{};
  shared_ptr<string> taskName{};
  shared_ptr<string> parentJobId{};
  shared_ptr<string> label{};
  shared_ptr<long> taskType{};
  shared_ptr<long> dbComputeLength{};
  shared_ptr<long> taskStatus{};
  shared_ptr<bool> allowCancel{};
  shared_ptr<bool> showProgress{};
  shared_ptr<string> taskDetail{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> detailTaskId{};
  shared_ptr<long> targetId{};
  shared_ptr<string> expandType{};

  DescribeDrdsDbTasksResponseBodyTasksTask() {}

  explicit DescribeDrdsDbTasksResponseBodyTasksTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (taskPhase) {
      res["TaskPhase"] = boost::any(*taskPhase);
    }
    if (tbComputeLength) {
      res["TbComputeLength"] = boost::any(*tbComputeLength);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (parentJobId) {
      res["ParentJobId"] = boost::any(*parentJobId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (dbComputeLength) {
      res["DbComputeLength"] = boost::any(*dbComputeLength);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (allowCancel) {
      res["AllowCancel"] = boost::any(*allowCancel);
    }
    if (showProgress) {
      res["ShowProgress"] = boost::any(*showProgress);
    }
    if (taskDetail) {
      res["TaskDetail"] = boost::any(*taskDetail);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (detailTaskId) {
      res["DetailTaskId"] = boost::any(*detailTaskId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (expandType) {
      res["ExpandType"] = boost::any(*expandType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("TaskPhase") != m.end() && !m["TaskPhase"].empty()) {
      taskPhase = make_shared<string>(boost::any_cast<string>(m["TaskPhase"]));
    }
    if (m.find("TbComputeLength") != m.end() && !m["TbComputeLength"].empty()) {
      tbComputeLength = make_shared<long>(boost::any_cast<long>(m["TbComputeLength"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ParentJobId") != m.end() && !m["ParentJobId"].empty()) {
      parentJobId = make_shared<string>(boost::any_cast<string>(m["ParentJobId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("DbComputeLength") != m.end() && !m["DbComputeLength"].empty()) {
      dbComputeLength = make_shared<long>(boost::any_cast<long>(m["DbComputeLength"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("AllowCancel") != m.end() && !m["AllowCancel"].empty()) {
      allowCancel = make_shared<bool>(boost::any_cast<bool>(m["AllowCancel"]));
    }
    if (m.find("ShowProgress") != m.end() && !m["ShowProgress"].empty()) {
      showProgress = make_shared<bool>(boost::any_cast<bool>(m["ShowProgress"]));
    }
    if (m.find("TaskDetail") != m.end() && !m["TaskDetail"].empty()) {
      taskDetail = make_shared<string>(boost::any_cast<string>(m["TaskDetail"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("DetailTaskId") != m.end() && !m["DetailTaskId"].empty()) {
      detailTaskId = make_shared<string>(boost::any_cast<string>(m["DetailTaskId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<long>(boost::any_cast<long>(m["TargetId"]));
    }
    if (m.find("ExpandType") != m.end() && !m["ExpandType"].empty()) {
      expandType = make_shared<string>(boost::any_cast<string>(m["ExpandType"]));
    }
  }


  virtual ~DescribeDrdsDbTasksResponseBodyTasksTask() = default;
};
class DescribeDrdsDbTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsDbTasksResponseBodyTasksTask>> task{};

  DescribeDrdsDbTasksResponseBodyTasks() {}

  explicit DescribeDrdsDbTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<DescribeDrdsDbTasksResponseBodyTasksTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsDbTasksResponseBodyTasksTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<DescribeDrdsDbTasksResponseBodyTasksTask>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsDbTasksResponseBodyTasks() = default;
};
class DescribeDrdsDbTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsDbTasksResponseBodyTasks> tasks{};

  DescribeDrdsDbTasksResponseBody() {}

  explicit DescribeDrdsDbTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      res["Tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasks"].type()) {
        DescribeDrdsDbTasksResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasks"]));
        tasks = make_shared<DescribeDrdsDbTasksResponseBodyTasks>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbTasksResponseBody() = default;
};
class DescribeDrdsDbTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsDbTasksResponseBody> body{};

  DescribeDrdsDbTasksResponse() {}

  explicit DescribeDrdsDbTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsDbTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsDbTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsDbTasksResponse() = default;
};
class DescribeDrdsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> regionId{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDrdsInstanceRequest() = default;
};
class DescribeDrdsInstanceResponseBodyDataVipsVip : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> dns{};
  shared_ptr<string> port{};
  shared_ptr<long> expireDays{};

  DescribeDrdsInstanceResponseBodyDataVipsVip() {}

  explicit DescribeDrdsInstanceResponseBodyDataVipsVip(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (dns) {
      res["Dns"] = boost::any(*dns);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (expireDays) {
      res["ExpireDays"] = boost::any(*expireDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      dns = make_shared<string>(boost::any_cast<string>(m["Dns"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ExpireDays") != m.end() && !m["ExpireDays"].empty()) {
      expireDays = make_shared<long>(boost::any_cast<long>(m["ExpireDays"]));
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
class DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> readOnlyDBInstanceId{};

  DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds() {}

  explicit DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readOnlyDBInstanceId) {
      res["ReadOnlyDBInstanceId"] = boost::any(*readOnlyDBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadOnlyDBInstanceId") != m.end() && !m["ReadOnlyDBInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadOnlyDBInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadOnlyDBInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readOnlyDBInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds() = default;
};
class DescribeDrdsInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> status{};
  shared_ptr<long> createTime{};
  shared_ptr<string> versionAction{};
  shared_ptr<string> storageType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> label{};
  shared_ptr<long> mysqlVersion{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<long> version{};
  shared_ptr<long> expireDate{};
  shared_ptr<string> masterInstanceId{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> machineType{};
  shared_ptr<string> instanceSeries{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> instRole{};
  shared_ptr<string> orderInstanceId{};
  shared_ptr<DescribeDrdsInstanceResponseBodyDataVips> vips{};
  shared_ptr<DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds> readOnlyDBInstanceIds{};

  DescribeDrdsInstanceResponseBodyData() {}

  explicit DescribeDrdsInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (versionAction) {
      res["VersionAction"] = boost::any(*versionAction);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (mysqlVersion) {
      res["MysqlVersion"] = boost::any(*mysqlVersion);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (masterInstanceId) {
      res["MasterInstanceId"] = boost::any(*masterInstanceId);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (instanceSeries) {
      res["InstanceSeries"] = boost::any(*instanceSeries);
    }
    if (productVersion) {
      res["ProductVersion"] = boost::any(*productVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instRole) {
      res["InstRole"] = boost::any(*instRole);
    }
    if (orderInstanceId) {
      res["OrderInstanceId"] = boost::any(*orderInstanceId);
    }
    if (vips) {
      res["Vips"] = vips ? boost::any(vips->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyDBInstanceIds) {
      res["ReadOnlyDBInstanceIds"] = readOnlyDBInstanceIds ? boost::any(readOnlyDBInstanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("VersionAction") != m.end() && !m["VersionAction"].empty()) {
      versionAction = make_shared<string>(boost::any_cast<string>(m["VersionAction"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("MysqlVersion") != m.end() && !m["MysqlVersion"].empty()) {
      mysqlVersion = make_shared<long>(boost::any_cast<long>(m["MysqlVersion"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<long>(boost::any_cast<long>(m["ExpireDate"]));
    }
    if (m.find("MasterInstanceId") != m.end() && !m["MasterInstanceId"].empty()) {
      masterInstanceId = make_shared<string>(boost::any_cast<string>(m["MasterInstanceId"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("InstanceSeries") != m.end() && !m["InstanceSeries"].empty()) {
      instanceSeries = make_shared<string>(boost::any_cast<string>(m["InstanceSeries"]));
    }
    if (m.find("ProductVersion") != m.end() && !m["ProductVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["ProductVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstRole") != m.end() && !m["InstRole"].empty()) {
      instRole = make_shared<string>(boost::any_cast<string>(m["InstRole"]));
    }
    if (m.find("OrderInstanceId") != m.end() && !m["OrderInstanceId"].empty()) {
      orderInstanceId = make_shared<string>(boost::any_cast<string>(m["OrderInstanceId"]));
    }
    if (m.find("Vips") != m.end() && !m["Vips"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vips"].type()) {
        DescribeDrdsInstanceResponseBodyDataVips model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vips"]));
        vips = make_shared<DescribeDrdsInstanceResponseBodyDataVips>(model1);
      }
    }
    if (m.find("ReadOnlyDBInstanceIds") != m.end() && !m["ReadOnlyDBInstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadOnlyDBInstanceIds"].type()) {
        DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadOnlyDBInstanceIds"]));
        readOnlyDBInstanceIds = make_shared<DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceResponseBodyData() = default;
};
class DescribeDrdsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsInstanceResponseBodyData> data{};

  DescribeDrdsInstanceResponseBody() {}

  explicit DescribeDrdsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDrdsInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsInstanceResponseBodyData>(model1);
      }
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
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> key{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> regionId{};

  DescribeDrdsInstanceDbMonitorRequest() {}

  explicit DescribeDrdsInstanceDbMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorRequest() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<long> date{};
  shared_ptr<string> value{};

  DescribeDrdsInstanceDbMonitorResponseBodyDataValues() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDrdsInstanceDbMonitorResponseBodyDataValues() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<vector<DescribeDrdsInstanceDbMonitorResponseBodyDataValues>> values{};

  DescribeDrdsInstanceDbMonitorResponseBodyData() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeDrdsInstanceDbMonitorResponseBodyDataValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceDbMonitorResponseBodyDataValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeDrdsInstanceDbMonitorResponseBodyDataValues>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceDbMonitorResponseBodyData() = default;
};
class DescribeDrdsInstanceDbMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDrdsInstanceDbMonitorResponseBodyData>> data{};

  DescribeDrdsInstanceDbMonitorResponseBody() {}

  explicit DescribeDrdsInstanceDbMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDrdsInstanceDbMonitorResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceDbMonitorResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDrdsInstanceDbMonitorResponseBodyData>>(expect1);
      }
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
class DescribeDrdsInstanceLevelTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeDrdsInstanceLevelTasksRequest() {}

  explicit DescribeDrdsInstanceLevelTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDrdsInstanceLevelTasksRequest() = default;
};
class DescribeDrdsInstanceLevelTasksResponseBodyTasksTask : public Darabonba::Model {
public:
  shared_ptr<long> taskType{};
  shared_ptr<string> taskPhase{};
  shared_ptr<long> progress{};
  shared_ptr<bool> allowCancel{};
  shared_ptr<long> taskStatus{};
  shared_ptr<bool> showProgress{};
  shared_ptr<string> taskName{};
  shared_ptr<string> progressDescription{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> targetId{};
  shared_ptr<string> errMsg{};

  DescribeDrdsInstanceLevelTasksResponseBodyTasksTask() {}

  explicit DescribeDrdsInstanceLevelTasksResponseBodyTasksTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskPhase) {
      res["TaskPhase"] = boost::any(*taskPhase);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (allowCancel) {
      res["AllowCancel"] = boost::any(*allowCancel);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (showProgress) {
      res["ShowProgress"] = boost::any(*showProgress);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (progressDescription) {
      res["ProgressDescription"] = boost::any(*progressDescription);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TaskPhase") != m.end() && !m["TaskPhase"].empty()) {
      taskPhase = make_shared<string>(boost::any_cast<string>(m["TaskPhase"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("AllowCancel") != m.end() && !m["AllowCancel"].empty()) {
      allowCancel = make_shared<bool>(boost::any_cast<bool>(m["AllowCancel"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("ShowProgress") != m.end() && !m["ShowProgress"].empty()) {
      showProgress = make_shared<bool>(boost::any_cast<bool>(m["ShowProgress"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ProgressDescription") != m.end() && !m["ProgressDescription"].empty()) {
      progressDescription = make_shared<string>(boost::any_cast<string>(m["ProgressDescription"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<long>(boost::any_cast<long>(m["TargetId"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
  }


  virtual ~DescribeDrdsInstanceLevelTasksResponseBodyTasksTask() = default;
};
class DescribeDrdsInstanceLevelTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstanceLevelTasksResponseBodyTasksTask>> task{};

  DescribeDrdsInstanceLevelTasksResponseBodyTasks() {}

  explicit DescribeDrdsInstanceLevelTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<DescribeDrdsInstanceLevelTasksResponseBodyTasksTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceLevelTasksResponseBodyTasksTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<DescribeDrdsInstanceLevelTasksResponseBodyTasksTask>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceLevelTasksResponseBodyTasks() = default;
};
class DescribeDrdsInstanceLevelTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsInstanceLevelTasksResponseBodyTasks> tasks{};

  DescribeDrdsInstanceLevelTasksResponseBody() {}

  explicit DescribeDrdsInstanceLevelTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      res["Tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasks"].type()) {
        DescribeDrdsInstanceLevelTasksResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasks"]));
        tasks = make_shared<DescribeDrdsInstanceLevelTasksResponseBodyTasks>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceLevelTasksResponseBody() = default;
};
class DescribeDrdsInstanceLevelTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsInstanceLevelTasksResponseBody> body{};

  DescribeDrdsInstanceLevelTasksResponse() {}

  explicit DescribeDrdsInstanceLevelTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsInstanceLevelTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsInstanceLevelTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceLevelTasksResponse() = default;
};
class DescribeDrdsInstanceMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> key{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> periodMultiple{};
  shared_ptr<string> regionId{};

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
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (periodMultiple) {
      res["PeriodMultiple"] = boost::any(*periodMultiple);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PeriodMultiple") != m.end() && !m["PeriodMultiple"].empty()) {
      periodMultiple = make_shared<long>(boost::any_cast<long>(m["PeriodMultiple"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDrdsInstanceMonitorRequest() = default;
};
class DescribeDrdsInstanceMonitorResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<long> date{};
  shared_ptr<string> value{};

  DescribeDrdsInstanceMonitorResponseBodyDataValues() {}

  explicit DescribeDrdsInstanceMonitorResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDrdsInstanceMonitorResponseBodyDataValues() = default;
};
class DescribeDrdsInstanceMonitorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<long> nodeNum{};
  shared_ptr<vector<DescribeDrdsInstanceMonitorResponseBodyDataValues>> values{};

  DescribeDrdsInstanceMonitorResponseBodyData() {}

  explicit DescribeDrdsInstanceMonitorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nodeNum) {
      res["NodeNum"] = boost::any(*nodeNum);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
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
    if (m.find("NodeNum") != m.end() && !m["NodeNum"].empty()) {
      nodeNum = make_shared<long>(boost::any_cast<long>(m["NodeNum"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeDrdsInstanceMonitorResponseBodyDataValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceMonitorResponseBodyDataValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeDrdsInstanceMonitorResponseBodyDataValues>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceMonitorResponseBodyData() = default;
};
class DescribeDrdsInstanceMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDrdsInstanceMonitorResponseBodyData>> data{};

  DescribeDrdsInstanceMonitorResponseBody() {}

  explicit DescribeDrdsInstanceMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDrdsInstanceMonitorResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstanceMonitorResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDrdsInstanceMonitorResponseBodyData>>(expect1);
      }
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
class DescribeDrdsInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDrdsInstancesRequestTag() {}

  explicit DescribeDrdsInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDrdsInstancesRequestTag() = default;
};
class DescribeDrdsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> description{};
  shared_ptr<bool> expired{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> mix{};
  shared_ptr<string> productVersion{};
  shared_ptr<vector<DescribeDrdsInstancesRequestTag>> tag{};

  DescribeDrdsInstancesRequest() {}

  explicit DescribeDrdsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (mix) {
      res["Mix"] = boost::any(*mix);
    }
    if (productVersion) {
      res["ProductVersion"] = boost::any(*productVersion);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Mix") != m.end() && !m["Mix"].empty()) {
      mix = make_shared<bool>(boost::any_cast<bool>(m["Mix"]));
    }
    if (m.find("ProductVersion") != m.end() && !m["ProductVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["ProductVersion"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDrdsInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDrdsInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstancesRequest() = default;
};
class DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> type{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> port{};
  shared_ptr<string> IP{};

  DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip() {}

  explicit DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip() = default;
};
class DescribeDrdsInstancesResponseBodyInstancesInstanceVips : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip>> vip{};

  DescribeDrdsInstancesResponseBodyInstancesInstanceVips() {}

  explicit DescribeDrdsInstancesResponseBodyInstancesInstanceVips(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vip"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vip = make_shared<vector<DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyInstancesInstanceVips() = default;
};
class DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> readOnlyDBInstanceId{};

  DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds() {}

  explicit DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readOnlyDBInstanceId) {
      res["ReadOnlyDBInstanceId"] = boost::any(*readOnlyDBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadOnlyDBInstanceId") != m.end() && !m["ReadOnlyDBInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadOnlyDBInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadOnlyDBInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readOnlyDBInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds() = default;
};
class DescribeDrdsInstancesResponseBodyInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> machineType{};
  shared_ptr<long> createTime{};
  shared_ptr<string> versionAction{};
  shared_ptr<string> instanceSeries{};
  shared_ptr<string> networkType{};
  shared_ptr<string> label{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<long> version{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<long> expireDate{};
  shared_ptr<string> masterInstanceId{};
  shared_ptr<string> orderInstanceId{};
  shared_ptr<string> instRole{};
  shared_ptr<DescribeDrdsInstancesResponseBodyInstancesInstanceVips> vips{};
  shared_ptr<DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds> readOnlyDBInstanceIds{};

  DescribeDrdsInstancesResponseBodyInstancesInstance() {}

  explicit DescribeDrdsInstancesResponseBodyInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (versionAction) {
      res["VersionAction"] = boost::any(*versionAction);
    }
    if (instanceSeries) {
      res["InstanceSeries"] = boost::any(*instanceSeries);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (productVersion) {
      res["ProductVersion"] = boost::any(*productVersion);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (masterInstanceId) {
      res["MasterInstanceId"] = boost::any(*masterInstanceId);
    }
    if (orderInstanceId) {
      res["OrderInstanceId"] = boost::any(*orderInstanceId);
    }
    if (instRole) {
      res["InstRole"] = boost::any(*instRole);
    }
    if (vips) {
      res["Vips"] = vips ? boost::any(vips->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyDBInstanceIds) {
      res["ReadOnlyDBInstanceIds"] = readOnlyDBInstanceIds ? boost::any(readOnlyDBInstanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("VersionAction") != m.end() && !m["VersionAction"].empty()) {
      versionAction = make_shared<string>(boost::any_cast<string>(m["VersionAction"]));
    }
    if (m.find("InstanceSeries") != m.end() && !m["InstanceSeries"].empty()) {
      instanceSeries = make_shared<string>(boost::any_cast<string>(m["InstanceSeries"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("ProductVersion") != m.end() && !m["ProductVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["ProductVersion"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<long>(boost::any_cast<long>(m["ExpireDate"]));
    }
    if (m.find("MasterInstanceId") != m.end() && !m["MasterInstanceId"].empty()) {
      masterInstanceId = make_shared<string>(boost::any_cast<string>(m["MasterInstanceId"]));
    }
    if (m.find("OrderInstanceId") != m.end() && !m["OrderInstanceId"].empty()) {
      orderInstanceId = make_shared<string>(boost::any_cast<string>(m["OrderInstanceId"]));
    }
    if (m.find("InstRole") != m.end() && !m["InstRole"].empty()) {
      instRole = make_shared<string>(boost::any_cast<string>(m["InstRole"]));
    }
    if (m.find("Vips") != m.end() && !m["Vips"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vips"].type()) {
        DescribeDrdsInstancesResponseBodyInstancesInstanceVips model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vips"]));
        vips = make_shared<DescribeDrdsInstancesResponseBodyInstancesInstanceVips>(model1);
      }
    }
    if (m.find("ReadOnlyDBInstanceIds") != m.end() && !m["ReadOnlyDBInstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadOnlyDBInstanceIds"].type()) {
        DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadOnlyDBInstanceIds"]));
        readOnlyDBInstanceIds = make_shared<DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyInstancesInstance() = default;
};
class DescribeDrdsInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsInstancesResponseBodyInstancesInstance>> instance{};

  DescribeDrdsInstancesResponseBodyInstances() {}

  explicit DescribeDrdsInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDrdsInstancesResponseBodyInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsInstancesResponseBodyInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DescribeDrdsInstancesResponseBodyInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsInstancesResponseBodyInstances() = default;
};
class DescribeDrdsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<DescribeDrdsInstancesResponseBodyInstances> instances{};

  DescribeDrdsInstancesResponseBody() {}

  explicit DescribeDrdsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeDrdsInstancesResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeDrdsInstancesResponseBodyInstances>(model1);
      }
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
class DescribeDrdsInstanceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> regionId{};

  DescribeDrdsInstanceVersionRequest() {}

  explicit DescribeDrdsInstanceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDrdsInstanceVersionRequest() = default;
};
class DescribeDrdsInstanceVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> newestVersion{};
  shared_ptr<string> instanceVersion{};

  DescribeDrdsInstanceVersionResponseBodyData() {}

  explicit DescribeDrdsInstanceVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newestVersion) {
      res["NewestVersion"] = boost::any(*newestVersion);
    }
    if (instanceVersion) {
      res["InstanceVersion"] = boost::any(*instanceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewestVersion") != m.end() && !m["NewestVersion"].empty()) {
      newestVersion = make_shared<string>(boost::any_cast<string>(m["NewestVersion"]));
    }
    if (m.find("InstanceVersion") != m.end() && !m["InstanceVersion"].empty()) {
      instanceVersion = make_shared<string>(boost::any_cast<string>(m["InstanceVersion"]));
    }
  }


  virtual ~DescribeDrdsInstanceVersionResponseBodyData() = default;
};
class DescribeDrdsInstanceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsInstanceVersionResponseBodyData> data{};

  DescribeDrdsInstanceVersionResponseBody() {}

  explicit DescribeDrdsInstanceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDrdsInstanceVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsInstanceVersionResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceVersionResponseBody() = default;
};
class DescribeDrdsInstanceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsInstanceVersionResponseBody> body{};

  DescribeDrdsInstanceVersionResponse() {}

  explicit DescribeDrdsInstanceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsInstanceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsInstanceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsInstanceVersionResponse() = default;
};
class DescribeDrdsParamsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> dbName{};

  DescribeDrdsParamsRequest() {}

  explicit DescribeDrdsParamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DescribeDrdsParamsRequest() = default;
};
class DescribeDrdsParamsResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> paramDefaultValue{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> paramName{};
  shared_ptr<string> paramType{};
  shared_ptr<string> paramValue{};
  shared_ptr<bool> needRestart{};
  shared_ptr<string> paramRanges{};
  shared_ptr<string> dbName{};
  shared_ptr<string> paramEnglishName{};
  shared_ptr<string> paramDesc{};
  shared_ptr<string> paramVariableName{};

  DescribeDrdsParamsResponseBodyList() {}

  explicit DescribeDrdsParamsResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramDefaultValue) {
      res["ParamDefaultValue"] = boost::any(*paramDefaultValue);
    }
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
    }
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    if (needRestart) {
      res["NeedRestart"] = boost::any(*needRestart);
    }
    if (paramRanges) {
      res["ParamRanges"] = boost::any(*paramRanges);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (paramEnglishName) {
      res["ParamEnglishName"] = boost::any(*paramEnglishName);
    }
    if (paramDesc) {
      res["ParamDesc"] = boost::any(*paramDesc);
    }
    if (paramVariableName) {
      res["ParamVariableName"] = boost::any(*paramVariableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamDefaultValue") != m.end() && !m["ParamDefaultValue"].empty()) {
      paramDefaultValue = make_shared<string>(boost::any_cast<string>(m["ParamDefaultValue"]));
    }
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
    if (m.find("NeedRestart") != m.end() && !m["NeedRestart"].empty()) {
      needRestart = make_shared<bool>(boost::any_cast<bool>(m["NeedRestart"]));
    }
    if (m.find("ParamRanges") != m.end() && !m["ParamRanges"].empty()) {
      paramRanges = make_shared<string>(boost::any_cast<string>(m["ParamRanges"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ParamEnglishName") != m.end() && !m["ParamEnglishName"].empty()) {
      paramEnglishName = make_shared<string>(boost::any_cast<string>(m["ParamEnglishName"]));
    }
    if (m.find("ParamDesc") != m.end() && !m["ParamDesc"].empty()) {
      paramDesc = make_shared<string>(boost::any_cast<string>(m["ParamDesc"]));
    }
    if (m.find("ParamVariableName") != m.end() && !m["ParamVariableName"].empty()) {
      paramVariableName = make_shared<string>(boost::any_cast<string>(m["ParamVariableName"]));
    }
  }


  virtual ~DescribeDrdsParamsResponseBodyList() = default;
};
class DescribeDrdsParamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDrdsParamsResponseBodyList>> list{};

  DescribeDrdsParamsResponseBody() {}

  explicit DescribeDrdsParamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribeDrdsParamsResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsParamsResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeDrdsParamsResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsParamsResponseBody() = default;
};
class DescribeDrdsParamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsParamsResponseBody> body{};

  DescribeDrdsParamsResponse() {}

  explicit DescribeDrdsParamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsParamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsParamsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsParamsResponse() = default;
};
class DescribeDrdsRdsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeDrdsRdsInstancesRequest() {}

  explicit DescribeDrdsRdsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDrdsRdsInstancesRequest() = default;
};
class DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceCPU{};
  shared_ptr<long> DBInstanceMemory{};
  shared_ptr<string> payType{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<long> port{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> dmInstanceId{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> connectUrl{};
  shared_ptr<long> readWeight{};
  shared_ptr<string> rdsInstType{};
  shared_ptr<string> DBInstanceClassType{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> dbInstType{};

  DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance() {}

  explicit DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceCPU) {
      res["DBInstanceCPU"] = boost::any(*DBInstanceCPU);
    }
    if (DBInstanceMemory) {
      res["DBInstanceMemory"] = boost::any(*DBInstanceMemory);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (dmInstanceId) {
      res["DmInstanceId"] = boost::any(*dmInstanceId);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (readWeight) {
      res["ReadWeight"] = boost::any(*readWeight);
    }
    if (rdsInstType) {
      res["RdsInstType"] = boost::any(*rdsInstType);
    }
    if (DBInstanceClassType) {
      res["DBInstanceClassType"] = boost::any(*DBInstanceClassType);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceCPU") != m.end() && !m["DBInstanceCPU"].empty()) {
      DBInstanceCPU = make_shared<string>(boost::any_cast<string>(m["DBInstanceCPU"]));
    }
    if (m.find("DBInstanceMemory") != m.end() && !m["DBInstanceMemory"].empty()) {
      DBInstanceMemory = make_shared<long>(boost::any_cast<long>(m["DBInstanceMemory"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("DmInstanceId") != m.end() && !m["DmInstanceId"].empty()) {
      dmInstanceId = make_shared<string>(boost::any_cast<string>(m["DmInstanceId"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("ReadWeight") != m.end() && !m["ReadWeight"].empty()) {
      readWeight = make_shared<long>(boost::any_cast<long>(m["ReadWeight"]));
    }
    if (m.find("RdsInstType") != m.end() && !m["RdsInstType"].empty()) {
      rdsInstType = make_shared<string>(boost::any_cast<string>(m["RdsInstType"]));
    }
    if (m.find("DBInstanceClassType") != m.end() && !m["DBInstanceClassType"].empty()) {
      DBInstanceClassType = make_shared<string>(boost::any_cast<string>(m["DBInstanceClassType"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
  }


  virtual ~DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance() = default;
};
class DescribeDrdsRdsInstancesResponseBodyDbInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance>> dbInstance{};

  DescribeDrdsRdsInstancesResponseBodyDbInstances() {}

  explicit DescribeDrdsRdsInstancesResponseBodyDbInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstance) {
      vector<boost::any> temp1;
      for(auto item1:*dbInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbInstance") != m.end() && !m["DbInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DbInstance"].type()) {
        vector<DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbInstance = make_shared<vector<DescribeDrdsRdsInstancesResponseBodyDbInstancesDbInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsRdsInstancesResponseBodyDbInstances() = default;
};
class DescribeDrdsRdsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeDrdsRdsInstancesResponseBodyDbInstances> dbInstances{};

  DescribeDrdsRdsInstancesResponseBody() {}

  explicit DescribeDrdsRdsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbInstances) {
      res["DbInstances"] = dbInstances ? boost::any(dbInstances->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DbInstances") != m.end() && !m["DbInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstances"].type()) {
        DescribeDrdsRdsInstancesResponseBodyDbInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstances"]));
        dbInstances = make_shared<DescribeDrdsRdsInstancesResponseBodyDbInstances>(model1);
      }
    }
  }


  virtual ~DescribeDrdsRdsInstancesResponseBody() = default;
};
class DescribeDrdsRdsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsRdsInstancesResponseBody> body{};

  DescribeDrdsRdsInstancesResponse() {}

  explicit DescribeDrdsRdsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsRdsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsRdsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsRdsInstancesResponse() = default;
};
class DescribeDrdsShardingDbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbNamePattern{};

  DescribeDrdsShardingDbsRequest() {}

  explicit DescribeDrdsShardingDbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbNamePattern) {
      res["DbNamePattern"] = boost::any(*dbNamePattern);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbNamePattern") != m.end() && !m["DbNamePattern"].empty()) {
      dbNamePattern = make_shared<string>(boost::any_cast<string>(m["DbNamePattern"]));
    }
  }


  virtual ~DescribeDrdsShardingDbsRequest() = default;
};
class DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb : public Darabonba::Model {
public:
  shared_ptr<long> minPoolSize{};
  shared_ptr<long> maxPoolSize{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> connectUrl{};
  shared_ptr<string> groupName{};
  shared_ptr<string> dbType{};
  shared_ptr<long> idleTimeOut{};
  shared_ptr<string> shardingDbName{};
  shared_ptr<long> blockingTimeout{};
  shared_ptr<long> preparedStatementCacheSize{};
  shared_ptr<string> connectionProperties{};
  shared_ptr<string> userName{};
  shared_ptr<string> dbStatus{};

  DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb() {}

  explicit DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (minPoolSize) {
      res["MinPoolSize"] = boost::any(*minPoolSize);
    }
    if (maxPoolSize) {
      res["MaxPoolSize"] = boost::any(*maxPoolSize);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (connectUrl) {
      res["ConnectUrl"] = boost::any(*connectUrl);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (idleTimeOut) {
      res["IdleTimeOut"] = boost::any(*idleTimeOut);
    }
    if (shardingDbName) {
      res["ShardingDbName"] = boost::any(*shardingDbName);
    }
    if (blockingTimeout) {
      res["BlockingTimeout"] = boost::any(*blockingTimeout);
    }
    if (preparedStatementCacheSize) {
      res["PreparedStatementCacheSize"] = boost::any(*preparedStatementCacheSize);
    }
    if (connectionProperties) {
      res["ConnectionProperties"] = boost::any(*connectionProperties);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (dbStatus) {
      res["DbStatus"] = boost::any(*dbStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MinPoolSize") != m.end() && !m["MinPoolSize"].empty()) {
      minPoolSize = make_shared<long>(boost::any_cast<long>(m["MinPoolSize"]));
    }
    if (m.find("MaxPoolSize") != m.end() && !m["MaxPoolSize"].empty()) {
      maxPoolSize = make_shared<long>(boost::any_cast<long>(m["MaxPoolSize"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ConnectUrl") != m.end() && !m["ConnectUrl"].empty()) {
      connectUrl = make_shared<string>(boost::any_cast<string>(m["ConnectUrl"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("IdleTimeOut") != m.end() && !m["IdleTimeOut"].empty()) {
      idleTimeOut = make_shared<long>(boost::any_cast<long>(m["IdleTimeOut"]));
    }
    if (m.find("ShardingDbName") != m.end() && !m["ShardingDbName"].empty()) {
      shardingDbName = make_shared<string>(boost::any_cast<string>(m["ShardingDbName"]));
    }
    if (m.find("BlockingTimeout") != m.end() && !m["BlockingTimeout"].empty()) {
      blockingTimeout = make_shared<long>(boost::any_cast<long>(m["BlockingTimeout"]));
    }
    if (m.find("PreparedStatementCacheSize") != m.end() && !m["PreparedStatementCacheSize"].empty()) {
      preparedStatementCacheSize = make_shared<long>(boost::any_cast<long>(m["PreparedStatementCacheSize"]));
    }
    if (m.find("ConnectionProperties") != m.end() && !m["ConnectionProperties"].empty()) {
      connectionProperties = make_shared<string>(boost::any_cast<string>(m["ConnectionProperties"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("DbStatus") != m.end() && !m["DbStatus"].empty()) {
      dbStatus = make_shared<string>(boost::any_cast<string>(m["DbStatus"]));
    }
  }


  virtual ~DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb() = default;
};
class DescribeDrdsShardingDbsResponseBodyShardingDbs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb>> shardingDb{};

  DescribeDrdsShardingDbsResponseBodyShardingDbs() {}

  explicit DescribeDrdsShardingDbsResponseBodyShardingDbs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shardingDb) {
      vector<boost::any> temp1;
      for(auto item1:*shardingDb){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShardingDb"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShardingDb") != m.end() && !m["ShardingDb"].empty()) {
      if (typeid(vector<boost::any>) == m["ShardingDb"].type()) {
        vector<DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShardingDb"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shardingDb = make_shared<vector<DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsShardingDbsResponseBodyShardingDbs() = default;
};
class DescribeDrdsShardingDbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsShardingDbsResponseBodyShardingDbs> shardingDbs{};

  DescribeDrdsShardingDbsResponseBody() {}

  explicit DescribeDrdsShardingDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (shardingDbs) {
      res["ShardingDbs"] = shardingDbs ? boost::any(shardingDbs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShardingDbs") != m.end() && !m["ShardingDbs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ShardingDbs"].type()) {
        DescribeDrdsShardingDbsResponseBodyShardingDbs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ShardingDbs"]));
        shardingDbs = make_shared<DescribeDrdsShardingDbsResponseBodyShardingDbs>(model1);
      }
    }
  }


  virtual ~DescribeDrdsShardingDbsResponseBody() = default;
};
class DescribeDrdsShardingDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsShardingDbsResponseBody> body{};

  DescribeDrdsShardingDbsResponse() {}

  explicit DescribeDrdsShardingDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsShardingDbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsShardingDbsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsShardingDbsResponse() = default;
};
class DescribeDrdsSlowSqlsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<long> exeTime{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDrdsSlowSqlsRequest() {}

  explicit DescribeDrdsSlowSqlsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (exeTime) {
      res["ExeTime"] = boost::any(*exeTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ExeTime") != m.end() && !m["ExeTime"].empty()) {
      exeTime = make_shared<long>(boost::any_cast<long>(m["ExeTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDrdsSlowSqlsRequest() = default;
};
class DescribeDrdsSlowSqlsResponseBodyItemsItem : public Darabonba::Model {
public:
  shared_ptr<long> sendTime{};
  shared_ptr<string> host{};
  shared_ptr<string> sql{};
  shared_ptr<long> responseTime{};
  shared_ptr<string> schema{};

  DescribeDrdsSlowSqlsResponseBodyItemsItem() {}

  explicit DescribeDrdsSlowSqlsResponseBodyItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sendTime) {
      res["SendTime"] = boost::any(*sendTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (responseTime) {
      res["ResponseTime"] = boost::any(*responseTime);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SendTime") != m.end() && !m["SendTime"].empty()) {
      sendTime = make_shared<long>(boost::any_cast<long>(m["SendTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("ResponseTime") != m.end() && !m["ResponseTime"].empty()) {
      responseTime = make_shared<long>(boost::any_cast<long>(m["ResponseTime"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
  }


  virtual ~DescribeDrdsSlowSqlsResponseBodyItemsItem() = default;
};
class DescribeDrdsSlowSqlsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsSlowSqlsResponseBodyItemsItem>> item{};

  DescribeDrdsSlowSqlsResponseBodyItems() {}

  explicit DescribeDrdsSlowSqlsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<DescribeDrdsSlowSqlsResponseBodyItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsSlowSqlsResponseBodyItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<DescribeDrdsSlowSqlsResponseBodyItemsItem>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsSlowSqlsResponseBodyItems() = default;
};
class DescribeDrdsSlowSqlsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeDrdsSlowSqlsResponseBodyItems> items{};

  DescribeDrdsSlowSqlsResponseBody() {}

  explicit DescribeDrdsSlowSqlsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDrdsSlowSqlsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDrdsSlowSqlsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDrdsSlowSqlsResponseBody() = default;
};
class DescribeDrdsSlowSqlsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsSlowSqlsResponseBody> body{};

  DescribeDrdsSlowSqlsResponse() {}

  explicit DescribeDrdsSlowSqlsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsSlowSqlsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsSlowSqlsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsSlowSqlsResponse() = default;
};
class DescribeDrdsSqlAuditStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeDrdsSqlAuditStatusRequest() {}

  explicit DescribeDrdsSqlAuditStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDrdsSqlAuditStatusRequest() = default;
};
class DescribeDrdsSqlAuditStatusResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<string> extraSlsLogStore{};
  shared_ptr<string> dbName{};
  shared_ptr<string> detailed{};
  shared_ptr<bool> extraWriteEnabled{};
  shared_ptr<string> enabled{};
  shared_ptr<long> extraAliUid{};
  shared_ptr<string> extraSlsProject{};

  DescribeDrdsSqlAuditStatusResponseBodyDataData() {}

  explicit DescribeDrdsSqlAuditStatusResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraSlsLogStore) {
      res["ExtraSlsLogStore"] = boost::any(*extraSlsLogStore);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (detailed) {
      res["Detailed"] = boost::any(*detailed);
    }
    if (extraWriteEnabled) {
      res["ExtraWriteEnabled"] = boost::any(*extraWriteEnabled);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (extraAliUid) {
      res["ExtraAliUid"] = boost::any(*extraAliUid);
    }
    if (extraSlsProject) {
      res["ExtraSlsProject"] = boost::any(*extraSlsProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraSlsLogStore") != m.end() && !m["ExtraSlsLogStore"].empty()) {
      extraSlsLogStore = make_shared<string>(boost::any_cast<string>(m["ExtraSlsLogStore"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Detailed") != m.end() && !m["Detailed"].empty()) {
      detailed = make_shared<string>(boost::any_cast<string>(m["Detailed"]));
    }
    if (m.find("ExtraWriteEnabled") != m.end() && !m["ExtraWriteEnabled"].empty()) {
      extraWriteEnabled = make_shared<bool>(boost::any_cast<bool>(m["ExtraWriteEnabled"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("ExtraAliUid") != m.end() && !m["ExtraAliUid"].empty()) {
      extraAliUid = make_shared<long>(boost::any_cast<long>(m["ExtraAliUid"]));
    }
    if (m.find("ExtraSlsProject") != m.end() && !m["ExtraSlsProject"].empty()) {
      extraSlsProject = make_shared<string>(boost::any_cast<string>(m["ExtraSlsProject"]));
    }
  }


  virtual ~DescribeDrdsSqlAuditStatusResponseBodyDataData() = default;
};
class DescribeDrdsSqlAuditStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsSqlAuditStatusResponseBodyDataData>> data{};

  DescribeDrdsSqlAuditStatusResponseBodyData() {}

  explicit DescribeDrdsSqlAuditStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDrdsSqlAuditStatusResponseBodyDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsSqlAuditStatusResponseBodyDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDrdsSqlAuditStatusResponseBodyDataData>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsSqlAuditStatusResponseBodyData() = default;
};
class DescribeDrdsSqlAuditStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsSqlAuditStatusResponseBodyData> data{};

  DescribeDrdsSqlAuditStatusResponseBody() {}

  explicit DescribeDrdsSqlAuditStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDrdsSqlAuditStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDrdsSqlAuditStatusResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeDrdsSqlAuditStatusResponseBody() = default;
};
class DescribeDrdsSqlAuditStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsSqlAuditStatusResponseBody> body{};

  DescribeDrdsSqlAuditStatusResponse() {}

  explicit DescribeDrdsSqlAuditStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsSqlAuditStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsSqlAuditStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsSqlAuditStatusResponse() = default;
};
class DescribeDrdsTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> taskType{};

  DescribeDrdsTasksRequest() {}

  explicit DescribeDrdsTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeDrdsTasksRequest() = default;
};
class DescribeDrdsTasksResponseBodyTasksTask : public Darabonba::Model {
public:
  shared_ptr<string> state{};
  shared_ptr<string> content{};
  shared_ptr<long> id{};

  DescribeDrdsTasksResponseBodyTasksTask() {}

  explicit DescribeDrdsTasksResponseBodyTasksTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DescribeDrdsTasksResponseBodyTasksTask() = default;
};
class DescribeDrdsTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDrdsTasksResponseBodyTasksTask>> task{};

  DescribeDrdsTasksResponseBodyTasks() {}

  explicit DescribeDrdsTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<DescribeDrdsTasksResponseBodyTasksTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDrdsTasksResponseBodyTasksTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<DescribeDrdsTasksResponseBodyTasksTask>>(expect1);
      }
    }
  }


  virtual ~DescribeDrdsTasksResponseBodyTasks() = default;
};
class DescribeDrdsTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDrdsTasksResponseBodyTasks> tasks{};

  DescribeDrdsTasksResponseBody() {}

  explicit DescribeDrdsTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      res["Tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasks"].type()) {
        DescribeDrdsTasksResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasks"]));
        tasks = make_shared<DescribeDrdsTasksResponseBodyTasks>(model1);
      }
    }
  }


  virtual ~DescribeDrdsTasksResponseBody() = default;
};
class DescribeDrdsTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDrdsTasksResponseBody> body{};

  DescribeDrdsTasksResponse() {}

  explicit DescribeDrdsTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDrdsTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDrdsTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDrdsTasksResponse() = default;
};
class DescribeExpandLogicTableInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  DescribeExpandLogicTableInfoListRequest() {}

  explicit DescribeExpandLogicTableInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DescribeExpandLogicTableInfoListRequest() = default;
};
class DescribeExpandLogicTableInfoListResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<string> shardTbKey{};
  shared_ptr<string> tableName{};
  shared_ptr<string> shardDbKey{};

  DescribeExpandLogicTableInfoListResponseBodyDataData() {}

  explicit DescribeExpandLogicTableInfoListResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shardTbKey) {
      res["ShardTbKey"] = boost::any(*shardTbKey);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (shardDbKey) {
      res["ShardDbKey"] = boost::any(*shardDbKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShardTbKey") != m.end() && !m["ShardTbKey"].empty()) {
      shardTbKey = make_shared<string>(boost::any_cast<string>(m["ShardTbKey"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("ShardDbKey") != m.end() && !m["ShardDbKey"].empty()) {
      shardDbKey = make_shared<string>(boost::any_cast<string>(m["ShardDbKey"]));
    }
  }


  virtual ~DescribeExpandLogicTableInfoListResponseBodyDataData() = default;
};
class DescribeExpandLogicTableInfoListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeExpandLogicTableInfoListResponseBodyDataData>> data{};

  DescribeExpandLogicTableInfoListResponseBodyData() {}

  explicit DescribeExpandLogicTableInfoListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<DescribeExpandLogicTableInfoListResponseBodyDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpandLogicTableInfoListResponseBodyDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeExpandLogicTableInfoListResponseBodyDataData>>(expect1);
      }
    }
  }


  virtual ~DescribeExpandLogicTableInfoListResponseBodyData() = default;
};
class DescribeExpandLogicTableInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeExpandLogicTableInfoListResponseBodyData> data{};

  DescribeExpandLogicTableInfoListResponseBody() {}

  explicit DescribeExpandLogicTableInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeExpandLogicTableInfoListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeExpandLogicTableInfoListResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeExpandLogicTableInfoListResponseBody() = default;
};
class DescribeExpandLogicTableInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeExpandLogicTableInfoListResponseBody> body{};

  DescribeExpandLogicTableInfoListResponse() {}

  explicit DescribeExpandLogicTableInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpandLogicTableInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpandLogicTableInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpandLogicTableInfoListResponse() = default;
};
class DescribeHiStoreInstanceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> historeInstanceId{};

  DescribeHiStoreInstanceInfoRequest() {}

  explicit DescribeHiStoreInstanceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (historeInstanceId) {
      res["HistoreInstanceId"] = boost::any(*historeInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("HistoreInstanceId") != m.end() && !m["HistoreInstanceId"].empty()) {
      historeInstanceId = make_shared<string>(boost::any_cast<string>(m["HistoreInstanceId"]));
    }
  }


  virtual ~DescribeHiStoreInstanceInfoRequest() = default;
};
class DescribeHiStoreInstanceInfoResponseBodyHiStoreInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> machineSpec{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> rpmVersion{};
  shared_ptr<string> historeInstanceId{};

  DescribeHiStoreInstanceInfoResponseBodyHiStoreInstanceInfo() {}

  explicit DescribeHiStoreInstanceInfoResponseBodyHiStoreInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (machineSpec) {
      res["MachineSpec"] = boost::any(*machineSpec);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (rpmVersion) {
      res["RpmVersion"] = boost::any(*rpmVersion);
    }
    if (historeInstanceId) {
      res["HistoreInstanceId"] = boost::any(*historeInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("MachineSpec") != m.end() && !m["MachineSpec"].empty()) {
      machineSpec = make_shared<string>(boost::any_cast<string>(m["MachineSpec"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("RpmVersion") != m.end() && !m["RpmVersion"].empty()) {
      rpmVersion = make_shared<string>(boost::any_cast<string>(m["RpmVersion"]));
    }
    if (m.find("HistoreInstanceId") != m.end() && !m["HistoreInstanceId"].empty()) {
      historeInstanceId = make_shared<string>(boost::any_cast<string>(m["HistoreInstanceId"]));
    }
  }


  virtual ~DescribeHiStoreInstanceInfoResponseBodyHiStoreInstanceInfo() = default;
};
class DescribeHiStoreInstanceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeHiStoreInstanceInfoResponseBodyHiStoreInstanceInfo> hiStoreInstanceInfo{};

  DescribeHiStoreInstanceInfoResponseBody() {}

  explicit DescribeHiStoreInstanceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hiStoreInstanceInfo) {
      res["HiStoreInstanceInfo"] = hiStoreInstanceInfo ? boost::any(hiStoreInstanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HiStoreInstanceInfo") != m.end() && !m["HiStoreInstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["HiStoreInstanceInfo"].type()) {
        DescribeHiStoreInstanceInfoResponseBodyHiStoreInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HiStoreInstanceInfo"]));
        hiStoreInstanceInfo = make_shared<DescribeHiStoreInstanceInfoResponseBodyHiStoreInstanceInfo>(model1);
      }
    }
  }


  virtual ~DescribeHiStoreInstanceInfoResponseBody() = default;
};
class DescribeHiStoreInstanceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHiStoreInstanceInfoResponseBody> body{};

  DescribeHiStoreInstanceInfoResponse() {}

  explicit DescribeHiStoreInstanceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHiStoreInstanceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHiStoreInstanceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHiStoreInstanceInfoResponse() = default;
};
class DescribeHotDbListRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  DescribeHotDbListRequest() {}

  explicit DescribeHotDbListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DescribeHotDbListRequest() = default;
};
class DescribeHotDbListResponseBodyDataListInstanceDbHotDbList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};

  DescribeHotDbListResponseBodyDataListInstanceDbHotDbList() {}

  explicit DescribeHotDbListResponseBodyDataListInstanceDbHotDbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeHotDbListResponseBodyDataListInstanceDbHotDbList() = default;
};
class DescribeHotDbListResponseBodyDataListInstanceDb : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<DescribeHotDbListResponseBodyDataListInstanceDbHotDbList> hotDbList{};

  DescribeHotDbListResponseBodyDataListInstanceDb() {}

  explicit DescribeHotDbListResponseBodyDataListInstanceDb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (hotDbList) {
      res["HotDbList"] = hotDbList ? boost::any(hotDbList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("HotDbList") != m.end() && !m["HotDbList"].empty()) {
      if (typeid(map<string, boost::any>) == m["HotDbList"].type()) {
        DescribeHotDbListResponseBodyDataListInstanceDbHotDbList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HotDbList"]));
        hotDbList = make_shared<DescribeHotDbListResponseBodyDataListInstanceDbHotDbList>(model1);
      }
    }
  }


  virtual ~DescribeHotDbListResponseBodyDataListInstanceDb() = default;
};
class DescribeHotDbListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHotDbListResponseBodyDataListInstanceDb>> instanceDb{};

  DescribeHotDbListResponseBodyDataList() {}

  explicit DescribeHotDbListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceDb) {
      vector<boost::any> temp1;
      for(auto item1:*instanceDb){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceDb"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceDb") != m.end() && !m["InstanceDb"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceDb"].type()) {
        vector<DescribeHotDbListResponseBodyDataListInstanceDb> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceDb"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHotDbListResponseBodyDataListInstanceDb model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceDb = make_shared<vector<DescribeHotDbListResponseBodyDataListInstanceDb>>(expect1);
      }
    }
  }


  virtual ~DescribeHotDbListResponseBodyDataList() = default;
};
class DescribeHotDbListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> randomCode{};
  shared_ptr<DescribeHotDbListResponseBodyDataList> list{};

  DescribeHotDbListResponseBodyData() {}

  explicit DescribeHotDbListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (randomCode) {
      res["RandomCode"] = boost::any(*randomCode);
    }
    if (list) {
      res["List"] = list ? boost::any(list->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RandomCode") != m.end() && !m["RandomCode"].empty()) {
      randomCode = make_shared<string>(boost::any_cast<string>(m["RandomCode"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(map<string, boost::any>) == m["List"].type()) {
        DescribeHotDbListResponseBodyDataList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["List"]));
        list = make_shared<DescribeHotDbListResponseBodyDataList>(model1);
      }
    }
  }


  virtual ~DescribeHotDbListResponseBodyData() = default;
};
class DescribeHotDbListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeHotDbListResponseBodyData> data{};

  DescribeHotDbListResponseBody() {}

  explicit DescribeHotDbListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeHotDbListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeHotDbListResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeHotDbListResponseBody() = default;
};
class DescribeHotDbListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHotDbListResponseBody> body{};

  DescribeHotDbListResponse() {}

  explicit DescribeHotDbListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHotDbListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHotDbListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHotDbListResponse() = default;
};
class DescribeInstanceAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeInstanceAccountsRequest() {}

  explicit DescribeInstanceAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceAccountsRequest() = default;
};
class DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> privilege{};

  DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege() {}

  explicit DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (privilege) {
      res["Privilege"] = boost::any(*privilege);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Privilege") != m.end() && !m["Privilege"].empty()) {
      privilege = make_shared<string>(boost::any_cast<string>(m["Privilege"]));
    }
  }


  virtual ~DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege() = default;
};
class DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege>> dbPrivilege{};

  DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges() {}

  explicit DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbPrivilege) {
      vector<boost::any> temp1;
      for(auto item1:*dbPrivilege){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbPrivilege"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbPrivilege") != m.end() && !m["DbPrivilege"].empty()) {
      if (typeid(vector<boost::any>) == m["DbPrivilege"].type()) {
        vector<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbPrivilege"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbPrivilege = make_shared<vector<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges() = default;
};
class DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> description{};
  shared_ptr<long> accountType{};
  shared_ptr<string> accountName{};
  shared_ptr<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges> dbPrivileges{};

  DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount() {}

  explicit DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dbPrivileges) {
      res["DbPrivileges"] = dbPrivileges ? boost::any(dbPrivileges->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<long>(boost::any_cast<long>(m["AccountType"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DbPrivileges") != m.end() && !m["DbPrivileges"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbPrivileges"].type()) {
        DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbPrivileges"]));
        dbPrivileges = make_shared<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount() = default;
};
class DescribeInstanceAccountsResponseBodyInstanceAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount>> instanceAccount{};

  DescribeInstanceAccountsResponseBodyInstanceAccounts() {}

  explicit DescribeInstanceAccountsResponseBodyInstanceAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceAccount) {
      vector<boost::any> temp1;
      for(auto item1:*instanceAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceAccount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceAccount") != m.end() && !m["InstanceAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceAccount"].type()) {
        vector<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceAccount = make_shared<vector<DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceAccountsResponseBodyInstanceAccounts() = default;
};
class DescribeInstanceAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceAccountsResponseBodyInstanceAccounts> instanceAccounts{};

  DescribeInstanceAccountsResponseBody() {}

  explicit DescribeInstanceAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceAccounts) {
      res["InstanceAccounts"] = instanceAccounts ? boost::any(instanceAccounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceAccounts") != m.end() && !m["InstanceAccounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceAccounts"].type()) {
        DescribeInstanceAccountsResponseBodyInstanceAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceAccounts"]));
        instanceAccounts = make_shared<DescribeInstanceAccountsResponseBodyInstanceAccounts>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAccountsResponseBody() = default;
};
class DescribeInstanceAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceAccountsResponseBody> body{};

  DescribeInstanceAccountsResponse() {}

  explicit DescribeInstanceAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAccountsResponse() = default;
};
class DescribeInstanceMenuSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeInstanceMenuSwitchRequest() {}

  explicit DescribeInstanceMenuSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceMenuSwitchRequest() = default;
};
class DescribeInstanceMenuSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<map<string, boost::any>> config{};

  DescribeInstanceMenuSwitchResponseBody() {}

  explicit DescribeInstanceMenuSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (config) {
      res["Config"] = boost::any(*config);
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
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeInstanceMenuSwitchResponseBody() = default;
};
class DescribeInstanceMenuSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceMenuSwitchResponseBody> body{};

  DescribeInstanceMenuSwitchResponse() {}

  explicit DescribeInstanceMenuSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceMenuSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceMenuSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceMenuSwitchResponse() = default;
};
class DescribeInstanceSwitchAzoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeInstanceSwitchAzoneRequest() {}

  explicit DescribeInstanceSwitchAzoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceSwitchAzoneRequest() = default;
};
class DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones : public Darabonba::Model {
public:
  shared_ptr<vector<string>> targetAzone{};

  DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones() {}

  explicit DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetAzone) {
      res["TargetAzone"] = boost::any(*targetAzone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetAzone") != m.end() && !m["TargetAzone"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TargetAzone"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TargetAzone"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetAzone = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones() = default;
};
class DescribeInstanceSwitchAzoneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> originAzoneId{};
  shared_ptr<bool> switchAble{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones> targetAzones{};

  DescribeInstanceSwitchAzoneResponseBodyResult() {}

  explicit DescribeInstanceSwitchAzoneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originAzoneId) {
      res["OriginAzoneId"] = boost::any(*originAzoneId);
    }
    if (switchAble) {
      res["SwitchAble"] = boost::any(*switchAble);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (targetAzones) {
      res["TargetAzones"] = targetAzones ? boost::any(targetAzones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginAzoneId") != m.end() && !m["OriginAzoneId"].empty()) {
      originAzoneId = make_shared<string>(boost::any_cast<string>(m["OriginAzoneId"]));
    }
    if (m.find("SwitchAble") != m.end() && !m["SwitchAble"].empty()) {
      switchAble = make_shared<bool>(boost::any_cast<bool>(m["SwitchAble"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TargetAzones") != m.end() && !m["TargetAzones"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetAzones"].type()) {
        DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetAzones"]));
        targetAzones = make_shared<DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchAzoneResponseBodyResult() = default;
};
class DescribeInstanceSwitchAzoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceSwitchAzoneResponseBodyResult> result{};

  DescribeInstanceSwitchAzoneResponseBody() {}

  explicit DescribeInstanceSwitchAzoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeInstanceSwitchAzoneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeInstanceSwitchAzoneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchAzoneResponseBody() = default;
};
class DescribeInstanceSwitchAzoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceSwitchAzoneResponseBody> body{};

  DescribeInstanceSwitchAzoneResponse() {}

  explicit DescribeInstanceSwitchAzoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceSwitchAzoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSwitchAzoneResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchAzoneResponse() = default;
};
class DescribeInstanceSwitchNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeInstanceSwitchNetworkRequest() {}

  explicit DescribeInstanceSwitchNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceSwitchNetworkRequest() = default;
};
class DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<bool> drdsSupported{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> azoneId{};
  shared_ptr<string> vswitchName{};

  DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo() {}

  explicit DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (drdsSupported) {
      res["DrdsSupported"] = boost::any(*drdsSupported);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (azoneId) {
      res["AzoneId"] = boost::any(*azoneId);
    }
    if (vswitchName) {
      res["VswitchName"] = boost::any(*vswitchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("DrdsSupported") != m.end() && !m["DrdsSupported"].empty()) {
      drdsSupported = make_shared<bool>(boost::any_cast<bool>(m["DrdsSupported"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("AzoneId") != m.end() && !m["AzoneId"].empty()) {
      azoneId = make_shared<string>(boost::any_cast<string>(m["AzoneId"]));
    }
    if (m.find("VswitchName") != m.end() && !m["VswitchName"].empty()) {
      vswitchName = make_shared<string>(boost::any_cast<string>(m["VswitchName"]));
    }
  }


  virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo() = default;
};
class DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo>> vswitchInfo{};

  DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos() {}

  explicit DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vswitchInfo) {
      vector<boost::any> temp1;
      for(auto item1:*vswitchInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VswitchInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VswitchInfo") != m.end() && !m["VswitchInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VswitchInfo"].type()) {
        vector<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VswitchInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vswitchInfo = make_shared<vector<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos() = default;
};
class DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos> vswitchInfos{};

  DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo() {}

  explicit DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vswitchInfos) {
      res["VswitchInfos"] = vswitchInfos ? boost::any(vswitchInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VswitchInfos") != m.end() && !m["VswitchInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["VswitchInfos"].type()) {
        DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VswitchInfos"]));
        vswitchInfos = make_shared<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo() = default;
};
class DescribeInstanceSwitchNetworkResponseBodyVpcInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo>> vpcInfo{};

  DescribeInstanceSwitchNetworkResponseBodyVpcInfos() {}

  explicit DescribeInstanceSwitchNetworkResponseBodyVpcInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcInfo) {
      vector<boost::any> temp1;
      for(auto item1:*vpcInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcInfo") != m.end() && !m["VpcInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcInfo"].type()) {
        vector<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcInfo = make_shared<vector<DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfos() = default;
};
class DescribeInstanceSwitchNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceSwitchNetworkResponseBodyVpcInfos> vpcInfos{};

  DescribeInstanceSwitchNetworkResponseBody() {}

  explicit DescribeInstanceSwitchNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcInfos) {
      res["VpcInfos"] = vpcInfos ? boost::any(vpcInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcInfos") != m.end() && !m["VpcInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcInfos"].type()) {
        DescribeInstanceSwitchNetworkResponseBodyVpcInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcInfos"]));
        vpcInfos = make_shared<DescribeInstanceSwitchNetworkResponseBodyVpcInfos>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchNetworkResponseBody() = default;
};
class DescribeInstanceSwitchNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceSwitchNetworkResponseBody> body{};

  DescribeInstanceSwitchNetworkResponse() {}

  explicit DescribeInstanceSwitchNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceSwitchNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSwitchNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSwitchNetworkResponse() = default;
};
class DescribeInstDbLogInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  DescribeInstDbLogInfoRequest() {}

  explicit DescribeInstDbLogInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DescribeInstDbLogInfoRequest() = default;
};
class DescribeInstDbLogInfoResponseBodyLogTimeRange : public Darabonba::Model {
public:
  shared_ptr<long> supportOldestTime{};
  shared_ptr<long> supportLatestTime{};

  DescribeInstDbLogInfoResponseBodyLogTimeRange() {}

  explicit DescribeInstDbLogInfoResponseBodyLogTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportOldestTime) {
      res["SupportOldestTime"] = boost::any(*supportOldestTime);
    }
    if (supportLatestTime) {
      res["SupportLatestTime"] = boost::any(*supportLatestTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportOldestTime") != m.end() && !m["SupportOldestTime"].empty()) {
      supportOldestTime = make_shared<long>(boost::any_cast<long>(m["SupportOldestTime"]));
    }
    if (m.find("SupportLatestTime") != m.end() && !m["SupportLatestTime"].empty()) {
      supportLatestTime = make_shared<long>(boost::any_cast<long>(m["SupportLatestTime"]));
    }
  }


  virtual ~DescribeInstDbLogInfoResponseBodyLogTimeRange() = default;
};
class DescribeInstDbLogInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstDbLogInfoResponseBodyLogTimeRange> logTimeRange{};

  DescribeInstDbLogInfoResponseBody() {}

  explicit DescribeInstDbLogInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (logTimeRange) {
      res["LogTimeRange"] = logTimeRange ? boost::any(logTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LogTimeRange") != m.end() && !m["LogTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogTimeRange"].type()) {
        DescribeInstDbLogInfoResponseBodyLogTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogTimeRange"]));
        logTimeRange = make_shared<DescribeInstDbLogInfoResponseBodyLogTimeRange>(model1);
      }
    }
  }


  virtual ~DescribeInstDbLogInfoResponseBody() = default;
};
class DescribeInstDbLogInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstDbLogInfoResponseBody> body{};

  DescribeInstDbLogInfoResponse() {}

  explicit DescribeInstDbLogInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstDbLogInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstDbLogInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstDbLogInfoResponse() = default;
};
class DescribeInstDbSlsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  DescribeInstDbSlsInfoRequest() {}

  explicit DescribeInstDbSlsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DescribeInstDbSlsInfoRequest() = default;
};
class DescribeInstDbSlsInfoResponseBodyAuditInfo : public Darabonba::Model {
public:
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};

  DescribeInstDbSlsInfoResponseBodyAuditInfo() {}

  explicit DescribeInstDbSlsInfoResponseBodyAuditInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DescribeInstDbSlsInfoResponseBodyAuditInfo() = default;
};
class DescribeInstDbSlsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstDbSlsInfoResponseBodyAuditInfo> auditInfo{};

  DescribeInstDbSlsInfoResponseBody() {}

  explicit DescribeInstDbSlsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (auditInfo) {
      res["AuditInfo"] = auditInfo ? boost::any(auditInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AuditInfo") != m.end() && !m["AuditInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuditInfo"].type()) {
        DescribeInstDbSlsInfoResponseBodyAuditInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuditInfo"]));
        auditInfo = make_shared<DescribeInstDbSlsInfoResponseBodyAuditInfo>(model1);
      }
    }
  }


  virtual ~DescribeInstDbSlsInfoResponseBody() = default;
};
class DescribeInstDbSlsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstDbSlsInfoResponseBody> body{};

  DescribeInstDbSlsInfoResponse() {}

  explicit DescribeInstDbSlsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstDbSlsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstDbSlsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstDbSlsInfoResponse() = default;
};
class DescribePreCheckResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> taskId{};

  DescribePreCheckResultRequest() {}

  explicit DescribePreCheckResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribePreCheckResultRequest() = default;
};
class DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems : public Darabonba::Model {
public:
  shared_ptr<string> errorMsgCode{};
  shared_ptr<string> preCheckItemName{};
  shared_ptr<string> state{};
  shared_ptr<vector<string>> errorMsgParams{};

  DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems() {}

  explicit DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsgCode) {
      res["ErrorMsgCode"] = boost::any(*errorMsgCode);
    }
    if (preCheckItemName) {
      res["PreCheckItemName"] = boost::any(*preCheckItemName);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (errorMsgParams) {
      res["ErrorMsgParams"] = boost::any(*errorMsgParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsgCode") != m.end() && !m["ErrorMsgCode"].empty()) {
      errorMsgCode = make_shared<string>(boost::any_cast<string>(m["ErrorMsgCode"]));
    }
    if (m.find("PreCheckItemName") != m.end() && !m["PreCheckItemName"].empty()) {
      preCheckItemName = make_shared<string>(boost::any_cast<string>(m["PreCheckItemName"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ErrorMsgParams") != m.end() && !m["ErrorMsgParams"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorMsgParams"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorMsgParams"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      errorMsgParams = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems() = default;
};
class DescribePreCheckResultResponseBodyPreCheckResult : public Darabonba::Model {
public:
  shared_ptr<string> preCheckName{};
  shared_ptr<string> state{};
  shared_ptr<vector<DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems>> subCheckItems{};

  DescribePreCheckResultResponseBodyPreCheckResult() {}

  explicit DescribePreCheckResultResponseBodyPreCheckResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (preCheckName) {
      res["PreCheckName"] = boost::any(*preCheckName);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (subCheckItems) {
      vector<boost::any> temp1;
      for(auto item1:*subCheckItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubCheckItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreCheckName") != m.end() && !m["PreCheckName"].empty()) {
      preCheckName = make_shared<string>(boost::any_cast<string>(m["PreCheckName"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("SubCheckItems") != m.end() && !m["SubCheckItems"].empty()) {
      if (typeid(vector<boost::any>) == m["SubCheckItems"].type()) {
        vector<DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubCheckItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subCheckItems = make_shared<vector<DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems>>(expect1);
      }
    }
  }


  virtual ~DescribePreCheckResultResponseBodyPreCheckResult() = default;
};
class DescribePreCheckResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePreCheckResultResponseBodyPreCheckResult> preCheckResult{};

  DescribePreCheckResultResponseBody() {}

  explicit DescribePreCheckResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (preCheckResult) {
      res["PreCheckResult"] = preCheckResult ? boost::any(preCheckResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PreCheckResult") != m.end() && !m["PreCheckResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PreCheckResult"].type()) {
        DescribePreCheckResultResponseBodyPreCheckResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PreCheckResult"]));
        preCheckResult = make_shared<DescribePreCheckResultResponseBodyPreCheckResult>(model1);
      }
    }
  }


  virtual ~DescribePreCheckResultResponseBody() = default;
};
class DescribePreCheckResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePreCheckResultResponseBody> body{};

  DescribePreCheckResultResponse() {}

  explicit DescribePreCheckResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePreCheckResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePreCheckResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePreCheckResultResponse() = default;
};
class DescribeRdsCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> orderType{};

  DescribeRdsCommodityRequest() {}

  explicit DescribeRdsCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
  }


  virtual ~DescribeRdsCommodityRequest() = default;
};
class DescribeRdsCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRdsCommodityResponseBody() {}

  explicit DescribeRdsCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeRdsCommodityResponseBody() = default;
};
class DescribeRdsCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsCommodityResponseBody> body{};

  DescribeRdsCommodityResponse() {}

  explicit DescribeRdsCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsCommodityResponse() = default;
};
class DescribeRDSPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> rdsInstanceId{};
  shared_ptr<string> keys{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> dbInstType{};

  DescribeRDSPerformanceRequest() {}

  explicit DescribeRDSPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (rdsInstanceId) {
      res["RdsInstanceId"] = boost::any(*rdsInstanceId);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RdsInstanceId") != m.end() && !m["RdsInstanceId"].empty()) {
      rdsInstanceId = make_shared<string>(boost::any_cast<string>(m["RdsInstanceId"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keys = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
  }


  virtual ~DescribeRDSPerformanceRequest() = default;
};
class DescribeRDSPerformanceResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<long> date{};
  shared_ptr<string> value{};

  DescribeRDSPerformanceResponseBodyDataValues() {}

  explicit DescribeRDSPerformanceResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRDSPerformanceResponseBodyDataValues() = default;
};
class DescribeRDSPerformanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> unit{};
  shared_ptr<long> nodeNum{};
  shared_ptr<vector<DescribeRDSPerformanceResponseBodyDataValues>> values{};

  DescribeRDSPerformanceResponseBodyData() {}

  explicit DescribeRDSPerformanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (nodeNum) {
      res["NodeNum"] = boost::any(*nodeNum);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("NodeNum") != m.end() && !m["NodeNum"].empty()) {
      nodeNum = make_shared<long>(boost::any_cast<long>(m["NodeNum"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeRDSPerformanceResponseBodyDataValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRDSPerformanceResponseBodyDataValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeRDSPerformanceResponseBodyDataValues>>(expect1);
      }
    }
  }


  virtual ~DescribeRDSPerformanceResponseBodyData() = default;
};
class DescribeRDSPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRDSPerformanceResponseBodyData>> data{};

  DescribeRDSPerformanceResponseBody() {}

  explicit DescribeRDSPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeRDSPerformanceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRDSPerformanceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeRDSPerformanceResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~DescribeRDSPerformanceResponseBody() = default;
};
class DescribeRDSPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRDSPerformanceResponseBody> body{};

  DescribeRDSPerformanceResponse() {}

  explicit DescribeRDSPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRDSPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRDSPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRDSPerformanceResponse() = default;
};
class DescribeRdsPerformanceSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<vector<string>> rdsInstanceId{};

  DescribeRdsPerformanceSummaryRequest() {}

  explicit DescribeRdsPerformanceSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (rdsInstanceId) {
      res["RdsInstanceId"] = boost::any(*rdsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RdsInstanceId") != m.end() && !m["RdsInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdsInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdsInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRdsPerformanceSummaryRequest() = default;
};
class DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos : public Darabonba::Model {
public:
  shared_ptr<double> cpu{};
  shared_ptr<long> activeSessions{};
  shared_ptr<long> totalSessions{};
  shared_ptr<string> rdsId{};
  shared_ptr<double> iops{};
  shared_ptr<long> spaceUsage{};

  DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos() {}

  explicit DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (activeSessions) {
      res["ActiveSessions"] = boost::any(*activeSessions);
    }
    if (totalSessions) {
      res["TotalSessions"] = boost::any(*totalSessions);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (iops) {
      res["Iops"] = boost::any(*iops);
    }
    if (spaceUsage) {
      res["SpaceUsage"] = boost::any(*spaceUsage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("ActiveSessions") != m.end() && !m["ActiveSessions"].empty()) {
      activeSessions = make_shared<long>(boost::any_cast<long>(m["ActiveSessions"]));
    }
    if (m.find("TotalSessions") != m.end() && !m["TotalSessions"].empty()) {
      totalSessions = make_shared<long>(boost::any_cast<long>(m["TotalSessions"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("Iops") != m.end() && !m["Iops"].empty()) {
      iops = make_shared<double>(boost::any_cast<double>(m["Iops"]));
    }
    if (m.find("SpaceUsage") != m.end() && !m["SpaceUsage"].empty()) {
      spaceUsage = make_shared<long>(boost::any_cast<long>(m["SpaceUsage"]));
    }
  }


  virtual ~DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos() = default;
};
class DescribeRdsPerformanceSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos>> rdsPerformanceInfos{};

  DescribeRdsPerformanceSummaryResponseBody() {}

  explicit DescribeRdsPerformanceSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rdsPerformanceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*rdsPerformanceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsPerformanceInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RdsPerformanceInfos") != m.end() && !m["RdsPerformanceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsPerformanceInfos"].type()) {
        vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsPerformanceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsPerformanceInfos = make_shared<vector<DescribeRdsPerformanceSummaryResponseBodyRdsPerformanceInfos>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsPerformanceSummaryResponseBody() = default;
};
class DescribeRdsPerformanceSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsPerformanceSummaryResponseBody> body{};

  DescribeRdsPerformanceSummaryResponse() {}

  explicit DescribeRdsPerformanceSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsPerformanceSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsPerformanceSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsPerformanceSummaryResponse() = default;
};
class DescribeRdsSuperAccountInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbInstType{};
  shared_ptr<vector<string>> rdsInstance{};

  DescribeRdsSuperAccountInstancesRequest() {}

  explicit DescribeRdsSuperAccountInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (rdsInstance) {
      res["RdsInstance"] = boost::any(*rdsInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("RdsInstance") != m.end() && !m["RdsInstance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdsInstance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdsInstance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstance = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRdsSuperAccountInstancesRequest() = default;
};
class DescribeRdsSuperAccountInstancesResponseBodyDbInstances : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dbInstance{};

  DescribeRdsSuperAccountInstancesResponseBodyDbInstances() {}

  explicit DescribeRdsSuperAccountInstancesResponseBodyDbInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstance) {
      res["DbInstance"] = boost::any(*dbInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbInstance") != m.end() && !m["DbInstance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbInstance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbInstance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbInstance = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRdsSuperAccountInstancesResponseBodyDbInstances() = default;
};
class DescribeRdsSuperAccountInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRdsSuperAccountInstancesResponseBodyDbInstances> dbInstances{};

  DescribeRdsSuperAccountInstancesResponseBody() {}

  explicit DescribeRdsSuperAccountInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbInstances) {
      res["DbInstances"] = dbInstances ? boost::any(dbInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbInstances") != m.end() && !m["DbInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstances"].type()) {
        DescribeRdsSuperAccountInstancesResponseBodyDbInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstances"]));
        dbInstances = make_shared<DescribeRdsSuperAccountInstancesResponseBodyDbInstances>(model1);
      }
    }
  }


  virtual ~DescribeRdsSuperAccountInstancesResponseBody() = default;
};
class DescribeRdsSuperAccountInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsSuperAccountInstancesResponseBody> body{};

  DescribeRdsSuperAccountInstancesResponse() {}

  explicit DescribeRdsSuperAccountInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsSuperAccountInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsSuperAccountInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsSuperAccountInstancesResponse() = default;
};
class DescribeRestoreOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupLevel{};
  shared_ptr<string> backupDbNames{};
  shared_ptr<string> backupId{};

  DescribeRestoreOrderRequest() {}

  explicit DescribeRestoreOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupLevel) {
      res["BackupLevel"] = boost::any(*backupLevel);
    }
    if (backupDbNames) {
      res["BackupDbNames"] = boost::any(*backupDbNames);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupLevel") != m.end() && !m["BackupLevel"].empty()) {
      backupLevel = make_shared<string>(boost::any_cast<string>(m["BackupLevel"]));
    }
    if (m.find("BackupDbNames") != m.end() && !m["BackupDbNames"].empty()) {
      backupDbNames = make_shared<string>(boost::any_cast<string>(m["BackupDbNames"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
  }


  virtual ~DescribeRestoreOrderRequest() = default;
};
class DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> network{};
  shared_ptr<string> VSwtichId{};
  shared_ptr<string> instSpec{};
  shared_ptr<string> azoneId{};
  shared_ptr<string> regionId{};

  DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList() {}

  explicit DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (VSwtichId) {
      res["VSwtichId"] = boost::any(*VSwtichId);
    }
    if (instSpec) {
      res["InstSpec"] = boost::any(*instSpec);
    }
    if (azoneId) {
      res["AzoneId"] = boost::any(*azoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("VSwtichId") != m.end() && !m["VSwtichId"].empty()) {
      VSwtichId = make_shared<string>(boost::any_cast<string>(m["VSwtichId"]));
    }
    if (m.find("InstSpec") != m.end() && !m["InstSpec"].empty()) {
      instSpec = make_shared<string>(boost::any_cast<string>(m["InstSpec"]));
    }
    if (m.find("AzoneId") != m.end() && !m["AzoneId"].empty()) {
      azoneId = make_shared<string>(boost::any_cast<string>(m["AzoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList() = default;
};
class DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList>> drdsOrderDOList{};

  DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList() {}

  explicit DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsOrderDOList) {
      vector<boost::any> temp1;
      for(auto item1:*drdsOrderDOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DrdsOrderDOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsOrderDOList") != m.end() && !m["DrdsOrderDOList"].empty()) {
      if (typeid(vector<boost::any>) == m["DrdsOrderDOList"].type()) {
        vector<DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DrdsOrderDOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        drdsOrderDOList = make_shared<vector<DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList() = default;
};
class DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList : public Darabonba::Model {
public:
  shared_ptr<string> network{};
  shared_ptr<string> version{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> dbInstanceStorage{};
  shared_ptr<long> num{};
  shared_ptr<string> engine{};
  shared_ptr<string> azoneId{};
  shared_ptr<string> regionId{};

  DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList() {}

  explicit DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (dbInstanceStorage) {
      res["DbInstanceStorage"] = boost::any(*dbInstanceStorage);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (azoneId) {
      res["AzoneId"] = boost::any(*azoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("DbInstanceStorage") != m.end() && !m["DbInstanceStorage"].empty()) {
      dbInstanceStorage = make_shared<string>(boost::any_cast<string>(m["DbInstanceStorage"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("AzoneId") != m.end() && !m["AzoneId"].empty()) {
      azoneId = make_shared<string>(boost::any_cast<string>(m["AzoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList() = default;
};
class DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList>> rdsOrderDOList{};

  DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList() {}

  explicit DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdsOrderDOList) {
      vector<boost::any> temp1;
      for(auto item1:*rdsOrderDOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsOrderDOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdsOrderDOList") != m.end() && !m["RdsOrderDOList"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsOrderDOList"].type()) {
        vector<DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsOrderDOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsOrderDOList = make_shared<vector<DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList() = default;
};
class DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList : public Darabonba::Model {
public:
  shared_ptr<string> network{};
  shared_ptr<string> version{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> dbInstanceStorage{};
  shared_ptr<long> num{};
  shared_ptr<string> engine{};
  shared_ptr<string> azoneId{};
  shared_ptr<string> regionId{};

  DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList() {}

  explicit DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (dbInstanceStorage) {
      res["DbInstanceStorage"] = boost::any(*dbInstanceStorage);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (azoneId) {
      res["AzoneId"] = boost::any(*azoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("DbInstanceStorage") != m.end() && !m["DbInstanceStorage"].empty()) {
      dbInstanceStorage = make_shared<string>(boost::any_cast<string>(m["DbInstanceStorage"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("AzoneId") != m.end() && !m["AzoneId"].empty()) {
      azoneId = make_shared<string>(boost::any_cast<string>(m["AzoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList() = default;
};
class DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList>> polarOrderDOList{};

  DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList() {}

  explicit DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polarOrderDOList) {
      vector<boost::any> temp1;
      for(auto item1:*polarOrderDOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolarOrderDOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolarOrderDOList") != m.end() && !m["PolarOrderDOList"].empty()) {
      if (typeid(vector<boost::any>) == m["PolarOrderDOList"].type()) {
        vector<DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolarOrderDOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        polarOrderDOList = make_shared<vector<DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList() = default;
};
class DescribeRestoreOrderResponseBodyRestoreOrderDO : public Darabonba::Model {
public:
  shared_ptr<DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList> drdsOrderDOList{};
  shared_ptr<DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList> rdsOrderDOList{};
  shared_ptr<DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList> polarOrderDOList{};

  DescribeRestoreOrderResponseBodyRestoreOrderDO() {}

  explicit DescribeRestoreOrderResponseBodyRestoreOrderDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsOrderDOList) {
      res["DrdsOrderDOList"] = drdsOrderDOList ? boost::any(drdsOrderDOList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rdsOrderDOList) {
      res["RdsOrderDOList"] = rdsOrderDOList ? boost::any(rdsOrderDOList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (polarOrderDOList) {
      res["PolarOrderDOList"] = polarOrderDOList ? boost::any(polarOrderDOList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsOrderDOList") != m.end() && !m["DrdsOrderDOList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DrdsOrderDOList"].type()) {
        DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DrdsOrderDOList"]));
        drdsOrderDOList = make_shared<DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList>(model1);
      }
    }
    if (m.find("RdsOrderDOList") != m.end() && !m["RdsOrderDOList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RdsOrderDOList"].type()) {
        DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RdsOrderDOList"]));
        rdsOrderDOList = make_shared<DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList>(model1);
      }
    }
    if (m.find("PolarOrderDOList") != m.end() && !m["PolarOrderDOList"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolarOrderDOList"].type()) {
        DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolarOrderDOList"]));
        polarOrderDOList = make_shared<DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList>(model1);
      }
    }
  }


  virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDO() = default;
};
class DescribeRestoreOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRestoreOrderResponseBodyRestoreOrderDO> restoreOrderDO{};

  DescribeRestoreOrderResponseBody() {}

  explicit DescribeRestoreOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (restoreOrderDO) {
      res["RestoreOrderDO"] = restoreOrderDO ? boost::any(restoreOrderDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreOrderDO") != m.end() && !m["RestoreOrderDO"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreOrderDO"].type()) {
        DescribeRestoreOrderResponseBodyRestoreOrderDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreOrderDO"]));
        restoreOrderDO = make_shared<DescribeRestoreOrderResponseBodyRestoreOrderDO>(model1);
      }
    }
  }


  virtual ~DescribeRestoreOrderResponseBody() = default;
};
class DescribeRestoreOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRestoreOrderResponseBody> body{};

  DescribeRestoreOrderResponse() {}

  explicit DescribeRestoreOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRestoreOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreOrderResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreOrderResponse() = default;
};
class DescribeShardTaskInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> sourceTableName{};
  shared_ptr<string> targetTableName{};

  DescribeShardTaskInfoRequest() {}

  explicit DescribeShardTaskInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
  }


  virtual ~DescribeShardTaskInfoRequest() = default;
};
class DescribeShardTaskInfoResponseBodyDataFull : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<long> progress{};
  shared_ptr<long> tps{};
  shared_ptr<long> total{};
  shared_ptr<long> expired{};

  DescribeShardTaskInfoResponseBodyDataFull() {}

  explicit DescribeShardTaskInfoResponseBodyDataFull(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (tps) {
      res["Tps"] = boost::any(*tps);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Tps") != m.end() && !m["Tps"].empty()) {
      tps = make_shared<long>(boost::any_cast<long>(m["Tps"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
  }


  virtual ~DescribeShardTaskInfoResponseBodyDataFull() = default;
};
class DescribeShardTaskInfoResponseBodyDataFullCheck : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<long> progress{};
  shared_ptr<long> tps{};
  shared_ptr<long> total{};
  shared_ptr<long> expired{};

  DescribeShardTaskInfoResponseBodyDataFullCheck() {}

  explicit DescribeShardTaskInfoResponseBodyDataFullCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (tps) {
      res["Tps"] = boost::any(*tps);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Tps") != m.end() && !m["Tps"].empty()) {
      tps = make_shared<long>(boost::any_cast<long>(m["Tps"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
  }


  virtual ~DescribeShardTaskInfoResponseBodyDataFullCheck() = default;
};
class DescribeShardTaskInfoResponseBodyDataFullRevise : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<long> progress{};
  shared_ptr<long> tps{};
  shared_ptr<long> total{};
  shared_ptr<long> expired{};

  DescribeShardTaskInfoResponseBodyDataFullRevise() {}

  explicit DescribeShardTaskInfoResponseBodyDataFullRevise(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (tps) {
      res["Tps"] = boost::any(*tps);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Tps") != m.end() && !m["Tps"].empty()) {
      tps = make_shared<long>(boost::any_cast<long>(m["Tps"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
  }


  virtual ~DescribeShardTaskInfoResponseBodyDataFullRevise() = default;
};
class DescribeShardTaskInfoResponseBodyDataReview : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<long> progress{};
  shared_ptr<long> tps{};
  shared_ptr<long> total{};
  shared_ptr<long> expired{};

  DescribeShardTaskInfoResponseBodyDataReview() {}

  explicit DescribeShardTaskInfoResponseBodyDataReview(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (tps) {
      res["Tps"] = boost::any(*tps);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Tps") != m.end() && !m["Tps"].empty()) {
      tps = make_shared<long>(boost::any_cast<long>(m["Tps"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
  }


  virtual ~DescribeShardTaskInfoResponseBodyDataReview() = default;
};
class DescribeShardTaskInfoResponseBodyDataIncrement : public Darabonba::Model {
public:
  shared_ptr<long> delay{};
  shared_ptr<string> startTime{};
  shared_ptr<long> tps{};

  DescribeShardTaskInfoResponseBodyDataIncrement() {}

  explicit DescribeShardTaskInfoResponseBodyDataIncrement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tps) {
      res["Tps"] = boost::any(*tps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<long>(boost::any_cast<long>(m["Delay"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Tps") != m.end() && !m["Tps"].empty()) {
      tps = make_shared<long>(boost::any_cast<long>(m["Tps"]));
    }
  }


  virtual ~DescribeShardTaskInfoResponseBodyDataIncrement() = default;
};
class DescribeShardTaskInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> stage{};
  shared_ptr<string> progress{};
  shared_ptr<string> expired{};
  shared_ptr<string> targetTableName{};
  shared_ptr<string> sourceTableName{};
  shared_ptr<DescribeShardTaskInfoResponseBodyDataFull> full{};
  shared_ptr<DescribeShardTaskInfoResponseBodyDataFullCheck> fullCheck{};
  shared_ptr<DescribeShardTaskInfoResponseBodyDataFullRevise> fullRevise{};
  shared_ptr<DescribeShardTaskInfoResponseBodyDataReview> review{};
  shared_ptr<DescribeShardTaskInfoResponseBodyDataIncrement> increment{};

  DescribeShardTaskInfoResponseBodyData() {}

  explicit DescribeShardTaskInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (full) {
      res["Full"] = full ? boost::any(full->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fullCheck) {
      res["FullCheck"] = fullCheck ? boost::any(fullCheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fullRevise) {
      res["FullRevise"] = fullRevise ? boost::any(fullRevise->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (review) {
      res["Review"] = review ? boost::any(review->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (increment) {
      res["Increment"] = increment ? boost::any(increment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("Full") != m.end() && !m["Full"].empty()) {
      if (typeid(map<string, boost::any>) == m["Full"].type()) {
        DescribeShardTaskInfoResponseBodyDataFull model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Full"]));
        full = make_shared<DescribeShardTaskInfoResponseBodyDataFull>(model1);
      }
    }
    if (m.find("FullCheck") != m.end() && !m["FullCheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["FullCheck"].type()) {
        DescribeShardTaskInfoResponseBodyDataFullCheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FullCheck"]));
        fullCheck = make_shared<DescribeShardTaskInfoResponseBodyDataFullCheck>(model1);
      }
    }
    if (m.find("FullRevise") != m.end() && !m["FullRevise"].empty()) {
      if (typeid(map<string, boost::any>) == m["FullRevise"].type()) {
        DescribeShardTaskInfoResponseBodyDataFullRevise model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FullRevise"]));
        fullRevise = make_shared<DescribeShardTaskInfoResponseBodyDataFullRevise>(model1);
      }
    }
    if (m.find("Review") != m.end() && !m["Review"].empty()) {
      if (typeid(map<string, boost::any>) == m["Review"].type()) {
        DescribeShardTaskInfoResponseBodyDataReview model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Review"]));
        review = make_shared<DescribeShardTaskInfoResponseBodyDataReview>(model1);
      }
    }
    if (m.find("Increment") != m.end() && !m["Increment"].empty()) {
      if (typeid(map<string, boost::any>) == m["Increment"].type()) {
        DescribeShardTaskInfoResponseBodyDataIncrement model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Increment"]));
        increment = make_shared<DescribeShardTaskInfoResponseBodyDataIncrement>(model1);
      }
    }
  }


  virtual ~DescribeShardTaskInfoResponseBodyData() = default;
};
class DescribeShardTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeShardTaskInfoResponseBodyData> data{};

  DescribeShardTaskInfoResponseBody() {}

  explicit DescribeShardTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeShardTaskInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeShardTaskInfoResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeShardTaskInfoResponseBody() = default;
};
class DescribeShardTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeShardTaskInfoResponseBody> body{};

  DescribeShardTaskInfoResponse() {}

  explicit DescribeShardTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeShardTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeShardTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeShardTaskInfoResponse() = default;
};
class DescribeShardTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> query{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> taskType{};

  DescribeShardTaskListRequest() {}

  explicit DescribeShardTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeShardTaskListRequest() = default;
};
class DescribeShardTaskListResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> sourceTableName{};
  shared_ptr<string> targetTableName{};
  shared_ptr<long> expired{};
  shared_ptr<long> stage{};
  shared_ptr<long> progress{};
  shared_ptr<long> delay{};

  DescribeShardTaskListResponseBodyList() {}

  explicit DescribeShardTaskListResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<long>(boost::any_cast<long>(m["Stage"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<long>(boost::any_cast<long>(m["Delay"]));
    }
  }


  virtual ~DescribeShardTaskListResponseBodyList() = default;
};
class DescribeShardTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<DescribeShardTaskListResponseBodyList>> list{};

  DescribeShardTaskListResponseBody() {}

  explicit DescribeShardTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribeShardTaskListResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeShardTaskListResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeShardTaskListResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~DescribeShardTaskListResponseBody() = default;
};
class DescribeShardTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeShardTaskListResponseBody> body{};

  DescribeShardTaskListResponse() {}

  explicit DescribeShardTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeShardTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeShardTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeShardTaskListResponse() = default;
};
class DescribeSqlFlashbakTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};

  DescribeSqlFlashbakTaskRequest() {}

  explicit DescribeSqlFlashbakTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeSqlFlashbakTaskRequest() = default;
};
class DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<long> searchEndTime{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<long> recallProgress{};
  shared_ptr<string> sqlPk{};
  shared_ptr<string> instId{};
  shared_ptr<long> recallType{};
  shared_ptr<long> searchStartTime{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> sqlCounter{};
  shared_ptr<string> dbName{};
  shared_ptr<long> recallRestoreType{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> traceId{};
  shared_ptr<long> id{};
  shared_ptr<long> recallStatus{};
  shared_ptr<string> sqlType{};

  DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask() {}

  explicit DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (searchEndTime) {
      res["SearchEndTime"] = boost::any(*searchEndTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (recallProgress) {
      res["RecallProgress"] = boost::any(*recallProgress);
    }
    if (sqlPk) {
      res["SqlPk"] = boost::any(*sqlPk);
    }
    if (instId) {
      res["InstId"] = boost::any(*instId);
    }
    if (recallType) {
      res["RecallType"] = boost::any(*recallType);
    }
    if (searchStartTime) {
      res["SearchStartTime"] = boost::any(*searchStartTime);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (sqlCounter) {
      res["SqlCounter"] = boost::any(*sqlCounter);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (recallRestoreType) {
      res["RecallRestoreType"] = boost::any(*recallRestoreType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (recallStatus) {
      res["RecallStatus"] = boost::any(*recallStatus);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("SearchEndTime") != m.end() && !m["SearchEndTime"].empty()) {
      searchEndTime = make_shared<long>(boost::any_cast<long>(m["SearchEndTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("RecallProgress") != m.end() && !m["RecallProgress"].empty()) {
      recallProgress = make_shared<long>(boost::any_cast<long>(m["RecallProgress"]));
    }
    if (m.find("SqlPk") != m.end() && !m["SqlPk"].empty()) {
      sqlPk = make_shared<string>(boost::any_cast<string>(m["SqlPk"]));
    }
    if (m.find("InstId") != m.end() && !m["InstId"].empty()) {
      instId = make_shared<string>(boost::any_cast<string>(m["InstId"]));
    }
    if (m.find("RecallType") != m.end() && !m["RecallType"].empty()) {
      recallType = make_shared<long>(boost::any_cast<long>(m["RecallType"]));
    }
    if (m.find("SearchStartTime") != m.end() && !m["SearchStartTime"].empty()) {
      searchStartTime = make_shared<long>(boost::any_cast<long>(m["SearchStartTime"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("SqlCounter") != m.end() && !m["SqlCounter"].empty()) {
      sqlCounter = make_shared<long>(boost::any_cast<long>(m["SqlCounter"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RecallRestoreType") != m.end() && !m["RecallRestoreType"].empty()) {
      recallRestoreType = make_shared<long>(boost::any_cast<long>(m["RecallRestoreType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RecallStatus") != m.end() && !m["RecallStatus"].empty()) {
      recallStatus = make_shared<long>(boost::any_cast<long>(m["RecallStatus"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
  }


  virtual ~DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask() = default;
};
class DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask>> sqlFlashbackTask{};

  DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks() {}

  explicit DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sqlFlashbackTask) {
      vector<boost::any> temp1;
      for(auto item1:*sqlFlashbackTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SqlFlashbackTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SqlFlashbackTask") != m.end() && !m["SqlFlashbackTask"].empty()) {
      if (typeid(vector<boost::any>) == m["SqlFlashbackTask"].type()) {
        vector<DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SqlFlashbackTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sqlFlashbackTask = make_shared<vector<DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask>>(expect1);
      }
    }
  }


  virtual ~DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks() = default;
};
class DescribeSqlFlashbakTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks> sqlFlashbackTasks{};

  DescribeSqlFlashbakTaskResponseBody() {}

  explicit DescribeSqlFlashbakTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sqlFlashbackTasks) {
      res["SqlFlashbackTasks"] = sqlFlashbackTasks ? boost::any(sqlFlashbackTasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SqlFlashbackTasks") != m.end() && !m["SqlFlashbackTasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["SqlFlashbackTasks"].type()) {
        DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SqlFlashbackTasks"]));
        sqlFlashbackTasks = make_shared<DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasks>(model1);
      }
    }
  }


  virtual ~DescribeSqlFlashbakTaskResponseBody() = default;
};
class DescribeSqlFlashbakTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSqlFlashbakTaskResponseBody> body{};

  DescribeSqlFlashbakTaskResponse() {}

  explicit DescribeSqlFlashbakTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSqlFlashbakTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSqlFlashbakTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSqlFlashbakTaskResponse() = default;
};
class DescribeTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> tableName{};

  DescribeTableRequest() {}

  explicit DescribeTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeTableRequest() = default;
};
class DescribeTableResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> index{};
  shared_ptr<string> isAllowNull{};
  shared_ptr<string> columnName{};
  shared_ptr<string> isPk{};
  shared_ptr<string> columnType{};
  shared_ptr<string> extra{};

  DescribeTableResponseBodyDataList() {}

  explicit DescribeTableResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (isAllowNull) {
      res["IsAllowNull"] = boost::any(*isAllowNull);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (isPk) {
      res["IsPk"] = boost::any(*isPk);
    }
    if (columnType) {
      res["ColumnType"] = boost::any(*columnType);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<string>(boost::any_cast<string>(m["Index"]));
    }
    if (m.find("IsAllowNull") != m.end() && !m["IsAllowNull"].empty()) {
      isAllowNull = make_shared<string>(boost::any_cast<string>(m["IsAllowNull"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("IsPk") != m.end() && !m["IsPk"].empty()) {
      isPk = make_shared<string>(boost::any_cast<string>(m["IsPk"]));
    }
    if (m.find("ColumnType") != m.end() && !m["ColumnType"].empty()) {
      columnType = make_shared<string>(boost::any_cast<string>(m["ColumnType"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
  }


  virtual ~DescribeTableResponseBodyDataList() = default;
};
class DescribeTableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTableResponseBodyDataList>> list{};

  DescribeTableResponseBodyData() {}

  explicit DescribeTableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribeTableResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTableResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeTableResponseBodyDataList>>(expect1);
      }
    }
  }


  virtual ~DescribeTableResponseBodyData() = default;
};
class DescribeTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeTableResponseBodyData> data{};

  DescribeTableResponseBody() {}

  explicit DescribeTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeTableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeTableResponseBodyData>(model1);
      }
    }
  }


  virtual ~DescribeTableResponseBody() = default;
};
class DescribeTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTableResponseBody> body{};

  DescribeTableResponse() {}

  explicit DescribeTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTableResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTableResponse() = default;
};
class DescribeTableListByTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> query{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> tableType{};

  DescribeTableListByTypeRequest() {}

  explicit DescribeTableListByTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
  }


  virtual ~DescribeTableListByTypeRequest() = default;
};
class DescribeTableListByTypeResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> property{};
  shared_ptr<string> tableName{};

  DescribeTableListByTypeResponseBodyList() {}

  explicit DescribeTableListByTypeResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeTableListByTypeResponseBodyList() = default;
};
class DescribeTableListByTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<vector<DescribeTableListByTypeResponseBodyList>> list{};

  DescribeTableListByTypeResponseBody() {}

  explicit DescribeTableListByTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribeTableListByTypeResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTableListByTypeResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeTableListByTypeResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~DescribeTableListByTypeResponseBody() = default;
};
class DescribeTableListByTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTableListByTypeResponseBody> body{};

  DescribeTableListByTypeResponse() {}

  explicit DescribeTableListByTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTableListByTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTableListByTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTableListByTypeResponse() = default;
};
class DescribeTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> query{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> regionId{};

  DescribeTablesRequest() {}

  explicit DescribeTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeTablesRequest() = default;
};
class DescribeTablesResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<bool> isLocked{};
  shared_ptr<string> shardKey{};
  shared_ptr<bool> isShard{};
  shared_ptr<bool> broadcast{};
  shared_ptr<bool> allowFullTableScan{};
  shared_ptr<string> table{};
  shared_ptr<long> dbInstType{};

  DescribeTablesResponseBodyList() {}

  explicit DescribeTablesResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (isLocked) {
      res["IsLocked"] = boost::any(*isLocked);
    }
    if (shardKey) {
      res["ShardKey"] = boost::any(*shardKey);
    }
    if (isShard) {
      res["IsShard"] = boost::any(*isShard);
    }
    if (broadcast) {
      res["Broadcast"] = boost::any(*broadcast);
    }
    if (allowFullTableScan) {
      res["AllowFullTableScan"] = boost::any(*allowFullTableScan);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("IsLocked") != m.end() && !m["IsLocked"].empty()) {
      isLocked = make_shared<bool>(boost::any_cast<bool>(m["IsLocked"]));
    }
    if (m.find("ShardKey") != m.end() && !m["ShardKey"].empty()) {
      shardKey = make_shared<string>(boost::any_cast<string>(m["ShardKey"]));
    }
    if (m.find("IsShard") != m.end() && !m["IsShard"].empty()) {
      isShard = make_shared<bool>(boost::any_cast<bool>(m["IsShard"]));
    }
    if (m.find("Broadcast") != m.end() && !m["Broadcast"].empty()) {
      broadcast = make_shared<bool>(boost::any_cast<bool>(m["Broadcast"]));
    }
    if (m.find("AllowFullTableScan") != m.end() && !m["AllowFullTableScan"].empty()) {
      allowFullTableScan = make_shared<bool>(boost::any_cast<bool>(m["AllowFullTableScan"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<long>(boost::any_cast<long>(m["DbInstType"]));
    }
  }


  virtual ~DescribeTablesResponseBodyList() = default;
};
class DescribeTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<bool> success{};
  shared_ptr<vector<DescribeTablesResponseBodyList>> list{};

  DescribeTablesResponseBody() {}

  explicit DescribeTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribeTablesResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTablesResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeTablesResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~DescribeTablesResponseBody() = default;
};
class DescribeTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTablesResponseBody> body{};

  DescribeTablesResponse() {}

  explicit DescribeTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTablesResponse() = default;
};
class DisableSqlAuditRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  DisableSqlAuditRequest() {}

  explicit DisableSqlAuditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~DisableSqlAuditRequest() = default;
};
class DisableSqlAuditResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DisableSqlAuditResponseBody() {}

  explicit DisableSqlAuditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableSqlAuditResponseBody() = default;
};
class DisableSqlAuditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableSqlAuditResponseBody> body{};

  DisableSqlAuditResponse() {}

  explicit DisableSqlAuditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableSqlAuditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableSqlAuditResponseBody>(model1);
      }
    }
  }


  virtual ~DisableSqlAuditResponse() = default;
};
class EnableSqlAuditRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<bool> isRecall{};
  shared_ptr<string> recallStartTimestamp{};
  shared_ptr<string> recallEndTimestamp{};

  EnableSqlAuditRequest() {}

  explicit EnableSqlAuditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (isRecall) {
      res["IsRecall"] = boost::any(*isRecall);
    }
    if (recallStartTimestamp) {
      res["RecallStartTimestamp"] = boost::any(*recallStartTimestamp);
    }
    if (recallEndTimestamp) {
      res["RecallEndTimestamp"] = boost::any(*recallEndTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("IsRecall") != m.end() && !m["IsRecall"].empty()) {
      isRecall = make_shared<bool>(boost::any_cast<bool>(m["IsRecall"]));
    }
    if (m.find("RecallStartTimestamp") != m.end() && !m["RecallStartTimestamp"].empty()) {
      recallStartTimestamp = make_shared<string>(boost::any_cast<string>(m["RecallStartTimestamp"]));
    }
    if (m.find("RecallEndTimestamp") != m.end() && !m["RecallEndTimestamp"].empty()) {
      recallEndTimestamp = make_shared<string>(boost::any_cast<string>(m["RecallEndTimestamp"]));
    }
  }


  virtual ~EnableSqlAuditRequest() = default;
};
class EnableSqlAuditResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  EnableSqlAuditResponseBody() {}

  explicit EnableSqlAuditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableSqlAuditResponseBody() = default;
};
class EnableSqlAuditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableSqlAuditResponseBody> body{};

  EnableSqlAuditResponse() {}

  explicit EnableSqlAuditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableSqlAuditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableSqlAuditResponseBody>(model1);
      }
    }
  }


  virtual ~EnableSqlAuditResponse() = default;
};
class EnableSqlFlashbackMatchSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  EnableSqlFlashbackMatchSwitchRequest() {}

  explicit EnableSqlFlashbackMatchSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~EnableSqlFlashbackMatchSwitchRequest() = default;
};
class EnableSqlFlashbackMatchSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  EnableSqlFlashbackMatchSwitchResponseBody() {}

  explicit EnableSqlFlashbackMatchSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableSqlFlashbackMatchSwitchResponseBody() = default;
};
class EnableSqlFlashbackMatchSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableSqlFlashbackMatchSwitchResponseBody> body{};

  EnableSqlFlashbackMatchSwitchResponse() {}

  explicit EnableSqlFlashbackMatchSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableSqlFlashbackMatchSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableSqlFlashbackMatchSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~EnableSqlFlashbackMatchSwitchResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};
  shared_ptr<vector<string>> resourceId{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ManagePrivateRdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> rdsAction{};
  shared_ptr<string> params{};

  ManagePrivateRdsRequest() {}

  explicit ManagePrivateRdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (rdsAction) {
      res["RdsAction"] = boost::any(*rdsAction);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RdsAction") != m.end() && !m["RdsAction"].empty()) {
      rdsAction = make_shared<string>(boost::any_cast<string>(m["RdsAction"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~ManagePrivateRdsRequest() = default;
};
class ManagePrivateRdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ManagePrivateRdsResponseBody() {}

  explicit ManagePrivateRdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ManagePrivateRdsResponseBody() = default;
};
class ManagePrivateRdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ManagePrivateRdsResponseBody> body{};

  ManagePrivateRdsResponse() {}

  explicit ManagePrivateRdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ManagePrivateRdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ManagePrivateRdsResponseBody>(model1);
      }
    }
  }


  virtual ~ManagePrivateRdsResponse() = default;
};
class ModifyDrdsInstanceDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> description{};

  ModifyDrdsInstanceDescriptionRequest() {}

  explicit ModifyDrdsInstanceDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ModifyDrdsInstanceDescriptionRequest() = default;
};
class ModifyDrdsInstanceDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  ModifyDrdsInstanceDescriptionResponseBody() {}

  explicit ModifyDrdsInstanceDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> ipWhiteList{};
  shared_ptr<bool> mode{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupAttribute{};

  ModifyDrdsIpWhiteListRequest() {}

  explicit ModifyDrdsIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupAttribute) {
      res["GroupAttribute"] = boost::any(*groupAttribute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      ipWhiteList = make_shared<string>(boost::any_cast<string>(m["IpWhiteList"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<bool>(boost::any_cast<bool>(m["Mode"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupAttribute") != m.end() && !m["GroupAttribute"].empty()) {
      groupAttribute = make_shared<string>(boost::any_cast<string>(m["GroupAttribute"]));
    }
  }


  virtual ~ModifyDrdsIpWhiteListRequest() = default;
};
class ModifyDrdsIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  ModifyDrdsIpWhiteListResponseBody() {}

  explicit ModifyDrdsIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ModifyRdsReadWeightRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> instanceNames{};
  shared_ptr<string> weights{};

  ModifyRdsReadWeightRequest() {}

  explicit ModifyRdsReadWeightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
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
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
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
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  ModifyRdsReadWeightResponseBody() {}

  explicit ModifyRdsReadWeightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class PutStartBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupLevel{};
  shared_ptr<string> backupDbNames{};

  PutStartBackupRequest() {}

  explicit PutStartBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupLevel) {
      res["BackupLevel"] = boost::any(*backupLevel);
    }
    if (backupDbNames) {
      res["BackupDbNames"] = boost::any(*backupDbNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupLevel") != m.end() && !m["BackupLevel"].empty()) {
      backupLevel = make_shared<string>(boost::any_cast<string>(m["BackupLevel"]));
    }
    if (m.find("BackupDbNames") != m.end() && !m["BackupDbNames"].empty()) {
      backupDbNames = make_shared<string>(boost::any_cast<string>(m["BackupDbNames"]));
    }
  }


  virtual ~PutStartBackupRequest() = default;
};
class PutStartBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  PutStartBackupResponseBody() {}

  explicit PutStartBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PutStartBackupResponseBody() = default;
};
class PutStartBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutStartBackupResponseBody> body{};

  PutStartBackupResponse() {}

  explicit PutStartBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutStartBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutStartBackupResponseBody>(model1);
      }
    }
  }


  virtual ~PutStartBackupResponse() = default;
};
class ReleaseInstanceInternetAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> regionId{};

  ReleaseInstanceInternetAddressRequest() {}

  explicit ReleaseInstanceInternetAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ReleaseInstanceInternetAddressRequest() = default;
};
class ReleaseInstanceInternetAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ReleaseInstanceInternetAddressResponseBody() {}

  explicit ReleaseInstanceInternetAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleaseInstanceInternetAddressResponseBody() = default;
};
class ReleaseInstanceInternetAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseInstanceInternetAddressResponseBody> body{};

  ReleaseInstanceInternetAddressResponse() {}

  explicit ReleaseInstanceInternetAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstanceInternetAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstanceInternetAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstanceInternetAddressResponse() = default;
};
class RemoveBackupsSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> backupId{};

  RemoveBackupsSetRequest() {}

  explicit RemoveBackupsSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
  }


  virtual ~RemoveBackupsSetRequest() = default;
};
class RemoveBackupsSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  RemoveBackupsSetResponseBody() {}

  explicit RemoveBackupsSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveBackupsSetResponseBody() = default;
};
class RemoveBackupsSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveBackupsSetResponseBody> body{};

  RemoveBackupsSetResponse() {}

  explicit RemoveBackupsSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveBackupsSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveBackupsSetResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveBackupsSetResponse() = default;
};
class RemoveDrdsDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  RemoveDrdsDbRequest() {}

  explicit RemoveDrdsDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~RemoveDrdsDbRequest() = default;
};
class RemoveDrdsDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  RemoveDrdsDbResponseBody() {}

  explicit RemoveDrdsDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveDrdsDbResponseBody() = default;
};
class RemoveDrdsDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveDrdsDbResponseBody> body{};

  RemoveDrdsDbResponse() {}

  explicit RemoveDrdsDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveDrdsDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveDrdsDbResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveDrdsDbResponse() = default;
};
class RemoveDrdsDbFailedRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  RemoveDrdsDbFailedRecordRequest() {}

  explicit RemoveDrdsDbFailedRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~RemoveDrdsDbFailedRecordRequest() = default;
};
class RemoveDrdsDbFailedRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  RemoveDrdsDbFailedRecordResponseBody() {}

  explicit RemoveDrdsDbFailedRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveDrdsDbFailedRecordResponseBody() = default;
};
class RemoveDrdsDbFailedRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveDrdsDbFailedRecordResponseBody> body{};

  RemoveDrdsDbFailedRecordResponse() {}

  explicit RemoveDrdsDbFailedRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveDrdsDbFailedRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveDrdsDbFailedRecordResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveDrdsDbFailedRecordResponse() = default;
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
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  RemoveDrdsInstanceResponseBody() {}

  explicit RemoveDrdsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class RemoveInstanceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> accountName{};

  RemoveInstanceAccountRequest() {}

  explicit RemoveInstanceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~RemoveInstanceAccountRequest() = default;
};
class RemoveInstanceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  RemoveInstanceAccountResponseBody() {}

  explicit RemoveInstanceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveInstanceAccountResponseBody() = default;
};
class RemoveInstanceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveInstanceAccountResponseBody> body{};

  RemoveInstanceAccountResponse() {}

  explicit RemoveInstanceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveInstanceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveInstanceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveInstanceAccountResponse() = default;
};
class SetBackupLocalRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> localLogRetentionHours{};
  shared_ptr<string> localLogRetentionSpace{};
  shared_ptr<string> highSpaceUsageProtection{};

  SetBackupLocalRequest() {}

  explicit SetBackupLocalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (localLogRetentionHours) {
      res["LocalLogRetentionHours"] = boost::any(*localLogRetentionHours);
    }
    if (localLogRetentionSpace) {
      res["LocalLogRetentionSpace"] = boost::any(*localLogRetentionSpace);
    }
    if (highSpaceUsageProtection) {
      res["HighSpaceUsageProtection"] = boost::any(*highSpaceUsageProtection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("LocalLogRetentionHours") != m.end() && !m["LocalLogRetentionHours"].empty()) {
      localLogRetentionHours = make_shared<string>(boost::any_cast<string>(m["LocalLogRetentionHours"]));
    }
    if (m.find("LocalLogRetentionSpace") != m.end() && !m["LocalLogRetentionSpace"].empty()) {
      localLogRetentionSpace = make_shared<string>(boost::any_cast<string>(m["LocalLogRetentionSpace"]));
    }
    if (m.find("HighSpaceUsageProtection") != m.end() && !m["HighSpaceUsageProtection"].empty()) {
      highSpaceUsageProtection = make_shared<string>(boost::any_cast<string>(m["HighSpaceUsageProtection"]));
    }
  }


  virtual ~SetBackupLocalRequest() = default;
};
class SetBackupLocalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  SetBackupLocalResponseBody() {}

  explicit SetBackupLocalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetBackupLocalResponseBody() = default;
};
class SetBackupLocalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetBackupLocalResponseBody> body{};

  SetBackupLocalResponse() {}

  explicit SetBackupLocalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetBackupLocalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetBackupLocalResponseBody>(model1);
      }
    }
  }


  virtual ~SetBackupLocalResponse() = default;
};
class SetBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupStartTime{};
  shared_ptr<string> preferredBackupEndTime{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupLevel{};
  shared_ptr<string> backupDbNames{};
  shared_ptr<string> backupLog{};
  shared_ptr<string> dataBackupRetentionPeriod{};
  shared_ptr<string> logBackupRetentionPeriod{};

  SetBackupPolicyRequest() {}

  explicit SetBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupStartTime) {
      res["PreferredBackupStartTime"] = boost::any(*preferredBackupStartTime);
    }
    if (preferredBackupEndTime) {
      res["PreferredBackupEndTime"] = boost::any(*preferredBackupEndTime);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupLevel) {
      res["BackupLevel"] = boost::any(*backupLevel);
    }
    if (backupDbNames) {
      res["BackupDbNames"] = boost::any(*backupDbNames);
    }
    if (backupLog) {
      res["BackupLog"] = boost::any(*backupLog);
    }
    if (dataBackupRetentionPeriod) {
      res["DataBackupRetentionPeriod"] = boost::any(*dataBackupRetentionPeriod);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupStartTime") != m.end() && !m["PreferredBackupStartTime"].empty()) {
      preferredBackupStartTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupStartTime"]));
    }
    if (m.find("PreferredBackupEndTime") != m.end() && !m["PreferredBackupEndTime"].empty()) {
      preferredBackupEndTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupEndTime"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupLevel") != m.end() && !m["BackupLevel"].empty()) {
      backupLevel = make_shared<string>(boost::any_cast<string>(m["BackupLevel"]));
    }
    if (m.find("BackupDbNames") != m.end() && !m["BackupDbNames"].empty()) {
      backupDbNames = make_shared<string>(boost::any_cast<string>(m["BackupDbNames"]));
    }
    if (m.find("BackupLog") != m.end() && !m["BackupLog"].empty()) {
      backupLog = make_shared<string>(boost::any_cast<string>(m["BackupLog"]));
    }
    if (m.find("DataBackupRetentionPeriod") != m.end() && !m["DataBackupRetentionPeriod"].empty()) {
      dataBackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["DataBackupRetentionPeriod"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["LogBackupRetentionPeriod"]));
    }
  }


  virtual ~SetBackupPolicyRequest() = default;
};
class SetBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  SetBackupPolicyResponseBody() {}

  explicit SetBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetBackupPolicyResponseBody() = default;
};
class SetBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetBackupPolicyResponseBody> body{};

  SetBackupPolicyResponse() {}

  explicit SetBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~SetBackupPolicyResponse() = default;
};
class SetupBroadcastTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<bool> active{};
  shared_ptr<vector<string>> tableName{};

  SetupBroadcastTablesRequest() {}

  explicit SetupBroadcastTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SetupBroadcastTablesRequest() = default;
};
class SetupBroadcastTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetupBroadcastTablesResponseBody() {}

  explicit SetupBroadcastTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetupBroadcastTablesResponseBody() = default;
};
class SetupBroadcastTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetupBroadcastTablesResponseBody> body{};

  SetupBroadcastTablesResponse() {}

  explicit SetupBroadcastTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetupBroadcastTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetupBroadcastTablesResponseBody>(model1);
      }
    }
  }


  virtual ~SetupBroadcastTablesResponse() = default;
};
class SetupDrdsParamsRequestData : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> paramType{};
  shared_ptr<string> paramValue{};
  shared_ptr<string> paramVariableName{};
  shared_ptr<string> paramRanges{};

  SetupDrdsParamsRequestData() {}

  explicit SetupDrdsParamsRequestData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    if (paramVariableName) {
      res["ParamVariableName"] = boost::any(*paramVariableName);
    }
    if (paramRanges) {
      res["ParamRanges"] = boost::any(*paramRanges);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
    if (m.find("ParamVariableName") != m.end() && !m["ParamVariableName"].empty()) {
      paramVariableName = make_shared<string>(boost::any_cast<string>(m["ParamVariableName"]));
    }
    if (m.find("ParamRanges") != m.end() && !m["ParamRanges"].empty()) {
      paramRanges = make_shared<string>(boost::any_cast<string>(m["ParamRanges"]));
    }
  }


  virtual ~SetupDrdsParamsRequestData() = default;
};
class SetupDrdsParamsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> paramLevel{};
  shared_ptr<vector<SetupDrdsParamsRequestData>> data{};

  SetupDrdsParamsRequest() {}

  explicit SetupDrdsParamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SetupDrdsParamsRequestData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetupDrdsParamsRequestData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SetupDrdsParamsRequestData>>(expect1);
      }
    }
  }


  virtual ~SetupDrdsParamsRequest() = default;
};
class SetupDrdsParamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetupDrdsParamsResponseBody() {}

  explicit SetupDrdsParamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetupDrdsParamsResponseBody() = default;
};
class SetupDrdsParamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetupDrdsParamsResponseBody> body{};

  SetupDrdsParamsResponse() {}

  explicit SetupDrdsParamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetupDrdsParamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetupDrdsParamsResponseBody>(model1);
      }
    }
  }


  virtual ~SetupDrdsParamsResponse() = default;
};
class SetupTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<bool> allowFullTableScan{};
  shared_ptr<vector<string>> tableName{};

  SetupTableRequest() {}

  explicit SetupTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (allowFullTableScan) {
      res["AllowFullTableScan"] = boost::any(*allowFullTableScan);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("AllowFullTableScan") != m.end() && !m["AllowFullTableScan"].empty()) {
      allowFullTableScan = make_shared<bool>(boost::any_cast<bool>(m["AllowFullTableScan"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SetupTableRequest() = default;
};
class SetupTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetupTableResponseBody() {}

  explicit SetupTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetupTableResponseBody() = default;
};
class SetupTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetupTableResponseBody> body{};

  SetupTableResponse() {}

  explicit SetupTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetupTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetupTableResponseBody>(model1);
      }
    }
  }


  virtual ~SetupTableResponse() = default;
};
class StartRestoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupLevel{};
  shared_ptr<string> backupDbNames{};
  shared_ptr<string> backupId{};

  StartRestoreRequest() {}

  explicit StartRestoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupLevel) {
      res["BackupLevel"] = boost::any(*backupLevel);
    }
    if (backupDbNames) {
      res["BackupDbNames"] = boost::any(*backupDbNames);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupLevel") != m.end() && !m["BackupLevel"].empty()) {
      backupLevel = make_shared<string>(boost::any_cast<string>(m["BackupLevel"]));
    }
    if (m.find("BackupDbNames") != m.end() && !m["BackupDbNames"].empty()) {
      backupDbNames = make_shared<string>(boost::any_cast<string>(m["BackupDbNames"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
  }


  virtual ~StartRestoreRequest() = default;
};
class StartRestoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  StartRestoreResponseBody() {}

  explicit StartRestoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartRestoreResponseBody() = default;
};
class StartRestoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartRestoreResponseBody> body{};

  StartRestoreResponse() {}

  explicit StartRestoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartRestoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartRestoreResponseBody>(model1);
      }
    }
  }


  virtual ~StartRestoreResponse() = default;
};
class SubmitCleanTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> parentJobId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> expandType{};

  SubmitCleanTaskRequest() {}

  explicit SubmitCleanTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (parentJobId) {
      res["ParentJobId"] = boost::any(*parentJobId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (expandType) {
      res["ExpandType"] = boost::any(*expandType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ParentJobId") != m.end() && !m["ParentJobId"].empty()) {
      parentJobId = make_shared<string>(boost::any_cast<string>(m["ParentJobId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ExpandType") != m.end() && !m["ExpandType"].empty()) {
      expandType = make_shared<string>(boost::any_cast<string>(m["ExpandType"]));
    }
  }


  virtual ~SubmitCleanTaskRequest() = default;
};
class SubmitCleanTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  SubmitCleanTaskResponseBody() {}

  explicit SubmitCleanTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitCleanTaskResponseBody() = default;
};
class SubmitCleanTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitCleanTaskResponseBody> body{};

  SubmitCleanTaskResponse() {}

  explicit SubmitCleanTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitCleanTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitCleanTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitCleanTaskResponse() = default;
};
class SubmitHotExpandPreCheckTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbInstType{};
  shared_ptr<vector<string>> tableList{};

  SubmitHotExpandPreCheckTaskRequest() {}

  explicit SubmitHotExpandPreCheckTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    if (tableList) {
      res["TableList"] = boost::any(*tableList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
    if (m.find("TableList") != m.end() && !m["TableList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SubmitHotExpandPreCheckTaskRequest() = default;
};
class SubmitHotExpandPreCheckTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};
  shared_ptr<bool> success{};

  SubmitHotExpandPreCheckTaskResponseBody() {}

  explicit SubmitHotExpandPreCheckTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitHotExpandPreCheckTaskResponseBody() = default;
};
class SubmitHotExpandPreCheckTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitHotExpandPreCheckTaskResponseBody> body{};

  SubmitHotExpandPreCheckTaskResponse() {}

  explicit SubmitHotExpandPreCheckTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitHotExpandPreCheckTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitHotExpandPreCheckTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitHotExpandPreCheckTaskResponse() = default;
};
class SubmitHotExpandTaskRequestInstanceDbMapping : public Darabonba::Model {
public:
  shared_ptr<string> dbList{};
  shared_ptr<string> instanceName{};

  SubmitHotExpandTaskRequestInstanceDbMapping() {}

  explicit SubmitHotExpandTaskRequestInstanceDbMapping(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbList) {
      res["DbList"] = boost::any(*dbList);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      dbList = make_shared<string>(boost::any_cast<string>(m["DbList"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~SubmitHotExpandTaskRequestInstanceDbMapping() = default;
};
class SubmitHotExpandTaskRequestMapping : public Darabonba::Model {
public:
  shared_ptr<string> hotDbName{};
  shared_ptr<string> shardTbValue{};
  shared_ptr<string> hotTableName{};
  shared_ptr<string> shardDbValue{};
  shared_ptr<string> tbShardColumn{};
  shared_ptr<string> dbShardColumn{};
  shared_ptr<string> logicTable{};

  SubmitHotExpandTaskRequestMapping() {}

  explicit SubmitHotExpandTaskRequestMapping(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotDbName) {
      res["HotDbName"] = boost::any(*hotDbName);
    }
    if (shardTbValue) {
      res["ShardTbValue"] = boost::any(*shardTbValue);
    }
    if (hotTableName) {
      res["HotTableName"] = boost::any(*hotTableName);
    }
    if (shardDbValue) {
      res["ShardDbValue"] = boost::any(*shardDbValue);
    }
    if (tbShardColumn) {
      res["TbShardColumn"] = boost::any(*tbShardColumn);
    }
    if (dbShardColumn) {
      res["DbShardColumn"] = boost::any(*dbShardColumn);
    }
    if (logicTable) {
      res["LogicTable"] = boost::any(*logicTable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HotDbName") != m.end() && !m["HotDbName"].empty()) {
      hotDbName = make_shared<string>(boost::any_cast<string>(m["HotDbName"]));
    }
    if (m.find("ShardTbValue") != m.end() && !m["ShardTbValue"].empty()) {
      shardTbValue = make_shared<string>(boost::any_cast<string>(m["ShardTbValue"]));
    }
    if (m.find("HotTableName") != m.end() && !m["HotTableName"].empty()) {
      hotTableName = make_shared<string>(boost::any_cast<string>(m["HotTableName"]));
    }
    if (m.find("ShardDbValue") != m.end() && !m["ShardDbValue"].empty()) {
      shardDbValue = make_shared<string>(boost::any_cast<string>(m["ShardDbValue"]));
    }
    if (m.find("TbShardColumn") != m.end() && !m["TbShardColumn"].empty()) {
      tbShardColumn = make_shared<string>(boost::any_cast<string>(m["TbShardColumn"]));
    }
    if (m.find("DbShardColumn") != m.end() && !m["DbShardColumn"].empty()) {
      dbShardColumn = make_shared<string>(boost::any_cast<string>(m["DbShardColumn"]));
    }
    if (m.find("LogicTable") != m.end() && !m["LogicTable"].empty()) {
      logicTable = make_shared<string>(boost::any_cast<string>(m["LogicTable"]));
    }
  }


  virtual ~SubmitHotExpandTaskRequestMapping() = default;
};
class SubmitHotExpandTaskRequestSupperAccountMapping : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> supperAccount{};
  shared_ptr<string> supperPassword{};

  SubmitHotExpandTaskRequestSupperAccountMapping() {}

  explicit SubmitHotExpandTaskRequestSupperAccountMapping(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (supperAccount) {
      res["SupperAccount"] = boost::any(*supperAccount);
    }
    if (supperPassword) {
      res["SupperPassword"] = boost::any(*supperPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("SupperAccount") != m.end() && !m["SupperAccount"].empty()) {
      supperAccount = make_shared<string>(boost::any_cast<string>(m["SupperAccount"]));
    }
    if (m.find("SupperPassword") != m.end() && !m["SupperPassword"].empty()) {
      supperPassword = make_shared<string>(boost::any_cast<string>(m["SupperPassword"]));
    }
  }


  virtual ~SubmitHotExpandTaskRequestSupperAccountMapping() = default;
};
class SubmitHotExpandTaskRequestExtendedMapping : public Darabonba::Model {
public:
  shared_ptr<string> srcDb{};
  shared_ptr<string> srcInstanceId{};

  SubmitHotExpandTaskRequestExtendedMapping() {}

  explicit SubmitHotExpandTaskRequestExtendedMapping(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (srcDb) {
      res["SrcDb"] = boost::any(*srcDb);
    }
    if (srcInstanceId) {
      res["SrcInstanceId"] = boost::any(*srcInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SrcDb") != m.end() && !m["SrcDb"].empty()) {
      srcDb = make_shared<string>(boost::any_cast<string>(m["SrcDb"]));
    }
    if (m.find("SrcInstanceId") != m.end() && !m["SrcInstanceId"].empty()) {
      srcInstanceId = make_shared<string>(boost::any_cast<string>(m["SrcInstanceId"]));
    }
  }


  virtual ~SubmitHotExpandTaskRequestExtendedMapping() = default;
};
class SubmitHotExpandTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskDesc{};
  shared_ptr<vector<SubmitHotExpandTaskRequestInstanceDbMapping>> instanceDbMapping{};
  shared_ptr<vector<SubmitHotExpandTaskRequestMapping>> mapping{};
  shared_ptr<vector<SubmitHotExpandTaskRequestSupperAccountMapping>> supperAccountMapping{};
  shared_ptr<vector<SubmitHotExpandTaskRequestExtendedMapping>> extendedMapping{};

  SubmitHotExpandTaskRequest() {}

  explicit SubmitHotExpandTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskDesc) {
      res["TaskDesc"] = boost::any(*taskDesc);
    }
    if (instanceDbMapping) {
      vector<boost::any> temp1;
      for(auto item1:*instanceDbMapping){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceDbMapping"] = boost::any(temp1);
    }
    if (mapping) {
      vector<boost::any> temp1;
      for(auto item1:*mapping){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Mapping"] = boost::any(temp1);
    }
    if (supperAccountMapping) {
      vector<boost::any> temp1;
      for(auto item1:*supperAccountMapping){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupperAccountMapping"] = boost::any(temp1);
    }
    if (extendedMapping) {
      vector<boost::any> temp1;
      for(auto item1:*extendedMapping){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtendedMapping"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskDesc") != m.end() && !m["TaskDesc"].empty()) {
      taskDesc = make_shared<string>(boost::any_cast<string>(m["TaskDesc"]));
    }
    if (m.find("InstanceDbMapping") != m.end() && !m["InstanceDbMapping"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceDbMapping"].type()) {
        vector<SubmitHotExpandTaskRequestInstanceDbMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceDbMapping"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitHotExpandTaskRequestInstanceDbMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceDbMapping = make_shared<vector<SubmitHotExpandTaskRequestInstanceDbMapping>>(expect1);
      }
    }
    if (m.find("Mapping") != m.end() && !m["Mapping"].empty()) {
      if (typeid(vector<boost::any>) == m["Mapping"].type()) {
        vector<SubmitHotExpandTaskRequestMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Mapping"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitHotExpandTaskRequestMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mapping = make_shared<vector<SubmitHotExpandTaskRequestMapping>>(expect1);
      }
    }
    if (m.find("SupperAccountMapping") != m.end() && !m["SupperAccountMapping"].empty()) {
      if (typeid(vector<boost::any>) == m["SupperAccountMapping"].type()) {
        vector<SubmitHotExpandTaskRequestSupperAccountMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupperAccountMapping"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitHotExpandTaskRequestSupperAccountMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supperAccountMapping = make_shared<vector<SubmitHotExpandTaskRequestSupperAccountMapping>>(expect1);
      }
    }
    if (m.find("ExtendedMapping") != m.end() && !m["ExtendedMapping"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtendedMapping"].type()) {
        vector<SubmitHotExpandTaskRequestExtendedMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtendedMapping"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitHotExpandTaskRequestExtendedMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extendedMapping = make_shared<vector<SubmitHotExpandTaskRequestExtendedMapping>>(expect1);
      }
    }
  }


  virtual ~SubmitHotExpandTaskRequest() = default;
};
class SubmitHotExpandTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  SubmitHotExpandTaskResponseBody() {}

  explicit SubmitHotExpandTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitHotExpandTaskResponseBody() = default;
};
class SubmitHotExpandTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitHotExpandTaskResponseBody> body{};

  SubmitHotExpandTaskResponse() {}

  explicit SubmitHotExpandTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitHotExpandTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitHotExpandTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitHotExpandTaskResponse() = default;
};
class SubmitSmoothExpandPreCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbInstType{};

  SubmitSmoothExpandPreCheckRequest() {}

  explicit SubmitSmoothExpandPreCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbInstType) {
      res["DbInstType"] = boost::any(*dbInstType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbInstType") != m.end() && !m["DbInstType"].empty()) {
      dbInstType = make_shared<string>(boost::any_cast<string>(m["DbInstType"]));
    }
  }


  virtual ~SubmitSmoothExpandPreCheckRequest() = default;
};
class SubmitSmoothExpandPreCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};
  shared_ptr<bool> success{};

  SubmitSmoothExpandPreCheckResponseBody() {}

  explicit SubmitSmoothExpandPreCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitSmoothExpandPreCheckResponseBody() = default;
};
class SubmitSmoothExpandPreCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSmoothExpandPreCheckResponseBody> body{};

  SubmitSmoothExpandPreCheckResponse() {}

  explicit SubmitSmoothExpandPreCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSmoothExpandPreCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSmoothExpandPreCheckResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSmoothExpandPreCheckResponse() = default;
};
class SubmitSmoothExpandPreCheckTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  SubmitSmoothExpandPreCheckTaskRequest() {}

  explicit SubmitSmoothExpandPreCheckTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~SubmitSmoothExpandPreCheckTaskRequest() = default;
};
class SubmitSmoothExpandPreCheckTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};
  shared_ptr<bool> success{};

  SubmitSmoothExpandPreCheckTaskResponseBody() {}

  explicit SubmitSmoothExpandPreCheckTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitSmoothExpandPreCheckTaskResponseBody() = default;
};
class SubmitSmoothExpandPreCheckTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSmoothExpandPreCheckTaskResponseBody> body{};

  SubmitSmoothExpandPreCheckTaskResponse() {}

  explicit SubmitSmoothExpandPreCheckTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSmoothExpandPreCheckTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSmoothExpandPreCheckTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSmoothExpandPreCheckTaskResponse() = default;
};
class SubmitSmoothExpandTaskRequestTransferTaskInfos : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> dstInstanceName{};
  shared_ptr<string> srcInstanceName{};

  SubmitSmoothExpandTaskRequestTransferTaskInfos() {}

  explicit SubmitSmoothExpandTaskRequestTransferTaskInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (dstInstanceName) {
      res["DstInstanceName"] = boost::any(*dstInstanceName);
    }
    if (srcInstanceName) {
      res["SrcInstanceName"] = boost::any(*srcInstanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("DstInstanceName") != m.end() && !m["DstInstanceName"].empty()) {
      dstInstanceName = make_shared<string>(boost::any_cast<string>(m["DstInstanceName"]));
    }
    if (m.find("SrcInstanceName") != m.end() && !m["SrcInstanceName"].empty()) {
      srcInstanceName = make_shared<string>(boost::any_cast<string>(m["SrcInstanceName"]));
    }
  }


  virtual ~SubmitSmoothExpandTaskRequestTransferTaskInfos() = default;
};
class SubmitSmoothExpandTaskRequestRdsSuperInstances : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> rdsName{};
  shared_ptr<string> accountName{};

  SubmitSmoothExpandTaskRequestRdsSuperInstances() {}

  explicit SubmitSmoothExpandTaskRequestRdsSuperInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (rdsName) {
      res["RdsName"] = boost::any(*rdsName);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RdsName") != m.end() && !m["RdsName"].empty()) {
      rdsName = make_shared<string>(boost::any_cast<string>(m["RdsName"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~SubmitSmoothExpandTaskRequestRdsSuperInstances() = default;
};
class SubmitSmoothExpandTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<bool> dbInstanceIsCreating{};
  shared_ptr<vector<SubmitSmoothExpandTaskRequestTransferTaskInfos>> transferTaskInfos{};
  shared_ptr<vector<SubmitSmoothExpandTaskRequestRdsSuperInstances>> rdsSuperInstances{};

  SubmitSmoothExpandTaskRequest() {}

  explicit SubmitSmoothExpandTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbInstanceIsCreating) {
      res["DbInstanceIsCreating"] = boost::any(*dbInstanceIsCreating);
    }
    if (transferTaskInfos) {
      vector<boost::any> temp1;
      for(auto item1:*transferTaskInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransferTaskInfos"] = boost::any(temp1);
    }
    if (rdsSuperInstances) {
      vector<boost::any> temp1;
      for(auto item1:*rdsSuperInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsSuperInstances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbInstanceIsCreating") != m.end() && !m["DbInstanceIsCreating"].empty()) {
      dbInstanceIsCreating = make_shared<bool>(boost::any_cast<bool>(m["DbInstanceIsCreating"]));
    }
    if (m.find("TransferTaskInfos") != m.end() && !m["TransferTaskInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TransferTaskInfos"].type()) {
        vector<SubmitSmoothExpandTaskRequestTransferTaskInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransferTaskInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitSmoothExpandTaskRequestTransferTaskInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transferTaskInfos = make_shared<vector<SubmitSmoothExpandTaskRequestTransferTaskInfos>>(expect1);
      }
    }
    if (m.find("RdsSuperInstances") != m.end() && !m["RdsSuperInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsSuperInstances"].type()) {
        vector<SubmitSmoothExpandTaskRequestRdsSuperInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsSuperInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitSmoothExpandTaskRequestRdsSuperInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsSuperInstances = make_shared<vector<SubmitSmoothExpandTaskRequestRdsSuperInstances>>(expect1);
      }
    }
  }


  virtual ~SubmitSmoothExpandTaskRequest() = default;
};
class SubmitSmoothExpandTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  SubmitSmoothExpandTaskResponseBody() {}

  explicit SubmitSmoothExpandTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitSmoothExpandTaskResponseBody() = default;
};
class SubmitSmoothExpandTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSmoothExpandTaskResponseBody> body{};

  SubmitSmoothExpandTaskResponse() {}

  explicit SubmitSmoothExpandTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSmoothExpandTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSmoothExpandTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSmoothExpandTaskResponse() = default;
};
class SubmitSqlFlashbackTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> traceId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> sqlPk{};
  shared_ptr<long> recallType{};
  shared_ptr<long> recallRestoreType{};

  SubmitSqlFlashbackTaskRequest() {}

  explicit SubmitSqlFlashbackTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (sqlPk) {
      res["SqlPk"] = boost::any(*sqlPk);
    }
    if (recallType) {
      res["RecallType"] = boost::any(*recallType);
    }
    if (recallRestoreType) {
      res["RecallRestoreType"] = boost::any(*recallRestoreType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("SqlPk") != m.end() && !m["SqlPk"].empty()) {
      sqlPk = make_shared<string>(boost::any_cast<string>(m["SqlPk"]));
    }
    if (m.find("RecallType") != m.end() && !m["RecallType"].empty()) {
      recallType = make_shared<long>(boost::any_cast<long>(m["RecallType"]));
    }
    if (m.find("RecallRestoreType") != m.end() && !m["RecallRestoreType"].empty()) {
      recallRestoreType = make_shared<long>(boost::any_cast<long>(m["RecallRestoreType"]));
    }
  }


  virtual ~SubmitSqlFlashbackTaskRequest() = default;
};
class SubmitSqlFlashbackTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> taskId{};

  SubmitSqlFlashbackTaskResponseBody() {}

  explicit SubmitSqlFlashbackTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~SubmitSqlFlashbackTaskResponseBody() = default;
};
class SubmitSqlFlashbackTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSqlFlashbackTaskResponseBody> body{};

  SubmitSqlFlashbackTaskResponse() {}

  explicit SubmitSqlFlashbackTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSqlFlashbackTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSqlFlashbackTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSqlFlashbackTaskResponse() = default;
};
class SubmitSwitchTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> parentJobId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> expandType{};

  SubmitSwitchTaskRequest() {}

  explicit SubmitSwitchTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (parentJobId) {
      res["ParentJobId"] = boost::any(*parentJobId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (expandType) {
      res["ExpandType"] = boost::any(*expandType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ParentJobId") != m.end() && !m["ParentJobId"].empty()) {
      parentJobId = make_shared<string>(boost::any_cast<string>(m["ParentJobId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ExpandType") != m.end() && !m["ExpandType"].empty()) {
      expandType = make_shared<string>(boost::any_cast<string>(m["ExpandType"]));
    }
  }


  virtual ~SubmitSwitchTaskRequest() = default;
};
class SubmitSwitchTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  SubmitSwitchTaskResponseBody() {}

  explicit SubmitSwitchTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitSwitchTaskResponseBody() = default;
};
class SubmitSwitchTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitSwitchTaskResponseBody> body{};

  SubmitSwitchTaskResponse() {}

  explicit SubmitSwitchTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSwitchTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSwitchTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSwitchTaskResponse() = default;
};
class SwitchGlobalBroadcastTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};

  SwitchGlobalBroadcastTypeRequest() {}

  explicit SwitchGlobalBroadcastTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~SwitchGlobalBroadcastTypeRequest() = default;
};
class SwitchGlobalBroadcastTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SwitchGlobalBroadcastTypeResponseBody() {}

  explicit SwitchGlobalBroadcastTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SwitchGlobalBroadcastTypeResponseBody() = default;
};
class SwitchGlobalBroadcastTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SwitchGlobalBroadcastTypeResponseBody> body{};

  SwitchGlobalBroadcastTypeResponse() {}

  explicit SwitchGlobalBroadcastTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchGlobalBroadcastTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchGlobalBroadcastTypeResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchGlobalBroadcastTypeResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};
  shared_ptr<vector<string>> resourceId{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateInstanceNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> srcInstanceNetworkType{};
  shared_ptr<bool> retainClassic{};
  shared_ptr<long> classicExpiredDays{};

  UpdateInstanceNetworkRequest() {}

  explicit UpdateInstanceNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (srcInstanceNetworkType) {
      res["SrcInstanceNetworkType"] = boost::any(*srcInstanceNetworkType);
    }
    if (retainClassic) {
      res["RetainClassic"] = boost::any(*retainClassic);
    }
    if (classicExpiredDays) {
      res["ClassicExpiredDays"] = boost::any(*classicExpiredDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("SrcInstanceNetworkType") != m.end() && !m["SrcInstanceNetworkType"].empty()) {
      srcInstanceNetworkType = make_shared<string>(boost::any_cast<string>(m["SrcInstanceNetworkType"]));
    }
    if (m.find("RetainClassic") != m.end() && !m["RetainClassic"].empty()) {
      retainClassic = make_shared<bool>(boost::any_cast<bool>(m["RetainClassic"]));
    }
    if (m.find("ClassicExpiredDays") != m.end() && !m["ClassicExpiredDays"].empty()) {
      classicExpiredDays = make_shared<long>(boost::any_cast<long>(m["ClassicExpiredDays"]));
    }
  }


  virtual ~UpdateInstanceNetworkRequest() = default;
};
class UpdateInstanceNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};

  UpdateInstanceNetworkResponseBody() {}

  explicit UpdateInstanceNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateInstanceNetworkResponseBody() = default;
};
class UpdateInstanceNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateInstanceNetworkResponseBody> body{};

  UpdateInstanceNetworkResponse() {}

  explicit UpdateInstanceNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceNetworkResponse() = default;
};
class UpdatePrivateRdsClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> rdsClass{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> storage{};
  shared_ptr<bool> autoUseCoupon{};
  shared_ptr<long> prePayDuration{};

  UpdatePrivateRdsClassRequest() {}

  explicit UpdatePrivateRdsClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdsClass) {
      res["RdsClass"] = boost::any(*rdsClass);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    if (autoUseCoupon) {
      res["AutoUseCoupon"] = boost::any(*autoUseCoupon);
    }
    if (prePayDuration) {
      res["PrePayDuration"] = boost::any(*prePayDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdsClass") != m.end() && !m["RdsClass"].empty()) {
      rdsClass = make_shared<string>(boost::any_cast<string>(m["RdsClass"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["Storage"]));
    }
    if (m.find("AutoUseCoupon") != m.end() && !m["AutoUseCoupon"].empty()) {
      autoUseCoupon = make_shared<bool>(boost::any_cast<bool>(m["AutoUseCoupon"]));
    }
    if (m.find("PrePayDuration") != m.end() && !m["PrePayDuration"].empty()) {
      prePayDuration = make_shared<long>(boost::any_cast<long>(m["PrePayDuration"]));
    }
  }


  virtual ~UpdatePrivateRdsClassRequest() = default;
};
class UpdatePrivateRdsClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePrivateRdsClassResponseBody() {}

  explicit UpdatePrivateRdsClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdatePrivateRdsClassResponseBody() = default;
};
class UpdatePrivateRdsClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdatePrivateRdsClassResponseBody> body{};

  UpdatePrivateRdsClassResponse() {}

  explicit UpdatePrivateRdsClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePrivateRdsClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePrivateRdsClassResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePrivateRdsClassResponse() = default;
};
class UpdateResourceGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> newResourceGroupId{};

  UpdateResourceGroupAttributeRequest() {}

  explicit UpdateResourceGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
  }


  virtual ~UpdateResourceGroupAttributeRequest() = default;
};
class UpdateResourceGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateResourceGroupAttributeResponseBody() {}

  explicit UpdateResourceGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateResourceGroupAttributeResponseBody() = default;
};
class UpdateResourceGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateResourceGroupAttributeResponseBody> body{};

  UpdateResourceGroupAttributeResponse() {}

  explicit UpdateResourceGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceGroupAttributeResponse() = default;
};
class UpgradeHiStoreInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> historeInstanceId{};

  UpgradeHiStoreInstanceRequest() {}

  explicit UpgradeHiStoreInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (historeInstanceId) {
      res["HistoreInstanceId"] = boost::any(*historeInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HistoreInstanceId") != m.end() && !m["HistoreInstanceId"].empty()) {
      historeInstanceId = make_shared<string>(boost::any_cast<string>(m["HistoreInstanceId"]));
    }
  }


  virtual ~UpgradeHiStoreInstanceRequest() = default;
};
class UpgradeHiStoreInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpgradeHiStoreInstanceResponseBody() {}

  explicit UpgradeHiStoreInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeHiStoreInstanceResponseBody() = default;
};
class UpgradeHiStoreInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeHiStoreInstanceResponseBody> body{};

  UpgradeHiStoreInstanceResponse() {}

  explicit UpgradeHiStoreInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeHiStoreInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeHiStoreInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeHiStoreInstanceResponse() = default;
};
class UpgradeInstanceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rpm{};

  UpgradeInstanceVersionRequest() {}

  explicit UpgradeInstanceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rpm) {
      res["Rpm"] = boost::any(*rpm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Rpm") != m.end() && !m["Rpm"].empty()) {
      rpm = make_shared<string>(boost::any_cast<string>(m["Rpm"]));
    }
  }


  virtual ~UpgradeInstanceVersionRequest() = default;
};
class UpgradeInstanceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpgradeInstanceVersionResponseBody() {}

  explicit UpgradeInstanceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeInstanceVersionResponseBody() = default;
};
class UpgradeInstanceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeInstanceVersionResponseBody> body{};

  UpgradeInstanceVersionResponse() {}

  explicit UpgradeInstanceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeInstanceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeInstanceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeInstanceVersionResponse() = default;
};
class ValidateShardTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> sourceTableName{};
  shared_ptr<string> targetTableName{};
  shared_ptr<string> taskType{};

  ValidateShardTaskRequest() {}

  explicit ValidateShardTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ValidateShardTaskRequest() = default;
};
class ValidateShardTaskResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> result{};
  shared_ptr<string> item{};

  ValidateShardTaskResponseBodyList() {}

  explicit ValidateShardTaskResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
  }


  virtual ~ValidateShardTaskResponseBodyList() = default;
};
class ValidateShardTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ValidateShardTaskResponseBodyList>> list{};

  ValidateShardTaskResponseBody() {}

  explicit ValidateShardTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ValidateShardTaskResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ValidateShardTaskResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ValidateShardTaskResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~ValidateShardTaskResponseBody() = default;
};
class ValidateShardTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ValidateShardTaskResponseBody> body{};

  ValidateShardTaskResponse() {}

  explicit ValidateShardTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateShardTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateShardTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateShardTaskResponse() = default;
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
  CheckDrdsDbNameResponse checkDrdsDbNameWithOptions(shared_ptr<CheckDrdsDbNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDrdsDbNameResponse checkDrdsDbName(shared_ptr<CheckDrdsDbNameRequest> request);
  CheckExpandStatusResponse checkExpandStatusWithOptions(shared_ptr<CheckExpandStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckExpandStatusResponse checkExpandStatus(shared_ptr<CheckExpandStatusRequest> request);
  CheckSqlAuditEnableStatusResponse checkSqlAuditEnableStatusWithOptions(shared_ptr<CheckSqlAuditEnableStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSqlAuditEnableStatusResponse checkSqlAuditEnableStatus(shared_ptr<CheckSqlAuditEnableStatusRequest> request);
  CreateDrdsDBResponse createDrdsDBWithOptions(shared_ptr<CreateDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDrdsDBResponse createDrdsDB(shared_ptr<CreateDrdsDBRequest> request);
  CreateDrdsInstanceResponse createDrdsInstanceWithOptions(shared_ptr<CreateDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDrdsInstanceResponse createDrdsInstance(shared_ptr<CreateDrdsInstanceRequest> request);
  CreateInstanceAccountResponse createInstanceAccountWithOptions(shared_ptr<CreateInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceAccountResponse createInstanceAccount(shared_ptr<CreateInstanceAccountRequest> request);
  CreateInstanceInternetAddressResponse createInstanceInternetAddressWithOptions(shared_ptr<CreateInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceInternetAddressResponse createInstanceInternetAddress(shared_ptr<CreateInstanceInternetAddressRequest> request);
  CreateOrderForRdsResponse createOrderForRdsWithOptions(shared_ptr<CreateOrderForRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrderForRdsResponse createOrderForRds(shared_ptr<CreateOrderForRdsRequest> request);
  CreateShardTaskResponse createShardTaskWithOptions(shared_ptr<CreateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateShardTaskResponse createShardTask(shared_ptr<CreateShardTaskRequest> request);
  DescribeBackMenuResponse describeBackMenuWithOptions(shared_ptr<DescribeBackMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackMenuResponse describeBackMenu(shared_ptr<DescribeBackMenuRequest> request);
  DescribeBackupDbsResponse describeBackupDbsWithOptions(shared_ptr<DescribeBackupDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupDbsResponse describeBackupDbs(shared_ptr<DescribeBackupDbsRequest> request);
  DescribeBackupLocalResponse describeBackupLocalWithOptions(shared_ptr<DescribeBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupLocalResponse describeBackupLocal(shared_ptr<DescribeBackupLocalRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupSetsResponse describeBackupSetsWithOptions(shared_ptr<DescribeBackupSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupSetsResponse describeBackupSets(shared_ptr<DescribeBackupSetsRequest> request);
  DescribeBackupTimesResponse describeBackupTimesWithOptions(shared_ptr<DescribeBackupTimesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupTimesResponse describeBackupTimes(shared_ptr<DescribeBackupTimesRequest> request);
  DescribeBroadcastTablesResponse describeBroadcastTablesWithOptions(shared_ptr<DescribeBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBroadcastTablesResponse describeBroadcastTables(shared_ptr<DescribeBroadcastTablesRequest> request);
  DescribeDbInstanceDbsResponse describeDbInstanceDbsWithOptions(shared_ptr<DescribeDbInstanceDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDbInstanceDbsResponse describeDbInstanceDbs(shared_ptr<DescribeDbInstanceDbsRequest> request);
  DescribeDbInstancesResponse describeDbInstancesWithOptions(shared_ptr<DescribeDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDbInstancesResponse describeDbInstances(shared_ptr<DescribeDbInstancesRequest> request);
  DescribeDrdsDBResponse describeDrdsDBWithOptions(shared_ptr<DescribeDrdsDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDBResponse describeDrdsDB(shared_ptr<DescribeDrdsDBRequest> request);
  DescribeDrdsDBClusterResponse describeDrdsDBClusterWithOptions(shared_ptr<DescribeDrdsDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDBClusterResponse describeDrdsDBCluster(shared_ptr<DescribeDrdsDBClusterRequest> request);
  DescribeDrdsDbInstanceResponse describeDrdsDbInstanceWithOptions(shared_ptr<DescribeDrdsDbInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDbInstanceResponse describeDrdsDbInstance(shared_ptr<DescribeDrdsDbInstanceRequest> request);
  DescribeDrdsDbInstancesResponse describeDrdsDbInstancesWithOptions(shared_ptr<DescribeDrdsDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDbInstancesResponse describeDrdsDbInstances(shared_ptr<DescribeDrdsDbInstancesRequest> request);
  DescribeDrdsDBIpWhiteListResponse describeDrdsDBIpWhiteListWithOptions(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDBIpWhiteListResponse describeDrdsDBIpWhiteList(shared_ptr<DescribeDrdsDBIpWhiteListRequest> request);
  DescribeDrdsDbRdsNameListResponse describeDrdsDbRdsNameListWithOptions(shared_ptr<DescribeDrdsDbRdsNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDbRdsNameListResponse describeDrdsDbRdsNameList(shared_ptr<DescribeDrdsDbRdsNameListRequest> request);
  DescribeDrdsDBsResponse describeDrdsDBsWithOptions(shared_ptr<DescribeDrdsDBsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDBsResponse describeDrdsDBs(shared_ptr<DescribeDrdsDBsRequest> request);
  DescribeDrdsDbTasksResponse describeDrdsDbTasksWithOptions(shared_ptr<DescribeDrdsDbTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsDbTasksResponse describeDrdsDbTasks(shared_ptr<DescribeDrdsDbTasksRequest> request);
  DescribeDrdsInstanceResponse describeDrdsInstanceWithOptions(shared_ptr<DescribeDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceResponse describeDrdsInstance(shared_ptr<DescribeDrdsInstanceRequest> request);
  DescribeDrdsInstanceDbMonitorResponse describeDrdsInstanceDbMonitorWithOptions(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceDbMonitorResponse describeDrdsInstanceDbMonitor(shared_ptr<DescribeDrdsInstanceDbMonitorRequest> request);
  DescribeDrdsInstanceLevelTasksResponse describeDrdsInstanceLevelTasksWithOptions(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceLevelTasksResponse describeDrdsInstanceLevelTasks(shared_ptr<DescribeDrdsInstanceLevelTasksRequest> request);
  DescribeDrdsInstanceMonitorResponse describeDrdsInstanceMonitorWithOptions(shared_ptr<DescribeDrdsInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceMonitorResponse describeDrdsInstanceMonitor(shared_ptr<DescribeDrdsInstanceMonitorRequest> request);
  DescribeDrdsInstancesResponse describeDrdsInstancesWithOptions(shared_ptr<DescribeDrdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstancesResponse describeDrdsInstances(shared_ptr<DescribeDrdsInstancesRequest> request);
  DescribeDrdsInstanceVersionResponse describeDrdsInstanceVersionWithOptions(shared_ptr<DescribeDrdsInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsInstanceVersionResponse describeDrdsInstanceVersion(shared_ptr<DescribeDrdsInstanceVersionRequest> request);
  DescribeDrdsParamsResponse describeDrdsParamsWithOptions(shared_ptr<DescribeDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsParamsResponse describeDrdsParams(shared_ptr<DescribeDrdsParamsRequest> request);
  DescribeDrdsRdsInstancesResponse describeDrdsRdsInstancesWithOptions(shared_ptr<DescribeDrdsRdsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsRdsInstancesResponse describeDrdsRdsInstances(shared_ptr<DescribeDrdsRdsInstancesRequest> request);
  DescribeDrdsShardingDbsResponse describeDrdsShardingDbsWithOptions(shared_ptr<DescribeDrdsShardingDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsShardingDbsResponse describeDrdsShardingDbs(shared_ptr<DescribeDrdsShardingDbsRequest> request);
  DescribeDrdsSlowSqlsResponse describeDrdsSlowSqlsWithOptions(shared_ptr<DescribeDrdsSlowSqlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsSlowSqlsResponse describeDrdsSlowSqls(shared_ptr<DescribeDrdsSlowSqlsRequest> request);
  DescribeDrdsSqlAuditStatusResponse describeDrdsSqlAuditStatusWithOptions(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsSqlAuditStatusResponse describeDrdsSqlAuditStatus(shared_ptr<DescribeDrdsSqlAuditStatusRequest> request);
  DescribeDrdsTasksResponse describeDrdsTasksWithOptions(shared_ptr<DescribeDrdsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDrdsTasksResponse describeDrdsTasks(shared_ptr<DescribeDrdsTasksRequest> request);
  DescribeExpandLogicTableInfoListResponse describeExpandLogicTableInfoListWithOptions(shared_ptr<DescribeExpandLogicTableInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpandLogicTableInfoListResponse describeExpandLogicTableInfoList(shared_ptr<DescribeExpandLogicTableInfoListRequest> request);
  DescribeHiStoreInstanceInfoResponse describeHiStoreInstanceInfoWithOptions(shared_ptr<DescribeHiStoreInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHiStoreInstanceInfoResponse describeHiStoreInstanceInfo(shared_ptr<DescribeHiStoreInstanceInfoRequest> request);
  DescribeHotDbListResponse describeHotDbListWithOptions(shared_ptr<DescribeHotDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHotDbListResponse describeHotDbList(shared_ptr<DescribeHotDbListRequest> request);
  DescribeInstanceAccountsResponse describeInstanceAccountsWithOptions(shared_ptr<DescribeInstanceAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAccountsResponse describeInstanceAccounts(shared_ptr<DescribeInstanceAccountsRequest> request);
  DescribeInstanceMenuSwitchResponse describeInstanceMenuSwitchWithOptions(shared_ptr<DescribeInstanceMenuSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceMenuSwitchResponse describeInstanceMenuSwitch(shared_ptr<DescribeInstanceMenuSwitchRequest> request);
  DescribeInstanceSwitchAzoneResponse describeInstanceSwitchAzoneWithOptions(shared_ptr<DescribeInstanceSwitchAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSwitchAzoneResponse describeInstanceSwitchAzone(shared_ptr<DescribeInstanceSwitchAzoneRequest> request);
  DescribeInstanceSwitchNetworkResponse describeInstanceSwitchNetworkWithOptions(shared_ptr<DescribeInstanceSwitchNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSwitchNetworkResponse describeInstanceSwitchNetwork(shared_ptr<DescribeInstanceSwitchNetworkRequest> request);
  DescribeInstDbLogInfoResponse describeInstDbLogInfoWithOptions(shared_ptr<DescribeInstDbLogInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstDbLogInfoResponse describeInstDbLogInfo(shared_ptr<DescribeInstDbLogInfoRequest> request);
  DescribeInstDbSlsInfoResponse describeInstDbSlsInfoWithOptions(shared_ptr<DescribeInstDbSlsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstDbSlsInfoResponse describeInstDbSlsInfo(shared_ptr<DescribeInstDbSlsInfoRequest> request);
  DescribePreCheckResultResponse describePreCheckResultWithOptions(shared_ptr<DescribePreCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePreCheckResultResponse describePreCheckResult(shared_ptr<DescribePreCheckResultRequest> request);
  DescribeRdsCommodityResponse describeRdsCommodityWithOptions(shared_ptr<DescribeRdsCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsCommodityResponse describeRdsCommodity(shared_ptr<DescribeRdsCommodityRequest> request);
  DescribeRDSPerformanceResponse describeRDSPerformanceWithOptions(shared_ptr<DescribeRDSPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRDSPerformanceResponse describeRDSPerformance(shared_ptr<DescribeRDSPerformanceRequest> request);
  DescribeRdsPerformanceSummaryResponse describeRdsPerformanceSummaryWithOptions(shared_ptr<DescribeRdsPerformanceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsPerformanceSummaryResponse describeRdsPerformanceSummary(shared_ptr<DescribeRdsPerformanceSummaryRequest> request);
  DescribeRdsSuperAccountInstancesResponse describeRdsSuperAccountInstancesWithOptions(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsSuperAccountInstancesResponse describeRdsSuperAccountInstances(shared_ptr<DescribeRdsSuperAccountInstancesRequest> request);
  DescribeRestoreOrderResponse describeRestoreOrderWithOptions(shared_ptr<DescribeRestoreOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreOrderResponse describeRestoreOrder(shared_ptr<DescribeRestoreOrderRequest> request);
  DescribeShardTaskInfoResponse describeShardTaskInfoWithOptions(shared_ptr<DescribeShardTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeShardTaskInfoResponse describeShardTaskInfo(shared_ptr<DescribeShardTaskInfoRequest> request);
  DescribeShardTaskListResponse describeShardTaskListWithOptions(shared_ptr<DescribeShardTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeShardTaskListResponse describeShardTaskList(shared_ptr<DescribeShardTaskListRequest> request);
  DescribeSqlFlashbakTaskResponse describeSqlFlashbakTaskWithOptions(shared_ptr<DescribeSqlFlashbakTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSqlFlashbakTaskResponse describeSqlFlashbakTask(shared_ptr<DescribeSqlFlashbakTaskRequest> request);
  DescribeTableResponse describeTableWithOptions(shared_ptr<DescribeTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTableResponse describeTable(shared_ptr<DescribeTableRequest> request);
  DescribeTableListByTypeResponse describeTableListByTypeWithOptions(shared_ptr<DescribeTableListByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTableListByTypeResponse describeTableListByType(shared_ptr<DescribeTableListByTypeRequest> request);
  DescribeTablesResponse describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTablesResponse describeTables(shared_ptr<DescribeTablesRequest> request);
  DisableSqlAuditResponse disableSqlAuditWithOptions(shared_ptr<DisableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableSqlAuditResponse disableSqlAudit(shared_ptr<DisableSqlAuditRequest> request);
  EnableSqlAuditResponse enableSqlAuditWithOptions(shared_ptr<EnableSqlAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableSqlAuditResponse enableSqlAudit(shared_ptr<EnableSqlAuditRequest> request);
  EnableSqlFlashbackMatchSwitchResponse enableSqlFlashbackMatchSwitchWithOptions(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableSqlFlashbackMatchSwitchResponse enableSqlFlashbackMatchSwitch(shared_ptr<EnableSqlFlashbackMatchSwitchRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ManagePrivateRdsResponse managePrivateRdsWithOptions(shared_ptr<ManagePrivateRdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ManagePrivateRdsResponse managePrivateRds(shared_ptr<ManagePrivateRdsRequest> request);
  ModifyDrdsInstanceDescriptionResponse modifyDrdsInstanceDescriptionWithOptions(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDrdsInstanceDescriptionResponse modifyDrdsInstanceDescription(shared_ptr<ModifyDrdsInstanceDescriptionRequest> request);
  ModifyDrdsIpWhiteListResponse modifyDrdsIpWhiteListWithOptions(shared_ptr<ModifyDrdsIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDrdsIpWhiteListResponse modifyDrdsIpWhiteList(shared_ptr<ModifyDrdsIpWhiteListRequest> request);
  ModifyRdsReadWeightResponse modifyRdsReadWeightWithOptions(shared_ptr<ModifyRdsReadWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRdsReadWeightResponse modifyRdsReadWeight(shared_ptr<ModifyRdsReadWeightRequest> request);
  PutStartBackupResponse putStartBackupWithOptions(shared_ptr<PutStartBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutStartBackupResponse putStartBackup(shared_ptr<PutStartBackupRequest> request);
  ReleaseInstanceInternetAddressResponse releaseInstanceInternetAddressWithOptions(shared_ptr<ReleaseInstanceInternetAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstanceInternetAddressResponse releaseInstanceInternetAddress(shared_ptr<ReleaseInstanceInternetAddressRequest> request);
  RemoveBackupsSetResponse removeBackupsSetWithOptions(shared_ptr<RemoveBackupsSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveBackupsSetResponse removeBackupsSet(shared_ptr<RemoveBackupsSetRequest> request);
  RemoveDrdsDbResponse removeDrdsDbWithOptions(shared_ptr<RemoveDrdsDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDrdsDbResponse removeDrdsDb(shared_ptr<RemoveDrdsDbRequest> request);
  RemoveDrdsDbFailedRecordResponse removeDrdsDbFailedRecordWithOptions(shared_ptr<RemoveDrdsDbFailedRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDrdsDbFailedRecordResponse removeDrdsDbFailedRecord(shared_ptr<RemoveDrdsDbFailedRecordRequest> request);
  RemoveDrdsInstanceResponse removeDrdsInstanceWithOptions(shared_ptr<RemoveDrdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDrdsInstanceResponse removeDrdsInstance(shared_ptr<RemoveDrdsInstanceRequest> request);
  RemoveInstanceAccountResponse removeInstanceAccountWithOptions(shared_ptr<RemoveInstanceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveInstanceAccountResponse removeInstanceAccount(shared_ptr<RemoveInstanceAccountRequest> request);
  SetBackupLocalResponse setBackupLocalWithOptions(shared_ptr<SetBackupLocalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetBackupLocalResponse setBackupLocal(shared_ptr<SetBackupLocalRequest> request);
  SetBackupPolicyResponse setBackupPolicyWithOptions(shared_ptr<SetBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetBackupPolicyResponse setBackupPolicy(shared_ptr<SetBackupPolicyRequest> request);
  SetupBroadcastTablesResponse setupBroadcastTablesWithOptions(shared_ptr<SetupBroadcastTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetupBroadcastTablesResponse setupBroadcastTables(shared_ptr<SetupBroadcastTablesRequest> request);
  SetupDrdsParamsResponse setupDrdsParamsWithOptions(shared_ptr<SetupDrdsParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetupDrdsParamsResponse setupDrdsParams(shared_ptr<SetupDrdsParamsRequest> request);
  SetupTableResponse setupTableWithOptions(shared_ptr<SetupTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetupTableResponse setupTable(shared_ptr<SetupTableRequest> request);
  StartRestoreResponse startRestoreWithOptions(shared_ptr<StartRestoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRestoreResponse startRestore(shared_ptr<StartRestoreRequest> request);
  SubmitCleanTaskResponse submitCleanTaskWithOptions(shared_ptr<SubmitCleanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitCleanTaskResponse submitCleanTask(shared_ptr<SubmitCleanTaskRequest> request);
  SubmitHotExpandPreCheckTaskResponse submitHotExpandPreCheckTaskWithOptions(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitHotExpandPreCheckTaskResponse submitHotExpandPreCheckTask(shared_ptr<SubmitHotExpandPreCheckTaskRequest> request);
  SubmitHotExpandTaskResponse submitHotExpandTaskWithOptions(shared_ptr<SubmitHotExpandTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitHotExpandTaskResponse submitHotExpandTask(shared_ptr<SubmitHotExpandTaskRequest> request);
  SubmitSmoothExpandPreCheckResponse submitSmoothExpandPreCheckWithOptions(shared_ptr<SubmitSmoothExpandPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSmoothExpandPreCheckResponse submitSmoothExpandPreCheck(shared_ptr<SubmitSmoothExpandPreCheckRequest> request);
  SubmitSmoothExpandPreCheckTaskResponse submitSmoothExpandPreCheckTaskWithOptions(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSmoothExpandPreCheckTaskResponse submitSmoothExpandPreCheckTask(shared_ptr<SubmitSmoothExpandPreCheckTaskRequest> request);
  SubmitSmoothExpandTaskResponse submitSmoothExpandTaskWithOptions(shared_ptr<SubmitSmoothExpandTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSmoothExpandTaskResponse submitSmoothExpandTask(shared_ptr<SubmitSmoothExpandTaskRequest> request);
  SubmitSqlFlashbackTaskResponse submitSqlFlashbackTaskWithOptions(shared_ptr<SubmitSqlFlashbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSqlFlashbackTaskResponse submitSqlFlashbackTask(shared_ptr<SubmitSqlFlashbackTaskRequest> request);
  SubmitSwitchTaskResponse submitSwitchTaskWithOptions(shared_ptr<SubmitSwitchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSwitchTaskResponse submitSwitchTask(shared_ptr<SubmitSwitchTaskRequest> request);
  SwitchGlobalBroadcastTypeResponse switchGlobalBroadcastTypeWithOptions(shared_ptr<SwitchGlobalBroadcastTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchGlobalBroadcastTypeResponse switchGlobalBroadcastType(shared_ptr<SwitchGlobalBroadcastTypeRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateInstanceNetworkResponse updateInstanceNetworkWithOptions(shared_ptr<UpdateInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceNetworkResponse updateInstanceNetwork(shared_ptr<UpdateInstanceNetworkRequest> request);
  UpdatePrivateRdsClassResponse updatePrivateRdsClassWithOptions(shared_ptr<UpdatePrivateRdsClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePrivateRdsClassResponse updatePrivateRdsClass(shared_ptr<UpdatePrivateRdsClassRequest> request);
  UpdateResourceGroupAttributeResponse updateResourceGroupAttributeWithOptions(shared_ptr<UpdateResourceGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceGroupAttributeResponse updateResourceGroupAttribute(shared_ptr<UpdateResourceGroupAttributeRequest> request);
  UpgradeHiStoreInstanceResponse upgradeHiStoreInstanceWithOptions(shared_ptr<UpgradeHiStoreInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeHiStoreInstanceResponse upgradeHiStoreInstance(shared_ptr<UpgradeHiStoreInstanceRequest> request);
  UpgradeInstanceVersionResponse upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeInstanceVersionResponse upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request);
  ValidateShardTaskResponse validateShardTaskWithOptions(shared_ptr<ValidateShardTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateShardTaskResponse validateShardTask(shared_ptr<ValidateShardTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Drds20190123

#endif
