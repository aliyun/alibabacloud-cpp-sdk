// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EDS-USER20210308_H_
#define ALIBABACLOUD_EDS-USER20210308_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eds-user20210308 {
class WaIdPermissions : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isBasicChild{};
  shared_ptr<string> name{};
  shared_ptr<vector<WaIdPermissions>> subPermissions{};
  shared_ptr<string> type{};

  WaIdPermissions() {}

  explicit WaIdPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isBasicChild) {
      res["IsBasicChild"] = boost::any(*isBasicChild);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subPermissions) {
      vector<boost::any> temp1;
      for(auto item1:*subPermissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubPermissions"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsBasicChild") != m.end() && !m["IsBasicChild"].empty()) {
      isBasicChild = make_shared<bool>(boost::any_cast<bool>(m["IsBasicChild"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SubPermissions") != m.end() && !m["SubPermissions"].empty()) {
      if (typeid(vector<boost::any>) == m["SubPermissions"].type()) {
        vector<WaIdPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubPermissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            WaIdPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subPermissions = make_shared<vector<WaIdPermissions>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~WaIdPermissions() = default;
};
class CheckUsedPropertyRequest : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};

  CheckUsedPropertyRequest() {}

  explicit CheckUsedPropertyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
  }


  virtual ~CheckUsedPropertyRequest() = default;
};
class CheckUsedPropertyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> useCount{};

  CheckUsedPropertyResponseBody() {}

  explicit CheckUsedPropertyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (useCount) {
      res["UseCount"] = boost::any(*useCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UseCount") != m.end() && !m["UseCount"].empty()) {
      useCount = make_shared<long>(boost::any_cast<long>(m["UseCount"]));
    }
  }


  virtual ~CheckUsedPropertyResponseBody() = default;
};
class CheckUsedPropertyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckUsedPropertyResponseBody> body{};

  CheckUsedPropertyResponse() {}

  explicit CheckUsedPropertyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckUsedPropertyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckUsedPropertyResponseBody>(model1);
      }
    }
  }


  virtual ~CheckUsedPropertyResponse() = default;
};
class CheckUsedPropertyValueRequest : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<long> propertyValueId{};

  CheckUsedPropertyValueRequest() {}

  explicit CheckUsedPropertyValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
  }


  virtual ~CheckUsedPropertyValueRequest() = default;
};
class CheckUsedPropertyValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> useCount{};

  CheckUsedPropertyValueResponseBody() {}

  explicit CheckUsedPropertyValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (useCount) {
      res["UseCount"] = boost::any(*useCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UseCount") != m.end() && !m["UseCount"].empty()) {
      useCount = make_shared<long>(boost::any_cast<long>(m["UseCount"]));
    }
  }


  virtual ~CheckUsedPropertyValueResponseBody() = default;
};
class CheckUsedPropertyValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckUsedPropertyValueResponseBody> body{};

  CheckUsedPropertyValueResponse() {}

  explicit CheckUsedPropertyValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckUsedPropertyValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckUsedPropertyValueResponseBody>(model1);
      }
    }
  }


  virtual ~CheckUsedPropertyValueResponse() = default;
};
class CreatePropertyRequest : public Darabonba::Model {
public:
  shared_ptr<string> propertyKey{};
  shared_ptr<vector<string>> propertyValues{};

  CreatePropertyRequest() {}

  explicit CreatePropertyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValues) {
      res["PropertyValues"] = boost::any(*propertyValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PropertyValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PropertyValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      propertyValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreatePropertyRequest() = default;
};
class CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyValue{};

  CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues() {}

  explicit CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
  }


  virtual ~CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues() = default;
};
class CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues : public Darabonba::Model {
public:
  shared_ptr<string> propertyValue{};
  shared_ptr<long> propertyValueId{};

  CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues() {}

  explicit CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
  }


  virtual ~CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues() = default;
};
class CreatePropertyResponseBodyCreateResultSavePropertyValueModel : public Darabonba::Model {
public:
  shared_ptr<vector<CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues>> failedPropertyValues{};
  shared_ptr<vector<CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues>> savePropertyValues{};

  CreatePropertyResponseBodyCreateResultSavePropertyValueModel() {}

  explicit CreatePropertyResponseBodyCreateResultSavePropertyValueModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedPropertyValues) {
      vector<boost::any> temp1;
      for(auto item1:*failedPropertyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedPropertyValues"] = boost::any(temp1);
    }
    if (savePropertyValues) {
      vector<boost::any> temp1;
      for(auto item1:*savePropertyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SavePropertyValues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedPropertyValues") != m.end() && !m["FailedPropertyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedPropertyValues"].type()) {
        vector<CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedPropertyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedPropertyValues = make_shared<vector<CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues>>(expect1);
      }
    }
    if (m.find("SavePropertyValues") != m.end() && !m["SavePropertyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["SavePropertyValues"].type()) {
        vector<CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SavePropertyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        savePropertyValues = make_shared<vector<CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues>>(expect1);
      }
    }
  }


  virtual ~CreatePropertyResponseBodyCreateResultSavePropertyValueModel() = default;
};
class CreatePropertyResponseBodyCreateResult : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyKey{};
  shared_ptr<CreatePropertyResponseBodyCreateResultSavePropertyValueModel> savePropertyValueModel{};

  CreatePropertyResponseBodyCreateResult() {}

  explicit CreatePropertyResponseBodyCreateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (savePropertyValueModel) {
      res["SavePropertyValueModel"] = savePropertyValueModel ? boost::any(savePropertyValueModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("SavePropertyValueModel") != m.end() && !m["SavePropertyValueModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["SavePropertyValueModel"].type()) {
        CreatePropertyResponseBodyCreateResultSavePropertyValueModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SavePropertyValueModel"]));
        savePropertyValueModel = make_shared<CreatePropertyResponseBodyCreateResultSavePropertyValueModel>(model1);
      }
    }
  }


  virtual ~CreatePropertyResponseBodyCreateResult() = default;
};
class CreatePropertyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePropertyResponseBodyCreateResult> createResult{};
  shared_ptr<string> requestId{};

  CreatePropertyResponseBody() {}

  explicit CreatePropertyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createResult) {
      res["CreateResult"] = createResult ? boost::any(createResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateResult") != m.end() && !m["CreateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateResult"].type()) {
        CreatePropertyResponseBodyCreateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateResult"]));
        createResult = make_shared<CreatePropertyResponseBodyCreateResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePropertyResponseBody() = default;
};
class CreatePropertyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePropertyResponseBody> body{};

  CreatePropertyResponse() {}

  explicit CreatePropertyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePropertyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePropertyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePropertyResponse() = default;
};
class CreateUsersRequestUsers : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> orgId{};
  shared_ptr<string> ownerType{};
  shared_ptr<string> password{};
  shared_ptr<string> phone{};
  shared_ptr<string> remark{};

  CreateUsersRequestUsers() {}

  explicit CreateUsersRequestUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~CreateUsersRequestUsers() = default;
};
class CreateUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoLockTime{};
  shared_ptr<string> password{};
  shared_ptr<vector<CreateUsersRequestUsers>> users{};

  CreateUsersRequest() {}

  explicit CreateUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoLockTime) {
      res["AutoLockTime"] = boost::any(*autoLockTime);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoLockTime") != m.end() && !m["AutoLockTime"].empty()) {
      autoLockTime = make_shared<string>(boost::any_cast<string>(m["AutoLockTime"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<CreateUsersRequestUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUsersRequestUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<CreateUsersRequestUsers>>(expect1);
      }
    }
  }


  virtual ~CreateUsersRequest() = default;
};
class CreateUsersResponseBodyCreateResultCreatedUsers : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> phone{};
  shared_ptr<string> remark{};

  CreateUsersResponseBodyCreateResultCreatedUsers() {}

  explicit CreateUsersResponseBodyCreateResultCreatedUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~CreateUsersResponseBodyCreateResultCreatedUsers() = default;
};
class CreateUsersResponseBodyCreateResultFailedUsers : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> phone{};

  CreateUsersResponseBodyCreateResultFailedUsers() {}

  explicit CreateUsersResponseBodyCreateResultFailedUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~CreateUsersResponseBodyCreateResultFailedUsers() = default;
};
class CreateUsersResponseBodyCreateResult : public Darabonba::Model {
public:
  shared_ptr<vector<CreateUsersResponseBodyCreateResultCreatedUsers>> createdUsers{};
  shared_ptr<vector<CreateUsersResponseBodyCreateResultFailedUsers>> failedUsers{};

  CreateUsersResponseBodyCreateResult() {}

  explicit CreateUsersResponseBodyCreateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdUsers) {
      vector<boost::any> temp1;
      for(auto item1:*createdUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CreatedUsers"] = boost::any(temp1);
    }
    if (failedUsers) {
      vector<boost::any> temp1;
      for(auto item1:*failedUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedUsers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedUsers") != m.end() && !m["CreatedUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["CreatedUsers"].type()) {
        vector<CreateUsersResponseBodyCreateResultCreatedUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CreatedUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUsersResponseBodyCreateResultCreatedUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createdUsers = make_shared<vector<CreateUsersResponseBodyCreateResultCreatedUsers>>(expect1);
      }
    }
    if (m.find("FailedUsers") != m.end() && !m["FailedUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedUsers"].type()) {
        vector<CreateUsersResponseBodyCreateResultFailedUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUsersResponseBodyCreateResultFailedUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedUsers = make_shared<vector<CreateUsersResponseBodyCreateResultFailedUsers>>(expect1);
      }
    }
  }


  virtual ~CreateUsersResponseBodyCreateResult() = default;
};
class CreateUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateUsersResponseBodyCreateResult> createResult{};
  shared_ptr<string> requestId{};

  CreateUsersResponseBody() {}

  explicit CreateUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createResult) {
      res["CreateResult"] = createResult ? boost::any(createResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateResult") != m.end() && !m["CreateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateResult"].type()) {
        CreateUsersResponseBodyCreateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateResult"]));
        createResult = make_shared<CreateUsersResponseBodyCreateResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateUsersResponseBody() = default;
};
class CreateUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUsersResponseBody> body{};

  CreateUsersResponse() {}

  explicit CreateUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUsersResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUsersResponse() = default;
};
class DeleteUserPropertyValueRequest : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<long> propertyValueId{};
  shared_ptr<long> userId{};

  DeleteUserPropertyValueRequest() {}

  explicit DeleteUserPropertyValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~DeleteUserPropertyValueRequest() = default;
};
class DeleteUserPropertyValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserPropertyValueResponseBody() {}

  explicit DeleteUserPropertyValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserPropertyValueResponseBody() = default;
};
class DeleteUserPropertyValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserPropertyValueResponseBody> body{};

  DeleteUserPropertyValueResponse() {}

  explicit DeleteUserPropertyValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserPropertyValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserPropertyValueResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserPropertyValueResponse() = default;
};
class DescribeMfaDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<vector<string>> endUserIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> serialNumbers{};

  DescribeMfaDevicesRequest() {}

  explicit DescribeMfaDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (serialNumbers) {
      res["SerialNumbers"] = boost::any(*serialNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("EndUserIds") != m.end() && !m["EndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SerialNumbers") != m.end() && !m["SerialNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SerialNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SerialNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serialNumbers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeMfaDevicesRequest() = default;
};
class DescribeMfaDevicesResponseBodyMfaDevices : public Darabonba::Model {
public:
  shared_ptr<long> consecutiveFails{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> gmtEnabled{};
  shared_ptr<string> gmtUnlock{};
  shared_ptr<long> id{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> status{};

  DescribeMfaDevicesResponseBodyMfaDevices() {}

  explicit DescribeMfaDevicesResponseBodyMfaDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consecutiveFails) {
      res["ConsecutiveFails"] = boost::any(*consecutiveFails);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (gmtEnabled) {
      res["GmtEnabled"] = boost::any(*gmtEnabled);
    }
    if (gmtUnlock) {
      res["GmtUnlock"] = boost::any(*gmtUnlock);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsecutiveFails") != m.end() && !m["ConsecutiveFails"].empty()) {
      consecutiveFails = make_shared<long>(boost::any_cast<long>(m["ConsecutiveFails"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("GmtEnabled") != m.end() && !m["GmtEnabled"].empty()) {
      gmtEnabled = make_shared<string>(boost::any_cast<string>(m["GmtEnabled"]));
    }
    if (m.find("GmtUnlock") != m.end() && !m["GmtUnlock"].empty()) {
      gmtUnlock = make_shared<string>(boost::any_cast<string>(m["GmtUnlock"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMfaDevicesResponseBodyMfaDevices() = default;
};
class DescribeMfaDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMfaDevicesResponseBodyMfaDevices>> mfaDevices{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeMfaDevicesResponseBody() {}

  explicit DescribeMfaDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mfaDevices) {
      vector<boost::any> temp1;
      for(auto item1:*mfaDevices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MfaDevices"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MfaDevices") != m.end() && !m["MfaDevices"].empty()) {
      if (typeid(vector<boost::any>) == m["MfaDevices"].type()) {
        vector<DescribeMfaDevicesResponseBodyMfaDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MfaDevices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMfaDevicesResponseBodyMfaDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mfaDevices = make_shared<vector<DescribeMfaDevicesResponseBodyMfaDevices>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMfaDevicesResponseBody() = default;
};
class DescribeMfaDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMfaDevicesResponseBody> body{};

  DescribeMfaDevicesResponse() {}

  explicit DescribeMfaDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMfaDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMfaDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMfaDevicesResponse() = default;
};
class DescribeUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<vector<string>> endUserIds{};
  shared_ptr<vector<string>> excludeEndUserIds{};
  shared_ptr<string> filter{};
  shared_ptr<string> groupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orgId{};
  shared_ptr<string> solutionId{};

  DescribeUsersRequest() {}

  explicit DescribeUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    if (excludeEndUserIds) {
      res["ExcludeEndUserIds"] = boost::any(*excludeEndUserIds);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("EndUserIds") != m.end() && !m["EndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExcludeEndUserIds") != m.end() && !m["ExcludeEndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeEndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeEndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeEndUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["SolutionId"]));
    }
  }


  virtual ~DescribeUsersRequest() = default;
};
class DescribeUsersResponseBodyUsersGroups : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};

  DescribeUsersResponseBodyUsersGroups() {}

  explicit DescribeUsersResponseBodyUsersGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DescribeUsersResponseBodyUsersGroups() = default;
};
class DescribeUsersResponseBodyUsersOrgs : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> orgName{};

  DescribeUsersResponseBodyUsersOrgs() {}

  explicit DescribeUsersResponseBodyUsersOrgs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
  }


  virtual ~DescribeUsersResponseBodyUsersOrgs() = default;
};
class DescribeUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> avatar{};
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<vector<DescribeUsersResponseBodyUsersGroups>> groups{};
  shared_ptr<long> id{};
  shared_ptr<bool> isTenantManager{};
  shared_ptr<string> jobNumber{};
  shared_ptr<string> nickName{};
  shared_ptr<string> orgId{};
  shared_ptr<vector<DescribeUsersResponseBodyUsersOrgs>> orgs{};
  shared_ptr<string> ownerType{};
  shared_ptr<string> phone{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> wyId{};

  DescribeUsersResponseBodyUsers() {}

  explicit DescribeUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isTenantManager) {
      res["IsTenantManager"] = boost::any(*isTenantManager);
    }
    if (jobNumber) {
      res["JobNumber"] = boost::any(*jobNumber);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orgs) {
      vector<boost::any> temp1;
      for(auto item1:*orgs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Orgs"] = boost::any(temp1);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wyId) {
      res["WyId"] = boost::any(*wyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<DescribeUsersResponseBodyUsersGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsersResponseBodyUsersGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<DescribeUsersResponseBodyUsersGroups>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsTenantManager") != m.end() && !m["IsTenantManager"].empty()) {
      isTenantManager = make_shared<bool>(boost::any_cast<bool>(m["IsTenantManager"]));
    }
    if (m.find("JobNumber") != m.end() && !m["JobNumber"].empty()) {
      jobNumber = make_shared<string>(boost::any_cast<string>(m["JobNumber"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Orgs") != m.end() && !m["Orgs"].empty()) {
      if (typeid(vector<boost::any>) == m["Orgs"].type()) {
        vector<DescribeUsersResponseBodyUsersOrgs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Orgs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsersResponseBodyUsersOrgs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orgs = make_shared<vector<DescribeUsersResponseBodyUsersOrgs>>(expect1);
      }
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WyId") != m.end() && !m["WyId"].empty()) {
      wyId = make_shared<string>(boost::any_cast<string>(m["WyId"]));
    }
  }


  virtual ~DescribeUsersResponseBodyUsers() = default;
};
class DescribeUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsersResponseBodyUsers>> users{};

  DescribeUsersResponseBody() {}

  explicit DescribeUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
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
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<DescribeUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<DescribeUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~DescribeUsersResponseBody() = default;
};
class DescribeUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsersResponseBody> body{};

  DescribeUsersResponse() {}

  explicit DescribeUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsersResponse() = default;
};
class FilterUsersRequestOrderParam : public Darabonba::Model {
public:
  shared_ptr<string> orderField{};
  shared_ptr<string> orderType{};

  FilterUsersRequestOrderParam() {}

  explicit FilterUsersRequestOrderParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderField) {
      res["OrderField"] = boost::any(*orderField);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderField") != m.end() && !m["OrderField"].empty()) {
      orderField = make_shared<string>(boost::any_cast<string>(m["OrderField"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
  }


  virtual ~FilterUsersRequestOrderParam() = default;
};
class FilterUsersRequestPropertyFilterParam : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyValueIds{};

  FilterUsersRequestPropertyFilterParam() {}

  explicit FilterUsersRequestPropertyFilterParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyValueIds) {
      res["PropertyValueIds"] = boost::any(*propertyValueIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyValueIds") != m.end() && !m["PropertyValueIds"].empty()) {
      propertyValueIds = make_shared<string>(boost::any_cast<string>(m["PropertyValueIds"]));
    }
  }


  virtual ~FilterUsersRequestPropertyFilterParam() = default;
};
class FilterUsersRequestPropertyKeyValueFilterParam : public Darabonba::Model {
public:
  shared_ptr<string> propertyKey{};
  shared_ptr<string> propertyValues{};

  FilterUsersRequestPropertyKeyValueFilterParam() {}

  explicit FilterUsersRequestPropertyKeyValueFilterParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValues) {
      res["PropertyValues"] = boost::any(*propertyValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      propertyValues = make_shared<string>(boost::any_cast<string>(m["PropertyValues"]));
    }
  }


  virtual ~FilterUsersRequestPropertyKeyValueFilterParam() = default;
};
class FilterUsersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeEndUserIds{};
  shared_ptr<string> filter{};
  shared_ptr<bool> includeDesktopCount{};
  shared_ptr<bool> includeDesktopGroupCount{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<FilterUsersRequestOrderParam> orderParam{};
  shared_ptr<string> orgId{};
  shared_ptr<string> ownerType{};
  shared_ptr<vector<FilterUsersRequestPropertyFilterParam>> propertyFilterParam{};
  shared_ptr<vector<FilterUsersRequestPropertyKeyValueFilterParam>> propertyKeyValueFilterParam{};

  FilterUsersRequest() {}

  explicit FilterUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeEndUserIds) {
      res["ExcludeEndUserIds"] = boost::any(*excludeEndUserIds);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (includeDesktopCount) {
      res["IncludeDesktopCount"] = boost::any(*includeDesktopCount);
    }
    if (includeDesktopGroupCount) {
      res["IncludeDesktopGroupCount"] = boost::any(*includeDesktopGroupCount);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderParam) {
      res["OrderParam"] = orderParam ? boost::any(orderParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (propertyFilterParam) {
      vector<boost::any> temp1;
      for(auto item1:*propertyFilterParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyFilterParam"] = boost::any(temp1);
    }
    if (propertyKeyValueFilterParam) {
      vector<boost::any> temp1;
      for(auto item1:*propertyKeyValueFilterParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyKeyValueFilterParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeEndUserIds") != m.end() && !m["ExcludeEndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeEndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeEndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeEndUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("IncludeDesktopCount") != m.end() && !m["IncludeDesktopCount"].empty()) {
      includeDesktopCount = make_shared<bool>(boost::any_cast<bool>(m["IncludeDesktopCount"]));
    }
    if (m.find("IncludeDesktopGroupCount") != m.end() && !m["IncludeDesktopGroupCount"].empty()) {
      includeDesktopGroupCount = make_shared<bool>(boost::any_cast<bool>(m["IncludeDesktopGroupCount"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderParam") != m.end() && !m["OrderParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderParam"].type()) {
        FilterUsersRequestOrderParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderParam"]));
        orderParam = make_shared<FilterUsersRequestOrderParam>(model1);
      }
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("PropertyFilterParam") != m.end() && !m["PropertyFilterParam"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyFilterParam"].type()) {
        vector<FilterUsersRequestPropertyFilterParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyFilterParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterUsersRequestPropertyFilterParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyFilterParam = make_shared<vector<FilterUsersRequestPropertyFilterParam>>(expect1);
      }
    }
    if (m.find("PropertyKeyValueFilterParam") != m.end() && !m["PropertyKeyValueFilterParam"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyKeyValueFilterParam"].type()) {
        vector<FilterUsersRequestPropertyKeyValueFilterParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyKeyValueFilterParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterUsersRequestPropertyKeyValueFilterParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyKeyValueFilterParam = make_shared<vector<FilterUsersRequestPropertyKeyValueFilterParam>>(expect1);
      }
    }
  }


  virtual ~FilterUsersRequest() = default;
};
class FilterUsersShrinkRequestPropertyFilterParam : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyValueIds{};

  FilterUsersShrinkRequestPropertyFilterParam() {}

  explicit FilterUsersShrinkRequestPropertyFilterParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyValueIds) {
      res["PropertyValueIds"] = boost::any(*propertyValueIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyValueIds") != m.end() && !m["PropertyValueIds"].empty()) {
      propertyValueIds = make_shared<string>(boost::any_cast<string>(m["PropertyValueIds"]));
    }
  }


  virtual ~FilterUsersShrinkRequestPropertyFilterParam() = default;
};
class FilterUsersShrinkRequestPropertyKeyValueFilterParam : public Darabonba::Model {
public:
  shared_ptr<string> propertyKey{};
  shared_ptr<string> propertyValues{};

  FilterUsersShrinkRequestPropertyKeyValueFilterParam() {}

  explicit FilterUsersShrinkRequestPropertyKeyValueFilterParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValues) {
      res["PropertyValues"] = boost::any(*propertyValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      propertyValues = make_shared<string>(boost::any_cast<string>(m["PropertyValues"]));
    }
  }


  virtual ~FilterUsersShrinkRequestPropertyKeyValueFilterParam() = default;
};
class FilterUsersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeEndUserIds{};
  shared_ptr<string> filter{};
  shared_ptr<bool> includeDesktopCount{};
  shared_ptr<bool> includeDesktopGroupCount{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderParamShrink{};
  shared_ptr<string> orgId{};
  shared_ptr<string> ownerType{};
  shared_ptr<vector<FilterUsersShrinkRequestPropertyFilterParam>> propertyFilterParam{};
  shared_ptr<vector<FilterUsersShrinkRequestPropertyKeyValueFilterParam>> propertyKeyValueFilterParam{};

  FilterUsersShrinkRequest() {}

  explicit FilterUsersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeEndUserIds) {
      res["ExcludeEndUserIds"] = boost::any(*excludeEndUserIds);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (includeDesktopCount) {
      res["IncludeDesktopCount"] = boost::any(*includeDesktopCount);
    }
    if (includeDesktopGroupCount) {
      res["IncludeDesktopGroupCount"] = boost::any(*includeDesktopGroupCount);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderParamShrink) {
      res["OrderParam"] = boost::any(*orderParamShrink);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (propertyFilterParam) {
      vector<boost::any> temp1;
      for(auto item1:*propertyFilterParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyFilterParam"] = boost::any(temp1);
    }
    if (propertyKeyValueFilterParam) {
      vector<boost::any> temp1;
      for(auto item1:*propertyKeyValueFilterParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyKeyValueFilterParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeEndUserIds") != m.end() && !m["ExcludeEndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeEndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeEndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeEndUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("IncludeDesktopCount") != m.end() && !m["IncludeDesktopCount"].empty()) {
      includeDesktopCount = make_shared<bool>(boost::any_cast<bool>(m["IncludeDesktopCount"]));
    }
    if (m.find("IncludeDesktopGroupCount") != m.end() && !m["IncludeDesktopGroupCount"].empty()) {
      includeDesktopGroupCount = make_shared<bool>(boost::any_cast<bool>(m["IncludeDesktopGroupCount"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderParam") != m.end() && !m["OrderParam"].empty()) {
      orderParamShrink = make_shared<string>(boost::any_cast<string>(m["OrderParam"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("PropertyFilterParam") != m.end() && !m["PropertyFilterParam"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyFilterParam"].type()) {
        vector<FilterUsersShrinkRequestPropertyFilterParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyFilterParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterUsersShrinkRequestPropertyFilterParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyFilterParam = make_shared<vector<FilterUsersShrinkRequestPropertyFilterParam>>(expect1);
      }
    }
    if (m.find("PropertyKeyValueFilterParam") != m.end() && !m["PropertyKeyValueFilterParam"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyKeyValueFilterParam"].type()) {
        vector<FilterUsersShrinkRequestPropertyKeyValueFilterParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyKeyValueFilterParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterUsersShrinkRequestPropertyKeyValueFilterParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyKeyValueFilterParam = make_shared<vector<FilterUsersShrinkRequestPropertyKeyValueFilterParam>>(expect1);
      }
    }
  }


  virtual ~FilterUsersShrinkRequest() = default;
};
class FilterUsersResponseBodyUsersExternalInfo : public Darabonba::Model {
public:
  shared_ptr<string> externalName{};
  shared_ptr<string> jobNumber{};

  FilterUsersResponseBodyUsersExternalInfo() {}

  explicit FilterUsersResponseBodyUsersExternalInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalName) {
      res["ExternalName"] = boost::any(*externalName);
    }
    if (jobNumber) {
      res["JobNumber"] = boost::any(*jobNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalName") != m.end() && !m["ExternalName"].empty()) {
      externalName = make_shared<string>(boost::any_cast<string>(m["ExternalName"]));
    }
    if (m.find("JobNumber") != m.end() && !m["JobNumber"].empty()) {
      jobNumber = make_shared<string>(boost::any_cast<string>(m["JobNumber"]));
    }
  }


  virtual ~FilterUsersResponseBodyUsersExternalInfo() = default;
};
class FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues : public Darabonba::Model {
public:
  shared_ptr<string> propertyValue{};
  shared_ptr<long> propertyValueId{};

  FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues() {}

  explicit FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
  }


  virtual ~FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues() = default;
};
class FilterUsersResponseBodyUsersUserSetPropertiesModels : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyKey{};
  shared_ptr<long> propertyType{};
  shared_ptr<vector<FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues>> propertyValues{};
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};

  FilterUsersResponseBodyUsersUserSetPropertiesModels() {}

  explicit FilterUsersResponseBodyUsersUserSetPropertiesModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (propertyType) {
      res["PropertyType"] = boost::any(*propertyType);
    }
    if (propertyValues) {
      vector<boost::any> temp1;
      for(auto item1:*propertyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyValues"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("PropertyType") != m.end() && !m["PropertyType"].empty()) {
      propertyType = make_shared<long>(boost::any_cast<long>(m["PropertyType"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyValues"].type()) {
        vector<FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyValues = make_shared<vector<FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~FilterUsersResponseBodyUsersUserSetPropertiesModels() = default;
};
class FilterUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<long> desktopCount{};
  shared_ptr<long> desktopGroupCount{};
  shared_ptr<string> email{};
  shared_ptr<bool> enableAdminAccess{};
  shared_ptr<string> endUserId{};
  shared_ptr<FilterUsersResponseBodyUsersExternalInfo> externalInfo{};
  shared_ptr<long> id{};
  shared_ptr<bool> isTenantManager{};
  shared_ptr<string> ownerType{};
  shared_ptr<string> phone{};
  shared_ptr<string> realNickName{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<vector<FilterUsersResponseBodyUsersUserSetPropertiesModels>> userSetPropertiesModels{};

  FilterUsersResponseBodyUsers() {}

  explicit FilterUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopCount) {
      res["DesktopCount"] = boost::any(*desktopCount);
    }
    if (desktopGroupCount) {
      res["DesktopGroupCount"] = boost::any(*desktopGroupCount);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (enableAdminAccess) {
      res["EnableAdminAccess"] = boost::any(*enableAdminAccess);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (externalInfo) {
      res["ExternalInfo"] = externalInfo ? boost::any(externalInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isTenantManager) {
      res["IsTenantManager"] = boost::any(*isTenantManager);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (realNickName) {
      res["RealNickName"] = boost::any(*realNickName);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userSetPropertiesModels) {
      vector<boost::any> temp1;
      for(auto item1:*userSetPropertiesModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserSetPropertiesModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopCount") != m.end() && !m["DesktopCount"].empty()) {
      desktopCount = make_shared<long>(boost::any_cast<long>(m["DesktopCount"]));
    }
    if (m.find("DesktopGroupCount") != m.end() && !m["DesktopGroupCount"].empty()) {
      desktopGroupCount = make_shared<long>(boost::any_cast<long>(m["DesktopGroupCount"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EnableAdminAccess") != m.end() && !m["EnableAdminAccess"].empty()) {
      enableAdminAccess = make_shared<bool>(boost::any_cast<bool>(m["EnableAdminAccess"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ExternalInfo") != m.end() && !m["ExternalInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExternalInfo"].type()) {
        FilterUsersResponseBodyUsersExternalInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExternalInfo"]));
        externalInfo = make_shared<FilterUsersResponseBodyUsersExternalInfo>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsTenantManager") != m.end() && !m["IsTenantManager"].empty()) {
      isTenantManager = make_shared<bool>(boost::any_cast<bool>(m["IsTenantManager"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("RealNickName") != m.end() && !m["RealNickName"].empty()) {
      realNickName = make_shared<string>(boost::any_cast<string>(m["RealNickName"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UserSetPropertiesModels") != m.end() && !m["UserSetPropertiesModels"].empty()) {
      if (typeid(vector<boost::any>) == m["UserSetPropertiesModels"].type()) {
        vector<FilterUsersResponseBodyUsersUserSetPropertiesModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserSetPropertiesModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterUsersResponseBodyUsersUserSetPropertiesModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userSetPropertiesModels = make_shared<vector<FilterUsersResponseBodyUsersUserSetPropertiesModels>>(expect1);
      }
    }
  }


  virtual ~FilterUsersResponseBodyUsers() = default;
};
class FilterUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<FilterUsersResponseBodyUsers>> users{};

  FilterUsersResponseBody() {}

  explicit FilterUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
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
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<FilterUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<FilterUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~FilterUsersResponseBody() = default;
};
class FilterUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FilterUsersResponseBody> body{};

  FilterUsersResponse() {}

  explicit FilterUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FilterUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FilterUsersResponseBody>(model1);
      }
    }
  }


  virtual ~FilterUsersResponse() = default;
};
class GetManagerInfoByAuthCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};

  GetManagerInfoByAuthCodeRequest() {}

  explicit GetManagerInfoByAuthCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
  }


  virtual ~GetManagerInfoByAuthCodeRequest() = default;
};
class GetManagerInfoByAuthCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orgId{};
  shared_ptr<string> phone{};
  shared_ptr<string> requestId{};
  shared_ptr<string> teamName{};
  shared_ptr<string> userName{};
  shared_ptr<long> waId{};

  GetManagerInfoByAuthCodeResponseBody() {}

  explicit GetManagerInfoByAuthCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (teamName) {
      res["TeamName"] = boost::any(*teamName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (waId) {
      res["WaId"] = boost::any(*waId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TeamName") != m.end() && !m["TeamName"].empty()) {
      teamName = make_shared<string>(boost::any_cast<string>(m["TeamName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("WaId") != m.end() && !m["WaId"].empty()) {
      waId = make_shared<long>(boost::any_cast<long>(m["WaId"]));
    }
  }


  virtual ~GetManagerInfoByAuthCodeResponseBody() = default;
};
class GetManagerInfoByAuthCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetManagerInfoByAuthCodeResponseBody> body{};

  GetManagerInfoByAuthCodeResponse() {}

  explicit GetManagerInfoByAuthCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetManagerInfoByAuthCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetManagerInfoByAuthCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetManagerInfoByAuthCodeResponse() = default;
};
class ListPropertyResponseBodyPropertiesPropertyValues : public Darabonba::Model {
public:
  shared_ptr<string> propertyValue{};
  shared_ptr<long> propertyValueId{};

  ListPropertyResponseBodyPropertiesPropertyValues() {}

  explicit ListPropertyResponseBodyPropertiesPropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
  }


  virtual ~ListPropertyResponseBodyPropertiesPropertyValues() = default;
};
class ListPropertyResponseBodyProperties : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyKey{};
  shared_ptr<vector<ListPropertyResponseBodyPropertiesPropertyValues>> propertyValues{};

  ListPropertyResponseBodyProperties() {}

  explicit ListPropertyResponseBodyProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValues) {
      vector<boost::any> temp1;
      for(auto item1:*propertyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyValues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyValues"].type()) {
        vector<ListPropertyResponseBodyPropertiesPropertyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPropertyResponseBodyPropertiesPropertyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyValues = make_shared<vector<ListPropertyResponseBodyPropertiesPropertyValues>>(expect1);
      }
    }
  }


  virtual ~ListPropertyResponseBodyProperties() = default;
};
class ListPropertyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPropertyResponseBodyProperties>> properties{};
  shared_ptr<string> requestId{};

  ListPropertyResponseBody() {}

  explicit ListPropertyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (properties) {
      vector<boost::any> temp1;
      for(auto item1:*properties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Properties"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(vector<boost::any>) == m["Properties"].type()) {
        vector<ListPropertyResponseBodyProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Properties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPropertyResponseBodyProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        properties = make_shared<vector<ListPropertyResponseBodyProperties>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPropertyResponseBody() = default;
};
class ListPropertyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPropertyResponseBody> body{};

  ListPropertyResponse() {}

  explicit ListPropertyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPropertyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPropertyResponseBody>(model1);
      }
    }
  }


  virtual ~ListPropertyResponse() = default;
};
class ListPropertyValueRequest : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};

  ListPropertyValueRequest() {}

  explicit ListPropertyValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
  }


  virtual ~ListPropertyValueRequest() = default;
};
class ListPropertyValueResponseBodyPropertyValueInfos : public Darabonba::Model {
public:
  shared_ptr<string> propertyValue{};
  shared_ptr<long> propertyValueId{};

  ListPropertyValueResponseBodyPropertyValueInfos() {}

  explicit ListPropertyValueResponseBodyPropertyValueInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
  }


  virtual ~ListPropertyValueResponseBodyPropertyValueInfos() = default;
};
class ListPropertyValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPropertyValueResponseBodyPropertyValueInfos>> propertyValueInfos{};
  shared_ptr<string> requestId{};

  ListPropertyValueResponseBody() {}

  explicit ListPropertyValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValueInfos) {
      vector<boost::any> temp1;
      for(auto item1:*propertyValueInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyValueInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValueInfos") != m.end() && !m["PropertyValueInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyValueInfos"].type()) {
        vector<ListPropertyValueResponseBodyPropertyValueInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyValueInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPropertyValueResponseBodyPropertyValueInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyValueInfos = make_shared<vector<ListPropertyValueResponseBodyPropertyValueInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPropertyValueResponseBody() = default;
};
class ListPropertyValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPropertyValueResponseBody> body{};

  ListPropertyValueResponse() {}

  explicit ListPropertyValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPropertyValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPropertyValueResponseBody>(model1);
      }
    }
  }


  virtual ~ListPropertyValueResponse() = default;
};
class LockMfaDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<string> serialNumber{};

  LockMfaDeviceRequest() {}

  explicit LockMfaDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~LockMfaDeviceRequest() = default;
};
class LockMfaDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LockMfaDeviceResponseBody() {}

  explicit LockMfaDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LockMfaDeviceResponseBody() = default;
};
class LockMfaDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LockMfaDeviceResponseBody> body{};

  LockMfaDeviceResponse() {}

  explicit LockMfaDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LockMfaDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LockMfaDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~LockMfaDeviceResponse() = default;
};
class LockUsersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> users{};

  LockUsersRequest() {}

  explicit LockUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~LockUsersRequest() = default;
};
class LockUsersResponseBodyLockUsersResultFailedUsers : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  LockUsersResponseBodyLockUsersResultFailedUsers() {}

  explicit LockUsersResponseBodyLockUsersResultFailedUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~LockUsersResponseBodyLockUsersResultFailedUsers() = default;
};
class LockUsersResponseBodyLockUsersResult : public Darabonba::Model {
public:
  shared_ptr<vector<LockUsersResponseBodyLockUsersResultFailedUsers>> failedUsers{};
  shared_ptr<vector<string>> lockedUsers{};

  LockUsersResponseBodyLockUsersResult() {}

  explicit LockUsersResponseBodyLockUsersResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedUsers) {
      vector<boost::any> temp1;
      for(auto item1:*failedUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedUsers"] = boost::any(temp1);
    }
    if (lockedUsers) {
      res["LockedUsers"] = boost::any(*lockedUsers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedUsers") != m.end() && !m["FailedUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedUsers"].type()) {
        vector<LockUsersResponseBodyLockUsersResultFailedUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LockUsersResponseBodyLockUsersResultFailedUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedUsers = make_shared<vector<LockUsersResponseBodyLockUsersResultFailedUsers>>(expect1);
      }
    }
    if (m.find("LockedUsers") != m.end() && !m["LockedUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LockedUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LockedUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lockedUsers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~LockUsersResponseBodyLockUsersResult() = default;
};
class LockUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<LockUsersResponseBodyLockUsersResult> lockUsersResult{};
  shared_ptr<string> requestId{};

  LockUsersResponseBody() {}

  explicit LockUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockUsersResult) {
      res["LockUsersResult"] = lockUsersResult ? boost::any(lockUsersResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockUsersResult") != m.end() && !m["LockUsersResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["LockUsersResult"].type()) {
        LockUsersResponseBodyLockUsersResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LockUsersResult"]));
        lockUsersResult = make_shared<LockUsersResponseBodyLockUsersResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~LockUsersResponseBody() = default;
};
class LockUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LockUsersResponseBody> body{};

  LockUsersResponse() {}

  explicit LockUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LockUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LockUsersResponseBody>(model1);
      }
    }
  }


  virtual ~LockUsersResponse() = default;
};
class ModifyUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> phone{};

  ModifyUserRequest() {}

  explicit ModifyUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~ModifyUserRequest() = default;
};
class ModifyUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserResponseBody() {}

  explicit ModifyUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserResponseBody() = default;
};
class ModifyUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUserResponseBody> body{};

  ModifyUserResponse() {}

  explicit ModifyUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserResponse() = default;
};
class QuerySyncStatusByAliUidResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> corpId{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> latestBeginTime{};
  shared_ptr<string> latestEndTime{};
  shared_ptr<string> latestSuccessTime{};
  shared_ptr<string> status{};

  QuerySyncStatusByAliUidResponseBodyData() {}

  explicit QuerySyncStatusByAliUidResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (corpId) {
      res["CorpId"] = boost::any(*corpId);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (latestBeginTime) {
      res["LatestBeginTime"] = boost::any(*latestBeginTime);
    }
    if (latestEndTime) {
      res["LatestEndTime"] = boost::any(*latestEndTime);
    }
    if (latestSuccessTime) {
      res["LatestSuccessTime"] = boost::any(*latestSuccessTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("CorpId") != m.end() && !m["CorpId"].empty()) {
      corpId = make_shared<string>(boost::any_cast<string>(m["CorpId"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LatestBeginTime") != m.end() && !m["LatestBeginTime"].empty()) {
      latestBeginTime = make_shared<string>(boost::any_cast<string>(m["LatestBeginTime"]));
    }
    if (m.find("LatestEndTime") != m.end() && !m["LatestEndTime"].empty()) {
      latestEndTime = make_shared<string>(boost::any_cast<string>(m["LatestEndTime"]));
    }
    if (m.find("LatestSuccessTime") != m.end() && !m["LatestSuccessTime"].empty()) {
      latestSuccessTime = make_shared<string>(boost::any_cast<string>(m["LatestSuccessTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QuerySyncStatusByAliUidResponseBodyData() = default;
};
class QuerySyncStatusByAliUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QuerySyncStatusByAliUidResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QuerySyncStatusByAliUidResponseBody() {}

  explicit QuerySyncStatusByAliUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        QuerySyncStatusByAliUidResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySyncStatusByAliUidResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~QuerySyncStatusByAliUidResponseBody() = default;
};
class QuerySyncStatusByAliUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySyncStatusByAliUidResponseBody> body{};

  QuerySyncStatusByAliUidResponse() {}

  explicit QuerySyncStatusByAliUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySyncStatusByAliUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySyncStatusByAliUidResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySyncStatusByAliUidResponse() = default;
};
class RemoveMfaDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<string> serialNumber{};

  RemoveMfaDeviceRequest() {}

  explicit RemoveMfaDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~RemoveMfaDeviceRequest() = default;
};
class RemoveMfaDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveMfaDeviceResponseBody() {}

  explicit RemoveMfaDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveMfaDeviceResponseBody() = default;
};
class RemoveMfaDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveMfaDeviceResponseBody> body{};

  RemoveMfaDeviceResponse() {}

  explicit RemoveMfaDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveMfaDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveMfaDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveMfaDeviceResponse() = default;
};
class RemovePropertyRequest : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};

  RemovePropertyRequest() {}

  explicit RemovePropertyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
  }


  virtual ~RemovePropertyRequest() = default;
};
class RemovePropertyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemovePropertyResponseBody() {}

  explicit RemovePropertyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemovePropertyResponseBody() = default;
};
class RemovePropertyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemovePropertyResponseBody> body{};

  RemovePropertyResponse() {}

  explicit RemovePropertyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemovePropertyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemovePropertyResponseBody>(model1);
      }
    }
  }


  virtual ~RemovePropertyResponse() = default;
};
class RemoveUsersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> users{};

  RemoveUsersRequest() {}

  explicit RemoveUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveUsersRequest() = default;
};
class RemoveUsersResponseBodyRemoveUsersResultFailedUsers : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  RemoveUsersResponseBodyRemoveUsersResultFailedUsers() {}

  explicit RemoveUsersResponseBodyRemoveUsersResultFailedUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~RemoveUsersResponseBodyRemoveUsersResultFailedUsers() = default;
};
class RemoveUsersResponseBodyRemoveUsersResult : public Darabonba::Model {
public:
  shared_ptr<vector<RemoveUsersResponseBodyRemoveUsersResultFailedUsers>> failedUsers{};
  shared_ptr<vector<string>> removedUsers{};

  RemoveUsersResponseBodyRemoveUsersResult() {}

  explicit RemoveUsersResponseBodyRemoveUsersResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedUsers) {
      vector<boost::any> temp1;
      for(auto item1:*failedUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedUsers"] = boost::any(temp1);
    }
    if (removedUsers) {
      res["RemovedUsers"] = boost::any(*removedUsers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedUsers") != m.end() && !m["FailedUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedUsers"].type()) {
        vector<RemoveUsersResponseBodyRemoveUsersResultFailedUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveUsersResponseBodyRemoveUsersResultFailedUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedUsers = make_shared<vector<RemoveUsersResponseBodyRemoveUsersResultFailedUsers>>(expect1);
      }
    }
    if (m.find("RemovedUsers") != m.end() && !m["RemovedUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemovedUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemovedUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      removedUsers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveUsersResponseBodyRemoveUsersResult() = default;
};
class RemoveUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<RemoveUsersResponseBodyRemoveUsersResult> removeUsersResult{};
  shared_ptr<string> requestId{};

  RemoveUsersResponseBody() {}

  explicit RemoveUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (removeUsersResult) {
      res["RemoveUsersResult"] = removeUsersResult ? boost::any(removeUsersResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemoveUsersResult") != m.end() && !m["RemoveUsersResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemoveUsersResult"].type()) {
        RemoveUsersResponseBodyRemoveUsersResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemoveUsersResult"]));
        removeUsersResult = make_shared<RemoveUsersResponseBodyRemoveUsersResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveUsersResponseBody() = default;
};
class RemoveUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUsersResponseBody> body{};

  RemoveUsersResponse() {}

  explicit RemoveUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUsersResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUsersResponse() = default;
};
class ResetUserPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<long> notifyType{};
  shared_ptr<vector<string>> users{};

  ResetUserPasswordRequest() {}

  explicit ResetUserPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<long>(boost::any_cast<long>(m["NotifyType"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ResetUserPasswordRequest() = default;
};
class ResetUserPasswordResponseBodyResetUsersResultFailedUsers : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  ResetUserPasswordResponseBodyResetUsersResultFailedUsers() {}

  explicit ResetUserPasswordResponseBodyResetUsersResultFailedUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~ResetUserPasswordResponseBodyResetUsersResultFailedUsers() = default;
};
class ResetUserPasswordResponseBodyResetUsersResult : public Darabonba::Model {
public:
  shared_ptr<vector<ResetUserPasswordResponseBodyResetUsersResultFailedUsers>> failedUsers{};
  shared_ptr<vector<string>> resetUsers{};

  ResetUserPasswordResponseBodyResetUsersResult() {}

  explicit ResetUserPasswordResponseBodyResetUsersResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedUsers) {
      vector<boost::any> temp1;
      for(auto item1:*failedUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedUsers"] = boost::any(temp1);
    }
    if (resetUsers) {
      res["ResetUsers"] = boost::any(*resetUsers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedUsers") != m.end() && !m["FailedUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedUsers"].type()) {
        vector<ResetUserPasswordResponseBodyResetUsersResultFailedUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResetUserPasswordResponseBodyResetUsersResultFailedUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedUsers = make_shared<vector<ResetUserPasswordResponseBodyResetUsersResultFailedUsers>>(expect1);
      }
    }
    if (m.find("ResetUsers") != m.end() && !m["ResetUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResetUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResetUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resetUsers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ResetUserPasswordResponseBodyResetUsersResult() = default;
};
class ResetUserPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ResetUserPasswordResponseBodyResetUsersResult> resetUsersResult{};

  ResetUserPasswordResponseBody() {}

  explicit ResetUserPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resetUsersResult) {
      res["ResetUsersResult"] = resetUsersResult ? boost::any(resetUsersResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResetUsersResult") != m.end() && !m["ResetUsersResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResetUsersResult"].type()) {
        ResetUserPasswordResponseBodyResetUsersResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResetUsersResult"]));
        resetUsersResult = make_shared<ResetUserPasswordResponseBodyResetUsersResult>(model1);
      }
    }
  }


  virtual ~ResetUserPasswordResponseBody() = default;
};
class ResetUserPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetUserPasswordResponseBody> body{};

  ResetUserPasswordResponse() {}

  explicit ResetUserPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetUserPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetUserPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetUserPasswordResponse() = default;
};
class SetUserPropertyValueRequest : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<long> propertyValueId{};
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};

  SetUserPropertyValueRequest() {}

  explicit SetUserPropertyValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~SetUserPropertyValueRequest() = default;
};
class SetUserPropertyValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetUserPropertyValueResponseBody() {}

  explicit SetUserPropertyValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetUserPropertyValueResponseBody() = default;
};
class SetUserPropertyValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetUserPropertyValueResponseBody> body{};

  SetUserPropertyValueResponse() {}

  explicit SetUserPropertyValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetUserPropertyValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetUserPropertyValueResponseBody>(model1);
      }
    }
  }


  virtual ~SetUserPropertyValueResponse() = default;
};
class SyncAllEduInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncAllEduInfoResponseBody() {}

  explicit SyncAllEduInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~SyncAllEduInfoResponseBody() = default;
};
class SyncAllEduInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncAllEduInfoResponseBody> body{};

  SyncAllEduInfoResponse() {}

  explicit SyncAllEduInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncAllEduInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncAllEduInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SyncAllEduInfoResponse() = default;
};
class UnlockMfaDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<string> serialNumber{};

  UnlockMfaDeviceRequest() {}

  explicit UnlockMfaDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~UnlockMfaDeviceRequest() = default;
};
class UnlockMfaDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnlockMfaDeviceResponseBody() {}

  explicit UnlockMfaDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnlockMfaDeviceResponseBody() = default;
};
class UnlockMfaDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnlockMfaDeviceResponseBody> body{};

  UnlockMfaDeviceResponse() {}

  explicit UnlockMfaDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnlockMfaDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockMfaDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockMfaDeviceResponse() = default;
};
class UnlockUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoLockTime{};
  shared_ptr<vector<string>> users{};

  UnlockUsersRequest() {}

  explicit UnlockUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoLockTime) {
      res["AutoLockTime"] = boost::any(*autoLockTime);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoLockTime") != m.end() && !m["AutoLockTime"].empty()) {
      autoLockTime = make_shared<string>(boost::any_cast<string>(m["AutoLockTime"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UnlockUsersRequest() = default;
};
class UnlockUsersResponseBodyUnlockUsersResultFailedUsers : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  UnlockUsersResponseBodyUnlockUsersResultFailedUsers() {}

  explicit UnlockUsersResponseBodyUnlockUsersResultFailedUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~UnlockUsersResponseBodyUnlockUsersResultFailedUsers() = default;
};
class UnlockUsersResponseBodyUnlockUsersResult : public Darabonba::Model {
public:
  shared_ptr<vector<UnlockUsersResponseBodyUnlockUsersResultFailedUsers>> failedUsers{};
  shared_ptr<vector<string>> unlockedUsers{};

  UnlockUsersResponseBodyUnlockUsersResult() {}

  explicit UnlockUsersResponseBodyUnlockUsersResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedUsers) {
      vector<boost::any> temp1;
      for(auto item1:*failedUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedUsers"] = boost::any(temp1);
    }
    if (unlockedUsers) {
      res["UnlockedUsers"] = boost::any(*unlockedUsers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedUsers") != m.end() && !m["FailedUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedUsers"].type()) {
        vector<UnlockUsersResponseBodyUnlockUsersResultFailedUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UnlockUsersResponseBodyUnlockUsersResultFailedUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedUsers = make_shared<vector<UnlockUsersResponseBodyUnlockUsersResultFailedUsers>>(expect1);
      }
    }
    if (m.find("UnlockedUsers") != m.end() && !m["UnlockedUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnlockedUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnlockedUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unlockedUsers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UnlockUsersResponseBodyUnlockUsersResult() = default;
};
class UnlockUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UnlockUsersResponseBodyUnlockUsersResult> unlockUsersResult{};

  UnlockUsersResponseBody() {}

  explicit UnlockUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (unlockUsersResult) {
      res["UnlockUsersResult"] = unlockUsersResult ? boost::any(unlockUsersResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UnlockUsersResult") != m.end() && !m["UnlockUsersResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["UnlockUsersResult"].type()) {
        UnlockUsersResponseBodyUnlockUsersResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UnlockUsersResult"]));
        unlockUsersResult = make_shared<UnlockUsersResponseBodyUnlockUsersResult>(model1);
      }
    }
  }


  virtual ~UnlockUsersResponseBody() = default;
};
class UnlockUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnlockUsersResponseBody> body{};

  UnlockUsersResponse() {}

  explicit UnlockUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnlockUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockUsersResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockUsersResponse() = default;
};
class UpdatePropertyRequestPropertyValues : public Darabonba::Model {
public:
  shared_ptr<string> propertyValue{};
  shared_ptr<long> propertyValueId{};

  UpdatePropertyRequestPropertyValues() {}

  explicit UpdatePropertyRequestPropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
  }


  virtual ~UpdatePropertyRequestPropertyValues() = default;
};
class UpdatePropertyRequest : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyKey{};
  shared_ptr<vector<UpdatePropertyRequestPropertyValues>> propertyValues{};

  UpdatePropertyRequest() {}

  explicit UpdatePropertyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValues) {
      vector<boost::any> temp1;
      for(auto item1:*propertyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyValues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyValues"].type()) {
        vector<UpdatePropertyRequestPropertyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePropertyRequestPropertyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyValues = make_shared<vector<UpdatePropertyRequestPropertyValues>>(expect1);
      }
    }
  }


  virtual ~UpdatePropertyRequest() = default;
};
class UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyValue{};

  UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues() {}

  explicit UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
  }


  virtual ~UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues() = default;
};
class UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues : public Darabonba::Model {
public:
  shared_ptr<string> propertyValue{};
  shared_ptr<long> propertyValueId{};

  UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues() {}

  explicit UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    if (propertyValueId) {
      res["PropertyValueId"] = boost::any(*propertyValueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
    if (m.find("PropertyValueId") != m.end() && !m["PropertyValueId"].empty()) {
      propertyValueId = make_shared<long>(boost::any_cast<long>(m["PropertyValueId"]));
    }
  }


  virtual ~UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues() = default;
};
class UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel : public Darabonba::Model {
public:
  shared_ptr<vector<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues>> failedPropertyValues{};
  shared_ptr<vector<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues>> savePropertyValues{};

  UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel() {}

  explicit UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedPropertyValues) {
      vector<boost::any> temp1;
      for(auto item1:*failedPropertyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedPropertyValues"] = boost::any(temp1);
    }
    if (savePropertyValues) {
      vector<boost::any> temp1;
      for(auto item1:*savePropertyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SavePropertyValues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedPropertyValues") != m.end() && !m["FailedPropertyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedPropertyValues"].type()) {
        vector<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedPropertyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedPropertyValues = make_shared<vector<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues>>(expect1);
      }
    }
    if (m.find("SavePropertyValues") != m.end() && !m["SavePropertyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["SavePropertyValues"].type()) {
        vector<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SavePropertyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        savePropertyValues = make_shared<vector<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues>>(expect1);
      }
    }
  }


  virtual ~UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel() = default;
};
class UpdatePropertyResponseBodyUpdateResult : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyKey{};
  shared_ptr<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel> savePropertyValueModel{};

  UpdatePropertyResponseBodyUpdateResult() {}

  explicit UpdatePropertyResponseBodyUpdateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyKey) {
      res["PropertyKey"] = boost::any(*propertyKey);
    }
    if (savePropertyValueModel) {
      res["SavePropertyValueModel"] = savePropertyValueModel ? boost::any(savePropertyValueModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyKey") != m.end() && !m["PropertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["PropertyKey"]));
    }
    if (m.find("SavePropertyValueModel") != m.end() && !m["SavePropertyValueModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["SavePropertyValueModel"].type()) {
        UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SavePropertyValueModel"]));
        savePropertyValueModel = make_shared<UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel>(model1);
      }
    }
  }


  virtual ~UpdatePropertyResponseBodyUpdateResult() = default;
};
class UpdatePropertyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdatePropertyResponseBodyUpdateResult> updateResult{};

  UpdatePropertyResponseBody() {}

  explicit UpdatePropertyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (updateResult) {
      res["UpdateResult"] = updateResult ? boost::any(updateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpdateResult") != m.end() && !m["UpdateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateResult"].type()) {
        UpdatePropertyResponseBodyUpdateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateResult"]));
        updateResult = make_shared<UpdatePropertyResponseBodyUpdateResult>(model1);
      }
    }
  }


  virtual ~UpdatePropertyResponseBody() = default;
};
class UpdatePropertyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePropertyResponseBody> body{};

  UpdatePropertyResponse() {}

  explicit UpdatePropertyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePropertyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePropertyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePropertyResponse() = default;
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
  CheckUsedPropertyResponse checkUsedPropertyWithOptions(shared_ptr<CheckUsedPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckUsedPropertyResponse checkUsedProperty(shared_ptr<CheckUsedPropertyRequest> request);
  CheckUsedPropertyValueResponse checkUsedPropertyValueWithOptions(shared_ptr<CheckUsedPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckUsedPropertyValueResponse checkUsedPropertyValue(shared_ptr<CheckUsedPropertyValueRequest> request);
  CreatePropertyResponse createPropertyWithOptions(shared_ptr<CreatePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePropertyResponse createProperty(shared_ptr<CreatePropertyRequest> request);
  CreateUsersResponse createUsersWithOptions(shared_ptr<CreateUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUsersResponse createUsers(shared_ptr<CreateUsersRequest> request);
  DeleteUserPropertyValueResponse deleteUserPropertyValueWithOptions(shared_ptr<DeleteUserPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserPropertyValueResponse deleteUserPropertyValue(shared_ptr<DeleteUserPropertyValueRequest> request);
  DescribeMfaDevicesResponse describeMfaDevicesWithOptions(shared_ptr<DescribeMfaDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMfaDevicesResponse describeMfaDevices(shared_ptr<DescribeMfaDevicesRequest> request);
  DescribeUsersResponse describeUsersWithOptions(shared_ptr<DescribeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsersResponse describeUsers(shared_ptr<DescribeUsersRequest> request);
  FilterUsersResponse filterUsersWithOptions(shared_ptr<FilterUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FilterUsersResponse filterUsers(shared_ptr<FilterUsersRequest> request);
  GetManagerInfoByAuthCodeResponse getManagerInfoByAuthCodeWithOptions(shared_ptr<GetManagerInfoByAuthCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetManagerInfoByAuthCodeResponse getManagerInfoByAuthCode(shared_ptr<GetManagerInfoByAuthCodeRequest> request);
  ListPropertyResponse listPropertyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPropertyResponse listProperty();
  ListPropertyValueResponse listPropertyValueWithOptions(shared_ptr<ListPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPropertyValueResponse listPropertyValue(shared_ptr<ListPropertyValueRequest> request);
  LockMfaDeviceResponse lockMfaDeviceWithOptions(shared_ptr<LockMfaDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockMfaDeviceResponse lockMfaDevice(shared_ptr<LockMfaDeviceRequest> request);
  LockUsersResponse lockUsersWithOptions(shared_ptr<LockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockUsersResponse lockUsers(shared_ptr<LockUsersRequest> request);
  ModifyUserResponse modifyUserWithOptions(shared_ptr<ModifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserResponse modifyUser(shared_ptr<ModifyUserRequest> request);
  QuerySyncStatusByAliUidResponse querySyncStatusByAliUidWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySyncStatusByAliUidResponse querySyncStatusByAliUid();
  RemoveMfaDeviceResponse removeMfaDeviceWithOptions(shared_ptr<RemoveMfaDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveMfaDeviceResponse removeMfaDevice(shared_ptr<RemoveMfaDeviceRequest> request);
  RemovePropertyResponse removePropertyWithOptions(shared_ptr<RemovePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemovePropertyResponse removeProperty(shared_ptr<RemovePropertyRequest> request);
  RemoveUsersResponse removeUsersWithOptions(shared_ptr<RemoveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUsersResponse removeUsers(shared_ptr<RemoveUsersRequest> request);
  ResetUserPasswordResponse resetUserPasswordWithOptions(shared_ptr<ResetUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetUserPasswordResponse resetUserPassword(shared_ptr<ResetUserPasswordRequest> request);
  SetUserPropertyValueResponse setUserPropertyValueWithOptions(shared_ptr<SetUserPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserPropertyValueResponse setUserPropertyValue(shared_ptr<SetUserPropertyValueRequest> request);
  SyncAllEduInfoResponse syncAllEduInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncAllEduInfoResponse syncAllEduInfo();
  UnlockMfaDeviceResponse unlockMfaDeviceWithOptions(shared_ptr<UnlockMfaDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockMfaDeviceResponse unlockMfaDevice(shared_ptr<UnlockMfaDeviceRequest> request);
  UnlockUsersResponse unlockUsersWithOptions(shared_ptr<UnlockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockUsersResponse unlockUsers(shared_ptr<UnlockUsersRequest> request);
  UpdatePropertyResponse updatePropertyWithOptions(shared_ptr<UpdatePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePropertyResponse updateProperty(shared_ptr<UpdatePropertyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eds-user20210308

#endif
