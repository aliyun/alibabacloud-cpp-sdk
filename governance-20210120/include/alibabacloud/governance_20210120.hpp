// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GOVERNANCE20210120_H_
#define ALIBABACLOUD_GOVERNANCE20210120_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Governance20210120 {
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
class EnrollAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNamePrefix{};
  shared_ptr<long> accountUid{};
  shared_ptr<vector<EnrollAccountRequestBaselineItems>> baselineItems{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<long> payerAccountUid{};
  shared_ptr<string> regionId{};

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
  }


  virtual ~EnrollAccountRequest() = default;
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
        EnrollAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnrollAccountResponseBody>(model1);
      }
    }
  }


  virtual ~EnrollAccountResponse() = default;
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
class GetEnrolledAccountResponseBodyInputs : public Darabonba::Model {
public:
  shared_ptr<string> accountNamePrefix{};
  shared_ptr<long> accountUid{};
  shared_ptr<vector<GetEnrolledAccountResponseBodyInputsBaselineItems>> baselineItems{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<long> payerAccountUid{};

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
        GetEnrolledAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnrolledAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnrolledAccountResponse() = default;
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
        ListEnrolledAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnrolledAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnrolledAccountsResponse() = default;
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
  EnrollAccountResponse enrollAccountWithOptions(shared_ptr<EnrollAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnrollAccountResponse enrollAccount(shared_ptr<EnrollAccountRequest> request);
  GetEnrolledAccountResponse getEnrolledAccountWithOptions(shared_ptr<GetEnrolledAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnrolledAccountResponse getEnrolledAccount(shared_ptr<GetEnrolledAccountRequest> request);
  ListEnrolledAccountsResponse listEnrolledAccountsWithOptions(shared_ptr<ListEnrolledAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnrolledAccountsResponse listEnrolledAccounts(shared_ptr<ListEnrolledAccountsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Governance20210120

#endif
