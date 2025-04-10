// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GOVERNANCE20210120_H_
#define ALIBABACLOUD_GOVERNANCE20210120_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Governance20210120 {
class BatchEnrollAccountsRequestAccounts : public Darabonba::Model {
public:
  shared_ptr<long> accountUid{};

  BatchEnrollAccountsRequestAccounts() {}

  explicit BatchEnrollAccountsRequestAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
  }


  virtual ~BatchEnrollAccountsRequestAccounts() = default;
};
class BatchEnrollAccountsRequestBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<bool> skip{};
  shared_ptr<string> version{};

  BatchEnrollAccountsRequestBaselineItems() {}

  explicit BatchEnrollAccountsRequestBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<bool>(boost::any_cast<bool>(m["Skip"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~BatchEnrollAccountsRequestBaselineItems() = default;
};
class BatchEnrollAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<BatchEnrollAccountsRequestAccounts>> accounts{};
  shared_ptr<string> baselineId{};
  shared_ptr<vector<BatchEnrollAccountsRequestBaselineItems>> baselineItems{};
  shared_ptr<string> regionId{};

  BatchEnrollAccountsRequest() {}

  explicit BatchEnrollAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      vector<boost::any> temp1;
      for(auto item1:*accounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Accounts"] = boost::any(temp1);
    }
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(vector<boost::any>) == m["Accounts"].type()) {
        vector<BatchEnrollAccountsRequestAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Accounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchEnrollAccountsRequestAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accounts = make_shared<vector<BatchEnrollAccountsRequestAccounts>>(expect1);
      }
    }
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<BatchEnrollAccountsRequestBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchEnrollAccountsRequestBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<BatchEnrollAccountsRequestBaselineItems>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~BatchEnrollAccountsRequest() = default;
};
class BatchEnrollAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchEnrollAccountsResponseBody() {}

  explicit BatchEnrollAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchEnrollAccountsResponseBody() = default;
};
class BatchEnrollAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchEnrollAccountsResponseBody> body{};

  BatchEnrollAccountsResponse() {}

  explicit BatchEnrollAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchEnrollAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchEnrollAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchEnrollAccountsResponse() = default;
};
class CreateAccountFactoryBaselineRequestBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  CreateAccountFactoryBaselineRequestBaselineItems() {}

  explicit CreateAccountFactoryBaselineRequestBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateAccountFactoryBaselineRequestBaselineItems() = default;
};
class CreateAccountFactoryBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAccountFactoryBaselineRequestBaselineItems>> baselineItems{};
  shared_ptr<string> baselineName{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};

  CreateAccountFactoryBaselineRequest() {}

  explicit CreateAccountFactoryBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (baselineName) {
      res["BaselineName"] = boost::any(*baselineName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<CreateAccountFactoryBaselineRequestBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAccountFactoryBaselineRequestBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<CreateAccountFactoryBaselineRequestBaselineItems>>(expect1);
      }
    }
    if (m.find("BaselineName") != m.end() && !m["BaselineName"].empty()) {
      baselineName = make_shared<string>(boost::any_cast<string>(m["BaselineName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateAccountFactoryBaselineRequest() = default;
};
class CreateAccountFactoryBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> baselineId{};
  shared_ptr<string> requestId{};

  CreateAccountFactoryBaselineResponseBody() {}

  explicit CreateAccountFactoryBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccountFactoryBaselineResponseBody() = default;
};
class CreateAccountFactoryBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccountFactoryBaselineResponseBody> body{};

  CreateAccountFactoryBaselineResponse() {}

  explicit CreateAccountFactoryBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccountFactoryBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountFactoryBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountFactoryBaselineResponse() = default;
};
class DeleteAccountFactoryBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> baselineId{};
  shared_ptr<string> regionId{};

  DeleteAccountFactoryBaselineRequest() {}

  explicit DeleteAccountFactoryBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAccountFactoryBaselineRequest() = default;
};
class DeleteAccountFactoryBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccountFactoryBaselineResponseBody() {}

  explicit DeleteAccountFactoryBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccountFactoryBaselineResponseBody() = default;
};
class DeleteAccountFactoryBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccountFactoryBaselineResponseBody> body{};

  DeleteAccountFactoryBaselineResponse() {}

  explicit DeleteAccountFactoryBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccountFactoryBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountFactoryBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountFactoryBaselineResponse() = default;
};
class EnrollAccountRequestBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<bool> skip{};
  shared_ptr<string> version{};

  EnrollAccountRequestBaselineItems() {}

  explicit EnrollAccountRequestBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<bool>(boost::any_cast<bool>(m["Skip"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~EnrollAccountRequestBaselineItems() = default;
};
class EnrollAccountRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  EnrollAccountRequestTag() {}

  explicit EnrollAccountRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnrollAccountRequestTag() = default;
};
class EnrollAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNamePrefix{};
  shared_ptr<long> accountUid{};
  shared_ptr<string> baselineId{};
  shared_ptr<vector<EnrollAccountRequestBaselineItems>> baselineItems{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<long> payerAccountUid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resellAccountType{};
  shared_ptr<vector<EnrollAccountRequestTag>> tag{};

  EnrollAccountRequest() {}

  explicit EnrollAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNamePrefix) {
      res["AccountNamePrefix"] = boost::any(*accountNamePrefix);
    }
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (payerAccountUid) {
      res["PayerAccountUid"] = boost::any(*payerAccountUid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resellAccountType) {
      res["ResellAccountType"] = boost::any(*resellAccountType);
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
    if (m.find("AccountNamePrefix") != m.end() && !m["AccountNamePrefix"].empty()) {
      accountNamePrefix = make_shared<string>(boost::any_cast<string>(m["AccountNamePrefix"]));
    }
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<EnrollAccountRequestBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrollAccountRequestBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<EnrollAccountRequestBaselineItems>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("PayerAccountUid") != m.end() && !m["PayerAccountUid"].empty()) {
      payerAccountUid = make_shared<long>(boost::any_cast<long>(m["PayerAccountUid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResellAccountType") != m.end() && !m["ResellAccountType"].empty()) {
      resellAccountType = make_shared<string>(boost::any_cast<string>(m["ResellAccountType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<EnrollAccountRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrollAccountRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<EnrollAccountRequestTag>>(expect1);
      }
    }
  }


  virtual ~EnrollAccountRequest() = default;
};
class EnrollAccountShrinkRequestBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<bool> skip{};
  shared_ptr<string> version{};

  EnrollAccountShrinkRequestBaselineItems() {}

  explicit EnrollAccountShrinkRequestBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<bool>(boost::any_cast<bool>(m["Skip"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~EnrollAccountShrinkRequestBaselineItems() = default;
};
class EnrollAccountShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNamePrefix{};
  shared_ptr<long> accountUid{};
  shared_ptr<string> baselineId{};
  shared_ptr<vector<EnrollAccountShrinkRequestBaselineItems>> baselineItems{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<long> payerAccountUid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resellAccountType{};
  shared_ptr<string> tagShrink{};

  EnrollAccountShrinkRequest() {}

  explicit EnrollAccountShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNamePrefix) {
      res["AccountNamePrefix"] = boost::any(*accountNamePrefix);
    }
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (payerAccountUid) {
      res["PayerAccountUid"] = boost::any(*payerAccountUid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resellAccountType) {
      res["ResellAccountType"] = boost::any(*resellAccountType);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNamePrefix") != m.end() && !m["AccountNamePrefix"].empty()) {
      accountNamePrefix = make_shared<string>(boost::any_cast<string>(m["AccountNamePrefix"]));
    }
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<EnrollAccountShrinkRequestBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnrollAccountShrinkRequestBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<EnrollAccountShrinkRequestBaselineItems>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("PayerAccountUid") != m.end() && !m["PayerAccountUid"].empty()) {
      payerAccountUid = make_shared<long>(boost::any_cast<long>(m["PayerAccountUid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResellAccountType") != m.end() && !m["ResellAccountType"].empty()) {
      resellAccountType = make_shared<string>(boost::any_cast<string>(m["ResellAccountType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~EnrollAccountShrinkRequest() = default;
};
class EnrollAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> accountUid{};
  shared_ptr<string> requestId{};

  EnrollAccountResponseBody() {}

  explicit EnrollAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnrollAccountResponseBody() = default;
};
class EnrollAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnrollAccountResponseBody> body{};

  EnrollAccountResponse() {}

  explicit EnrollAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnrollAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnrollAccountResponseBody>(model1);
      }
    }
  }


  virtual ~EnrollAccountResponse() = default;
};
class GetAccountFactoryBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> baselineId{};
  shared_ptr<string> regionId{};

  GetAccountFactoryBaselineRequest() {}

  explicit GetAccountFactoryBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetAccountFactoryBaselineRequest() = default;
};
class GetAccountFactoryBaselineResponseBodyBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  GetAccountFactoryBaselineResponseBodyBaselineItems() {}

  explicit GetAccountFactoryBaselineResponseBodyBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetAccountFactoryBaselineResponseBodyBaselineItems() = default;
};
class GetAccountFactoryBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> baselineId{};
  shared_ptr<vector<GetAccountFactoryBaselineResponseBodyBaselineItems>> baselineItems{};
  shared_ptr<string> baselineName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};

  GetAccountFactoryBaselineResponseBody() {}

  explicit GetAccountFactoryBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (baselineName) {
      res["BaselineName"] = boost::any(*baselineName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<GetAccountFactoryBaselineResponseBodyBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccountFactoryBaselineResponseBodyBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<GetAccountFactoryBaselineResponseBodyBaselineItems>>(expect1);
      }
    }
    if (m.find("BaselineName") != m.end() && !m["BaselineName"].empty()) {
      baselineName = make_shared<string>(boost::any_cast<string>(m["BaselineName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetAccountFactoryBaselineResponseBody() = default;
};
class GetAccountFactoryBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountFactoryBaselineResponseBody> body{};

  GetAccountFactoryBaselineResponse() {}

  explicit GetAccountFactoryBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountFactoryBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountFactoryBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountFactoryBaselineResponse() = default;
};
class GetEnrolledAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountUid{};
  shared_ptr<string> regionId{};

  GetEnrolledAccountRequest() {}

  explicit GetEnrolledAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetEnrolledAccountRequest() = default;
};
class GetEnrolledAccountResponseBodyBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<bool> skip{};
  shared_ptr<string> version{};

  GetEnrolledAccountResponseBodyBaselineItems() {}

  explicit GetEnrolledAccountResponseBodyBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<bool>(boost::any_cast<bool>(m["Skip"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetEnrolledAccountResponseBodyBaselineItems() = default;
};
class GetEnrolledAccountResponseBodyErrorInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> recommend{};
  shared_ptr<string> requestId{};

  GetEnrolledAccountResponseBodyErrorInfo() {}

  explicit GetEnrolledAccountResponseBodyErrorInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (recommend) {
      res["Recommend"] = boost::any(*recommend);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Recommend") != m.end() && !m["Recommend"].empty()) {
      recommend = make_shared<string>(boost::any_cast<string>(m["Recommend"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEnrolledAccountResponseBodyErrorInfo() = default;
};
class GetEnrolledAccountResponseBodyInputsBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<bool> skip{};
  shared_ptr<string> version{};

  GetEnrolledAccountResponseBodyInputsBaselineItems() {}

  explicit GetEnrolledAccountResponseBodyInputsBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<bool>(boost::any_cast<bool>(m["Skip"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetEnrolledAccountResponseBodyInputsBaselineItems() = default;
};
class GetEnrolledAccountResponseBodyInputsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetEnrolledAccountResponseBodyInputsTag() {}

  explicit GetEnrolledAccountResponseBodyInputsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetEnrolledAccountResponseBodyInputsTag() = default;
};
class GetEnrolledAccountResponseBodyInputs : public Darabonba::Model {
public:
  shared_ptr<string> accountNamePrefix{};
  shared_ptr<long> accountUid{};
  shared_ptr<vector<GetEnrolledAccountResponseBodyInputsBaselineItems>> baselineItems{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<long> payerAccountUid{};
  shared_ptr<vector<GetEnrolledAccountResponseBodyInputsTag>> tag{};

  GetEnrolledAccountResponseBodyInputs() {}

  explicit GetEnrolledAccountResponseBodyInputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNamePrefix) {
      res["AccountNamePrefix"] = boost::any(*accountNamePrefix);
    }
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (payerAccountUid) {
      res["PayerAccountUid"] = boost::any(*payerAccountUid);
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
    if (m.find("AccountNamePrefix") != m.end() && !m["AccountNamePrefix"].empty()) {
      accountNamePrefix = make_shared<string>(boost::any_cast<string>(m["AccountNamePrefix"]));
    }
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<GetEnrolledAccountResponseBodyInputsBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnrolledAccountResponseBodyInputsBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<GetEnrolledAccountResponseBodyInputsBaselineItems>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("PayerAccountUid") != m.end() && !m["PayerAccountUid"].empty()) {
      payerAccountUid = make_shared<long>(boost::any_cast<long>(m["PayerAccountUid"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetEnrolledAccountResponseBodyInputsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnrolledAccountResponseBodyInputsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetEnrolledAccountResponseBodyInputsTag>>(expect1);
      }
    }
  }


  virtual ~GetEnrolledAccountResponseBodyInputs() = default;
};
class GetEnrolledAccountResponseBodyProgress : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  GetEnrolledAccountResponseBodyProgress() {}

  explicit GetEnrolledAccountResponseBodyProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetEnrolledAccountResponseBodyProgress() = default;
};
class GetEnrolledAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> accountUid{};
  shared_ptr<string> baselineId{};
  shared_ptr<vector<GetEnrolledAccountResponseBodyBaselineItems>> baselineItems{};
  shared_ptr<string> createTime{};
  shared_ptr<string> displayName{};
  shared_ptr<GetEnrolledAccountResponseBodyErrorInfo> errorInfo{};
  shared_ptr<string> folderId{};
  shared_ptr<bool> initialized{};
  shared_ptr<GetEnrolledAccountResponseBodyInputs> inputs{};
  shared_ptr<long> masterAccountUid{};
  shared_ptr<long> payerAccountUid{};
  shared_ptr<vector<GetEnrolledAccountResponseBodyProgress>> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  GetEnrolledAccountResponseBody() {}

  explicit GetEnrolledAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (errorInfo) {
      res["ErrorInfo"] = errorInfo ? boost::any(errorInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (initialized) {
      res["Initialized"] = boost::any(*initialized);
    }
    if (inputs) {
      res["Inputs"] = inputs ? boost::any(inputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (masterAccountUid) {
      res["MasterAccountUid"] = boost::any(*masterAccountUid);
    }
    if (payerAccountUid) {
      res["PayerAccountUid"] = boost::any(*payerAccountUid);
    }
    if (progress) {
      vector<boost::any> temp1;
      for(auto item1:*progress){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Progress"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<GetEnrolledAccountResponseBodyBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnrolledAccountResponseBodyBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<GetEnrolledAccountResponseBodyBaselineItems>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ErrorInfo"].type()) {
        GetEnrolledAccountResponseBodyErrorInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ErrorInfo"]));
        errorInfo = make_shared<GetEnrolledAccountResponseBodyErrorInfo>(model1);
      }
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Initialized") != m.end() && !m["Initialized"].empty()) {
      initialized = make_shared<bool>(boost::any_cast<bool>(m["Initialized"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inputs"].type()) {
        GetEnrolledAccountResponseBodyInputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inputs"]));
        inputs = make_shared<GetEnrolledAccountResponseBodyInputs>(model1);
      }
    }
    if (m.find("MasterAccountUid") != m.end() && !m["MasterAccountUid"].empty()) {
      masterAccountUid = make_shared<long>(boost::any_cast<long>(m["MasterAccountUid"]));
    }
    if (m.find("PayerAccountUid") != m.end() && !m["PayerAccountUid"].empty()) {
      payerAccountUid = make_shared<long>(boost::any_cast<long>(m["PayerAccountUid"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      if (typeid(vector<boost::any>) == m["Progress"].type()) {
        vector<GetEnrolledAccountResponseBodyProgress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Progress"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnrolledAccountResponseBodyProgress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        progress = make_shared<vector<GetEnrolledAccountResponseBodyProgress>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetEnrolledAccountResponseBody() = default;
};
class GetEnrolledAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnrolledAccountResponseBody> body{};

  GetEnrolledAccountResponse() {}

  explicit GetEnrolledAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnrolledAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnrolledAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnrolledAccountResponse() = default;
};
class ListAccountFactoryBaselineItemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> versions{};

  ListAccountFactoryBaselineItemsRequest() {}

  explicit ListAccountFactoryBaselineItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (versions) {
      res["Versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Names"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Names"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      names = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Versions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAccountFactoryBaselineItemsRequest() = default;
};
class ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn() {}

  explicit ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn() = default;
};
class ListAccountFactoryBaselineItemsResponseBodyBaselineItems : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn>> dependsOn{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListAccountFactoryBaselineItemsResponseBodyBaselineItems() {}

  explicit ListAccountFactoryBaselineItemsResponseBodyBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dependsOn) {
      vector<boost::any> temp1;
      for(auto item1:*dependsOn){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DependsOn"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DependsOn") != m.end() && !m["DependsOn"].empty()) {
      if (typeid(vector<boost::any>) == m["DependsOn"].type()) {
        vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DependsOn"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dependsOn = make_shared<vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAccountFactoryBaselineItemsResponseBodyBaselineItems() = default;
};
class ListAccountFactoryBaselineItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems>> baselineItems{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListAccountFactoryBaselineItemsResponseBody() {}

  explicit ListAccountFactoryBaselineItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
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
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountFactoryBaselineItemsResponseBodyBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAccountFactoryBaselineItemsResponseBody() = default;
};
class ListAccountFactoryBaselineItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountFactoryBaselineItemsResponseBody> body{};

  ListAccountFactoryBaselineItemsResponse() {}

  explicit ListAccountFactoryBaselineItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountFactoryBaselineItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountFactoryBaselineItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountFactoryBaselineItemsResponse() = default;
};
class ListAccountFactoryBaselinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListAccountFactoryBaselinesRequest() {}

  explicit ListAccountFactoryBaselinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAccountFactoryBaselinesRequest() = default;
};
class ListAccountFactoryBaselinesResponseBodyBaselines : public Darabonba::Model {
public:
  shared_ptr<string> baselineId{};
  shared_ptr<string> baselineName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};

  ListAccountFactoryBaselinesResponseBodyBaselines() {}

  explicit ListAccountFactoryBaselinesResponseBodyBaselines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (baselineName) {
      res["BaselineName"] = boost::any(*baselineName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("BaselineName") != m.end() && !m["BaselineName"].empty()) {
      baselineName = make_shared<string>(boost::any_cast<string>(m["BaselineName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListAccountFactoryBaselinesResponseBodyBaselines() = default;
};
class ListAccountFactoryBaselinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountFactoryBaselinesResponseBodyBaselines>> baselines{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListAccountFactoryBaselinesResponseBody() {}

  explicit ListAccountFactoryBaselinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselines) {
      vector<boost::any> temp1;
      for(auto item1:*baselines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Baselines"] = boost::any(temp1);
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
    if (m.find("Baselines") != m.end() && !m["Baselines"].empty()) {
      if (typeid(vector<boost::any>) == m["Baselines"].type()) {
        vector<ListAccountFactoryBaselinesResponseBodyBaselines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Baselines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountFactoryBaselinesResponseBodyBaselines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselines = make_shared<vector<ListAccountFactoryBaselinesResponseBodyBaselines>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAccountFactoryBaselinesResponseBody() = default;
};
class ListAccountFactoryBaselinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountFactoryBaselinesResponseBody> body{};

  ListAccountFactoryBaselinesResponse() {}

  explicit ListAccountFactoryBaselinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountFactoryBaselinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountFactoryBaselinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountFactoryBaselinesResponse() = default;
};
class ListEnrolledAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListEnrolledAccountsRequest() {}

  explicit ListEnrolledAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListEnrolledAccountsRequest() = default;
};
class ListEnrolledAccountsResponseBodyEnrolledAccounts : public Darabonba::Model {
public:
  shared_ptr<long> accountUid{};
  shared_ptr<string> baselineId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<long> payerAccountUid{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  ListEnrolledAccountsResponseBodyEnrolledAccounts() {}

  explicit ListEnrolledAccountsResponseBodyEnrolledAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (payerAccountUid) {
      res["PayerAccountUid"] = boost::any(*payerAccountUid);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<long>(boost::any_cast<long>(m["AccountUid"]));
    }
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("PayerAccountUid") != m.end() && !m["PayerAccountUid"].empty()) {
      payerAccountUid = make_shared<long>(boost::any_cast<long>(m["PayerAccountUid"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListEnrolledAccountsResponseBodyEnrolledAccounts() = default;
};
class ListEnrolledAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEnrolledAccountsResponseBodyEnrolledAccounts>> enrolledAccounts{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListEnrolledAccountsResponseBody() {}

  explicit ListEnrolledAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enrolledAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*enrolledAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnrolledAccounts"] = boost::any(temp1);
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
    if (m.find("EnrolledAccounts") != m.end() && !m["EnrolledAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["EnrolledAccounts"].type()) {
        vector<ListEnrolledAccountsResponseBodyEnrolledAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnrolledAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnrolledAccountsResponseBodyEnrolledAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        enrolledAccounts = make_shared<vector<ListEnrolledAccountsResponseBodyEnrolledAccounts>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEnrolledAccountsResponseBody() = default;
};
class ListEnrolledAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnrolledAccountsResponseBody> body{};

  ListEnrolledAccountsResponse() {}

  explicit ListEnrolledAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnrolledAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnrolledAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnrolledAccountsResponse() = default;
};
class ListEvaluationMetadataRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> regionId{};

  ListEvaluationMetadataRequest() {}

  explicit ListEvaluationMetadataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListEvaluationMetadataRequest() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance : public Darabonba::Model {
public:
  shared_ptr<string> buttonName{};
  shared_ptr<string> buttonRef{};
  shared_ptr<string> content{};
  shared_ptr<string> title{};

  ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttonName) {
      res["ButtonName"] = boost::any(*buttonName);
    }
    if (buttonRef) {
      res["ButtonRef"] = boost::any(*buttonRef);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ButtonName") != m.end() && !m["ButtonName"].empty()) {
      buttonName = make_shared<string>(boost::any_cast<string>(m["ButtonName"]));
    }
    if (m.find("ButtonRef") != m.end() && !m["ButtonRef"].empty()) {
      buttonRef = make_shared<string>(boost::any_cast<string>(m["ButtonRef"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions : public Darabonba::Model {
public:
  shared_ptr<string> classification{};
  shared_ptr<string> costDescription{};
  shared_ptr<string> description{};
  shared_ptr<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance>> guidance{};
  shared_ptr<string> notice{};
  shared_ptr<string> suggestion{};

  ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (costDescription) {
      res["CostDescription"] = boost::any(*costDescription);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (guidance) {
      vector<boost::any> temp1;
      for(auto item1:*guidance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Guidance"] = boost::any(temp1);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("CostDescription") != m.end() && !m["CostDescription"].empty()) {
      costDescription = make_shared<string>(boost::any_cast<string>(m["CostDescription"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Guidance") != m.end() && !m["Guidance"].empty()) {
      if (typeid(vector<boost::any>) == m["Guidance"].type()) {
        vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Guidance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        guidance = make_shared<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActionsGuidance>>(expect1);
      }
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation : public Darabonba::Model {
public:
  shared_ptr<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions>> actions{};
  shared_ptr<string> remediationType{};

  ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Actions"] = boost::any(temp1);
    }
    if (remediationType) {
      res["RemediationType"] = boost::any(*remediationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Actions") != m.end() && !m["Actions"].empty()) {
      if (typeid(vector<boost::any>) == m["Actions"].type()) {
        vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediationActions>>(expect1);
      }
    }
    if (m.find("RemediationType") != m.end() && !m["RemediationType"].empty()) {
      remediationType = make_shared<string>(boost::any_cast<string>(m["RemediationType"]));
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation>> remediation{};

  ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remediation) {
      vector<boost::any> temp1;
      for(auto item1:*remediation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Remediation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Remediation") != m.end() && !m["Remediation"].empty()) {
      if (typeid(vector<boost::any>) == m["Remediation"].type()) {
        vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Remediation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        remediation = make_shared<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadataRemediation>>(expect1);
      }
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyType{};

  ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyType) {
      res["PropertyType"] = boost::any(*propertyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyType") != m.end() && !m["PropertyType"].empty()) {
      propertyType = make_shared<string>(boost::any_cast<string>(m["PropertyType"]));
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata>> resourcePropertyMetadata{};

  ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourcePropertyMetadata) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePropertyMetadata){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePropertyMetadata"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourcePropertyMetadata") != m.end() && !m["ResourcePropertyMetadata"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePropertyMetadata"].type()) {
        vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePropertyMetadata"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePropertyMetadata = make_shared<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata>>(expect1);
      }
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> recommendationLevel{};
  shared_ptr<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata> remediationMetadata{};
  shared_ptr<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata> resourceMetadata{};
  shared_ptr<string> scope{};
  shared_ptr<string> stage{};

  ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (recommendationLevel) {
      res["RecommendationLevel"] = boost::any(*recommendationLevel);
    }
    if (remediationMetadata) {
      res["RemediationMetadata"] = remediationMetadata ? boost::any(remediationMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceMetadata) {
      res["ResourceMetadata"] = resourceMetadata ? boost::any(resourceMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RecommendationLevel") != m.end() && !m["RecommendationLevel"].empty()) {
      recommendationLevel = make_shared<string>(boost::any_cast<string>(m["RecommendationLevel"]));
    }
    if (m.find("RemediationMetadata") != m.end() && !m["RemediationMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemediationMetadata"].type()) {
        ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemediationMetadata"]));
        remediationMetadata = make_shared<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata>(model1);
      }
    }
    if (m.find("ResourceMetadata") != m.end() && !m["ResourceMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceMetadata"].type()) {
        ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceMetadata"]));
        resourceMetadata = make_shared<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata() = default;
};
class ListEvaluationMetadataResponseBodyEvaluationMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata>> metadata{};
  shared_ptr<string> type{};

  ListEvaluationMetadataResponseBodyEvaluationMetadata() {}

  explicit ListEvaluationMetadataResponseBodyEvaluationMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      vector<boost::any> temp1;
      for(auto item1:*metadata){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metadata"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      if (typeid(vector<boost::any>) == m["Metadata"].type()) {
        vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metadata"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metadata = make_shared<vector<ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadata() = default;
};
class ListEvaluationMetadataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEvaluationMetadataResponseBodyEvaluationMetadata>> evaluationMetadata{};
  shared_ptr<string> requestId{};

  ListEvaluationMetadataResponseBody() {}

  explicit ListEvaluationMetadataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationMetadata) {
      vector<boost::any> temp1;
      for(auto item1:*evaluationMetadata){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EvaluationMetadata"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationMetadata") != m.end() && !m["EvaluationMetadata"].empty()) {
      if (typeid(vector<boost::any>) == m["EvaluationMetadata"].type()) {
        vector<ListEvaluationMetadataResponseBodyEvaluationMetadata> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EvaluationMetadata"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetadataResponseBodyEvaluationMetadata model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        evaluationMetadata = make_shared<vector<ListEvaluationMetadataResponseBodyEvaluationMetadata>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEvaluationMetadataResponseBody() = default;
};
class ListEvaluationMetadataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEvaluationMetadataResponseBody> body{};

  ListEvaluationMetadataResponse() {}

  explicit ListEvaluationMetadataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEvaluationMetadataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEvaluationMetadataResponseBody>(model1);
      }
    }
  }


  virtual ~ListEvaluationMetadataResponse() = default;
};
class ListEvaluationMetricDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> id{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> snapshotId{};

  ListEvaluationMetricDetailsRequest() {}

  explicit ListEvaluationMetricDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~ListEvaluationMetricDetailsRequest() = default;
};
class ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties : public Darabonba::Model {
public:
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyValue{};

  ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties() {}

  explicit ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
  }


  virtual ~ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties() = default;
};
class ListEvaluationMetricDetailsResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> complianceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceClassification{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties>> resourceProperties{};
  shared_ptr<string> resourceType{};

  ListEvaluationMetricDetailsResponseBodyResources() {}

  explicit ListEvaluationMetricDetailsResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (complianceType) {
      res["ComplianceType"] = boost::any(*complianceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceClassification) {
      res["ResourceClassification"] = boost::any(*resourceClassification);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceProperties) {
      vector<boost::any> temp1;
      for(auto item1:*resourceProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceProperties"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComplianceType") != m.end() && !m["ComplianceType"].empty()) {
      complianceType = make_shared<string>(boost::any_cast<string>(m["ComplianceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceClassification") != m.end() && !m["ResourceClassification"].empty()) {
      resourceClassification = make_shared<string>(boost::any_cast<string>(m["ResourceClassification"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceProperties") != m.end() && !m["ResourceProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceProperties"].type()) {
        vector<ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceProperties = make_shared<vector<ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListEvaluationMetricDetailsResponseBodyResources() = default;
};
class ListEvaluationMetricDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListEvaluationMetricDetailsResponseBodyResources>> resources{};

  ListEvaluationMetricDetailsResponseBody() {}

  explicit ListEvaluationMetricDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
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
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListEvaluationMetricDetailsResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationMetricDetailsResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListEvaluationMetricDetailsResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~ListEvaluationMetricDetailsResponseBody() = default;
};
class ListEvaluationMetricDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEvaluationMetricDetailsResponseBody> body{};

  ListEvaluationMetricDetailsResponse() {}

  explicit ListEvaluationMetricDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEvaluationMetricDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEvaluationMetricDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEvaluationMetricDetailsResponse() = default;
};
class ListEvaluationResultsRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  ListEvaluationResultsRequestFilters() {}

  explicit ListEvaluationResultsRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListEvaluationResultsRequestFilters() = default;
};
class ListEvaluationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<vector<ListEvaluationResultsRequestFilters>> filters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> snapshotId{};

  ListEvaluationResultsRequest() {}

  explicit ListEvaluationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListEvaluationResultsRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationResultsRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListEvaluationResultsRequestFilters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~ListEvaluationResultsRequest() = default;
};
class ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo() {}

  explicit ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo() = default;
};
class ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary : public Darabonba::Model {
public:
  shared_ptr<long> nonCompliant{};

  ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary() {}

  explicit ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nonCompliant) {
      res["NonCompliant"] = boost::any(*nonCompliant);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NonCompliant") != m.end() && !m["NonCompliant"].empty()) {
      nonCompliant = make_shared<long>(boost::any_cast<long>(m["NonCompliant"]));
    }
  }


  virtual ~ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary() = default;
};
class ListEvaluationResultsResponseBodyResultsMetricResults : public Darabonba::Model {
public:
  shared_ptr<ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo> errorInfo{};
  shared_ptr<string> evaluationTime{};
  shared_ptr<string> id{};
  shared_ptr<ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary> resourcesSummary{};
  shared_ptr<double> result{};
  shared_ptr<string> risk{};
  shared_ptr<string> status{};

  ListEvaluationResultsResponseBodyResultsMetricResults() {}

  explicit ListEvaluationResultsResponseBodyResultsMetricResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorInfo) {
      res["ErrorInfo"] = errorInfo ? boost::any(errorInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (evaluationTime) {
      res["EvaluationTime"] = boost::any(*evaluationTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (resourcesSummary) {
      res["ResourcesSummary"] = resourcesSummary ? boost::any(resourcesSummary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (risk) {
      res["Risk"] = boost::any(*risk);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ErrorInfo"].type()) {
        ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ErrorInfo"]));
        errorInfo = make_shared<ListEvaluationResultsResponseBodyResultsMetricResultsErrorInfo>(model1);
      }
    }
    if (m.find("EvaluationTime") != m.end() && !m["EvaluationTime"].empty()) {
      evaluationTime = make_shared<string>(boost::any_cast<string>(m["EvaluationTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ResourcesSummary") != m.end() && !m["ResourcesSummary"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcesSummary"].type()) {
        ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcesSummary"]));
        resourcesSummary = make_shared<ListEvaluationResultsResponseBodyResultsMetricResultsResourcesSummary>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<double>(boost::any_cast<double>(m["Result"]));
    }
    if (m.find("Risk") != m.end() && !m["Risk"].empty()) {
      risk = make_shared<string>(boost::any_cast<string>(m["Risk"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListEvaluationResultsResponseBodyResultsMetricResults() = default;
};
class ListEvaluationResultsResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> evaluationTime{};
  shared_ptr<vector<ListEvaluationResultsResponseBodyResultsMetricResults>> metricResults{};
  shared_ptr<string> status{};
  shared_ptr<double> totalScore{};

  ListEvaluationResultsResponseBodyResults() {}

  explicit ListEvaluationResultsResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationTime) {
      res["EvaluationTime"] = boost::any(*evaluationTime);
    }
    if (metricResults) {
      vector<boost::any> temp1;
      for(auto item1:*metricResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricResults"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalScore) {
      res["TotalScore"] = boost::any(*totalScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationTime") != m.end() && !m["EvaluationTime"].empty()) {
      evaluationTime = make_shared<string>(boost::any_cast<string>(m["EvaluationTime"]));
    }
    if (m.find("MetricResults") != m.end() && !m["MetricResults"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricResults"].type()) {
        vector<ListEvaluationResultsResponseBodyResultsMetricResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationResultsResponseBodyResultsMetricResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricResults = make_shared<vector<ListEvaluationResultsResponseBodyResultsMetricResults>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalScore") != m.end() && !m["TotalScore"].empty()) {
      totalScore = make_shared<double>(boost::any_cast<double>(m["TotalScore"]));
    }
  }


  virtual ~ListEvaluationResultsResponseBodyResults() = default;
};
class ListEvaluationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> requestId{};
  shared_ptr<ListEvaluationResultsResponseBodyResults> results{};

  ListEvaluationResultsResponseBody() {}

  explicit ListEvaluationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      res["Results"] = results ? boost::any(results->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(map<string, boost::any>) == m["Results"].type()) {
        ListEvaluationResultsResponseBodyResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Results"]));
        results = make_shared<ListEvaluationResultsResponseBodyResults>(model1);
      }
    }
  }


  virtual ~ListEvaluationResultsResponseBody() = default;
};
class ListEvaluationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEvaluationResultsResponseBody> body{};

  ListEvaluationResultsResponse() {}

  explicit ListEvaluationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEvaluationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEvaluationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEvaluationResultsResponse() = default;
};
class ListEvaluationScoreHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startDate{};

  ListEvaluationScoreHistoryRequest() {}

  explicit ListEvaluationScoreHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ListEvaluationScoreHistoryRequest() = default;
};
class ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory : public Darabonba::Model {
public:
  shared_ptr<string> evaluationTime{};
  shared_ptr<double> score{};

  ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory() {}

  explicit ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationTime) {
      res["EvaluationTime"] = boost::any(*evaluationTime);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationTime") != m.end() && !m["EvaluationTime"].empty()) {
      evaluationTime = make_shared<string>(boost::any_cast<string>(m["EvaluationTime"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory() = default;
};
class ListEvaluationScoreHistoryResponseBodyScoreHistory : public Darabonba::Model {
public:
  shared_ptr<vector<ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory>> totalScoreHistory{};

  ListEvaluationScoreHistoryResponseBodyScoreHistory() {}

  explicit ListEvaluationScoreHistoryResponseBodyScoreHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalScoreHistory) {
      vector<boost::any> temp1;
      for(auto item1:*totalScoreHistory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TotalScoreHistory"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalScoreHistory") != m.end() && !m["TotalScoreHistory"].empty()) {
      if (typeid(vector<boost::any>) == m["TotalScoreHistory"].type()) {
        vector<ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TotalScoreHistory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        totalScoreHistory = make_shared<vector<ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory>>(expect1);
      }
    }
  }


  virtual ~ListEvaluationScoreHistoryResponseBodyScoreHistory() = default;
};
class ListEvaluationScoreHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListEvaluationScoreHistoryResponseBodyScoreHistory> scoreHistory{};

  ListEvaluationScoreHistoryResponseBody() {}

  explicit ListEvaluationScoreHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scoreHistory) {
      res["ScoreHistory"] = scoreHistory ? boost::any(scoreHistory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScoreHistory") != m.end() && !m["ScoreHistory"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScoreHistory"].type()) {
        ListEvaluationScoreHistoryResponseBodyScoreHistory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScoreHistory"]));
        scoreHistory = make_shared<ListEvaluationScoreHistoryResponseBodyScoreHistory>(model1);
      }
    }
  }


  virtual ~ListEvaluationScoreHistoryResponseBody() = default;
};
class ListEvaluationScoreHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEvaluationScoreHistoryResponseBody> body{};

  ListEvaluationScoreHistoryResponse() {}

  explicit ListEvaluationScoreHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEvaluationScoreHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEvaluationScoreHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListEvaluationScoreHistoryResponse() = default;
};
class RunEvaluationRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<vector<string>> metricIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scope{};

  RunEvaluationRequest() {}

  explicit RunEvaluationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (metricIds) {
      res["MetricIds"] = boost::any(*metricIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("MetricIds") != m.end() && !m["MetricIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MetricIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MetricIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      metricIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~RunEvaluationRequest() = default;
};
class RunEvaluationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> metricIdsShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scope{};

  RunEvaluationShrinkRequest() {}

  explicit RunEvaluationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (metricIdsShrink) {
      res["MetricIds"] = boost::any(*metricIdsShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("MetricIds") != m.end() && !m["MetricIds"].empty()) {
      metricIdsShrink = make_shared<string>(boost::any_cast<string>(m["MetricIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~RunEvaluationShrinkRequest() = default;
};
class RunEvaluationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RunEvaluationResponseBody() {}

  explicit RunEvaluationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RunEvaluationResponseBody() = default;
};
class RunEvaluationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunEvaluationResponseBody> body{};

  RunEvaluationResponse() {}

  explicit RunEvaluationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunEvaluationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunEvaluationResponseBody>(model1);
      }
    }
  }


  virtual ~RunEvaluationResponse() = default;
};
class UpdateAccountFactoryBaselineRequestBaselineItems : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  UpdateAccountFactoryBaselineRequestBaselineItems() {}

  explicit UpdateAccountFactoryBaselineRequestBaselineItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~UpdateAccountFactoryBaselineRequestBaselineItems() = default;
};
class UpdateAccountFactoryBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> baselineId{};
  shared_ptr<vector<UpdateAccountFactoryBaselineRequestBaselineItems>> baselineItems{};
  shared_ptr<string> baselineName{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};

  UpdateAccountFactoryBaselineRequest() {}

  explicit UpdateAccountFactoryBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (baselineItems) {
      vector<boost::any> temp1;
      for(auto item1:*baselineItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BaselineItems"] = boost::any(temp1);
    }
    if (baselineName) {
      res["BaselineName"] = boost::any(*baselineName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("BaselineItems") != m.end() && !m["BaselineItems"].empty()) {
      if (typeid(vector<boost::any>) == m["BaselineItems"].type()) {
        vector<UpdateAccountFactoryBaselineRequestBaselineItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BaselineItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAccountFactoryBaselineRequestBaselineItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        baselineItems = make_shared<vector<UpdateAccountFactoryBaselineRequestBaselineItems>>(expect1);
      }
    }
    if (m.find("BaselineName") != m.end() && !m["BaselineName"].empty()) {
      baselineName = make_shared<string>(boost::any_cast<string>(m["BaselineName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateAccountFactoryBaselineRequest() = default;
};
class UpdateAccountFactoryBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAccountFactoryBaselineResponseBody() {}

  explicit UpdateAccountFactoryBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAccountFactoryBaselineResponseBody() = default;
};
class UpdateAccountFactoryBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccountFactoryBaselineResponseBody> body{};

  UpdateAccountFactoryBaselineResponse() {}

  explicit UpdateAccountFactoryBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAccountFactoryBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccountFactoryBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccountFactoryBaselineResponse() = default;
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
  BatchEnrollAccountsResponse batchEnrollAccountsWithOptions(shared_ptr<BatchEnrollAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchEnrollAccountsResponse batchEnrollAccounts(shared_ptr<BatchEnrollAccountsRequest> request);
  CreateAccountFactoryBaselineResponse createAccountFactoryBaselineWithOptions(shared_ptr<CreateAccountFactoryBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountFactoryBaselineResponse createAccountFactoryBaseline(shared_ptr<CreateAccountFactoryBaselineRequest> request);
  DeleteAccountFactoryBaselineResponse deleteAccountFactoryBaselineWithOptions(shared_ptr<DeleteAccountFactoryBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountFactoryBaselineResponse deleteAccountFactoryBaseline(shared_ptr<DeleteAccountFactoryBaselineRequest> request);
  EnrollAccountResponse enrollAccountWithOptions(shared_ptr<EnrollAccountRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnrollAccountResponse enrollAccount(shared_ptr<EnrollAccountRequest> request);
  GetAccountFactoryBaselineResponse getAccountFactoryBaselineWithOptions(shared_ptr<GetAccountFactoryBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountFactoryBaselineResponse getAccountFactoryBaseline(shared_ptr<GetAccountFactoryBaselineRequest> request);
  GetEnrolledAccountResponse getEnrolledAccountWithOptions(shared_ptr<GetEnrolledAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnrolledAccountResponse getEnrolledAccount(shared_ptr<GetEnrolledAccountRequest> request);
  ListAccountFactoryBaselineItemsResponse listAccountFactoryBaselineItemsWithOptions(shared_ptr<ListAccountFactoryBaselineItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountFactoryBaselineItemsResponse listAccountFactoryBaselineItems(shared_ptr<ListAccountFactoryBaselineItemsRequest> request);
  ListAccountFactoryBaselinesResponse listAccountFactoryBaselinesWithOptions(shared_ptr<ListAccountFactoryBaselinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountFactoryBaselinesResponse listAccountFactoryBaselines(shared_ptr<ListAccountFactoryBaselinesRequest> request);
  ListEnrolledAccountsResponse listEnrolledAccountsWithOptions(shared_ptr<ListEnrolledAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnrolledAccountsResponse listEnrolledAccounts(shared_ptr<ListEnrolledAccountsRequest> request);
  ListEvaluationMetadataResponse listEvaluationMetadataWithOptions(shared_ptr<ListEvaluationMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEvaluationMetadataResponse listEvaluationMetadata(shared_ptr<ListEvaluationMetadataRequest> request);
  ListEvaluationMetricDetailsResponse listEvaluationMetricDetailsWithOptions(shared_ptr<ListEvaluationMetricDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEvaluationMetricDetailsResponse listEvaluationMetricDetails(shared_ptr<ListEvaluationMetricDetailsRequest> request);
  ListEvaluationResultsResponse listEvaluationResultsWithOptions(shared_ptr<ListEvaluationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEvaluationResultsResponse listEvaluationResults(shared_ptr<ListEvaluationResultsRequest> request);
  ListEvaluationScoreHistoryResponse listEvaluationScoreHistoryWithOptions(shared_ptr<ListEvaluationScoreHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEvaluationScoreHistoryResponse listEvaluationScoreHistory(shared_ptr<ListEvaluationScoreHistoryRequest> request);
  RunEvaluationResponse runEvaluationWithOptions(shared_ptr<RunEvaluationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunEvaluationResponse runEvaluation(shared_ptr<RunEvaluationRequest> request);
  UpdateAccountFactoryBaselineResponse updateAccountFactoryBaselineWithOptions(shared_ptr<UpdateAccountFactoryBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccountFactoryBaselineResponse updateAccountFactoryBaseline(shared_ptr<UpdateAccountFactoryBaselineRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Governance20210120

#endif
